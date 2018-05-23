--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:11:07 05/22/2018
-- Design Name:   
-- Module Name:   Z:/WangRui/Programming/FPGA/pwm/pwm_testbench.vhd
-- Project Name:  pwm
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: pwm
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
 
ENTITY pwm_testbench IS
END pwm_testbench;
 
ARCHITECTURE behavior OF pwm_testbench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT pwm
    PORT(
         reset : IN  std_logic;
         clk : IN  std_logic;
         f1 : IN  std_logic;
         f2 : IN  std_logic;
         f3 : IN  std_logic;
         f4 : IN  std_logic;
         d1 : IN  std_logic;
         d2 : IN  std_logic;
         d3 : IN  std_logic;
         d4 : IN  std_logic;
         pwm_out : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal reset : std_logic := '0';
   signal clk : std_logic := '0';
   signal f1 : std_logic := '0';
   signal f2 : std_logic := '0';
   signal f3 : std_logic := '0';
   signal f4 : std_logic := '0';
   signal d1 : std_logic := '0';
   signal d2 : std_logic := '0';
   signal d3 : std_logic := '0';
   signal d4 : std_logic := '0';

 	--Outputs
   signal pwm_out : std_logic;

   -- Clock period definitions
   constant clk_period : time := 50 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: pwm PORT MAP (
          reset => reset,
          clk => clk,
          f1 => f1,
          f2 => f2,
          f3 => f3,
          f4 => f4,
          d1 => d1,
          d2 => d2,
          d3 => d3,
          d4 => d4,
          pwm_out => pwm_out
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
		reset <= '1';
      wait for 100 ns;	
		reset <= '0';
		f1 <= '0'; f2 <= '0'; f3 <= '0'; f4 <= '0';
		d1 <= '0'; d2 <= '0'; d3 <= '0'; d4 <= '1';
		wait for 200 ms;
		reset <= '1';
		wait for 100 ns;
		reset <= '0';
		f1 <= '0'; f2 <= '0'; f3 <= '0'; f4 <= '1';
		d1 <= '0'; d2 <= '1'; d3 <= '0'; d4 <= '1';

      -- insert stimulus here 

      wait;
   end process;

END;
