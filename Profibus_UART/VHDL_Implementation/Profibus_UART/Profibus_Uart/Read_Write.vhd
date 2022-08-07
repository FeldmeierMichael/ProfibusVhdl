----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:47:32 08/07/2022 
-- Design Name: 
-- Module Name:    Read_Write - Behavioral 
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

entity Read_Write is
    Port ( idle : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           send : in  STD_LOGIC;
           tx_busy : in  STD_LOGIC;
			  reset: in STD_LOGIC;
           Write_en : out  STD_LOGIC:='0';
           Read_en : out  STD_LOGIC:='1');
end Read_Write;

architecture Behavioral of Read_Write is
type state_t is(read_T,write_T);
signal state:state_t:=read_T;
signal tx_busy_old:std_logic:='0';
begin
	process(reset,clk)
	begin
		if reset='1' then
			Write_en<='0';
			Read_en<='1';
		elsif rising_edge(clk) then	
			tx_busy_old<=tx_busy;
			case state is 
				when read_T=>	if idle='1' and send='1' then state<=write_t; Write_en<='1';Read_en<='0'; end if;
				when write_T=>	if tx_busy='0' and tx_busy_old='1' then state<=read_T;Write_en<='0';Read_en<='1'; end if;	
				when others=>
			end case;
			
		end if;
	
	end process;


end Behavioral;

