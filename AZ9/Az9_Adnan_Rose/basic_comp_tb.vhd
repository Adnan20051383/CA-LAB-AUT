-- Testbench for BasicComputer
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity BasicComputer_tb is
end BasicComputer_tb;

architecture Behavioral of BasicComputer_tb is

    -- Component Declaration
    component BasicComputer is
        Port (
            clk        : in  std_logic;
            rst        : in  std_logic;
            show_data  : out std_logic_vector(7 downto 0);
            halt       : inout std_logic;
				address_out : out std_logic_vector(3 downto 0);
				data_bus_out  : out std_logic_vector(7 downto 0);
				data_to_write : out std_logic_vector(7 downto 0);
				w_bit : out std_logic
        );
    end component;

    -- Testbench signals
    signal clk_tb        : std_logic := '0';
    signal rst_tb        : std_logic := '0';
    signal show_data_tb  : std_logic_vector(7 downto 0);
    signal halt_tb       : std_logic;
	 signal addr_tb       : std_logic_vector(3 downto 0);
	 signal data_bus_out_tb : std_logic_vector(7 downto 0);
	 signal data_to_write_tb : std_logic_vector(7 downto 0);
	 signal w_bit_tb      : std_logic;
    constant clk_period : time := 10 ns;

begin

    -- Clock generation
    clk_process : process
    begin
        clk_tb <= '0';
        wait for clk_period / 2;
        clk_tb <= '1';
        wait for clk_period / 2;
    end process;

    -- Instantiate the Unit Under Test (UUT)
    uut: BasicComputer
        port map (
            clk        => clk_tb,
            rst        => rst_tb,
            show_data  => show_data_tb,
            halt       => halt_tb,
				address_out => addr_tb,
				data_bus_out => data_bus_out_tb,
				data_to_write => data_to_write_tb,
				w_bit => w_bit_tb
        );

    -- Stimulus process
    stim_proc: process
    begin
        -- Apply reset
        rst_tb <= '0';
        wait for 20 ns;
        rst_tb <= '1';

        -- Wait until CPU halts
        wait until halt_tb = '1';

        -- Check show_data
        report "Final value in AKKU (show_data): " & integer'image(to_integer(unsigned(show_data_tb)));

        wait;
    end process;

end Behavioral;