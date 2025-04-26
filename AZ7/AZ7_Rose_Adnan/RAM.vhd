library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.numeric_std.All;
use IEEE.math_real.all;

entity ram is
	generic(
	W : integer := 8;
	C : integer := 4
	);
	Port(
		input_data : in std_logic_vector(W - 1 downto 0);
		addr : in std_logic_vector(C-1 downto 0);
		clk : in std_logic;
		writeIn : in std_logic;
		readOut : in std_logic;
		rst : in std_logic;
		output_data : out std_logic_vector(W-1 downto 0)
	);
end entity ram;

architecture Behavioral of ram is
type reg is array ((2 ** C ) - 1 downto 0) of std_logic_vector(W - 1 downto 0);
signal ramBlock : reg;
begin 

	process( clk , rst )
	begin
	if(rst = '1') then
		if(rising_edge(clk)) then
				if(writeIn = '1' and readOut = '0') then
					ramBlock(to_integer(unsigned(addr))) <= input_data;
				elsif (readOut = '1' and writeIn = '0') then
					output_data <= ramBlock(to_integer(unsigned(addr)));
				end if;
		end if;
	elsif (rst = '0') then
		for i in 0 to (2 ** C) -1 loop
			ramBlock(i) <= std_logic_vector(to_unsigned(i, W));
			end loop;
	end if;
			
end process;


end Behavioral;
