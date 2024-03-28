----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:44:44 03/28/2024 
-- Design Name: 
-- Module Name:    Counter - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity counter is
	 Generic(
		N: integer := 8
	 );
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  
			  dout : out STD_LOGIC_VECTOR(N-1 downto 0));
end counter;

architecture Behavioral of counter is
	signal SQ: STD_LOGIC_VECTOR(N-1 downto 0); 
	signal count: integer;
begin
	process (clk, rst)
		begin
			if rst = '0' then   
				count <= 0;
				SQ <= x"00";
			elsif (clk'event and clk = '1') then 
				if(count = 255) then
					count <= 0;
					SQ <= SQ + '1';
				else count <= count + 1;
				end if;
			end if;
		end process;
	dout <= SQ;
end Behavioral;