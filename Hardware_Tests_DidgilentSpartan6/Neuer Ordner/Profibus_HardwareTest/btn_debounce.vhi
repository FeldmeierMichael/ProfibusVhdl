
-- VHDL Instantiation Created from source file btn_debounce.vhd -- 19:57:01 08/16/2022
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT btn_debounce
	PORT(
		BTN_I : IN std_logic_vector(4 downto 0);
		CLK : IN std_logic;          
		BTN_O : OUT std_logic_vector(4 downto 0)
		);
	END COMPONENT;

	Inst_btn_debounce: btn_debounce PORT MAP(
		BTN_I => ,
		CLK => ,
		BTN_O => 
	);


