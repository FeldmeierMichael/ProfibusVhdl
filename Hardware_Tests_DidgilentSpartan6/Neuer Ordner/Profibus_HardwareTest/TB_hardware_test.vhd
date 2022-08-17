--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:43:46 08/14/2022
-- Design Name:   
-- Module Name:   C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Hardware_Tests_DidgilentSpartan6/Neuer Ordner/Profibus_HardwareTest/TB_hardware_test.vhd
-- Project Name:  Profibus_HardwareTest
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
 
ENTITY TB_hardware_test IS
END TB_hardware_test;
 
ARCHITECTURE behavior OF TB_hardware_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Hardware_Test
  
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  in_B:in std_logic;
			  rx: in std_logic;
			  tx: out std_logic:='1';
			  write_en:out std_logic:='0';
			  read_en: out std_logic:='1';
			  tx_uart:out std_logic:='1';
			  test: out std_logic:='1'
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
	signal test :std_logic;
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
	
	clk_process2 :process
   begin
		rx<= '0';		
		wait for clk_period*100;
		rx <= '1';		
		wait for clk_period*100;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 1000 ms;
      assert false severity failure;
      -- insert stimulus here 
      wait;
   end process;
	end;

