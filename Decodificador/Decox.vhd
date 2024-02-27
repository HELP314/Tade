----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    02:14:09 02/24/2024 
-- Design Name: 
-- Module Name:    Decox - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Decox is
    Port ( s0 : in  STD_LOGIC;
           s1 : in  STD_LOGIC;
           a : out  STD_LOGIC;
           b : out  STD_LOGIC;
           c : out  STD_LOGIC;
           d : out  STD_LOGIC);
end Decox;

architecture Behavioral of Decox is

begin
a <= s0 and s1;
b <= s0 and not s1;
c <= not s0 and s1;
d <= not s0 and not s1;

end Behavioral;

