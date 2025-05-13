library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity RAM16x8 is
    Port (
        clk          : in  std_logic;
        write_enable : in  std_logic;
        w_addr   : in  std_logic_vector(3 downto 0);
		  r_addr   : in  std_logic_vector(3 downto 0);
        write_data   : in  std_logic_vector(7 downto 0);
        read_data    : out std_logic_vector(7 downto 0)
    );
end RAM16x8;

architecture Behavioral of RAM16x8 is
    type ram_type is array (0 to 15) of std_logic_vector(7 downto 0);
	
--TEST 1
	
    signal ram : ram_type := (
    0 => x"1A",  -- LOAD  from address 10
    1 => x"6B",  -- ADD   from address 11
    2 => x"2C",  -- STORE to address 12
    3 => x"90",  -- SHOW
    4 => x"1C",  -- LOAD from address 12
	 5 => x"90",  -- SHOW
	 6 => x"E0", --HALT
    10 => x"09",  -- data: 9
    11 => x"02",  -- data: 2
    others => (others => '0')
	);


-- TEST 2

--	   signal ram : ram_type := (
--		0 => x"1A",  -- LOAD 10
--		1 => x"70",  -- SHR
--		2 => x"90",  -- SHOW (should be 4)
--		3 => x"80",  -- SHL
--		4 => x"90",  -- SHOW (should be 8)
--		5 => x"E0",  -- HALT
--		10 => x"08", -- data: 8
--		others => (others => '0')
--	);


-- TEST 3

--signal ram : ram_type := (
--    0 => x"1A",  -- LOAD 10 (0)
--    1 => x"34",  -- BRZ  4  
--    2 => x"1B",  -- LOAD 11 
--    3 => x"90",  -- SHOW 
--    4 => x"E0",  -- HALT
--    10 => x"00", -- data: 0
--    11 => x"0F", -- some data (unused)
--    others => (others => '0')
--);

begin

    -- Synchronous Write
    process(clk)
    begin
        if rising_edge(clk) then
            if write_enable = '1' then
                ram(to_integer(unsigned(w_addr))) <= write_data;
            end if;
        end if;
    end process;

    -- Asynchronous Read
    read_data <= ram(to_integer(unsigned(r_addr)));

end Behavioral;
