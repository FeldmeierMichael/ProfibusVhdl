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
           detect: out std_logic:='0';
			  type_o: out std_logic_vector(7 downto 0):=x"00";
			  DA_o: out std_logic_vector(7 downto 0):=x"00";
			  SA_o: out std_logic_vector(7 downto 0):=x"00";
			  FC_o: out std_logic_vector(7 downto 0):=x"00";
			  LE_o: out std_logic_vector(7 downto 0):=x"00";
			  FCS_o:out std_logic_vector(7 downto 0):=x"00";
			  PDU_o:out std_logic_vector(7 downto 0):=x"00";
			  PDU_Count:out std_logic_vector(7 downto 0):=x"00";
			  idle_o:out std_logic:='1';
			  PDU_RAM_Enable:out std_logic:='0'
			  );
			  
end Profibus_Recieve;
architecture Behavioral of Profibus_Recieve is
type state_t is(idle,sd1,da1,sa1,fc1,fcs1,sd2,le,ler,sd2_2,da2,sa2,fc2,pdu2,fcs2,sd3,da3,sa3,fc3,pdu3,fcs3,sd4,da4,sc);
signal state:state_t:=idle;
signal timer: unsigned(31 downto 0):=(others=>'0');
signal counter:unsigned(7 downto 0):=x"00";
signal le_s:std_logic_vector(7 downto 0):=x"00";

begin
	
	process(rs485detect,reset,clk)
	variable fcs:unsigned(7 downto 0):=x"00";
	begin
		if reset='1' then
			state<=idle;			
			counter<=x"00";
			timer<=x"00000000";
			fcs:=x"00";		
			PDU_RAM_Enable<='0';	
			idle_o<='1';			
		elsif	 rising_edge(clk) then
				timer<=timer+1;
				if timer>= diff_c then
					state<=idle;
					idle_o<='1';
					if state= sc then
						detect<='1';
						type_o<=x"04";	
					end if;
				end if;
			if rs485detect='1' then						
				case state is
					when idle=> idle_o<='1';
									timer<=(others=>'0');									
									counter<=(others=>'0');								
									fcs:=x"00";
									if datain=sd1_c then
										state<=sd1;
										detect<='0';
										idle_o<='0';
									elsif datain=sd2_c then
										state<=sd2;
										detect<='0';
										idle_o<='0';
									elsif datain=sd3_c then
										state<=sd3;
										detect<='0';
										idle_o<='0';
									elsif datain=sd4_c then
										state<=sd4;
										detect<='0';
										idle_o<='0';
									elsif datain=sc_c then
										state<=sc;
										detect<='0';
										idle_o<='0';
									end if;
					when sd1 =>
									DA_o<=datain;									
									timer<=(others=>'0');								
									state<=da1;
									fcs:=fcs+unsigned(datain);	
					when da1 =>
									sa_o<=datain;
									timer<=(others=>'0');								
									state<=sa1;	
									fcs:=fcs+unsigned(datain);									
					when sa1 =>
									fc_o<=datain;
									timer<=(others=>'0');								
									state<=fc1;	
									fcs:=fcs+unsigned(datain);										
					when fc1 =>
									fcs_o<=datain;
									timer<=(others=>'0');								
									if datain=std_logic_vector(fcs) then
										state<=fcs1;
									else
										state<=idle;
									end if;
					when fcs1=>									
									timer<=(others=>'0');	
									state<=idle;	
									idle_o<='1';									
									if dataIn=ed_c then 
										detect<='1';
										type_o<=x"00";
									end if;								
					when sd2 =>
									fcs:=(others=>'0');
									le_s<=datain;
									LE_o<=datain;									
									timer<=(others=>'0');							
									state<=le;									
					when le  =>
									timer<=(others=>'0');
									if datain=not(le_s) then
										state<=ler;
									else
										state<=idle;
									end if;
					when ler =>
									timer<=(others=>'0');
									if datain=sd2_c then
										state<=sd2_2;
									else
										state<=idle;
									end if;
					when sd2_2=>
									fcs:=fcs+unsigned(datain);
									timer<=(others=>'0');
									da_o<=datain;
									state<=da2;
					when da2 =>
									fcs:=fcs+unsigned(datain);
									timer<=(others=>'0');
									sa_o<=datain;
									state<=sa2;
					when sa2 =>
									fcs:=fcs+unsigned(datain);
									timer<=(others=>'0');
									fc_o<=datain;
									state<=fc2;									
					when fc2 =>
									fcs:=fcs+unsigned(datain);
									timer<=(others=>'0');									
									pdu_o<=datain;									
									state<=pdu2;
									counter<=counter+1;
									PDU_Count<=std_logic_vector(counter);
									PDU_RAM_Enable<='1';
									
					when pdu2=>
									timer<=(others=>'0');
									counter<=counter+1;
									PDU_Count<=std_logic_vector(counter);
									--PDU_Count<=unsigned(counter)/8;
									if counter< unsigned(le_s)-3 then
										fcs:=fcs+unsigned(datain);
										fcs_o<=std_logic_vector(fcs);										
										pdu_o<=datain;									
									elsif datain=std_logic_vector(fcs)  then
										state<=fcs2;		
										counter<=x"00";
										PDU_RAM_Enable<='0';
									end if;
					when fcs2=>
									timer<=(others=>'0');
									counter<=(others=>'0');
									state<=idle;
									idle_o<='1';
									if dataIn=ed_c then 
										detect<='1';
										type_o<=x"01";										
									end if;
					when sd3 => 
									fcs:=fcs+unsigned(datain);
									DA_o<=datain;
									timer<=(others=>'0');
									state<=da3;									
					when da3 =>
									fcs:=fcs+unsigned(datain);
									SA_o<=datain;
									timer<=(others=>'0');
									state<=sa3;
					when sa3 =>
									fcs:=fcs+unsigned(datain);
									FC_o<=datain;
									timer<=(others=>'0');
									state<=fc3;									
					when fc3 => 
									fcs:=fcs+unsigned(datain);
									timer<=(others=>'0');									
									pdu_o<=datain;									
									state<=pdu3;
									counter<=counter+1;
									PDU_Count<=std_logic_vector(counter);
									PDU_RAM_Enable<='1';
									
					when pdu3=>
									timer<=(others=>'0');
									counter<=counter+1;
									PDU_Count<=std_logic_vector(counter);
									--PDU_Count<=unsigned(counter)/8;
									if counter< 8 then
										fcs:=fcs+unsigned(datain);
										fcs_o<=std_logic_vector(fcs);										
										pdu_o<=datain;									
									elsif datain=std_logic_vector(fcs)  then
										state<=fcs3;		
										counter<=x"00";
										PDU_RAM_Enable<='0';
									end if;
					when fcs3=>
									timer<=(others=>'0');
									counter<=(others=>'0');
									state<=idle;
									idle_o<='1';
									if dataIn=ed_c then 
										detect<='1';
										type_o<=x"02";										
									end if;
					when sd4 =>
									DA_o<=datain;
									timer<=(others=>'0');
									state<=da4;
									detect<='0';
					when da4 =>
									timer<=(others=>'0');
									detect<='1';
									idle_o<='1';
									type_o<=x"03";
									state<=idle;
					when sc  => 
									timer<=(others=>'0');
									detect<='1';
									idle_o<='1';
									type_o<=x"04";	
									state<=idle;									
					when others=>
				end case;
			end if;				
			end if;
			end process;
	

	
end Behavioral;

