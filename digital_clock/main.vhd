library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.numeric_std.all;

-- clock is 20MHz!
entity digital_clock is
  port(
     reset: in std_logic;
     clk: in std_logic;
	  clock_2Hz: out std_logic;
	  pins: out std_logic_vector(0 to 7); -- digital display, a, b, c, d, e, f, g, dp
	  digs: out std_logic_vector(0 to 3) -- digit enable!
  );
end digital_clock;

architecture behavioral of digital_clock is
  -- signal count: integer range 0 to 10 := 0; -- 9 LEDs in total
  signal clock_2Hz_buffer: std_logic:= '1';
  constant clk_frequency : integer:= 20000000; -- 20M
  signal counter: integer range 0 to 20000000:= 0;
  signal tick, tmp: integer range 0 to 3600:= 0; -- one hour max
  signal minute, second: integer range 0 to 60:= 0;
  signal count_clk: integer range 0 to 4000000;
  signal count_display: integer range 0 to 4;
  signal dig1, dig2, dig3, dig4: integer range 0 to 10:= 0;
  
  procedure decoder (
    signal num  : in integer range 0 to 10;
	 signal pins : out std_logic_vector(0 to 7)
    ) is
  begin
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
  end decoder;
  
begin
  
  clock_1Hz_generator: process(clk, reset) is -- generate 1 Hz
  begin
    if reset = '0' then
	   counter <= 0;
		tick <= 0;
		clock_2Hz_buffer <= '1';
	 else
      if (rising_edge(clk)) then
		  if counter = 0 then
		    --clock_1Hz <= not clock_2Hz;
		  else
		    -- do nothing
		  end if;
		  if counter = 19999999 then
		    counter <= 0;
			 tick <= tick + 1;
			 clock_2Hz <= clock_2Hz_buffer;
			 clock_2Hz_buffer <= not clock_2Hz_buffer;
		  else
		    counter <= counter + 1;
		  end if;
		end if;
	 end if;
  end process clock_1Hz_generator;
  
  tmp <= tick / 60;
  second <= tick - (tmp * 60); -- last digit of duty
  dig2 <= second / 10;
  dig1 <= second - (dig2 * 10);
  minute <= tick / 60;
  dig4 <= minute / 10;
  dig3 <= minute - (dig4 * 10);
  
  display_turn : process(clk, reset) is -- four digits display in turn
  begin
    if reset = '0' then
	   count_clk <= 0;
	 else
      if (rising_edge(clk)) then
		  if count_clk = 39999 then
		    count_clk <= 0;
		  else
		    count_clk <= count_clk + 1;
		  end if;
		end if;
	 end if;
  end process;
  
  count_display <= count_clk / 10000; -- prescale, value can be 0, 1, 2, 3
  
  display: process(count_display, reset) is
  begin
    if reset = '0' then
		pins <= "00000000";
	 else
    	 case count_display is
		    when 0 => 
			   digs <= "1000"; -- the digits to be lit
				-- pins <= "11111111";
				decoder(dig4, pins);
			 when 1 => 
			   digs <= "0100";
				--pins <= "11111111";
			   decoder(dig3, pins);
			 when 2 => 
			   digs <= "0010";
				--pins <= "11111111";
				decoder(dig2, pins);
			 when 3 => 
			   digs <= "0001";
				--pins <= "11111111";
				decoder(dig1, pins);
			 when others =>
			   digs <= "0000";
		  end case;
	 end if; -- reset = '1'
  end process display;
  
end behavioral;
