--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:38:10 08/07/2022
-- Design Name:   
-- Module Name:   C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Profibus_UART/tb_neg_flanke_puls.vhd
-- Project Name:  Profibus_UART
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: neg_flanke_puls
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
 
ENTITY tb_neg_flanke_puls IS
END tb_neg_flanke_puls;
 
ARCHITECTURE behavior OF tb_neg_flanke_puls IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT neg_flanke_puls
    Port (  clk:in std_logic;
				in_i : in  STD_LOGIC;
				reset : in STD_LOGIC;
           out_o : out  STD_LOGIC);
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal in_i : std_logic := '0';
	signal reset :std_logic :='0';
 	--Outputs
   signal out_o : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: neg_flanke_puls PORT MAP (
          clk => clk,
          in_i => in_i,
			 reset =>reset,
          out_o => out_o
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
		in_i<='1';
      wait for 50 ns;	
		in_i<='0';
      wait for 50 ns;
		--assert false severity falure;
      -- insert stimulus here 

         end process;
			stim_proc2: process
   begin		
      -- hold reset state for 100 ns.
      wait for 300 ns;	
		reset<='1';
		wait for 50 ns;
		reset<='0';
		wait for 150 ns;
		assert false severity failure;

         end process;

END;
