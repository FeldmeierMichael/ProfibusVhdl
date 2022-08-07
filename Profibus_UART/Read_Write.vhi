
-- VHDL Instantiation Created from source file Read_Write.vhd -- 13:21:16 08/07/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT Read_Write
	PORT(
		idle : IN std_logic;
		clk : IN std_logic;
		send : IN std_logic;
		tx_busy : IN std_logic;
		reset : IN std_logic;          
		Write_en : OUT std_logic;
		Read_en : OUT std_logic
		);
	END COMPONENT;

	Inst_Read_Write: Read_Write PORT MAP(
		idle => ,
		clk => ,
		send => ,
		tx_busy => ,
		reset => ,
		Write_en => ,
		Read_en => 
	);


