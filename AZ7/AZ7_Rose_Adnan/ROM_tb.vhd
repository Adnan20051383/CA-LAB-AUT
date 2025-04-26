library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity rom_tb is
end entity;

architecture behavior of rom_tb is

    constant W : integer := 8;
    constant C : integer := 4;

    signal addr        : std_logic_vector(C - 1 downto 0) := (others => '0');
    signal clk         : std_logic := '0';
    signal output_data : std_logic_vector(W - 1 downto 0);

    constant clk_period : time := 10 ns;

begin

    uut: entity work.rom
        generic map (
            W => W,
            C => C
        )
        port map (
            addr        => addr,
            clk         => clk,
            output_data => output_data
        );

    clk_process : process
    begin
        while true loop
            clk <= '0';
            wait for clk_period / 2;
            clk <= '1';
            wait for clk_period / 2;
        end loop;
    end process;

    stim_proc : process
    begin
        for i in 0 to (2**C - 1) loop
            addr <= std_logic_vector(to_unsigned(i, C));
            wait for clk_period;
        end loop;

        wait for 20 ns;
        wait;
    end process;

end architecture;
