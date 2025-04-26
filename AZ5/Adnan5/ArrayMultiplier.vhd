library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ArrayMultiplier4bit is
    Port ( A     : in  STD_LOGIC_VECTOR(3 downto 0);
           B     : in  STD_LOGIC_VECTOR(3 downto 0);
           Product : out STD_LOGIC_VECTOR(7 downto 0));
end ArrayMultiplier4bit;

architecture Structural of ArrayMultiplier4bit is
    component CarryLookaheadAdder
        Port ( A  : in  STD_LOGIC_VECTOR(3 downto 0);
               B  : in  STD_LOGIC_VECTOR(3 downto 0);
               Cin  : in  STD_LOGIC;
               Sum  : out  STD_LOGIC_VECTOR(3 downto 0);
               Cout : out  STD_LOGIC);
    end component;

    signal pp0, pp1, pp2, pp3 : STD_LOGIC_VECTOR(3 downto 0);
    signal sum1, sum2, sum3 : STD_LOGIC_VECTOR(3 downto 0);
    signal carry1, carry2, carry3 : STD_LOGIC;

begin
    pp0 <= (A(0) and B(3)) & (A(0) and B(2)) & (A(0) and B(1)) & (A(0) and B(0));
    pp1 <= (A(1) and B(3)) & (A(1) and B(2)) & (A(1) and B(1)) & (A(1) and B(0));
    pp2 <= (A(2) and B(3)) & (A(2) and B(2)) & (A(2) and B(1)) & (A(2) and B(0));
    pp3 <= (A(3) and B(3)) & (A(3) and B(2)) & (A(3) and B(1)) & (A(3) and B(0));

    CLA1: CarryLookaheadAdder port map (pp1, "0" & pp0(3 downto 1), '0', sum1, carry1);
    CLA2: CarryLookaheadAdder port map (pp2, carry1 & sum1(3 downto 1), '0', sum2, carry2);
    CLA3: CarryLookaheadAdder port map (pp3, carry2 & sum2(3 downto 1), '0', sum3, carry3);

    Product(0) <= pp0(0);
    Product(1) <= sum1(0);
    Product(2) <= sum2(0);
    Product(3) <= sum3(0);
    Product(4) <= sum3(1);
    Product(5) <= sum3(2);
    Product(6) <= sum3(3);
    Product(7) <= carry3;
    
end Structural;