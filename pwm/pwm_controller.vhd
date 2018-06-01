----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:45:39 05/21/2018 
-- Design Name: 
-- Module Name:    test_blink - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

-- clock is 20MHz!
entity pwm is
  port(
     reset: in std_logic;
     clk: in std_logic;
     f1, f2, f3, f4: in std_logic; -- first 4 bits, for pwm frequency
     d1, d2, d3, d4: in std_logic; -- last 4 bits, for pwm duty cycle
     pwm_out: out std_logic := '0'; -- there can not be a semicolon here!!!
     pins: out std_logic_vector(0 to 7); -- digital display, a, b, c, d, e, f, g, dp
     digs: out std_logic_vector(0 to 7) -- digit enable!
  );
end pwm;

architecture behavioral of pwm is
  -- signal count: integer range 0 to 10 := 0; -- 9 LEDs in total
  signal clk_1Hz: std_logic:= '0';
  signal led_state: std_logic:= '0';
  constant clk_frequency : integer range 0 to 100000000:= 20000000; -- is this value correct??
  signal count, count_clk: integer range 0 to 10000000:= 0;
  signal counter_reload, counter_high: integer range 0 to 1000000;
  signal duty, count_display: integer range 0 to 10:= 0;
  signal frequency: integer range 0 to 4000:=1; -- frequency is in denominator, cannot be 0
  signal duty_0, duty_1, duty_2, duty_3, freq_0, freq_1, freq_2, freq_3: integer range 0 to 10:= 0;
  
  procedure decoder (
    signal num  : in integer range 0 to 10;
     signal pins : out std_logic_vector(0 to 7);
	  count_display : in integer range 0 to 10
    ) is
  begin
     if count_display /= 3 then -- no decimal point!
       case num is
        when 0 => pins <= "11111100";
        when 1 => pins <= "01100000";
        when 2 => pins <= "11011010";
        when 3 => pins <= "11110010";
        when 4 => pins <= "01100110";
        when 5 => pins <= "10110110";
        when 6 => pins <= "10111110";
        when 7 => pins <= "11100000";
        when 8 => pins <= "11111110";
        when 9 => pins <= "11110110";
        when others => pins <= "00000000";
        end case;
     else
       case num is
        when 0 => pins <= "11111101";
        when 1 => pins <= "01100001";
        when 2 => pins <= "11011011";
        when 3 => pins <= "11110011";
        when 4 => pins <= "01100111";
        when 5 => pins <= "10110111";
        when 6 => pins <= "10111111";
        when 7 => pins <= "11100001";
        when 8 => pins <= "11111111";
        when 9 => pins <= "11110111";
        when others => pins <= "00000000";
        end case;
     end if;
  end decoder;
  
