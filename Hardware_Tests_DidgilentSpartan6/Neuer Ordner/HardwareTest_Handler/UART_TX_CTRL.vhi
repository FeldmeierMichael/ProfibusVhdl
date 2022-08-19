
-- VHDL Instantiation Created from source file UART_TX_CTRL.vhd -- 10:18:23 08/19/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT UART_TX_CTRL
	PORT(
		SEND : IN std_logic;
		DATA : IN std_logic_vector(7 downto 0);
		CLK : IN std_logic;          
		READY : OUT std_logic;
		UART_TX : OUT std_logic
		);
	END COMPONENT;

	Inst_UART_TX_CTRL: UART_TX_CTRL PORT MAP(
		SEND => ,
		DATA => ,
		CLK => ,
		READY => ,
		UART_TX => 
	);


