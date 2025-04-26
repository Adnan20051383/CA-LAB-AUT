library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity multiplex_7segment is
    Port (
        clk     : in  STD_LOGIC;
        reset   : in  STD_LOGIC;
        bit1    : in  STD_LOGIC;
        bit2    : in  STD_LOGIC;
        bit3    : in  STD_LOGIC;
        bit4    : in  STD_LOGIC;
        sel_seg : out STD_LOGIC_VECTOR(4 downto 0);
        seg_data: out STD_LOGIC_VECTOR(7 downto 0)
    );
end multiplex_7segment;

architecture Behavioral of multiplex_7segment is
    signal select_en : STD_LOGIC_VECTOR(1 downto 0) := "00";
begin
    process (clk, reset)
    begin
        if reset = '1' then
            select_en <= "00";
            sel_seg   <= "00000";
            seg_data  <= "00000000";
        elsif rising_edge(clk) then
            select_en <= select_en + 1;

            case select_en is
                when "00" =>
                    sel_seg <= "00001";  
                    if bit1 = '0' then
                        seg_data <= "00111111"; 
                    else
                        seg_data <= "00000110";
                    end if;

                when "01" =>
                    sel_seg <= "00010";  
                    if bit2 = '0' then
                        seg_data <= "00111111"; 
                    else
                        seg_data <= "00000110";
                    end if;

                when "10" =>
                    sel_seg <= "00100"; 
                    if bit3 = '0' then
                        seg_data <= "00111111";
                    else
                        seg_data <= "00000110"; 
                    end if;

                when "11" =>
                    sel_seg <= "01000"; 
                    if bit4 = '0' then
                        seg_data <= "00111111";
                    else
                        seg_data <= "00000110";
                    end if;

                when others =>
                    sel_seg <= "00000";
                    seg_data <= "00000000";
            end case;
        end if;
    end process;
end Behavioral;