library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity booth_multiplier_tb is
end booth_multiplier_tb;

architecture sim of booth_multiplier_tb is
    signal A : STD_LOGIC_VECTOR(3 downto 0);
    signal B : STD_LOGIC_VECTOR(3 downto 0);
    signal product : STD_LOGIC_VECTOR(7 downto 0);
    
    component booth_multiplier
        Port ( A : in  STD_LOGIC_VECTOR (3 downto 0);
               B : in  STD_LOGIC_VECTOR (3 downto 0);
               product : out STD_LOGIC_VECTOR (7 downto 0) );
    end component;
    
begin
    uut: booth_multiplier Port Map (
        A => A,
        B => B,
        product => product
    );
    
    process
    begin
        -- Test Case 1
        A <= "0011";  -- A = 3
        B <= "0010";  -- B = 2
        wait for 10 ns;
        
        -- Test Case 2
        A <= "1100";  -- A = -4
        B <= "0101";  -- B = 5
        wait for 10 ns;
        
        -- Test Case 3
        A <= "1010";  -- A = -6
        B <= "0011";  -- B = 3
        wait for 10 ns;
        
        -- Test Case 4
        A <= "1111";  -- A = -1
        B <= "1111";  -- B = -1
        wait for 10 ns;

        wait;
    end process;

end sim;
