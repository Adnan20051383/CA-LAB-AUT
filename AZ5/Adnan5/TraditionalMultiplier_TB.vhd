LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_unsigned.ALL;

ENTITY Multiplier_4bit_tb IS
END Multiplier_4bit_tb;

ARCHITECTURE behavior OF Multiplier_4bit_tb IS 

    COMPONENT Multiplier_4bit
    PORT(
         A : IN  std_logic_vector(3 downto 0);
         B : IN  std_logic_vector(3 downto 0);
         P : OUT std_logic_vector(7 downto 0)
        );
    END COMPONENT;
   
    SIGNAL A : std_logic_vector(3 downto 0) := (others => '0');
    SIGNAL B : std_logic_vector(3 downto 0) := (others => '0');
    
    SIGNAL P : std_logic_vector(7 downto 0);

BEGIN

    uut: Multiplier_4bit PORT MAP (
          A => A,
          B => B,
          P => P
        );

    stim_proc: PROCESS
    BEGIN     
        -- Test case 1: 7 * 8 = 56
        A <= "0111";  -- 7
        B <= "1000";  -- 8
        WAIT FOR 10 ns;

        -- Test case 2: 9 * 7 = 63
        A <= "1001";  -- 9
        B <= "0111";  -- 7
        WAIT FOR 10 ns;

        -- Test case 3: 12 * 11 = 132
        A <= "1100";  -- 12
        B <= "1011";  -- 11
        WAIT FOR 10 ns;

        -- Test case 4: 13 * 8 = 104
        A <= "1101";  -- 13
        B <= "1000";  -- 8
        WAIT FOR 10 ns;

        -- Test case 5: 3 * 5 = 15
        A <= "0011";  -- 3
        B <= "0101";  -- 5
        WAIT FOR 10 ns;

        WAIT;
    END PROCESS;

END behavior;