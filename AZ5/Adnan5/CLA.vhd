library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity CarryLookaheadAdder is
    Port ( A     : in  STD_LOGIC_VECTOR(3 downto 0);
           B     : in  STD_LOGIC_VECTOR(3 downto 0);
           Cin   : in  STD_LOGIC;
           Sum   : out STD_LOGIC_VECTOR(3 downto 0);
           Cout  : out STD_LOGIC);
end CarryLookaheadAdder;

architecture Structural of CarryLookaheadAdder is
    component CarryLookaheadLogic
        Port ( A   : in  STD_LOGIC_VECTOR(3 downto 0);
               B   : in  STD_LOGIC_VECTOR(3 downto 0);
               Cin : in  STD_LOGIC;
               P   : inout STD_LOGIC_VECTOR(3 downto 0);
               G   : inout STD_LOGIC_VECTOR(3 downto 0);
               C   : inout STD_LOGIC_VECTOR(4 downto 0));
    end component;

    signal P, G : STD_LOGIC_VECTOR(3 downto 0);
    signal C    : STD_LOGIC_VECTOR(4 downto 0);

begin
    CLA: CarryLookaheadLogic port map (A, B, Cin, P, G, C);

    Sum(0) <= P(0) XOR Cin;
    Sum(1) <= P(1) XOR C(1);
    Sum(2) <= P(2) XOR C(2);
    Sum(3) <= P(3) XOR C(3);
    
    Cout <= C(4);

end Structural;