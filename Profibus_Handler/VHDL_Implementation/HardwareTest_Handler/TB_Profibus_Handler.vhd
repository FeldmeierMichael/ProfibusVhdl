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
		send_telegram => send_telegram,
		telegram_busy => telegram_busy,
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
