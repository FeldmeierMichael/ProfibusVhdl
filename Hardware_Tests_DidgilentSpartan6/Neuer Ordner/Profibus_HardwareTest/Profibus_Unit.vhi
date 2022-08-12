
-- VHDL Instantiation Created from source file Profibus_Unit.vhd -- 17:42:15 08/11/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Profibus_Unit
	PORT(
		clk : IN std_logic;
		reset : IN std_logic;
		type_s : IN std_logic_vector(7 downto 0);
		DA_s : IN std_logic_vector(7 downto 0);
		SA_s : IN std_logic_vector(7 downto 0);
		FC_s : IN std_logic_vector(7 downto 0);
		LE_s : IN std_logic_vector(7 downto 0);
		PDU_s : IN std_logic_vector(7 downto 0);
		PDU_count_s : IN std_logic_vector(7 downto 0);
		PDU_RAM_en_s : IN std_logic;
		send_telegram : IN std_logic;
		RX : IN std_logic;          
		telegram_busy : OUT std_logic;
		detect_r : OUT std_logic;
		type_r : OUT std_logic_vector(7 downto 0);
		DA_r : OUT std_logic_vector(7 downto 0);
		SA_r : OUT std_logic_vector(7 downto 0);
		FC_r : OUT std_logic_vector(7 downto 0);
		LE_r : OUT std_logic_vector(7 downto 0);
		FCS_r : OUT std_logic_vector(7 downto 0);
		PDU_r : OUT std_logic_vector(7 downto 0);
		PDU_count_r : OUT std_logic_vector(7 downto 0);
		PDU_RAM_en_r : OUT std_logic;
		TX : OUT std_logic;
		Read_en : OUT std_logic;
		Write_en : OUT std_logic
		);
	END COMPONENT;

	Inst_Profibus_Unit: Profibus_Unit PORT MAP(
		clk => ,
		reset => ,
		type_s => ,
		DA_s => ,
		SA_s => ,
		FC_s => ,
		LE_s => ,
		PDU_s => ,
		PDU_count_s => ,
		PDU_RAM_en_s => ,
		send_telegram => ,
		telegram_busy => ,
		detect_r => ,
		type_r => ,
		DA_r => ,
		SA_r => ,
		FC_r => ,
		LE_r => ,
		FCS_r => ,
		PDU_r => ,
		PDU_count_r => ,
		PDU_RAM_en_r => ,
		RX => ,
		TX => ,
		Read_en => ,
		Write_en => 
	);


