----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:47:12 03/26/2024 
-- Design Name: 
-- Module Name:    Ram - Behavioral 
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

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity rams is
    port (CLK  : in std_logic;
          Wr   : in std_logic;
          EN   : in std_logic;
			 Rd	: in std_logic;
          ADDR : in std_logic_vector(7 downto 0);
          DI   : in std_logic_vector(15 downto 0);
          DO   : out std_logic_vector(15 downto 0));
end rams;

architecture syn of rams is
    type ram_type is array ( 255 downto 0) of std_logic_vector (15 downto 0);
    signal RAM: ram_type;
begin

    process (CLK)
    begin
        if CLK'event and CLK = '1' then
            if EN = '1' then
                if Wr = '1' then
                    RAM(conv_integer(ADDR)) <= DI;
					elsif Rd	= '1' then 
						DO <= RAM(conv_integer(ADDR)) ;
                end if;
					 else
					 DO <= (others => 'Z');
            end if;
        end if;
    end process;

end syn;