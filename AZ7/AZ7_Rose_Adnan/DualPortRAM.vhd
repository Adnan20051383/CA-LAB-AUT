library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.math_real.ALL;

entity ram_dual_port is
	generic (
	W : integer := 8;
	C : integer := 4
	);
			
	port (
	--write
			 wr_A : in std_logic;
			 wr_B : in std_logic;
	--read
			 rd_A : in std_logic;
			 rd_B : in std_logic;
	--rising edge clk
			 clk : in std_logic;
	--address for reading
			 addr_RD : in std_logic_vector(C-1 downto 0);
	--address for writing
			 addr_WR : in std_logic_vector (C-1 downto 0);
	--active low reset
			 rst : in std_logic;
	--data in
			 data_in_A : in std_logic_vector(W-1 downto 0);
			 data_in_B : in std_logic_vector(W-1 downto 0);
	--data out
			 data_out_A : out std_logic_vector(W-1 downto 0);
			 data_out_B : out std_logic_vector(W-1 downto 0);
			 same : out std_logic
			 );
			 
end ram_dual_port;

architecture Behavioral of ram_dual_port is
type mem is array ((2 ** C ) - 1 downto 0) of std_logic_vector(W - 1 downto 0);
signal memory : mem;
begin
	process(rst, clk)
	
	begin
	 if(rst = '0') then
		for i in 0 to (2 ** C) -1 loop
			memory(i) <=  std_logic_vector(to_unsigned(i,W));
		end loop;
		same <='0';
	elsif(rising_edge(clk)) then
	-- *******  write A ********
		if( wr_A = '1' and rd_A = '0' and wr_b = '0') then
			memory(to_integer(unsigned(addr_WR))) <= data_in_A;
	-- *******  read A  *******
		elsif( rd_A = '1' and wr_A = '0' and rd_B = '0') then 
			data_out_A <= memory(to_integer(unsigned(addr_RD)));
		elsif( rd_A ='1' and wr_A = '1' ) then
			if( addr_RD = addr_WR) then
				same <='1';
			else
				memory(to_integer(unsigned(addr_WR))) <= data_in_A;
				data_out_A <= memory(to_integer(unsigned(addr_RD)));
			end if;
		end if;
		-- ******* write B ******
		if( wr_B = '1' and rd_B = '0' and wr_A = '0') then
			memory(to_integer(unsigned(addr_WR))) <= data_in_B;
	-- ******* read B ******
		elsif( rd_B = '1' and wr_B = '0' and rd_A = '0') then 
			data_out_B <= memory(to_integer(unsigned(addr_RD)));
		elsif( rd_B ='1' and wr_B = '1' ) then
			if( addr_RD = addr_WR) then
				same <='1';
			else
				memory(to_integer(unsigned(addr_WR))) <= data_in_B;
				data_out_B <= memory(to_integer(unsigned(addr_RD)));
			end if;
		end if;
		if (wr_A = '1' and rd_B = '1') then
			if (addr_RD = addr_WR) then
				same <= '1';
			end if;
		elsif (wr_B = '1' and rd_A = '1') then
			if (addr_RD = addr_WR) then
				same <= '1';
			end if;
		end if;
	end if;
	end process;
end Behavioral;