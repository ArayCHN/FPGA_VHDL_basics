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
entity blink_in_order is
  port(
    reset: in std_logic;
	 clk: in std_logic;
	 output_led: out std_logic := '0'; -- there can not be a semicolon here!!!
	 -- output_clock_1hz: out std_logic; --debug
  );
end blink_in_order;

architecture behavioral of blink_in_order is
  signal counter: natural range 0 to 8 := 0; -- 9 LEDs in total
  signal clk_1Hz: std_logic:= '0';
  signal led_state: std_logic := '0';
  constant clk_frequency : natural := 2;
  signal clk_count: natural:= 0;
  
begin

  clk_1_hz_generator: process(clk) is -- create 1 Hz clock
    -- constant clk_frequency : natural := 20000000;
	 -- signal count: natural; -- the counter for clock prescale
  begin
    if reset = '0' then
	   clk_count <= 0;
		clk_1Hz <= '0';
	 else
      if (rising_edge(clk)) then
        if (clk_count = clk_frequency / 2 - 1) then
          clk_1Hz <= not clk_1Hz;
          clk_count <= 0;
		  else
		    clk_count <= clk_count + 1;
        end if;
      end if;
	 end if;
  end process clk_1_hz_generator;
  
  --output_clock_1hz <= clk_1Hz; -- debug, show in simulator
  
  LED_blink: process(clk_1Hz) is
  begin
    if reset = '0' then
	   led_state <= '0';
	 else
      if (clk_1Hz'event and clk_1Hz = '1') then -- reached rising edge of 1Hz clock
        led_state <= not led_state; -- 0.5Hz LED
	   end if;
	 end if;
	 output_led <= led_state; --led_state;
  end process LED_blink;
end behavioral;
