LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_signed.ALL;

ENTITY tb_booth_multiplier IS
END tb_booth_multiplier;

ARCHITECTURE behavior OF tb_booth_multiplier IS

    -- Constants for bit width
    CONSTANT x : INTEGER := 4;
    CONSTANT y : INTEGER := 4;

    -- Component Declaration
    COMPONENT booth_multiplier
        GENERIC (x : INTEGER := 4;
                 y : INTEGER := 4);
        PORT(m      : IN  STD_LOGIC_VECTOR(x - 1 DOWNTO 0);
             r      : IN  STD_LOGIC_VECTOR(y - 1 DOWNTO 0);
             result : OUT STD_LOGIC_VECTOR(x + y - 1 DOWNTO 0));
    END COMPONENT;

    -- Signals
    SIGNAL m      : STD_LOGIC_VECTOR(x - 1 DOWNTO 0) := (OTHERS => '0');
    SIGNAL r      : STD_LOGIC_VECTOR(y - 1 DOWNTO 0) := (OTHERS => '0');
    SIGNAL result : STD_LOGIC_VECTOR(x + y - 1 DOWNTO 0);

BEGIN

    UUT: booth_multiplier
        GENERIC MAP (x => x, y => y)
        PORT MAP (m => m, r => r, result => result);

    -- Stimulus process
    PROCESS
    BEGIN
        -- Test Case 1: 3 * 2
        m <= "0011"; -- 3
        r <= "0010"; -- 2
        WAIT FOR 20 ns;

        -- Test Case 2: -5 * 4
        m <= "1011"; -- -5 (two's complement)
        r <= "0100"; -- 4
        WAIT FOR 20 ns;

        -- Test Case 3: -7 * -3
        m <= "1001"; -- -7 (two's complement)
        r <= "1101"; -- -3 (two's complement)
        WAIT FOR 20 ns;

        -- Test Case 4: 0 * 10
        m <= "0000"; -- 0
        r <= "1010"; -- 10
        WAIT FOR 20 ns;

        
        WAIT;
    END PROCESS;

END behavior;
