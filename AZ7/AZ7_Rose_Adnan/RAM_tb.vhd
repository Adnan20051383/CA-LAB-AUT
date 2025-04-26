library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity ram_tb is
end entity;

architecture testbench of ram_tb is

    constant W : integer := 8;
    constant C : integer := 4;

    signal input_data  : std_logic_vector(W - 1 downto 0);
    signal addr        : std_logic_vector(C - 1 downto 0);
    signal clk         : std_logic := '0';
    signal writeIn     : std_logic := '0';
    signal readOut     : std_logic := '0';
    signal rst         : std_logic := '0';
    signal output_data : std_logic_vector(W - 1 downto 0);

    constant clk_period : time := 10 ns;

begin

    uut: entity work.ram
        generic map (
            W => W,
            C => C
        )
        port map (
            input_data  => input_data,
            addr        => addr,
            clk         => clk,
            writeIn     => writeIn,
            readOut     => readOut,
            rst         => rst,
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
        -- Step 1: Initialize with reset
        rst <= '0';           
        wait for clk_period;
        rst <= '1';              
        wait for clk_period;

        -- Step 2: Write data to address 3
        addr <= std_logic_vector(to_unsigned(3, C));
        input_data <= x"AA";
        writeIn <= '1';
        readOut <= '0';
        wait for clk_period;

        -- Step 3: Write data to address 7
        addr <= std_logic_vector(to_unsigned(7, C));
        input_data <= x"55";
        wait for clk_period;

        -- Step 4: Read data from address 3
        writeIn <= '0';
        readOut <= '1';
        addr <= std_logic_vector(to_unsigned(3, C));
        wait for clk_period;

        -- Step 5: Read data from address 7
        addr <= std_logic_vector(to_unsigned(7, C));
        wait for clk_period;

        -- Step 6: Reset again to reinitialize RAM
        readOut <= '0';
        rst <= '0';
        wait for clk_period;
        rst <= '1';
        wait for clk_period;

        -- Step 7: Read from address 0 to check reinitialization
        addr <= std_logic_vector(to_unsigned(0, C));
        readOut <= '1';
        wait for clk_period;

        -- Step 8: Read from address 1
        addr <= std_logic_vector(to_unsigned(1, C));
        wait for clk_period;

        wait;
    end process;

end architecture;
