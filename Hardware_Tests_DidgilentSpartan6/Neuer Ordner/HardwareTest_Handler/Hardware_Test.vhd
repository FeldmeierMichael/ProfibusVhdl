----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:42:01 08/11/2022 
-- Design Name: 
-- Module Name:    Hardware_Test - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Hardware_Test is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  in_B:in std_logic;
			  rx: in std_logic:='1';
			  tx: out std_logic:='1';
			  write_en:out std_logic:='0';
			  read_en: out std_logic:='1';
			  tx_uart:out std_logic:='1';
			  test: out std_logic:='1'
			  );
end Hardware_Test;

architecture Behavioral of Hardware_Test is

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
    COMPONENT UART_TX_CTRL
	PORT(
		SEND : IN std_logic;
		DATA : IN std_logic_vector(7 downto 0);
		CLK : IN std_logic;          
		READY : OUT std_logic;
		UART_TX : OUT std_logic
		);
	END COMPONENT;

	
   --Inputs
   signal input_bus : std_logic_vector(15 downto 0) := (others => '0');
  -- signal clk : std_logic := '0';
  -- signal reset : std_logic := '0';
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
	signal send_s:std_logic:='0';
   -- Clock period definitions
   --constant clk_period : time := 10 ns;
	--signal rx,tx:std_logic:='1';
	--signal write_en:std_logic:='0';
	
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
		Inst_UART_TX_CTRL: UART_TX_CTRL PORT MAP(
		SEND => send_s,
		DATA => output_bus(15 downto 8),
		CLK => clk,		
		UART_TX => tx_uart
	);
	
--	process(clk,reset)
--		variable c:integer:=0;
--		begin
--		if reset='1' then
--		c:=0;
--		elsif rising_edge(clk) then
--			if(c>10000000) then
--				send_s<='1';
--				c:=0;
--			else
--				send_s<='0';		
--				c:=c+1;
--			end if;
--		end if;
--	end process;


end Behavioral;

