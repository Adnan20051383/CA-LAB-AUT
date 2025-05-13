library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity BasicComputer is
    Port (
        clk        : in  std_logic;
        rst        : in  std_logic;
        show_data  : out std_logic_vector(7 downto 0);
        halt       : inout std_logic;
		  address_out : out std_logic_vector(3 downto 0);
		  data_bus_out  : out std_logic_vector(7 downto 0);
		  data_to_write : out std_logic_vector(7 downto 0);
		  w_bit : out std_logic
    );
end BasicComputer;

architecture Struct of BasicComputer is

    -- Internal signals for interconnecting CPU and RAM
    signal data_bus      : std_logic_vector(7 downto 0);
    signal address_bus   : std_logic_vector(3 downto 0);
	 signal w_address_bus   : std_logic_vector(3 downto 0);
    signal write_enable  : std_logic;
    signal write_data    : std_logic_vector(7 downto 0);
    signal show_data_sig : std_logic_vector(7 downto 0);

begin

    -- Instance of CPU
    U_CPU: entity work.CPU8BIT2
        port map (
            data       => data_bus,
            adress     => address_bus,
				w_adress   => w_address_bus,
            we         => write_enable,
            rst        => rst,
            clk        => clk,
            halt       => halt,
            show_data  => show_data_sig,
            data_out   => write_data
        );

    -- Instance of RAM
    U_RAM: entity work.RAM16x8
        port map (
            clk          => clk,
            write_enable => write_enable,
            r_addr         => address_bus,
				w_addr         => w_address_bus,
            write_data   => write_data,
            read_data    => data_bus
        );

    -- Output assignment
    show_data <= show_data_sig;
	 address_out <= address_bus;
	 data_bus_out <= data_bus;
	 data_to_write <= write_data;
	 w_bit <= write_enable;
end Struct;
