library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Clock_Divider_100Hz is
    Port ( clk    : in  STD_LOGIC;
           reset  : in  STD_LOGIC;
           slow_clk : inout STD_LOGIC);
end Clock_Divider_100Hz;

architecture Behavioral of Clock_Divider_100Hz is
    signal counter : INTEGER := 0;
    constant MAX_COUNT : INTEGER := 20000; 
begin
    process (clk, reset)
    begin
        if reset = '1' then
            counter <= 0;
            slow_clk <= '0';
        elsif rising_edge(clk) then
            if counter = MAX_COUNT then
                slow_clk <= not slow_clk;
                counter <= 0;
            else
                counter <= counter + 1;
            end if;
        end if;
    end process;
end Behavioral;
