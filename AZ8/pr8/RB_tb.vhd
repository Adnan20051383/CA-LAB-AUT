library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity tb_restoring_divider is
end entity;

architecture sim of tb_restoring_divider is
  signal clk      : std_logic := '0';
  signal rst      : std_logic := '1';
  signal start    : std_logic := '0';
  signal dividend : unsigned(7 downto 0);
  signal divisor  : unsigned(3 downto 0);
  signal quotient : unsigned(7 downto 0);
  signal remainder: unsigned(3 downto 0);
  signal dfv      : std_logic;
  signal done     : std_logic;

  constant clk_period : time := 10 ns;

begin
  uut: entity work.restoring_divider
    port map (
      clk       => clk,
      rst       => rst,
      start     => start,
      dividend  => dividend,
      divisor   => divisor,
      quotient  => quotient,
      remainder => remainder,
      dfv       => dfv,
      done      => done
    );

  clk_process: process
  begin
    clk <= '0';
    wait for clk_period/2;
    clk <= '1';
    wait for clk_period/2;
  end process;

  stim_proc: process
  begin
    wait for 20 ns;
    rst <= '0';
    wait for clk_period;

    -- Test 1: 100 / 5 = 20, rem 0
    dividend <= to_unsigned(100, 8);
    divisor  <= to_unsigned(5, 4);
    start    <= '1';
    wait for clk_period;
    start    <= '0';
    wait until done = '1';
    wait for clk_period;

    -- Test 2: 255 / 15 = 17, rem 0
    dividend <= to_unsigned(255, 8);
    divisor  <= to_unsigned(15,4);
    start    <= '1';
    wait for clk_period;
    start    <= '0';
    wait until done = '1';
    wait for clk_period;

    -- Test 3: 20 / 3 = 6, rem 2
    dividend <= to_unsigned(20,8);
    divisor  <= to_unsigned(3,4);
    start    <= '1';
    wait for clk_period;
    start    <= '0';
    wait until done = '1';
    wait for clk_period;

    -- Test 4: Division by zero
    dividend <= to_unsigned(50,8);
    divisor  <= to_unsigned(0,4);
    start    <= '1';
    wait for clk_period;
    start    <= '0';
    wait until done = '1';
    wait for clk_period;

    wait;
  end process;
end architecture;