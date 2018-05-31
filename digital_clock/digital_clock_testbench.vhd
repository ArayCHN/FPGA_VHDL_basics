--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:35:57 05/31/2018
-- Design Name:   
-- Module Name:   Z:/WangRui/Programming/FPGA/digital_clock/digital_clock_testbench.vhd
-- Project Name:  digital_clock
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: digital_clock
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
 
ENTITY digital_clock_testbench IS
END digital_clock_testbench;
 
ARCHITECTURE behavior OF digital_clock_testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT digital_clock
    PORT(
         reset : IN  std_logic;
         clk : IN  std_logic;
         pins : OUT  std_logic_vector(0 to 7);
         digs : OUT  std_logic_vector(0 to 3)
        );
    END COMPONENT;
    

   --Inputs
   signal reset : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal pins : std_logic_vector(0 to 7);
   signal digs : std_logic_vector(0 to 3);

   -- Clock period definitions
   constant clk_period : time := 50 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: digital_clock PORT MAP (
          reset => reset,
          clk => clk,
          pins => pins,
          digs => digs
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
	   reset <= '0';
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		reset <= '1';

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
