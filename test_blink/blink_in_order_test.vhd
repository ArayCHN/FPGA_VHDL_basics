--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:50:51 05/22/2018
-- Design Name:   
-- Module Name:   Z:/WangRui/Programming/FPGA/test_blink/blink_in_order_test.vhd
-- Project Name:  test_blink
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: blink_in_order
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY blink_in_order_test IS
END blink_in_order_test;
 
ARCHITECTURE behavior OF blink_in_order_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT blink_in_order
    PORT(
         reset : IN  std_logic;
         clk : IN  std_logic;
         output_led : OUT  std_logic;
			output_clock_1hz: out std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal reset : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal output_led : std_logic;
	signal output_clock_1hz : std_logic;

   -- Clock period definitions
   constant clk_period : time := 50 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: blink_in_order PORT MAP (
          reset => reset,
          clk => clk,
          output_led => output_led,
			 output_clock_1hz => output_clock_1hz
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;
		reset <= not reset;
      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
