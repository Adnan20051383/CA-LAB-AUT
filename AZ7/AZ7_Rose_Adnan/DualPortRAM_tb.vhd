library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity tb_ram_dual_port is
end tb_ram_dual_port;

architecture behavior of tb_ram_dual_port is
    constant W : integer := 8;
    constant C : integer := 4;

    component ram_dual_port
        port (
            wr_A       : in std_logic;
            wr_B       : in std_logic;
            rd_A       : in std_logic;
            rd_B       : in std_logic;
            clk        : in std_logic;
            addr_RD    : in std_logic_vector(C - 1 downto 0);
            addr_WR    : in std_logic_vector(C - 1 downto 0);
            rst        : in std_logic;
            data_in_A  : in std_logic_vector(W - 1 downto 0);
            data_in_B  : in std_logic_vector(W - 1 downto 0);
            data_out_A : out std_logic_vector(W - 1 downto 0);
            data_out_B : out std_logic_vector(W - 1 downto 0);
            same       : out std_logic
        );
    end component;

    -- Signals
    signal wr_A, wr_B, rd_A, rd_B : std_logic := '0';
    signal clk                    : std_logic := '0';
    signal addr_RD, addr_WR      : std_logic_vector(C - 1 downto 0) := (others => '0');
    signal rst                   : std_logic := '0';
    signal data_in_A, data_in_B  : std_logic_vector(W - 1 downto 0) := (others => '0');
    signal data_out_A, data_out_B: std_logic_vector(W - 1 downto 0);
    signal same                  : std_logic;

    constant clk_period : time := 10 ns;

begin

    -- UUT instantiation
    uut: ram_dual_port
        port map (
            wr_A => wr_A, wr_B => wr_B, rd_A => rd_A, rd_B => rd_B,
            clk => clk, addr_RD => addr_RD, addr_WR => addr_WR,
            rst => rst, data_in_A => data_in_A, data_in_B => data_in_B,
            data_out_A => data_out_A, data_out_B => data_out_B,
            same => same
        );

    -- Clock generation
    clk_process : process
    begin
        while true loop
            clk <= '0'; wait for clk_period / 2;
            clk <= '1'; wait for clk_period / 2;
        end loop;
    end process;

    -- Stimulus process
    stim_proc: process
    begin
        -- Reset
        rst <= '0';
        wait for 20 ns;
        rst <= '1';
        wait for 20 ns;

        -- 1. Write A @ addr 0
        wr_A <= '1'; data_in_A <= x"AA"; addr_WR <= "0000";
        wait for clk_period;
        wr_A <= '0';

        -- 2. Read A @ addr 0
        rd_A <= '1'; addr_RD <= "0000";
        wait for clk_period;
        rd_A <= '0';
        wait for clk_period;

        -- 3. Write B @ addr 1
        wr_B <= '1'; data_in_B <= x"BB"; addr_WR <= "0001";
        wait for clk_period;
        wr_B <= '0';

        -- 4. Read B @ addr 1
        rd_B <= '1'; addr_RD <= "0001";
        wait for clk_period;
        rd_B <= '0';
        wait for clk_period;

        -- 5. Simultaneous Write A and Read B (different addresses)
        wr_A <= '1'; data_in_A <= x"CC"; addr_WR <= "0010";
        rd_B <= '1'; addr_RD <= "0001";  -- should read old BB
        wait for clk_period;
        wr_A <= '0'; rd_B <= '0';

        wait for clk_period;

        -- 6. Simultaneous Write B and Read A (different addresses)
        wr_B <= '1'; data_in_B <= x"DD"; addr_WR <= "0011";
        rd_A <= '1'; addr_RD <= "0010";  -- should read CC
        wait for clk_period;
        wr_B <= '0'; rd_A <= '0';

        wait for clk_period;

        -- 7. Simultaneous Write A and Read A @ same address → 'same' = 1
        wr_A <= '1'; rd_A <= '1'; data_in_A <= x"EE";
        addr_WR <= "0100"; addr_RD <= "0100";
        wait for clk_period;
        wr_A <= '0'; rd_A <= '0';

        wait for clk_period;

        -- 8. Simultaneous Write B and Read B @ same address → 'same' = 1
        wr_B <= '1'; rd_B <= '1'; data_in_B <= x"FF";
        addr_WR <= "0101"; addr_RD <= "0101";
        wait for clk_period;
        wr_B <= '0'; rd_B <= '0';

        wait for clk_period;

        -- 9. Both ports write to same address simultaneously
        wr_A <= '1'; data_in_A <= x"11";
        wr_B <= '1'; data_in_B <= x"22";
        addr_WR <= "0110";
        wait for clk_period;
        wr_A <= '0'; wr_B <= '0';

        wait for clk_period;

        -- 10. Read the address where both wrote (undefined who won)
        rd_A <= '1'; addr_RD <= "0110";
        wait for clk_period;
        rd_A <= '0';

        wait;

    end process;
end behavior;
