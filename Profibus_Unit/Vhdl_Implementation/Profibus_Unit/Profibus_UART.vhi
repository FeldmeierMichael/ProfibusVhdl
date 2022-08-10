
-- VHDL Instantiation Created from source file Profibus_UART.vhd -- 07:33:04 08/08/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Profibus_UART
	PORT(
		Reciever_idle : IN std_logic;
		clk : IN std_logic;
		reset : IN std_logic;
		datain : IN std_logic_vector(7 downto 0);
		send : IN std_logic;
		RX : IN std_logic;          
		dataout : OUT std_logic_vector(7 downto 0);
		recieve : OUT std_logic;
		TX : OUT std_logic;
		Read_en : OUT std_logic;
		tx_busy : OUT std_logic;
		Write_en : OUT std_logic
		);
	END COMPONENT;

	Inst_Profibus_UART: Profibus_UART PORT MAP(
		Reciever_idle => ,
		clk => ,
		reset => ,
		datain => ,
		dataout => ,
		send => ,
		recieve => ,
		RX => ,
		TX => ,
		Read_en => ,
		tx_busy => ,
		Write_en => 
	);


