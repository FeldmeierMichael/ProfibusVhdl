----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:11:35 08/06/2022 
-- Design Name: 
-- Module Name:    Profibus_UART - Behavioral 
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

entity Profibus_UART is
    Port ( 
				Reciever_idle: in  STD_LOGIC;
				clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           datain : in  STD_LOGIC_VECTOR (7 downto 0);
           dataout : out  STD_LOGIC_VECTOR (7 downto 0);
           send : in  STD_LOGIC;
           recieve : out  STD_LOGIC;
           RX : in  STD_LOGIC;
           TX : out  STD_LOGIC;
           Read_en : out  STD_LOGIC;
			  tx_busy : out std_logic:='0';
           Write_en : out  STD_LOGIC);
end Profibus_UART;

architecture Behavioral of Profibus_UART is
signal rx_busy_s:std_logic;
signal tx_busy_s:std_logic;
COMPONENT Read_Write
	PORT(
		idle : IN std_logic;
		clk : IN std_logic;
		send : IN std_logic;
		tx_busy : IN std_logic;
		reset : IN std_logic;          
		Write_en : OUT std_logic;
		Read_en : OUT std_logic
		);
	END COMPONENT;

	
	COMPONENT uart
	  GENERIC(
    clk_freq  :  INTEGER    := 100_000_000;  --frequency of system clock in Hertz
    baud_rate :  INTEGER    := 19_200;      --data link baud rate in bits/second
    os_rate   :  INTEGER    := 16;          --oversampling rate to find center of receive bits (in samples per baud period)
    d_width   :  INTEGER    := 8;           --data bus width
    parity    :  INTEGER    := 1;           --0 for no parity, 1 for parity
    parity_eo :  STD_LOGIC  := '1');        --'0' for even, '1' for odd parity

	PORT(	   
		clk : IN std_logic;
		reset_n : IN std_logic;
		tx_ena : IN std_logic;
		tx_data : IN std_logic_vector(7 downto 0);
		rx : IN std_logic;          
		rx_busy : OUT std_logic;
		rx_error : OUT std_logic;
		rx_data : OUT std_logic_vector(7 downto 0);
		tx_busy : OUT std_logic;
		tx : OUT std_logic
		);
	END COMPONENT;
	
	COMPONENT neg_flanke_puls
	PORT(
		clk : IN std_logic;
		in_i : IN std_logic;
		reset : IN std_logic;          
		out_o : OUT std_logic
		);
	END COMPONENT;

	
begin
tx_busy<=tx_busy_s;
Inst_neg_flanke_puls: neg_flanke_puls PORT MAP(
		clk => clk,
		in_i => rx_busy_s,
		reset => reset,
		out_o => recieve 
	);

Inst_Read_Write: Read_Write PORT MAP(
		idle => Reciever_idle,
		clk => clk,
		send => send,
		tx_busy => tx_busy_s,
		reset => reset,
		Write_en => Write_en,
		Read_en =>  Read_en
	);


Inst_uart: uart GENERIC map(
    clk_freq =>  100_000_000,  --frequency of system clock in Hertz
    baud_rate => 19_200,      --data link baud rate in bits/second
    os_rate   => 16,          --oversampling rate to find center of receive bits (in samples per baud period)
    d_width   => 8,           --data bus width
    parity    => 1,           --0 for no parity, 1 for parity
    parity_eo => '0')
	 PORT MAP(
		clk => clk,
		reset_n => not reset,
		tx_ena => send,
		tx_data => datain,
		rx => rx,
		rx_busy => rx_busy_s,		
		rx_data => dataout,
		tx_busy => tx_busy_s,
		tx => tx
	);


end Behavioral;

