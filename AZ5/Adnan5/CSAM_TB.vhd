library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity CarrySaveMultiplier4bit_tb is
end CarrySaveMultiplier4bit_tb;

architecture testbench of CarrySaveMultiplier4bit_tb is
    component CarrySaveMultiplier4bit
        Port ( A, B : in  STD_LOGIC_VECTOR(3 downto 0);
               Product : out STD_LOGIC_VECTOR(7 downto 0));
    end component;

    signal A_tb, B_tb : STD_LOGIC_VECTOR(3 downto 0);
    signal Product_tb : STD_LOGIC_VECTOR(7 downto 0);

begin
    UUT: CarrySaveMultiplier4bit port map (A_tb, B_tb, Product_tb);

    process
    begin
        -- Test Case 1: 5 * 3 = 15 (00001111)
        A_tb <= "0101"; -- 5
        B_tb <= "0011"; -- 3
        wait for 10 ns;

        -- Test Case 2: 2 * 2 = 4 (00000100)
        A_tb <= "0010"; -- 2
        B_tb <= "0010"; -- 2
        wait for 10 ns;

        -- Test Case 3: 3 * 15 = 45 (00101101)
        A_tb <= "0011"; -- 3
        B_tb <= "1111"; -- 15
        wait for 10 ns;

        -- Test Case 4: 12 * 12 = 144 (01001000)
        A_tb <= "1100"; -- 12
        B_tb <= "1100"; -- 12
        wait for 10 ns;

        wait;
    end process;
    
end testbench;
