
-- VHDL Instantiation Created from source file Profibus_Recieve.vhd -- 07:32:11 08/08/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Profibus_Recieve
	PORT(
		clk : IN std_logic;
		rs485detect : IN std_logic;
		reset : IN std_logic;
		datain : IN std_logic_vector(7 downto 0);          
		detect : OUT std_logic;
		type_o : OUT std_logic_vector(7 downto 0);
		DA_o : OUT std_logic_vector(7 downto 0);
		SA_o : OUT std_logic_vector(7 downto 0);
		FC_o : OUT std_logic_vector(7 downto 0);
		LE_o : OUT std_logic_vector(7 downto 0);
		FCS_o : OUT std_logic_vector(7 downto 0);
		PDU_o : OUT std_logic_vector(7 downto 0);
		PDU_Count : OUT std_logic_vector(7 downto 0);
		idle : OUT std_logic;
		PDU_RAM_Enable : OUT std_logic
		);
	END COMPONENT;

	Inst_Profibus_Recieve: Profibus_Recieve PORT MAP(
		clk => ,
		rs485detect => ,
		reset => ,
		datain => ,
		detect => ,
		type_o => ,
		DA_o => ,
		SA_o => ,
		FC_o => ,
		LE_o => ,
		FCS_o => ,
		PDU_o => ,
		PDU_Count => ,
		idle => ,
		PDU_RAM_Enable => 
	);


