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
			  rx: in std_logic;
			  tx: out std_logic;
			  write_en:out std_logic;
			  read_en: out std_logic);
end Hardware_Test;

architecture Behavioral of Hardware_Test is
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
	signal telegram_busy,detect_r,PDU_RAM_en_r:std_logic;
	signal type_r,DA_r,SA_r,FC_r,LE_r,FCS_r,PDU_r,PDU_count_r:std_logic_vector(7 downto 0);
begin
	Inst_Profibus_Unit: Profibus_Unit PORT MAP(
		clk => clk,
		reset => reset,
		type_s => x"00",
		DA_s => x"01",
		SA_s => x"02",
		FC_s => x"03",
		LE_s => x"00",
		PDU_s => x"00",
		PDU_count_s => x"00",
		PDU_RAM_en_s => '0',
		send_telegram => '1',
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
		PDU_RAM_en_r => PDU_RAM_en_r,
		RX => rx,
		TX => tx,
		Read_en => read_en,
		Write_en => write_en
	);




end Behavioral;

