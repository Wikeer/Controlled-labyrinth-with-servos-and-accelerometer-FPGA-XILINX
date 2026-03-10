library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity contador_segundos_minutos is
    port (
        clk_50mhz : in std_logic;
        reset : in std_logic;
        enable : in std_logic;
        segundos_out : out std_logic_vector(5 downto 0);
        minutos_out : out std_logic_vector(5 downto 0)
    );
end contador_segundos_minutos;

architecture behavioral of contador_segundos_minutos is
    signal clk_1hz : std_logic;
    signal contador_segundos : unsigned(5 downto 0) := (others => '0');
    signal contador_minutos : unsigned(5 downto 0) := (others => '0');
    signal contador_10minutos : unsigned(5 downto 0) := (others => '0');
begin
    -- Divisor de frecuencia a 1 Hz
    process (clk_50mhz)
        variable count_1hz : integer := 0;
    begin
        if rising_edge(clk_50mhz) then
            if count_1hz = 25_000_000 - 1 then  -- 50 MHz / 25_000_000 = 1 Hz
                count_1hz := 0;
                clk_1hz <= not clk_1hz;
            else
                count_1hz := count_1hz + 1;
            end if;
        end if;
    end process;

    -- Contador de segundos
    process (clk_1hz)
    begin
        if rising_edge(clk_1hz) then
            if reset = '1' then
                contador_segundos <= (others => '0');
            elsif enable = '1' then
                if contador_segundos = 58 then
                    contador_segundos <= (others => '0');
                else
                    contador_segundos <= contador_segundos + 1;
                end if;
            end if;
        end if;
    end process;

    -- Contador de minutos
    process (clk_1hz)
    begin
        if rising_edge(clk_1hz) then
            if reset = '1' then
                contador_minutos <= (others => '0');
                contador_10minutos <= (others => '0');
            elsif enable = '1' then
                if contador_segundos = 0 then
                    if contador_minutos = 9 then
                        if contador_10minutos = 9 then
                            contador_minutos <= (others => '0');
                            contador_10minutos <= (others => '0');
                        else
                            contador_10minutos <= contador_10minutos + 1;
                        end if;
                    else
                        contador_minutos <= contador_minutos + 1;
                    end if;
                end if;
            end if;
        end if;
    end process;

    segundos_out <= std_logic_vector(contador_segundos);
    minutos_out <= std_logic_vector(contador_minutos-1);
end behavioral;

