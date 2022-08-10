----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:53:57 08/07/2022 
-- Design Name: 
-- Module Name:    Profibus_Transmitter - Behavioral 
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
use work.Profibus_Constants.all;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Profibus_Transmitter is
	 Generic (baud:IN integer:=19_200);
    Port ( send_Telegram : in  STD_LOGIC;
           type_i : in  STD_LOGIC_VECTOR (7 downto 0);
           DA : in  STD_LOGIC_VECTOR (7 downto 0);
           SA : in  STD_LOGIC_VECTOR (7 downto 0);
           FC : in  STD_LOGIC_VECTOR (7 downto 0);
           PDU_in : in  STD_LOGIC_VECTOR (7 downto 0);
           PDU_count : in  STD_LOGIC_VECTOR (7 downto 0);
           PDU_RAM_en : in  STD_LOGIC;
           LE_i : in  STD_LOGIC_VECTOR (7 downto 0);
           tx_busy : in  STD_LOGIC;
           reset : in  STD_LOGIC;
           clk : in  STD_LOGIC;
           telegram_busy : out  STD_LOGIC:='0';
           send : out  STD_LOGIC:='0';
           dataout : out  STD_LOGIC_VECTOR (7 downto 0):=x"00");
end Profibus_Transmitter;

architecture Behavioral of Profibus_Transmitter is
type state_t is(idle,sd1,da1,sa1,fc1,fcs1,sd2,le,ler,sd2_2,da2,sa2,fc2,pdu2,fcs2,sd3,da3,sa3,fc3,pdu3,fcs3,sd4,da4,sc);
signal state:state_t:=idle;

