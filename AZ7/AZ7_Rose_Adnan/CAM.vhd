library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

entity Cam is
    generic (
	 d : INTEGER := 16;
	 c : INTEGER := 4;
    w : INTEGER := 4
	 );
	 
    port (
        rd : in std_logic; --read
        wr : in std_logic; --write
        rst : in std_logic; -- active low
        clk : in std_logic;  --rising edge clk
        match : out std_logic; --match output
        data : in std_logic_vector(w-1 downto 0);
        addr_out: out std_logic_vector(c-1 downto 0)
    );
end Cam;

architecture Content_Addressable_Memorry of Cam is
type mem is array ((d)- 1 downto 0) of std_logic_vector(w - 1 downto 0);
signal memory : mem;

CONSTANT empty : std_logic_vector(w-1 downto 0) := (others => '-');

begin			
    process( rd, wr,rst, data, memory, clk)
    begin
        if (rst = '0') then 
            for i in 0 to (d)-1 loop
		memory(i) <= empty;			 
            end loop;
	    match <= '0';
	elsif (rising_edge(clk)) then 
            if(rd = '1') then
                match <= '0'; 
		for i in 0 to (d)-1 loop
			if (data = memory(i)) then
				match <= '1';
				exit;
			end if;
		end loop;
					 
            elsif(wr = '1') then
		match <= '0';
		for i in 0 to (d)-1 loop
			if (data = memory(i)) then
			match <= '1';
			addr_out <= std_logic_vector(to_unsigned(i, addr_out'length));
			exit;
			elsif (empty = memory(i)) then 
				memory(i) <= data;
				exit;
			end if;
		end loop;
            end if;
        end if;	  
    end process;
end Content_Addressable_Memorry;