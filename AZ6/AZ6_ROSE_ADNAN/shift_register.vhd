library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Shift_Register is
    Port ( clk       : in  STD_LOGIC;
           reset     : in  STD_LOGIC;
           load      : in  STD_LOGIC;
           lr        : in  STD_LOGIC_VECTOR(1 downto 0);
           parallel_in : in  STD_LOGIC_VECTOR(3 downto 0);
           q         : out STD_LOGIC_VECTOR(3 downto 0));
end Shift_Register;

architecture Behavioral of Shift_Register is
    signal reg : STD_LOGIC_VECTOR(3 downto 0);
begin
    process (clk, reset)
    begin
        if reset = '1' then
            reg <= "0000";
        elsif rising_edge(clk) then
            if load = '1' then
                reg <= parallel_in;
            else
                case lr is
                    when "00" => -- Hold value
                        reg <= reg;
                    when "01" => -- Logic Right
                        reg <= '0' & reg(3 downto 1);
                    when "10" => -- Logic/Arith Left
                        reg <= reg(2 downto 0) & '0';
                    when "11" => -- Arith Right
                        reg <= reg(3) & reg(3 downto 1);
                    when others =>
                        reg <= reg;
                end case;
            end if;
        end if;
    end process;

    q <= reg;
end Behavioral;
