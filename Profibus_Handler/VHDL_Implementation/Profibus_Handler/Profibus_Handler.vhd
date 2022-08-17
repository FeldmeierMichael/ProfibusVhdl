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
				master_adress: in std_logic_vector:=x"01";
				max_Tdsr: in integer:=850;
				slave_adress: in std_logic_vector:=x"02";
				slave_PDU_size_in: in integer:=16;
				slave_PDU_size_out: in integer:=16);
    Port ( input_bus : in  STD_LOGIC_VECTOR (slave_PDU_size_in-1 downto 0);
           output_bus : out  STD_LOGIC_VECTOR (slave_PDU_size_out-1 downto 0):=(x"00");
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
type sate_t is (idle,diag_0,diag_1,diag,param_0,param_1,param,conf_0,conf_1,conf,dxchgs_0,dxchgs_1,dxchgs,dxchgr_0,dxchgr);
type RAM_in is array(0 to (slave_PDU_size_in/8)-1) of std_logic_vector(7 downto 0);
type RAM_out is array(0 to (slave_PDU_size_out/8)-1) of std_logic_vector(7 downto 0);
signal RAMin:RAM_in:=(others=>x"00");
signal RAMout:RAM_out:=(others=>x"00");
begin
	RAM_in_p:Process(clk,reset)
	variable counter:integer range 0 to slave_PDU_size_in/8:=0;
	begin
	if reset='1' then
		RAMin<=(others=>x"00");
		counter:=0;
	elsif rising_edge(clk) then
		for i in 0 to slave_PDU_size_in-1 loop
        RAMin(i/8)(i mod 8)<= input_bus(i);   
      end loop;
		if counter<slave_PDU_size_in/8 then
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
	
	fsm:process(clk,reset)
	begin
	
	end process;
	
	
	
	

end Behavioral;

