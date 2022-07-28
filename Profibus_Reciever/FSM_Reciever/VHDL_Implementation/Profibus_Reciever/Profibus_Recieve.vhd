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
use IEEE.NUMERIC_STD.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values

library work;
use work.Profibus_Constants.all;


-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Profibus_Recieve is
    Port ( clk : in  STD_LOGIC:='0';
           rs485detect : in  STD_LOGIC:='0';
           reset : in  STD_LOGIC:='0';
           datain : in  STD_LOGIC_VECTOR (7 downto 0);
           type_o : out  STD_LOGIC_Vector(7 downto 0):=(others=>'0');
           detect : out  STD_LOGIC:='0';
           dataout : out  data_buffer:=(others=>x"00"));
			  
end Profibus_Recieve;
architecture Behavioral of Profibus_Recieve is
type state_t is(idle,sd1,da1,sa1,fc1,fcs1,sd2,le,ler,sd2_2,da2,sa2,fc2,pdu2,fcs2,sd3,da3,sa3,fc3,pdu3,fcs3,sd4,da4,sc);
signal state:state_t:=idle;
signal timer: unsigned(31 downto 0):=(others=>'0');
signal counter:unsigned(7 downto 0):=x"00";
begin
--	process(clk,reset)
--	variable fcs:unsigned(7 downto 0):=x"00";
--	begin
--		if reset='1' then
--					
--		elsif rising_edge(clk) then
--			timer<=timer+1;		
--		end if;
--	end process;
	
	process(rs485detect,reset,clk)
	variable fcs:unsigned(7 downto 0):=x"00";
	begin
		if reset='1' then
			state<=idle;			
			counter<=x"00";
			timer<=x"00000000";
			fcs:=x"00";			
			dataout<=(others=>x"00");
		elsif	 rising_edge(clk) then
				timer<=timer+1;
			if rs485detect='1' then
			if timer>= diff_c then
				state<=idle;
			else				
				case state is
					when idle=> 
									timer<=(others=>'0');									
									counter<=(others=>'0');									
									dataout(0)<=datain;
									fcs:=x"00";
									if datain=sd1_c then
										state<=sd1;
									end if;
					when sd1 =>
									dataout(1)<=datain;									
									timer<=(others=>'0');								
									detect<='0';
									state<=da1;
									fcs:=fcs+unsigned(datain);	
					when da1 =>
									dataout(2)<=datain;
									timer<=(others=>'0');								
									state<=sa1;	
									fcs:=fcs+unsigned(datain);									
					when sa1 =>
									dataout(3)<=datain;
									timer<=(others=>'0');								
									state<=fc1;	
									fcs:=fcs+unsigned(datain);										
					when fc1 =>
									dataout(4)<=datain;
									timer<=(others=>'0');								
									if datain=std_logic_vector(fcs) then
										state<=fcs1;
									else
										state<=idle;
									end if;
					when fcs1=>
									dataout(5)<=datain;
									timer<=(others=>'0');	
									state<=idle;									
									if dataIn=ed_c then 
										detect<='1';
										type_o<=x"00";
									end if;								
					when sd2 =>
					when le  =>
					when ler =>
					when sd2_2=>
					when da2 =>
					when sa2 =>
					when fc2 =>
					when pdu2=>
					when fcs2=>
					when sd3 =>
					when da3 =>
					when sa3 =>
					when fc3 =>
					when pdu3=>
					when fcs3=>
					when sd4 =>
					when da4 =>
					when sc  =>
					when others=>
				end case;
			end if;				
			end if;
		end if;
	end process;
	

	
end Behavioral;

