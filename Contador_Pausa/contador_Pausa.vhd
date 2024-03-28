----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:47:45 03/28/2024 
-- Design Name: 
-- Module Name:    contador_Pausa - Behavioral 
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

entity cont is
	 Generic(
		N: integer := 8
	 );
    Port ( clk : in  STD_LOGIC;
           Stop : in  STD_LOGIC;
			  Init_Pause : in STD_LOGIC;
			  dout : out STD_LOGIC_VECTOR(N-1 downto 0));
end cont;

architecture Behavioral of cont is
	signal state, next_state: STD_LOGIC_VECTOR(1 downto 0);
	signal SQ: STD_LOGIC_VECTOR(N-1 downto 0); 
	signal count : integer;
	
begin
	SYNC:process (clk, Stop)
		begin
			if Stop = '0' then   
				count <= 0;
				SQ <= x"00";
				state <= "00";
			elsif (clk'event and clk = '1') then 
				if(count = 255) then
						count <= 0;
						state <= next_state;
					if(SQ = x"FF") then
						SQ <= x"00";
					elsif(state = "01") then
						SQ <= SQ + '1';
					end if;
				else count <= count + 1;	
				end if;
			end if;
		end process;
		
	STATE_0:process(state, Init_Pause) is
	begin
		next_state <= state;
		case(state) is
			when "00" =>
				if(Init_Pause = '1') then
					next_state <= "01";
				end if;
			when "01" =>
				if(Init_Pause = '1') then
					next_state <= "10";
				end if;
			when others =>
				next_state <= "00";
		end case;
		end process;
	
	dout <= SQ;
end Behavioral;