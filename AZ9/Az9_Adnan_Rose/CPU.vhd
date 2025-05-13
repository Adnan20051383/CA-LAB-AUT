library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity CPU8BIT2 is
	port ( data: in std_logic_vector(7 downto 0);
	adress: out std_logic_vector(3 downto 0);
	w_adress: out std_logic_vector(3 downto 0);
	we: out std_logic; -- Asynchronous memory interface
	rst: in std_logic;
	clk: in std_logic;
	halt: inout std_logic;
	show_data: out std_logic_vector(7 downto 0);
	data_out: out std_logic_vector(7 downto 0));
end;

architecture CPU_ARCH of CPU8BIT2 is
	signal akku: std_logic_vector(8 downto 0); -- akku(8) is carry !
	signal adreg: std_logic_vector(3 downto 0);
	signal pc: std_logic_vector(3 downto 0);
	signal states: std_logic_vector(3 downto 0);
	signal show: std_logic := '0';
	signal w_en: std_logic := '0';
	constant STORE_WAIT : std_logic_vector(3 downto 0) := "1111";
	begin
	Process(clk,rst)
		begin
			If (rst = '0') then 
				adreg <= (others => '0'); -- start execution at memory location 0
				states <= "0000";
				akku <= (others => '0');
				pc <= (others => '0');
			elsIf (rising_edge(clk)) then
				-- PC / Adress path
				if (data(7 downto 4) = "1110") then
					halt <= '1';
				elsIf (states = "0000") then 
					pc <= adreg + 1;
					if data(7 downto 4) /= "1001" and  data(7 downto 4) /= "1000" and data(7 downto 4) /= "0111" and data(7 downto 4) /= "1101"  then
						adreg <= data(3 downto 0);
					else 
						adreg <= pc;
					end if;	
				else
					adreg <= pc;
				end If;
				-- ALU / Data Path
				Case states is
					when "0001" => -- LOAD
						akku <= '0' & data;  -- zero-extend to 9 bits

					when "0010" => -- STORE
						data_out <= akku(7 downto 0);
						w_en <= '1';  -- enable write signal
						w_adress <= adreg;
						states <= STORE_WAIT;  -- move to wait state

					when "0011" => -- BRZ (Branch if zero)
						if akku(7 downto 0) = "00000000" then
							pc <= data(3 downto 0);  -- jump to address
						end if;

					when "0100" => -- BRNZ (Branch if not zero)
						if akku(7 downto 0) /= "00000000" then
							pc <= data(3 downto 0);
						end if;

					when "0101" => -- ADD
						akku <= ('0' & akku(7 downto 0)) + ('0' & data);

					when "0110" => -- SUB
						akku <= ('0' & akku(7 downto 0)) - ('0' & data);

					when "0111" => -- SHR
						akku <= '0' & akku(8 downto 1);  -- logical shift right, preserve carry

					when "1000" => -- SHL
						akku <= akku(7 downto 0) & '0';  -- logical shift left, discard carry

					when "1001" => -- SHOW
						show_data <= akku(7 downto 0);

					when "1010" => -- AND
						akku <= '0' & (akku(7 downto 0) and data);

					when "1011" => -- OR
						akku <= '0' & (akku(7 downto 0) or data);

					when "1100" => -- XOR
						akku <= '0' & (akku(7 downto 0) xor data);

					when "1101" => -- NOT
						akku <= '0' & (not akku(7 downto 0));

					when "1110" => -- HALT
						halt <= '1';
						
					when STORE_WAIT =>
						w_en <= '0';
						states <= "0000";  -- Go back to fetch	
						
					when others => null; -- fetch or other undefined opcodes
				end Case;

				-- State machine
				if (states = "0000") then
					states <= data(7 downto 4);  -- decode opcode
				elsif (states /= STORE_WAIT and halt /= '1') then
					states <= "0000";  -- go back to fetch
				end if;

			end If;
		end Process;
		
		-- output
		adress <= adreg;
		we <= w_en;
end CPU_ARCH;