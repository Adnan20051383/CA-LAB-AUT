library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Multiplier_4bit is
    Port ( A, B : in STD_LOGIC_VECTOR(3 downto 0);
           P : out STD_LOGIC_VECTOR(7 downto 0));
end Multiplier_4bit;

architecture Behavioral of Multiplier_4bit is


    signal pp0, pp1, pp2, pp3 : STD_LOGIC_VECTOR(3 downto 0);
    signal s1, s2, s3 : STD_LOGIC_VECTOR(3 downto 0);
    signal c1, c2, c3 : STD_LOGIC_VECTOR(3 downto 0);

begin


    pp0 <= A AND (B(0) & B(0) & B(0) & B(0));
    pp1 <= A AND (B(1) & B(1) & B(1) & B(1));
    pp2 <= A AND (B(2) & B(2) & B(2) & B(2));
    pp3 <= A AND (B(3) & B(3) & B(3) & B(3));


    HA1: entity work.Half_Adder port map(pp0(1), pp1(0), s1(0), c1(0));
    FA1: entity work.Full_Adder port map(pp0(2), pp1(1), c1(0), s1(1), c1(1));
    FA2: entity work.Full_Adder port map(pp0(3), pp1(2), c1(1), s1(2), c1(2));
    HA2: entity work.Half_Adder port map(pp1(3), c1(2), s1(3), c1(3));


    HA3: entity work.Half_Adder port map(s1(1), pp2(0), s2(0), c2(0));
    FA3: entity work.Full_Adder port map(s1(2), pp2(1), c2(0), s2(1), c2(1));
    FA4: entity work.Full_Adder port map(s1(3), pp2(2), c2(1), s2(2), c2(2));
    FA8: entity work.Full_Adder port map(c1(3), pp2(3), c2(2), s2(3), c2(3));


    HA5: entity work.Half_Adder port map(pp3(0), s2(1), s3(0), c3(0));
    FA5: entity work.Full_Adder port map(pp3(1), s2(2), c3(0), s3(1), c3(1));
    FA6: entity work.Full_Adder port map(pp3(2), s2(3), c3(1), s3(2), c3(2));
    FA7: entity work.Full_Adder port map(pp3(3), c2(3), c3(2), s3(3), c3(3));


    P(0) <= pp0(0);
    P(1) <= s1(0);
    P(2) <= s2(0);
    P(3) <= s3(0);
    P(4) <= s3(1);
    P(5) <= s3(2);
    P(6) <= s3(3);
    P(7) <= c3(3);

end Behavioral;