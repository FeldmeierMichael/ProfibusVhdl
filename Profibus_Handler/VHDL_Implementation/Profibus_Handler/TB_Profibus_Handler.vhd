--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:33:25 08/17/2022
-- Design Name:   
-- Module Name:   C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Profibus_Handler/VHDL_Implementation/Profibus_Handler/TB_Profibus_Handler.vhd
-- Project Name:  Profibus_Handler
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Profibus_Handler
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
 
ENTITY TB_Profibus_Handler IS
END TB_Profibus_Handler;
 

ARCHITECTURE behavior OF TB_Profibus_Handler IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
    COMPONENT Profibus_Unit
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		type_s : IN std_logic_vector(7 downto 0);
		DA_s : IN std_logic_vector(7 downto 0);
		SA_s : IN std_logic_vector(7 downto 0);
		FC_s : IN std_logic_vector(7 downto 0);
		LE_s : IN std_logic_vector(7 downto 0);
		PDU_s : IN std_logic_vector(7 downto 0);
		PDU_count_s : IN std_logic_vector(7 downto 0);
		PDU_RAM_en_s : IN std_logic;
		send_telegram : IN std_logic;
		RX : IN std_logic;          
		telegram_busy : OUT std_logic;
		detect_r : OUT std_logic;
		type_r : OUT std_logic_vector(7 downto 0);
		DA_r : OUT std_logic_vector(7 downto 0);
		SA_r : OUT std_logic_vector(7 downto 0);
		FC_r : OUT std_logic_vector(7 downto 0);
		LE_r : OUT std_logic_vector(7 downto 0);
		FCS_r : OUT std_logic_vector(7 downto 0);
		PDU_r : OUT std_logic_vector(7 downto 0);
		PDU_count_r : OUT std_logic_vector(7 downto 0);
		PDU_RAM_en_r : OUT std_logic;
		TX : OUT std_logic;
		Read_en : OUT std_logic;
		Write_en : OUT std_logic
		);
	END COMPONENT;
    COMPONENT Profibus_Handler
    PORT(
         input_bus : IN  std_logic_vector(15 downto 0);
         output_bus : OUT  std_logic_vector(15 downto 0);
         clk : IN  std_logic;
         reset : IN  std_logic;
         type_s : OUT  std_logic_vector(7 downto 0);
         DA_s : OUT  std_logic_vector(7 downto 0);
         SA_s : OUT  std_logic_vector(7 downto 0);
         FC_s : OUT  std_logic_vector(7 downto 0);
         LE_s : OUT  std_logic_vector(7 downto 0);
         PDU_s : OUT  std_logic_vector(7 downto 0);
         PDU_count_s : OUT  std_logic_vector(7 downto 0);
         PDU_RAM_en_s : OUT  std_logic;
         send_telegram : OUT  std_logic;
         telegram_busy : IN  std_logic;
         detect_r : IN  std_logic;
         type_r : IN  std_logic_vector(7 downto 0);
         DA_r : IN  std_logic_vector(7 downto 0);
         SA_r : IN  std_logic_vector(7 downto 0);
         FC_r : IN  std_logic_vector(7 downto 0);
         LE_r : IN  std_logic_vector(7 downto 0);
         FCS_r : IN  std_logic_vector(7 downto 0);
         PDU_r : IN  std_logic_vector(7 downto 0);
         PDU_count_r : IN  std_logic_vector(7 downto 0);
         PDU_RAM_en_r : IN  std_logic
        );
    END COMPONENT;
    
	

	
	
	
   --Inputs
   signal input_bus : std_logic_vector(15 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal telegram_busy : std_logic := '0';
   signal detect_r : std_logic := '0';
   signal type_r : std_logic_vector(7 downto 0) := (others => '0');
   signal DA_r : std_logic_vector(7 downto 0) := (others => '0');
   signal SA_r : std_logic_vector(7 downto 0) := (others => '0');
   signal FC_r : std_logic_vector(7 downto 0) := (others => '0');
   signal LE_r : std_logic_vector(7 downto 0) := (others => '0');
   signal FCS_r : std_logic_vector(7 downto 0) := (others => '0');
   signal PDU_r : std_logic_vector(7 downto 0) := (others => '0');
   signal PDU_count_r : std_logic_vector(7 downto 0) := (others => '0');
   signal PDU_RAM_en_r : std_logic := '0';

 	--Outputs
   signal output_bus : std_logic_vector(15 downto 0);
   signal type_s : std_logic_vector(7 downto 0);
   signal DA_s : std_logic_vector(7 downto 0);
   signal SA_s : std_logic_vector(7 downto 0);
   signal FC_s : std_logic_vector(7 downto 0);
   signal LE_s : std_logic_vector(7 downto 0);
   signal PDU_s : std_logic_vector(7 downto 0);
   signal PDU_count_s : std_logic_vector(7 downto 0);
   signal PDU_RAM_en_s : std_logic;
   signal send_telegram : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
	signal rx,tx:std_logic:='1';
	signal write_en:std_logic:='0';
	
	 signal PDU_s2 :std_logic_vector(7 downto 0):=x"00";
		signal PDU_count_s2 :std_logic_vector(7 downto 0):=x"00";
		signal PDU_RAM_en_s2,send_s1,send_s2:std_logic:='0';
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Profibus_Handler PORT MAP (
          input_bus => input_bus,
          output_bus => output_bus,
          clk => clk,
          reset => reset,
          type_s => type_s,
          DA_s => DA_s,
          SA_s => SA_s,
          FC_s => FC_s,
          LE_s => LE_s,
          PDU_s => PDU_s,
          PDU_count_s => PDU_count_s,
          PDU_RAM_en_s => PDU_RAM_en_s,
          send_telegram => send_telegram,
          telegram_busy => telegram_busy,
          detect_r => detect_r,
          type_r => type_r,
          DA_r => DA_r,
          SA_r => SA_r,
          FC_r => FC_r,
          LE_r => LE_r,
          FCS_r => FCS_r,
          PDU_r => PDU_r,
          PDU_count_r => PDU_count_r,
          PDU_RAM_en_r => PDU_RAM_en_r
        );
		  
		Inst_Profibus_Unit: Profibus_Unit PORT MAP(
		clk => clk,
		reset => reset,
		type_s => type_s,
		DA_s => DA_s,
		SA_s => SA_s,
		FC_s => 		FC_s,
		LE_s => LE_s,
		PDU_s =>PDU_s ,
		PDU_count_s => PDU_count_s,
		PDU_RAM_en_s => PDU_RAM_en_s,
		send_telegram => '0',
		telegram_busy => 		telegram_busy,
		detect_r => detect_r,
		type_r => type_r,
		DA_r => DA_r ,
		SA_r => SA_r,
		FC_r => FC_r,
		LE_r => LE_r,
		FCS_r => FCS_r,
		PDU_r => PDU_r,
		PDU_count_r => PDU_count_r,
		PDU_RAM_en_r => PDU_RAM_en_r,
		RX => rx,
		TX=> tx,
		write_en=>write_en
			
	); 
	  
		Inst_Profibus_Unit2: Profibus_Unit PORT MAP(
		clk => clk,
		reset => reset,
		type_s => x"01",
		DA_s => x"82",
		SA_s => x"81",
		FC_s => x"08",
		LE_s => x"0B",
		PDU_s => PDU_s2,
		PDU_count_s => PDU_count_s2,
		PDU_RAM_en_s => PDU_RAM_en_s2,
		send_telegram => send_s1,		
		RX => '1',
		TX => rx		
	);

	
	
   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

  process
	begin
		PDU_RAM_en_s2<='1';
		PDU_count_s2<=x"00";
		PDU_s2<=x"3E";
		wait until rising_edge(clk);
		PDU_RAM_en_s2<='1';
		PDU_count_s2<=x"01";
		PDU_s2<=x"3C";
		wait until rising_edge(clk);
		PDU_RAM_en_s2<='1';
		PDU_count_s2<=x"02";
		PDU_s2<=x"02";
		wait until rising_edge(clk);
		PDU_RAM_en_s2<='1';
		PDU_count_s2<=x"03";
		PDU_s2<=x"05";
		wait until rising_edge(clk);
		PDU_RAM_en_s2<='1';
		PDU_count_s2<=x"04";
		PDU_s2<=x"00";
		wait until rising_edge(clk);
		PDU_RAM_en_s2<='1';
		PDU_count_s2<=x"05";
		PDU_s2<=x"FF";
		wait until rising_edge(clk);
		PDU_RAM_en_s2<='1';
		PDU_count_s2<=x"06";
		PDU_s2<=x"80";
		wait until rising_edge(clk);
		PDU_RAM_en_s2<='1';
		PDU_count_s2<=x"07";
		PDU_s2<=x"6A";
		wait until rising_edge(clk);		
		wait until rising_edge(clk);		
		wait until rising_edge(clk);
		PDU_RAM_en_s2<='0';
		wait for 20 ms ;
		assert false severity failure;
  end process;
  send_s1<='1' after 3 ms;
 -- send_s2<='1' after 0 ms,'0' after 3 ms;
END;
