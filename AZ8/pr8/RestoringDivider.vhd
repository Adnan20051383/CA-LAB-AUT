library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity restoring_divider is
  port (
    clk       : in  std_logic;
    rst       : in  std_logic;
    start     : in  std_logic;
    dividend  : in  unsigned(7 downto 0);
    divisor   : in  unsigned(3 downto 0);
    quotient  : out unsigned(7 downto 0);
    remainder : out unsigned(3 downto 0);
    dfv       : out std_logic;    
    done      : out std_logic     
  );
end entity;

architecture rtl of restoring_divider is
  type state_type is (IDLE, CHECK_ZERO, SHIFT, SUBTRACT, DONE_S, ERROR);
  signal state    : state_type := IDLE;

  signal A_reg    : signed(8 downto 0)    := (others => '0');
  signal Q_reg    : unsigned(7 downto 0)  := (others => '0');
  signal count    : integer range 0 to 8  := 0;
  signal dfv_reg  : std_logic             := '0';
  signal done_reg : std_logic             := '0';

begin
  quotient  <= Q_reg;
  remainder <= unsigned(A_reg(3 downto 0));
  dfv       <= dfv_reg;
  done      <= done_reg;

  process(clk, rst)
    variable tmpA : signed(8 downto 0);
  begin
    if rst = '1' then
      state     <= IDLE;
      A_reg     <= (others => '0');
      Q_reg     <= (others => '0');
      count     <= 0;
      dfv_reg   <= '0';
      done_reg  <= '0';

    elsif rising_edge(clk) then
      case state is

        when IDLE =>
          if start = '1' then
            dfv_reg  <= '0';
            done_reg <= '0';
            state    <= CHECK_ZERO;
          end if;

        when CHECK_ZERO =>
          if divisor = 0 then
            dfv_reg  <= '1';
            done_reg <= '1';
				A_reg    <= (others => '0');
				Q_reg    <= (others => '0');
            state    <= ERROR;
          else
            A_reg    <= (others => '0');
            Q_reg    <= dividend;
            count    <= 8;
            state    <= SHIFT;
          end if;

        when SHIFT =>
          A_reg <= signed(A_reg(7 downto 0) & Q_reg(7));
          Q_reg <= Q_reg(6 downto 0) & '0';
          state <= SUBTRACT;

        when SUBTRACT =>
          tmpA := A_reg - signed("00000" & divisor);
          if tmpA >= 0 then
            A_reg    <= tmpA;
            Q_reg(0) <= '1';
          end if;
          if count = 1 then
            state <= DONE_S;
          else
            count <= count - 1;
            state <= SHIFT;
          end if;

        when DONE_S =>
          done_reg <= '1';
          if start = '0' then
            state <= IDLE;
          end if;

        when ERROR =>
          if start = '0' then
            dfv_reg   <= '0';
            done_reg  <= '0';
            state     <= IDLE;
          end if;

      end case;
    end if;
  end process;

end architecture;
