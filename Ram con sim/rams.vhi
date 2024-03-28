
-- VHDL Instantiation Created from source file rams.vhd -- 01:54:10 03/27/2024
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT rams
	PORT(
		CLK : IN std_logic;
		Wr : IN std_logic;
		EN : IN std_logic;
		Rd : IN std_logic;
		Rst : IN std_logic;
		ADDR : IN std_logic_vector(7 downto 0);
		DI : IN std_logic_vector(31 downto 0);          
		DO : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_rams: rams PORT MAP(
		CLK => ,
		Wr => ,
		EN => ,
		Rd => ,
		Rst => ,
		ADDR => ,
		DI => ,
		DO => 
	);


