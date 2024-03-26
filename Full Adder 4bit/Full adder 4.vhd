library ieee ;
    use ieee.std_logic_1164.all ;
    use ieee.numeric_std.all ;

entity Fulladder4 is
  port (
    A0,A1,A2,A3 : in std_logic;
    B0,B1,B2,B3 : in std_logic;
    S0,S1,S2,S3 : out std_logic;
    Cout : out std_logic
  ) ;
end Fulladder4 ; 
signal D,E,F,G,H,I,J,K,L,M,N,O : std_logic :='0';

architecture arch of Fulladder4 is
S0 <= A0 Xor B0;
D <= A0 and B0;
E <= A1 Xor B1;
S1 <= E xor D;
F <= A1 and B1;
G <= E and D;
H <= G or F;

I <= A2 xor B2;
S2 <= I xor H;
J <= A2 and B2;
K <= I and H;
L <= K or J;

M <= A3 xor B3;
S3 <= M xor L;
N <= A3 and B3;
O <= M and L;
Cout <= K or J;


begin

end architecture arch ;