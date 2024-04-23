----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:34:18 03/24/2024 
-- Design Name: 
-- Module Name:    buff_32x8bits - Behavioral 
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
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity buff_32x8bits is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
			  en : in  STD_LOGIC;
			  ack_tx: in std_logic;
           din : in  STD_LOGIC_VECTOR (7 downto 0);
			  rdy : out std_logic;
           dout : out  STD_LOGIC_VECTOR (7 downto 0));
end buff_32x8bits;

architecture Behavioral of buff_32x8bits is

type buff_type is array(31 downto 0) of std_logic_vector(7 downto 0);
signal buff: buff_type;
signal addr_w, addr_r: std_logic_vector(4 downto 0);

begin

	process(clk)
	begin
		if(rising_edge(clk))then
			if(rst = '1')then
				addr_w <= (others => '0');
				addr_r <= (others => '0');
				buff <= (others =>(others => '0'));
			elsif(en = '1')then
				buff(conv_integer(addr_w)) <= din;
				addr_w <= addr_w + 1;
				if(ack_tx = '1')then
					rdy <= '1';
					dout <= buff(conv_integer(addr_r));
					addr_r <= addr_r + 1;
				else
					rdy <= '0';
				end if;
			end if;
		end if;
	end process;
					



end Behavioral;

