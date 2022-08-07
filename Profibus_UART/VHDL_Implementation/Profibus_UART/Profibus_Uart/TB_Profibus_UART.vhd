--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:54:36 08/07/2022
-- Design Name:   
-- Module Name:   C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Profibus_UART/TB_Profibus_UART.vhd
-- Project Name:  Profibus_UART
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Profibus_UART
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
 
ENTITY TB_Profibus_UART IS
END TB_Profibus_UART;
 
ARCHITECTURE behavior OF TB_Profibus_UART IS 
 
    COMPONENT Profibus_UART
    PORT(
         Reciever_idle : IN  std_logic;
         clk : IN  std_logic;
         reset : IN  std_logic;
         datain : IN  std_logic_vector(7 downto 0);
         dataout : OUT  std_logic_vector(7 downto 0);
         send : IN  std_logic;
         recieve : OUT  std_logic;
         RX : IN  std_logic;
         TX : OUT  std_logic;
         Read_en : OUT  std_logic;
			tx_busy : out std_logic;
         Write_en : OUT  std_logic
        );
    END COMPONENT;
    
   --UART
	type uart is array(0 to 10) of std_logic;
	signal uart1:uart:=('0','1','0','1','0','1','0','1','0','0','0');
	signal uart3:uart:=('0','1','1','1','1','0','0','0','0','0','0');
	signal uart2:std_logic_vector(7 downto 0):="10101010";
   --Inputs
	signal clk_uart:std_logic:='0';
   signal Reciever_idle : std_logic := '1';
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal datain : std_logic_vector(7 downto 0) := (others => '0');
   signal send : std_logic := '0';
   signal RX : std_logic := '1';

 	--Outputs
   signal dataout : std_logic_vector(7 downto 0);
   signal recieve : std_logic;
   signal TX : std_logic;
   signal Read_en : std_logic;
   signal Write_en : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Profibus_UART PORT MAP (
          Reciever_idle => Reciever_idle,
          clk => clk,
          reset => reset,
          datain => datain,
          dataout => dataout,
          send => send,
          recieve => recieve,
          RX => RX,
          TX => TX,
          Read_en => Read_en,
          Write_en => Write_en
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
	reset<='1';
	wait for 5000 ns;
	reset<='0';
	for i in 0 to 10 loop 
	wait for 52083 ns; 
	RX<=uart1(i);   
	end loop;
	RX<='1';	
   wait for 100000 ns;
	--wait;
	datain<=uart2;
	send<='1';
	 wait for 20*52083 ns;
	send<='0';
	for i in 0 to 10 loop 
	wait for 52083 ns; 
	RX<=uart3(i);   
	end loop;
	RX<='1';	
	wait for 100000 ns;
   
   assert false severity failure;
   end process;
	clk_process2 :process
   begin
		clk_uart <= '0';
		wait for 52083 ns/2;
		clk_uart <= '1';
		wait for 52083 ns/2;
   end process;
END;
