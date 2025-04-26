library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity CarryLookaheadLogic is
    Port ( A     : in  STD_LOGIC_VECTOR(3 downto 0);
           B     : in  STD_LOGIC_VECTOR(3 downto 0);
           Cin   : in  STD_LOGIC;
           P     : inout STD_LOGIC_VECTOR(3 downto 0);
           G     : inout STD_LOGIC_VECTOR(3 downto 0);
           C     : inout STD_LOGIC_VECTOR(4 downto 0));
end CarryLookaheadLogic;

architecture Behavioral of CarryLookaheadLogic is
begin
    G <= A AND B;
    P <= A XOR B;

    C(0) <= Cin;
    C(1) <= G(0) OR (P(0) AND Cin);
    C(2) <= G(1) OR (P(1) AND C(1));
    C(3) <= G(2) OR (P(2) AND C(2));
    C(4) <= G(3) OR (P(3) AND C(3));
end Behavioral;