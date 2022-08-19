----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:25:52 08/06/2022 
-- Design Name: 
-- Module Name:    neg_flanke_puls - Behavioral 
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

entity neg_flanke_puls is
    Port (  clk:in std_logic;
				in_i : in  STD_LOGIC;
				reset : in STD_LOGIC;
           out_o : out  STD_LOGIC);
end neg_flanke_puls;

architecture Behavioral of neg_flanke_puls is
type state_t is (idle,detect);
signal state:state_t:=idle;
signal i_old:std_logic:='0';
begin
	process(clk,reset)
	begin
	if reset='1' then
		state<=idle;
		out_o<='0';
		i_old<='0';
	elsif rising_edge(clk) then	
		i_old<=in_i;
		case state is
		when	idle=>	out_o<='0'; if i_old='1' and in_i<='0' then state<=detect; out_o<='1'; end if;
		when	detect=> state<=idle; out_o<='0';
		when	others=>
		end case;	
	end if;
	end process;
end Behavioral;

