library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity Shift_Register_Top is
    Port ( clk          : in  STD_LOGIC; 
           reset        : in  STD_LOGIC;
           load         : in  STD_LOGIC;
           lr           : in  STD_LOGIC_VECTOR(1 downto 0);
           parallel_in  : in  STD_LOGIC_VECTOR(3 downto 0);
           q            : inout STD_LOGIC_VECTOR(3 downto 0);
           sel_seg      : out STD_LOGIC_VECTOR(4 downto 0);
           seg_data     : out STD_LOGIC_VECTOR(7 downto 0)
    );
end Shift_Register_Top;

architecture Behavioral of Shift_Register_Top is
    signal slow_clk_1Hz   : STD_LOGIC;
    signal slow_clk_100Hz : STD_LOGIC;

begin

    Clock_Divider_1Hz_Inst : entity work.Clock_Divider
    port map (
        clk       => clk,
        reset     => reset,
        slow_clk  => slow_clk_1Hz
    );

    Clock_Divider_100Hz_Inst : entity work.Clock_Divider_100Hz
    port map (
        clk       => clk,
        reset     => reset,
        slow_clk  => slow_clk_100Hz
    );

    Shift_Register_Inst : entity work.Shift_Register
    port map (
        clk          => slow_clk_1Hz,  
        reset        => reset,
        load         => load,
        lr           => lr,
        parallel_in  => parallel_in,
        q            => q
    );

    Multiplex_7Segment_Inst : entity work.multiplex_7segment
    port map (
        clk       => slow_clk_100Hz,  
        reset     => reset,
        bit1      => q(0),
        bit2      => q(1),
        bit3      => q(2),
        bit4      => q(3),
        sel_seg   => sel_seg,
        seg_data  => seg_data
    );

end Behavioral;