
-- VHDL Instantiation Created from source file uart.vhd -- 17:44:16 08/15/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT uart
	PORT(
		clk : IN std_logic;
		reset_n : IN std_logic;
		tx_ena : IN std_logic;
		tx_data : IN std_logic_vector(7 downto 0);
		rx : IN std_logic;          
		rx_busy : OUT std_logic;
		rx_error : OUT std_logic;
		rx_data : OUT std_logic_vector(7 downto 0);
		tx_busy : OUT std_logic;
		tx : OUT std_logic
		);
	END COMPONENT;

	Inst_uart: uart PORT MAP(
		clk => ,
		reset_n => ,
		tx_ena => ,
		tx_data => ,
		rx => ,
		rx_busy => ,
		rx_error => ,
		rx_data => ,
		tx_busy => ,
		tx => 
	);


