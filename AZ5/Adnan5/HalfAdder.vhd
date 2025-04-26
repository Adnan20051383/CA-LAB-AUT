library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Half_Adder is
    Port ( A, B : in STD_LOGIC;
           Sum, Carry : out STD_LOGIC);
end Half_Adder;

architecture Behavioral of Half_Adder is
begin
    Sum <= A XOR B;
    Carry <= A AND B;
end Behavioral;