signal counter:unsigned(7 downto 0):=x"00";
signal le_s:std_logic_vector(7 downto 0):=x"00";
type PDU_RAM is array(0 to 255)of std_logic_vector(7 downto 0);
signal RAM1:PDU_RAM:=(others=>x"00");
signal tx_busy_old:std_logic:='0';
begin
	
	process(reset,clk)
	variable fcs:unsigned(7 downto 0):=x"00";
	variable tx_busy_flag:std_logic:='0';
	variable first_flag:std_logic:='1';
	
	begin
		if reset='1' then
			state<=idle;			
			counter<=x"00";			
			fcs:=x"00";
			first_flag:='1';	
			tx_busy_flag:='0';
		elsif	 rising_edge(clk) then
				tx_busy_old<=tx_busy;
				tx_busy_flag:='0';	
				if tx_busy='0' and tx_busy_old='1' then
				tx_busy_flag:='1';				
				end if;
				case state is
					when idle=> counter<=(others=>'0');
									fcs:=x"00";									
									telegram_busy<='0';
									send<='0';
									if (send_Telegram='1' and first_flag='1') or (send_Telegram='1' and tx_busy_flag='1')  then	
									telegram_busy<='1';
									first_flag:='0';
									send<='1';									
									if type_i=x"00" then
										state<=sd1;
										dataout<=sd1_c;										
									elsif type_i=x"01" then
										state<=sd2;		
										dataout<=sd2_c;										
									elsif type_i=x"02" then
										state<=sd3;
										dataout<=sd3_c;
									elsif type_i=x"03" then
										state<=sd4;	
										dataout<=sd4_c;
									elsif type_i=x"04" then
										state<=sc;
										dataout<=sc_c;
									else 
										send<='0';
									end if;										
									end if;
					when sd1 =>
									send<='0';
									if tx_busy_flag='1' then
										dataout<=DA;
										state<=da1;
										send<='1';
										fcs:=fcs+unsigned(DA);	
									end if;
					when da1 =>
									send<='0';
									if tx_busy_flag='1' then	
										dataout<=SA;
										state<=sa1;
										send<='1';	
										fcs:=fcs+unsigned(SA);	
									end if;
					when sa1 =>
									send<='0';
									if tx_busy_flag='1' then	
										dataout<=FC;								
										state<=fc1;
										send<='1';	
										fcs:=fcs+unsigned(FC);	
									end if;									
					when fc1 =>
									send<='0';
									if tx_busy_flag='1' then	
										dataout<=std_logic_vector(fcs);
										send<='1';							
										state<=fcs1;
									end if;
									
					when fcs1=>									
									send<='0';
									if tx_busy_flag='1' then	
										dataout<=x"16";
										send<='1';
										state<=idle;
									end if;
															
					when sd2 =>
									fcs:=(others=>'0');
									le_s<=LE_i;
									send<='0';
									if tx_busy_flag='1' then	
										dataout<=Le_i;
										send<='1';																
										state<=le;	
									end if;
					when le  =>
									send<='0';
									if tx_busy_flag='1' then	
										dataout<=not Le_i;
										send<='1';																
										state<=ler;	
									end if;
					when ler =>
									send<='0';
									if tx_busy_flag='1' then	
										dataout<=x"68";
										send<='1';																
										state<=sd2_2;	
									end if;
					when sd2_2=>
									
									send<='0';
									if tx_busy_flag='1' then	
										fcs:=fcs+unsigned(DA);
										dataout<=DA;
										send<='1';																
										state<=da2;	
									end if;
					when da2 =>
									
									send<='0';
									if tx_busy_flag='1' then	
										fcs:=fcs+unsigned(sa);
										dataout<=SA;
										send<='1';																
										state<=sa2;	
									end if;
					when sa2 =>
									
									send<='0';
									if tx_busy_flag='1' then	
										fcs:=fcs+unsigned(FC);
										dataout<=FC;
										send<='1';																
										state<=fc2;	
									end if;								
					when fc2 =>
																	
									send<='0';
									if tx_busy_flag='1' then	
										fcs:=fcs+unsigned(RAM1(to_integer(counter)));	
										counter<=counter+1;
										dataout<=RAM1(to_integer(counter));
										send<='1';																
										state<=pdu2;	
									end if;
									
					when pdu2=>
									send<='0';
									if tx_busy_flag='1' then	
										counter<=counter+1;										
										if counter< unsigned(le_s)-3 then
											send<='1';
											fcs:=fcs+unsigned(RAM1(to_integer(counter)));																				
											dataout<=RAM1(to_integer(counter));									
										else
											send<='1';
											state<=fcs2;		
											counter<=x"00";
											dataout<=std_logic_vector(fcs);
										end if;
									end if;
					when fcs2=>
									send<='0';
									if tx_busy_flag='1' then										
										dataout<=x"16";
										send<='1';																
										state<=idle;	
									end if;
					when sd3 => 
									send<='0';
									if tx_busy_flag='1' then		
										fcs:=fcs+unsigned(DA);
										dataout<=DA;
										send<='1';																
										state<=da3;	
									end if;
																		
					when da3 =>
									
									send<='0';
									if tx_busy_flag='1' then	
										fcs:=fcs+unsigned(SA);
										dataout<=SA;
										send<='1';																
										state<=sa3;	
									end if;
					when sa3 =>
									
									send<='0';
									if tx_busy_flag='1' then	
										fcs:=fcs+unsigned(FC);
										dataout<=FC;
										send<='1';																
										state<=fc3;	
									end if;								
					when fc3 => 
									
									send<='0';
									if tx_busy_flag='1' then	
										fcs:=fcs+unsigned(RAM1(to_integer(counter)));
										counter<=counter+1;
										dataout<=RAM1(to_integer(counter));
										send<='1';																
										state<=pdu3;	
									end if;								
					when pdu3=>
									send<='0';
									if tx_busy_flag='1' then									
										counter<=counter+1;									
										if counter< 8 then										
											send<='1';
											fcs:=fcs+unsigned(RAM1(to_integer(counter)));
											dataout<=RAM1(to_integer(counter));
										else 
											send<='1';
											state<=fcs3;		
											counter<=x"00";
											dataout<=std_logic_vector(fcs);
										end if;
									end if;
					when fcs3=>									
									counter<=(others=>'0');
									send<='0';
									if tx_busy_flag='1' then											
										dataout<=x"16";
										send<='1';																
										state<=idle;	
									end if;
					when sd4 =>
									send<='0';
									if tx_busy_flag='1' then											
										dataout<=DA;
										send<='1';																
										state<=da4;	
									end if;
					when da4 =>
									send<='0';
									if tx_busy_flag='1' then											
										dataout<=SA;
										send<='1';																
										state<=idle;	
									end if;
					when sc  => 
									send<='0';																									
									state<=idle;																	
					when others=>
				end case;						
			end if;
			end process;
	
	process(clk,reset)
	begin
		if reset='1' then
			RAM1<=(others=>x"00");
		elsif rising_edge(clk) then
			if PDU_RAM_en='1' then
				RAM1((to_integer(unsigned(PDU_count))))<=PDU_in;		
			end if;
		end if;	
	end process;
end Behavioral;

