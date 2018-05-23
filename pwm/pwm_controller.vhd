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
     pwm_out: out std_logic := '0' -- there can not be a semicolon here!!!
  );
end pwm;

architecture rtl of pwm is
  signal count: integer := 0; -- 9 LEDs in total
  signal clk_1Hz: std_logic:= '0';
  signal led_state: std_logic := '0';
  constant clk_frequency : integer := 20000000; -- is this value correct??
  signal clk_count: integer:= 0;
  signal duty, counter_reload, counter_high: integer:= 0;
  signal frequency: integer:=1; -- frequency is in denominator, cannot be 0
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
  
  pwm_generator: process(clk) is -- create 1 Hz clock
    -- constant clk_frequency : natural <= 20000000;
     -- signal count: natural; -- the counter for clock prescale
  begin
    if reset = '1' then
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

  display: process(clk) is
  begin
  
  end process display;
end rtl;
