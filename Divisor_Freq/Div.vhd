----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:42:50 03/28/2024 
-- Design Name: 
-- Module Name:    Div - Behavioral 
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



entity Divisor is
	Generic(
		N: integer := 50000000
	 );
	Port ( 		
		clk : in  STD_LOGIC;
		rst : in  STD_LOGIC;	  
		dout : out STD_LOGIC);
end Divisor;

architecture Behavioral of Divisor is
	signal max: STD_LOGIC; 
	signal count: integer;
begin
process (clk, rst)
		begin
			if rst = '0' then   
				count <= 0;
				max <= '0';
			elsif (rising_edge(clk)) then 
				if(count = N) then
					count <= 0;
					max <= NOT max;
				else count <= count + 1;
				end if;
			end if;
		end process;
	dout <= max;

end Behavioral;