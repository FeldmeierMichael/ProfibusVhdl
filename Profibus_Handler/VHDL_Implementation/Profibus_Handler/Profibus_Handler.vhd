----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:24:08 08/16/2022 
-- Design Name: 
-- Module Name:    Profibus_Handler - Behavioral 
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

entity Profibus_Handler is
	 generic(baud_rate: in integer:=19_200;
				master_adress: in std_logic_vector(7 downto 0):=x"02";
				max_Tdsr: in integer:=850;
				slave_adress: in std_logic_vector(7 downto 0):=x"01";
				slave_PDU_size_in: in integer:=16;
				slave_PDU_size_out: in integer:=16);
    Port ( input_bus : in  STD_LOGIC_VECTOR (slave_PDU_size_in-1 downto 0);
           output_bus : out  STD_LOGIC_VECTOR (slave_PDU_size_out-1 downto 0):=(others=>'0');
           clk : in  STD_LOGIC;
           reset : in  STD_LOGIC;
			  type_s : out  STD_LOGIC_VECTOR (7 downto 0):=(x"00");
           DA_s : out  STD_LOGIC_VECTOR (7 downto 0):=(x"00");
           SA_s : out  STD_LOGIC_VECTOR (7 downto 0):=(x"00");
           FC_s : out  STD_LOGIC_VECTOR (7 downto 0):=(x"00");
           LE_s : out  STD_LOGIC_VECTOR (7 downto 0):=(x"00");
           PDU_s :out  STD_LOGIC_VECTOR (7 downto 0):=(x"00");
           PDU_count_s : out STD_LOGIC_VECTOR (7 downto 0):=(x"00");
           PDU_RAM_en_s : out  STD_LOGIC:='1';
           send_telegram :out  STD_LOGIC:='0';
           telegram_busy : in  STD_LOGIC;
           detect_r : in  STD_LOGIC;
           type_r : in  STD_LOGIC_VECTOR (7 downto 0);
           DA_r : in  STD_LOGIC_VECTOR (7 downto 0);
           SA_r : in  STD_LOGIC_VECTOR (7 downto 0);
           FC_r : in  STD_LOGIC_VECTOR (7 downto 0);
           LE_r : in  STD_LOGIC_VECTOR (7 downto 0);
           FCS_r : in  STD_LOGIC_VECTOR (7 downto 0);
           PDU_r : in  STD_LOGIC_VECTOR (7 downto 0);
           PDU_count_r : in  STD_LOGIC_VECTOR (7 downto 0);
           PDU_RAM_en_r : in  STD_LOGIC);
end Profibus_Handler;

