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
     --f1, f2, f3, f4: in std_logic; -- first 4 bits, for pwm frequency
     --d1, d2, d3, d4: in std_logic; -- last 4 bits, for pwm duty cycle
     --pwm_out: out std_logic := '0'; -- there can not be a semicolon here!!!
	  pins: out std_logic_vector(0 to 7); -- digital display, a, b, c, d, e, f, g, dp
	  digs: out std_logic_vector(0 to 7) -- digit enable!
  );
end pwm;

architecture behavioral of pwm is
  -- signal count: integer range 0 to 10 := 0; -- 9 LEDs in total
  signal clk_1Hz: std_logic:= '0';
  signal led_state: std_logic:= '0';
  constant clk_frequency : integer:= 20000000; -- is this value correct??
  signal count, counter_reload, counter_high, count_clk: integer range 0 to 1000000:= 0;
  signal duty, count_display: integer range 0 to 10:= 0;
  signal frequency: integer range 0 to 4000:=1; -- frequency is in denominator, cannot be 0
  signal duty_0, duty_1, duty_2, duty_3, freq_0, freq_1, freq_2, freq_3: integer range 0 to 10:= 0;
  
begin  
  counter_reload <= clk_frequency / frequency; -- the total counts for each cycle
  counter_high <= counter_reload * duty / 10; -- the counts for high level
  
  duty_0 <= 0;
  duty_1 <= 0;
  duty_2 <= 3;
  duty_3 <= 8;
  freq_0 <= 0;
  freq_1 <= 0;
  freq_2 <= 1;
  freq_3 <= 1;

  process(clk, reset) is
  begin
    if reset = '0' then
	   count_clk <= 0;
	 else
      if (rising_edge(clk)) then
		  if count_clk = 799999 then
		    count_clk <= 0;
		  else
		    count_clk <= count_clk + 1;
		  end if;
		 end if;
	 end if;
  end process;
  
  count_display <= count_clk / 100000; -- prescale
  
  display: process(count_display, reset) is
  begin
    --if reset = '1' then
		--pins <= "00000000";
		--digs <= "00000000";
	 --else
	   --digs <= "11111111"; -- duty last digit
		--pins <= "11111111";
	 --end if; -- reset = '1'
  end process display;
  digs <= "11111111"; -- duty last digit
  pins <= "11111111";
end behavioral;
