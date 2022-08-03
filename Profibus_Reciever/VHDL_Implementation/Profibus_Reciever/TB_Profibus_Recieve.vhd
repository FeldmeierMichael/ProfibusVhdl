--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   14:35:42 07/26/2022
-- Design Name:   
-- Module Name:   C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Profibus_Reciever/FSM_Reciever/VHDL_Implementation/Profibus_Reciever/TB_Profibus_Recieve.vhd
-- Project Name:  Profibus_Reciever
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Profibus_Recieve
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
 
ENTITY TB_Profibus_Recieve IS
END TB_Profibus_Recieve;
 
ARCHITECTURE behavior OF TB_Profibus_Recieve IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Profibus_Recieve
	PORT(
		clk : IN std_logic;
		rs485detect : IN std_logic;
		reset : IN std_logic;
		datain : IN std_logic_vector(7 downto 0);          
		detect : OUT std_logic;
		type_o : OUT std_logic_vector(7 downto 0);
		DA_o : OUT std_logic_vector(7 downto 0);
		SA_o : OUT std_logic_vector(7 downto 0);
		FC_o : OUT std_logic_vector(7 downto 0);
		LE_o : OUT std_logic_vector(7 downto 0);
		FCS_o : OUT std_logic_vector(7 downto 0);
		PDU_o : OUT std_logic_vector(7 downto 0);
		PDU_Count : OUT std_logic_vector(7 downto 0);
		PDU_RAM_Enable:out std_logic:='0'
		);
	END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rs485detect : std_logic := '0';
   signal reset : std_logic := '0';
   signal datain : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal type_o : std_logic_vector(7 downto 0);
   signal detect : std_logic;
   signal  DA_o: std_logic_vector(7 downto 0):=x"00";
	signal SA_o: std_logic_vector(7 downto 0):=x"00";
	signal FC_o: std_logic_vector(7 downto 0):=x"00";
	signal LE_o: std_logic_vector(7 downto 0):=x"00";
	signal FCS_o: std_logic_vector(7 downto 0):=x"00";
	signal PDU_o: std_logic_vector(7 downto 0):=x"00";
	signal PDU_Count: std_logic_vector(7 downto 0):=x"00";
	signal PDU_RAM_Enable:std_logic:='0';
	
	--Test Signals/Types
   type sd1array is array(0 to 5) of std_logic_vector(7 downto 0);
	type sd2array is array(0 to 10) of std_logic_vector(7 downto 0);
	type sd3array is array(0 to 13) of std_logic_vector(7 downto 0);
	type sd4array is array(0 to 2) of std_logic_vector(7 downto 0);
	type sd5array is array(0 to 0) of std_logic_vector(7 downto 0);

	
	signal sd1test: sd1array :=(x"10",x"01",x"02",x"02",x"05",x"16");
	signal sd2test: sd2array :=(x"68",x"05",not x"05",x"68",x"01",x"02",x"01",x"01",x"01",x"06",x"16");
	signal sd3test: sd3array :=(x"a2",x"01",x"02",x"01",x"01",x"01",x"01",x"01",x"01",x"01",x"01",x"01",x"0C",x"16");
	signal sd4test: sd4array :=(x"DC",x"01",x"02");
	signal sd5test: std_logic_vector(7 downto 0) :=x"e5";
	
	
   -- Clock period definitions
   constant clk_period : time := 100 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   Inst_Profibus_Recieve: Profibus_Recieve PORT MAP(
		clk => clk,
		rs485detect => rs485detect,
		reset => reset,
		datain => datain,
		detect => detect,
		type_o => type_o,
		DA_o => DA_o,
		SA_o => SA_o,
		FC_o => FC_o,
		LE_o => LE_o,
		FCS_o => FCS_o,
		PDU_o => PDU_o,
		PDU_Count => PDU_Count,
		PDU_RAM_Enable =>	PDU_RAM_Enable 

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
   SD1: process
   begin		
		--SD1 Testbench
      for k in 0 to 5   loop
			wait for 50 ns;
			rs485detect<='1';
			datain<=sd1test(k);
			wait for 50 ns;
			rs485detect<='0';
		end loop;
		--SD2 Testbench
		wait  for 100 ns;
		for k in 0 to 10   loop
			wait for 50 ns;
			rs485detect<='1';
			datain<=sd2test(k);
			wait for 50 ns;
			rs485detect<='0';
		end loop;
		--SD3 Testbench		
		wait for 100 ns;
		for k in 0 to 13   loop
			wait for 50 ns;
			rs485detect<='1';
			datain<=sd3test(k);
			wait for 50 ns;
			rs485detect<='0';
		end loop;
		--SD4 Testbench
		wait for 100ns;
		for k in 0 to 2   loop
			wait for 50 ns;
			rs485detect<='1';
			datain<=sd4test(k);
			wait for 50 ns;
			rs485detect<='0';
		end loop;
		--SD5 Telegram
		wait for 50 ns;
			rs485detect<='1';
			datain<=sd5test;
			wait for 50 ns;
			rs485detect<='0';
		wait for 500 ns;     
		assert false severity failure;
      wait;
   end process;

END;
