library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity CarrySaveMultiplier4bit is
    Port ( A, B : in  STD_LOGIC_VECTOR(3 downto 0);
           Product : out STD_LOGIC_VECTOR(7 downto 0));
end CarrySaveMultiplier4bit;

architecture Structural of CarrySaveMultiplier4bit is
    component Half_Adder
        Port ( A, B : in STD_LOGIC;
               Sum, Carry : out STD_LOGIC);
    end component;
    
    component Full_Adder
        Port ( A, B, Cin : in STD_LOGIC;
               Sum, Cout : out STD_LOGIC);
    end component;
    

    signal pp0, pp1, pp2, pp3 : STD_LOGIC_VECTOR(3 downto 0);
    

    signal sum1, sum2, sum3, sum4 : STD_LOGIC_VECTOR(2 downto 0);
    signal carry1, carry2, carry3, carry4 : STD_LOGIC_VECTOR(2 downto 0);
    
begin

    pp0 <= A AND (B(0) & B(0) & B(0) & B(0));
    pp1 <= A AND (B(1) & B(1) & B(1) & B(1));
    pp2 <= A AND (B(2) & B(2) & B(2) & B(2));
    pp3 <= A AND (B(3) & B(3) & B(3) & B(3));


    HA1: Half_Adder port map (pp0(1), pp1(0), sum1(0), carry1(0));
    HA2: Half_Adder port map (pp0(2), pp1(1), sum1(1), carry1(1));
    HA3: Half_Adder port map (pp0(3), pp1(2), sum1(2), carry1(2));
    

    FA1: Full_Adder port map (pp2(0), carry1(0), sum1(1), sum2(0), carry2(0));
    FA2: Full_Adder port map (pp2(1), carry1(1), sum1(2), sum2(1), carry2(1));
    FA3: Full_Adder port map (pp1(3), pp2(2), carry1(2), sum2(2), carry2(2));
    

    FA4: Full_Adder port map (pp3(0), carry2(0), sum2(1), sum3(0), carry3(0));
    FA5: Full_Adder port map (pp3(1), carry2(1), sum2(2), sum3(1), carry3(1));
    FA6: Full_Adder port map (pp3(2), pp2(3), carry2(2), sum3(2), carry3(2));


    HA4: Half_Adder port map (sum3(1), carry3(0), sum4(0), carry4(0));
    FA7: Full_Adder port map (sum3(2), carry3(1), carry4(0), sum4(1), carry4(1));
    FA8: Full_Adder port map (pp3(3), carry3(2), carry4(1), sum4(2), carry4(2));

    Product(0) <= pp0(0);
    Product(1) <= sum1(0);
    Product(2) <= sum2(0);
    Product(3) <= sum3(0);
    Product(4) <= sum4(0);
    Product(5) <= sum4(1);
    Product(6) <= sum4(2);
    Product(7) <= carry4(2);

end Structural;