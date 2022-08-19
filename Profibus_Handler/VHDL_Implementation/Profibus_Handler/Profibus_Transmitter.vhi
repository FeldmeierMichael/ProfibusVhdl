
-- VHDL Instantiation Created from source file Profibus_Transmitter.vhd -- 15:09:00 08/19/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Profibus_Transmitter
	PORT(
		send_Telegram : IN std_logic;
		type_i : IN std_logic_vector(7 downto 0);
		DA : IN std_logic_vector(7 downto 0);
		SA : IN std_logic_vector(7 downto 0);
		FC : IN std_logic_vector(7 downto 0);
		PDU_in : IN std_logic_vector(7 downto 0);
		PDU_count : IN std_logic_vector(7 downto 0);
		PDU_RAM_en : IN std_logic;
		LE_i : IN std_logic_vector(7 downto 0);
		tx_busy : IN std_logic;
		reset : IN std_logic;
		clk : IN std_logic;          
		telegram_busy : OUT std_logic;
		send : OUT std_logic;
		dataout : OUT std_logic_vector(7 downto 0)
		);
	END COMPONENT;

	Inst_Profibus_Transmitter: Profibus_Transmitter PORT MAP(
		send_Telegram => ,
		type_i => ,
		DA => ,
		SA => ,
		FC => ,
		PDU_in => ,
		PDU_count => ,
		PDU_RAM_en => ,
		LE_i => ,
		tx_busy => ,
		reset => ,
		clk => ,
		telegram_busy => ,
		send => ,
		dataout => 
	);


