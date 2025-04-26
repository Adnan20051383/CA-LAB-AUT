library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.All;

entity rom is

generic(
	W : integer := 8;
	C : integer := 4
	);
	Port(
		addr : in std_logic_vector(C-1 downto 0);
		clk : in std_logic;
		output_data : out std_logic_vector(W-1 downto 0)
	);
end rom;

architecture Behavioral of rom is
type reg is array ((2 ** C )-1 downto 0) of std_logic_vector(W-1 downto 0);
signal romBlock : reg := (
    "00000000", -- 0     0x00
    "00000001", -- 1     0x01
    "00000010", -- 2     0x02
    "00000100", -- 3     0x04
    "00001000", -- 4     0x08
    "00010000", -- 5     0x10
    "00100000", -- 6     0x20
    "01000000", -- 7     0x40
    "10000000", -- 8     0x80
    "11111111", -- 9     0xFF
    "10101010", -- 10    0xAA
    "01010101", -- 11    0x55
    "11001100", -- 12    0xCC
    "00110011", -- 13    0x33
    "11110000", -- 14    0xF0
    "00001111"  -- 15    0x0F
);

begin
	process(clk)
	begin
		if(rising_edge(clk)) then
			output_data <= romBlock(to_integer(unsigned(addr)));
		end if;
	end process;


end Behavioral;
