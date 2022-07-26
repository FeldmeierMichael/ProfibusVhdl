----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    12:28:51 07/26/2022 
-- Design Name: 
-- Module Name:    Profibus_Recieve - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Profibus_Recieve is
    Port ( clk : in  STD_LOGIC;
           rs485detect : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           datain : in  STD_LOGIC_VECTOR (7 downto 0);
           type_o : out  STD_LOGIC;
           detect : out  STD_LOGIC;
           dataout : out  STD_LOGIC_VECTOR (254 downto 0));
end Profibus_Recieve;
architecture Behavioral of Profibus_Recieve is
signal dataout_S: std_logic_vector(254 downto 0);
type state_t is(idle,sd1,da1,sa1,fc1,fcs1,sd2,le,ler,da2,sa2,fc2,pdu2,fcs2,sd3,da3,sa3,fcs3,pdu3,fcs3,sd4,da4,sc);
signal state:state_t:=idle;
signal timer:std_logic_unsigned(31 downto 0):=(others=>'0');
signal diff:std_logic_unsigned(31 downto 0):=x"FFFFFFFF";
begin
	process(clk,rs485detect)
	begin
		if rising_edge(clk) then
			timer<=timer+1;
		end if;
		if rising_edge(rs485detect) then
			case state is
				when idle=>
				when sd1=>
				when da1=>
				when sa1=>
				when fc1=>
				when fcs1=>
				when sd2=>
				when le=>
				when ler=>
				when da2=>
				when sa2=>
				when fc2=>
				when pdu2=>
				when fcs2=>
				when sd3=>
				when da3=>
				when sa3=>
				when fc3=>
				when pdu3=>
				when fcs3=>
				when sd4=>
				when da4=>
				when sc=>
			   when others=>
			end case;
		end if;
	end process;
end Behavioral;

