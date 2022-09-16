----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    07:28:46 08/08/2022 
-- Design Name: 
-- Module Name:    Profibus_Unit - Behavioral 
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

entity Profibus_Unit is
    Port ( clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           type_s : in  STD_LOGIC_VECTOR (7 downto 0);
           DA_s : in  STD_LOGIC_VECTOR (7 downto 0);
           SA_s : in  STD_LOGIC_VECTOR (7 downto 0);
           FC_s : in  STD_LOGIC_VECTOR (7 downto 0);
           LE_s : in  STD_LOGIC_VECTOR (7 downto 0);
           PDU_s : in  STD_LOGIC_VECTOR (7 downto 0);
           PDU_count_s : in  STD_LOGIC_VECTOR (7 downto 0);
           PDU_RAM_en_s : in  STD_LOGIC;
           send_telegram : in  STD_LOGIC;
           telegram_busy : out  STD_LOGIC;
           detect_r : out  STD_LOGIC;
           type_r : out  STD_LOGIC_VECTOR (7 downto 0);
           DA_r : out  STD_LOGIC_VECTOR (7 downto 0);
           SA_r : out  STD_LOGIC_VECTOR (7 downto 0);
           FC_r : out  STD_LOGIC_VECTOR (7 downto 0);
           LE_r : out  STD_LOGIC_VECTOR (7 downto 0);
           FCS_r : out  STD_LOGIC_VECTOR (7 downto 0);
           PDU_r : out  STD_LOGIC_VECTOR (7 downto 0);
           PDU_count_r : out  STD_LOGIC_VECTOR (7 downto 0);
           PDU_RAM_en_r : out  STD_LOGIC;
           RX : in  STD_LOGIC;
           TX : out  STD_LOGIC;
           Read_en : out  STD_LOGIC;
           Write_en : out  STD_LOGIC);
end Profibus_Unit;

architecture Behavioral of Profibus_Unit is
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
		idle_o : OUT std_logic;
		PDU_RAM_Enable : OUT std_logic
		);
	END COMPONENT;
COMPONENT Profibus_Transmitter
	PORT(
		send_Telegram : IN std_logic;
		type_i : IN std_logic_vector(7 downto 0);
		DA : IN std_logic_vector(7 downto 0);
		SA : IN std_logic_vector(7 downto 0);
		FC : IN std_logic_vector(7 downto 0);
		PDU_in : IN std_logic_vector(7 downto 0);
		PDU_count : IN std_logic_vector(7 downto 0);
		PDU_RAM_en : IN std_logic;
		LE_i : IN std_logic_vector(7 downto 0);
		tx_busy : IN std_logic;
		reset : IN std_logic;
		clk : IN std_logic;          
		telegram_busy : OUT std_logic;
		send : OUT std_logic;
		dataout : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;
COMPONENT Profibus_UART
	Port ( 
				Reciever_idle: in  STD_LOGIC;
				clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           datain : in  STD_LOGIC_VECTOR (7 downto 0);
           dataout : out  STD_LOGIC_VECTOR (7 downto 0);
           send : in  STD_LOGIC;
			  send_telegram : in STD_LOGIC;
           recieve : out  STD_LOGIC;
           RX : in  STD_LOGIC:='1';
           TX : out  STD_LOGIC;
           Read_en : out  STD_LOGIC;
			  tx_busy : out std_logic:='0';
           Write_en : out  STD_LOGIC);
	END COMPONENT;

	signal send_s:std_logic:='0';
	signal dataout_s:std_logic_vector(7 downto 0):=x"00";
	signal tx_busy_s:std_logic:='0';
	signal rs485detect_s:std_logic:='0';
	signal datain_s: std_logic_vector(7 downto 0):=x"00";
	signal idle_s:std_logic:='0';
	
begin
Inst_Profibus_Recieve: Profibus_Recieve PORT MAP(
		clk => clk,
		rs485detect => rs485detect_s,
		reset => reset,
		datain => datain_s,
		detect => detect_r,
		type_o => type_r,
		DA_o => DA_r,
		SA_o => SA_r,
		FC_o => FC_r,
		LE_o => LE_r,
		FCS_o => FCS_r,
		PDU_o => PDU_r,
		PDU_Count => PDU_Count_r,
		idle_o => idle_s,
		PDU_RAM_Enable => PDU_RAM_EN_r
	);
	Inst_Profibus_Transmitter: Profibus_Transmitter PORT MAP(
		send_Telegram => send_telegram,
		type_i => type_s,
		DA => DA_s,
		SA => SA_s,
		FC => FC_s,
		PDU_in => PDU_s,
		PDU_count => PDU_Count_s,
		PDU_RAM_en => PDU_RAM_en_s,
		LE_i => LE_s,
		tx_busy => tx_busy_s,
		reset => reset,
		clk => clk,
		telegram_busy => telegram_busy,
		send => send_s,
		dataout => dataout_s
	);
	Inst_Profibus_UART: Profibus_UART PORT MAP(
		Reciever_idle => idle_s,
		clk => clk,
		reset => reset,
		datain => dataout_s,
		dataout => datain_s,
		send_telegram => send_telegram,
		send => send_s,
		recieve => rs485detect_s,
		RX => RX,
		TX => TX,
		Read_en => Read_en,
		tx_busy => tx_busy_s,
		Write_en => Write_en
	);
	


end Behavioral;

