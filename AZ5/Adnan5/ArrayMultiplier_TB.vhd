library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity ArrayMultiplier4bit_tb is
end ArrayMultiplier4bit_tb;

architecture testbench of ArrayMultiplier4bit_tb is

    component ArrayMultiplier4bit
        Port ( A, B : in  STD_LOGIC_VECTOR(3 downto 0);
               Product : out STD_LOGIC_VECTOR(7 downto 0));
    end component;


    signal A_tb, B_tb : STD_LOGIC_VECTOR(3 downto 0);
    signal Product_tb : STD_LOGIC_VECTOR(7 downto 0);

begin

    UUT: ArrayMultiplier4bit port map (A_tb, B_tb, Product_tb);


    process
    begin
        -- Test Case 1: 2 * 8 = 16 (00010000)
        A_tb <= "0010";  -- 2
        B_tb <= "1000";  -- 8
        wait for 10 ns;

        -- Test Case 2: 15 * 2 = 30 (00011110)
        A_tb <= "1111";  -- 15
        B_tb <= "0010";  -- 2
        wait for 10 ns;

        -- Test Case 3: 12 * 4 = 48 (00110000)
        A_tb <= "1100";  -- 12
        B_tb <= "0100";  -- 4
        wait for 10 ns;

        -- Test Case 4: 8 * 9 = 72 (01001000)
        A_tb <= "1000";  -- 8
        B_tb <= "1001";  -- 9
        wait for 10 ns;


        wait;
    end process;
    
end testbench;