architecture Behavioral of Profibus_Handler is
type state_t is (idle,is_0,is_1,is_2,diag_0,diag_1,diag,param_0,param_1,param,conf_0,conf_1,conf,dxchgs_0,dxchgs_1,dxchgs,dxchgr_0,dxchgr);
type RAM_in is array(0 to 255) of std_logic_vector(7 downto 0);
type RAM_out is array(0 to 255) of std_logic_vector(7 downto 0);
signal RAMin:RAM_in:=(others=>x"00");
signal RAMout:RAM_out:=(others=>x"00");
signal state:state_t:=idle;
signal detect_old:std_logic:='0';
signal statereq:std_logic_vector(1 downto 0):="00";
signal waiter:integer:=0;
begin
	RAM_in_p:Process(clk,reset)
	variable counter:integer range 0 to 255:=0;
	begin
	if reset='1' then
		--RAMin<=(others=>x"00");
		counter:=0;
	elsif rising_edge(clk) then	
		for i in 0 to slave_PDU_size_in-1 loop
        --RAMin(i/8)(i mod 8)<= input_bus(i);   
      end loop;
		--if counter<slave_PDU_size_in/8 then
		if counter<255 then	
			PDU_s<=RAMin(counter);
			PDU_count_s<=std_logic_vector(to_unsigned(counter,8));
			counter:=counter+1;
		else
			counter:=0;
		end if;		
	end if;	
	end process;
	
	RAM_out_p:Process(clk,reset)
	variable counter:integer range 0 to slave_PDU_size_out/8:=0;
	begin
	if reset='1' then
		RAMout<=(others=>x"00");
		counter:=0;
	elsif rising_edge(clk) then
		for i in 0 to slave_PDU_size_in-1 loop
        output_bus(i)<=RAMout(i/8)(i mod 8);   
      end loop;
			if PDU_RAM_en_r='1' then
				RAMout(to_integer(unsigned(PDU_count_r)))<=PDU_r;					
		end if;
	end if;	
	end process;	
	
	--FSM Process	
	FSM_process:process(clk,reset)
	variable timer:integer:=0;
	variable timeout:std_logic:='0';
	variable rising_detect:std_logic:='0';
	begin
		if reset='1' then
			state<=idle;
			timer:=0;
			detect_old<='0';
		elsif rising_edge(clk) then	
			--timeout flag
			if(timer>(max_Tdsr*5209)) then
				timeout:='1';
			else
				timer:=timer+1;
			end if;
			--ring_edge(detect_r) flag
			if detect_old='0' and detect_r='1' then
				rising_detect:='1';
			else
				rising_detect:='0';
			end if;			
			detect_old<=detect_r;
			case state is
				when idle    =>--send SearchSlave Telegram
									timer:=0;
									type_s<=x"00";
									DA_S<=slave_adress;
									SA_S<=master_adress;
									FC_s<=x"49";
									send_telegram<='1';
									if telegram_busy='1' then
										state<=is_0;
									end if;
				when is_0    =>
									send_telegram<='0';
									if telegram_busy='0' then
										state<=is_1;
										timer:=0;
									end if;
				when is_1    =>
									
									if rising_detect='1' then
										if FC_r=x"00" and DA_r=master_adress and SA_r=slave_adress then
											state<=is_2;
										else
											state<=idle;
										end if;
									elsif timeout='1' then
										state<=idle;										
									end if;									
				when is_2    =>--send Diagnostic Request
									timer:=0;
									type_s<=x"01";
									DA_S<="1000"&slave_adress(3 downto 0);
									SA_S<="1000"&master_adress(3 downto 0);
									FC_s<=x"6d";
									statereq<="01";
									LE_s<=x"05";
									send_telegram<='1';
									RAMin(0)<=x"3C";
									RAMin(1)<=x"3E";
									if telegram_busy='1' then
										state<=diag_0;
									end if;									
				when diag_0  =>
									send_telegram<='0';
									if telegram_busy='0' then
										state<=diag_1;
										timer:=0;
									end if;
				when diag_1  =>
									if rising_detect='1' then
										if  LE_r=x"0B" and DA_r=x"82" and SA_r=x"81" and FC_r=x"08" and RAMout(0)= x"3E"  and RAMout(1)= x"3C"  and RAMout(2)= x"02"  and RAMout(3)= x"05"  and RAMout(4)= x"00"  and RAMout(5)= x"FF"  and RAMout(6)= x"80"  and RAMout(7)= x"6A"  then
											state<=diag;
										else
											state<=is_2;
										end if;
									elsif timeout='1' then
										state<=is_2;										
									end if;	
				when diag    =>--send Parametric Request
									type_s<=x"01";
									DA_S<="1000"&slave_adress(3 downto 0);
									SA_S<="1000"&master_adress(3 downto 0);
									FC_s<=x"5d";
									statereq<="10";
									LE_s<=x"27";
									RAMin(0 to 35)<=(x"3D",x"3E",x"b8",x"1e",x"01",x"00",x"80",x"6a",x"01",x"40",x"01",x"00",x"11",x"21",x"00",x"00",x"00",x"00",x"00",x"00",x"00",x"00",x"00",x"00",x"00",x"00",x"00",x"00",x"00",x"20",x"01",x"00",x"12",x"12",x"18",x"18");
									
									send_telegram<='1';
									if telegram_busy='1' then
										state<=param_0;
									end if;
				when param_0 =>
									send_telegram<='0';
									if telegram_busy='0' then
										state<=param_1;
										timer:=0;
									end if;
				when param_1 =>
									if rising_detect='1' then
										if  type_r=x"04" then
											state<=param;
										else
											state<=is_2;
										end if;
									elsif timeout='1' then
										state<=is_2;										
									end if;
				when param   =>--send Ceck Config Request									
									type_s<=x"01";
									DA_S<="1000"&slave_adress(3 downto 0);
									SA_S<="1000"&master_adress(3 downto 0);
									FC_s<=x"7d";
									statereq<="01";
									LE_s<=x"0a";
									RAMin(0 to 6)<=(x"3E",x"3E",x"00",x"20",x"20",x"10",x"10");								
									send_telegram<='1';
									if telegram_busy='1' then
										state<=conf_0;
										end if;
				when conf_0  =>
									send_telegram<='0';
									if telegram_busy='0' then
										state<=conf_1;
										timer:=0;
									end if;
				when conf_1  =>
									if rising_detect='1' then
										if  type_r=x"04" then
											--state<=conf;
										else
											--state<=is_2;
										end if;
									elsif timeout='1' then
										--state<=is_2;										
									end if;
				when conf    => --send Diagnostic Request
									type_s<=x"01";
									DA_S<="1000"&slave_adress(3 downto 0);
									SA_S<="1000"&master_adress(3 downto 0);
									FC_s<=x"5d";
									statereq<="10";
									LE_s<=x"05";
									send_telegram<='1';
									if telegram_busy='1' then
										state<=dxchgs_0;
									end if;				
				when dxchgs_0=>
									send_telegram<='0';
									if telegram_busy='0' then
										state<=dxchgs_1;
										timer:=0;
									end if;
				when dxchgs_1=>
									if rising_detect='1' then
										if  LE_r=x"0B" and DA_r=x"82" and SA_r=x"81" and FC_r=x"08" and RAMout(0)= x"3E"  and RAMout(1)= x"3C"  and RAMout(2)= x"02"  and RAMout(3)= x"0C"  and RAMout(4)= x"00"  and RAMout(5)= x"02"  and RAMout(6)= x"80"  and RAMout(7)= x"6A"  then
											state<=dxchgs;
										else
											state<=is_2;
										end if;
									elsif timeout='1' then
										state<=is_2;										
									end if;	
				when dxchgs  =>--send PDU mussnoch geändert werden
									type_s<=x"01";
									DA_S<=slave_adress;
									SA_S<=master_adress;
									if statereq="10" then
										FC_s<=x"7d";
										statereq<="01";
									else
										FC_s<=x"5d";
										statereq<="10";
									end if;
									RAMin(0)<=x"FF";
									RAMin(1)<=x"FF";									
									LE_s<=x"05";
									send_telegram<='1';
									if telegram_busy='1' then
										state<=dxchgr_0;
									end if;								
				when dxchgr_0=>
									send_telegram<='0';
									if telegram_busy='0' then
										state<=dxchgr;
										timer:=0;
									end if;
				when dxchgr  =>--muss noch geändert werden
									if rising_detect='1' then
										if  LE_r=x"05" and DA_r=x"02" and SA_r=x"01" and FC_r=x"08" then
											state<=dxchgs;
										else
											state<=is_2;
										end if;
									elsif timeout='1' then
										state<=is_2;										
									end if;	
			
			end case;
		end if;
	end process;
	
	

end Behavioral;

