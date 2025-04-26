library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_Cam is
end tb_Cam;

architecture behavior of tb_Cam is

    component Cam is
        generic (
            d : INTEGER := 16;
            c : INTEGER := 4;
            w : INTEGER := 4
        );
        port (
            rd : in std_logic;
            wr : in std_logic;
            rst : in std_logic;
            clk : in std_logic;
            match : out std_logic;
            data : in std_logic_vector(w-1 downto 0);
            addr_out: out std_logic_vector(c-1 downto 0)
        );
    end component;

    constant w : integer := 4;
    constant c : integer := 4;
    constant d : integer := 16;

    signal clk_tb     : std_logic := '0';
    signal rst_tb     : std_logic := '1';
    signal rd_tb      : std_logic := '0';
    signal wr_tb      : std_logic := '0';
    signal data_tb    : std_logic_vector(w-1 downto 0) := (others => '0');
    signal match_tb   : std_logic;
    signal addr_out_tb: std_logic_vector(c-1 downto 0);

    constant clk_period : time := 10 ns;

begin

    uut: Cam
        generic map (
            d => d,
            c => c,
            w => w
        )
        port map (
            clk => clk_tb,
            rst => rst_tb,
            rd => rd_tb,
            wr => wr_tb,
            data => data_tb,
            match => match_tb,
            addr_out => addr_out_tb
        );

    clk_process :process
    begin
        while now < 300 ns loop
            clk_tb <= '0';
            wait for clk_period / 2;
            clk_tb <= '1';
            wait for clk_period / 2;
        end loop;
        wait;
    end process;

    stim_proc: process
    begin
        rst_tb <= '0';
        wait for 20 ns;
        rst_tb <= '1';
        wait for clk_period;

        wr_tb <= '1';
        rd_tb <= '0';

        data_tb <= "0001"; wait for clk_period;
        data_tb <= "0010"; wait for clk_period;
        data_tb <= "0100"; wait for clk_period;
        data_tb <= "1000"; wait for clk_period;

        wr_tb <= '0'; wait for clk_period;

        rd_tb <= '1';

        data_tb <= "0100"; wait for clk_period; 
        data_tb <= "1111"; wait for clk_period; 

        rd_tb <= '0'; wait for clk_period;

        wr_tb <= '1';
        data_tb <= "0001"; wait for clk_period; 

        wr_tb <= '0'; wait;

        wait;
    end process;

end behavior;
