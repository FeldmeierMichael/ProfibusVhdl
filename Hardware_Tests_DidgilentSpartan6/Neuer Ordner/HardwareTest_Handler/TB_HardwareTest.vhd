--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:55:26 08/19/2022
-- Design Name:   
-- Module Name:   C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Hardware_Tests_DidgilentSpartan6/Neuer Ordner/HardwareTest_Handler/TB_HardwareTest.vhd
-- Project Name:  HardwareTest_Handler
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Hardware_Test
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
 
ENTITY TB_HardwareTest IS
END TB_HardwareTest;
 
ARCHITECTURE behavior OF TB_HardwareTest IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Hardware_Test
    PORT(
         clk : IN  std_logic;
         reset : IN  std_logic;
         in_B : IN  std_logic;
         rx : IN  std_logic;
         tx : OUT  std_logic;
         write_en : OUT  std_logic;
         read_en : OUT  std_logic;
         tx_uart : OUT  std_logic;
         test : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal in_B : std_logic := '0';
   signal rx : std_logic := '0';

 	--Outputs
   signal tx : std_logic;
   signal write_en : std_logic;
   signal read_en : std_logic;
   signal tx_uart : std_logic;
   signal test : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Hardware_Test PORT MAP (
          clk => clk,
          reset => reset,
          in_B => in_B,
          rx => rx,
          tx => tx,
          write_en => write_en,
          read_en => read_en,
          tx_uart => tx_uart,
          test => test
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
  

END;