begin

  process(f1, f2, f3, f4) -- assign value to frequency based on f1..f4
  begin
    if f1 = '0' then
       if f2 = '0' then
          if f3 = '0' then
            if f4 = '0' then -- 0000
               frequency <= 100;
             else -- 0001
               frequency <= 200;
             end if;
          else if f4 = '0' then -- 0010
                 frequency <= 300;
                 else -- 0011
                   frequency <= 400;
                 end if;
          end if;
        else
          if f3 = '0' then
            if f4 = '0' then -- 0100
               frequency <= 500;
             else -- 0101
               frequency <= 600;
             end if;
          else if f4 = '0' then -- 0110
                 frequency <= 700;
                 else -- 0111
                   frequency <= 800;
                 end if;
          end if;
        end if;
     else -- 1***
       if f2 = '0' then -- 10**
          if f3 = '0' then -- 100*
            if f4 = '0' then -- 1000
               frequency <= 900;
             else -- 1001
               frequency <= 1000;
             end if;
          else if f4 = '0' then -- 1010
                 frequency <= 1500;
                 else -- 1011
                   frequency <= 2000;
                 end if;
          end if;
        else
          if f3 = '0' then -- 110*
            if f4 = '0' then -- 1100
               frequency <= 2500;
             else -- 1101
               frequency <= 3000;
             end if;
          else if f4 = '0' then -- 1110
                 frequency <= 3500;
                 else -- 1111
                   frequency <= 4000;
                 end if;
          end if;
        end if;
     end if;
  end process;

  process(d1, d2, d3, d4) -- assign duty cycle percent to duty based on d1..d4
  begin
     if d1 = '0' then -- 0***
       if d2 = '0' then -- 00**
          if d3 = '0' then -- 000*
            if d4 = '0' then -- 0000
               duty <= 0; -- 0 out of 10
             else -- 0001
               duty <= 1;
             end if;
          else if d4 = '0' then -- 0010
                 duty <= 2;
                 else -- 0011
                   duty <= 3;
                 end if;
          end if;
        else
          if d3 = '0' then -- 010*
            if d4 = '0' then -- 0100
               duty <= 4;
             else -- 0101
               duty <= 5;
             end if;
          else if d4 = '0' then -- 0110
                 duty <= 6;
                 else -- 0111
                   duty <= 7;
                 end if;
          end if;
        end if;
     else -- 1***
       if d2 = '0' then -- 10**
          if d3 = '0' then -- 100*
            if d4 = '0' then -- 1000
               duty <= 8;
             else -- 1001
               duty <= 9;
             end if;
          else if d4 = '0' then -- 1010
                 duty <= 10;
                 else -- 1011
                   duty <= 0; -- default
                 end if;
          end if;
        else
          if d3 = '0' then -- 110*
            if d4 = '0' then -- 1100
               duty <= 0;
             else -- 1101
               duty <= 0;
             end if;
          else if d4 = '0' then -- 1110
                 duty <= 0;
                 else -- 1111, or others
                   duty <= 0;
                 end if;
          end if;
        end if;
     end if;
  end process;
  
  counter_reload <= clk_frequency / frequency; -- the total counts for each cycle
  counter_high <= counter_reload * duty / 10; -- the counts for high level
  
  pwm_generator: process(clk, reset) is -- create 1 Hz clock
    -- constant clk_frequency : natural <= 20000000;
     -- signal count: natural; -- the counter for clock prescale
  begin
    if reset = '0' then
       count <= 0;
       pwm_out <= '0';
     else
      if (rising_edge(clk)) then
        if (count = counter_high - 1) then -- only exception: when counter_high == 0, never satisfies this condition
            if (count = counter_reload - 1) then
               count <= 0;
                    if counter_high /= 0 then
                      pwm_out <= '1';
                    else
                      pwm_out <= '0';
                    end if;
             else
               count <= count + 1;
               pwm_out <= '0';
             end if;
          else -- not counter high, or counter_high == 0
            if (count = counter_reload - 1) then -- counter reload reached, change pwm to high
               count <= 0;
                    if counter_high /= 0 then
                      pwm_out <= '1';
                    else
                      pwm_out <= '0';
                    end if;
             else -- not counter_high or counter_reload, do not change pwm level
               count <= count + 1;  
             end if; -- if counter_reload
        end if; --  if counter_high
      end if; -- if rising_edge
     end if; -- if reset
  end process pwm_generator;
  
  duty_0 <= 0;
  duty_1 <= 0;
  duty_2 <= duty mod 10; -- last digit of duty
  duty_3 <= duty / 10;
  freq_0 <= 0;
  freq_1 <= 0;
  freq_2 <= (frequency / 100) mod 10;
  freq_3 <= frequency / 1000;

  process(clk, reset) is
  begin
    if reset = '0' then
       count_clk <= 0;
     else
      if (rising_edge(clk)) then
          if count_clk = 79999 then
            count_clk <= 0;
          else
            count_clk <= count_clk + 1;
          end if;
         end if;
     end if;
  end process;
  
  count_display <= count_clk / 10000; -- prescale
  
  display: process(count_display, reset) is
  begin
    if reset = '0' then
        pins <= "00000000";
        digs <= "00000000";
     else
          case count_display is
            when 0 => 
               digs <= "10000000"; -- duty last digit
                decoder(duty_0, pins, count_display);
             when 1 => 
               digs <= "01000000";
               decoder(duty_1, pins, count_display);
             when 2 => 
               digs <= "00100000";
                decoder(duty_2, pins, count_display);
             when 3 => 
                digs <= "00010000";
                decoder(duty_3, pins, count_display); --REMEMBER to add decimal pt!!
             when 4 => 
               digs <= "00001000"; -- frequency last digit
                decoder(freq_0, pins, count_display);
             when 5 => 
               digs <= "00000100";
                decoder(freq_1, pins, count_display);
             when 6 => 
               digs <= "00000010";
                decoder(freq_2, pins, count_display);
             when 7 => 
               digs <= "00000001";
                decoder(freq_3, pins, count_display);
             when others =>
               digs <= "00000000";
          end case;
     end if; -- reset = '1'
  end process display;
end behavioral;
