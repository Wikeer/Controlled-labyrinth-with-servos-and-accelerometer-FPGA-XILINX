library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity pwmP is
  Generic (
    msb : integer := 8; -- número de bits del contador
    min : integer := 31668; -- valor mínimo del contador para el tiempo en alto
    max : integer := 124186; -- valor máximo del contador para el tiempo en alto
    inc : integer := 2500; -- incremento para el tiempo en alto
    N : integer := 15 -- divisor
  );
  port (
    clk : in std_logic; -- clock
    posicion : in std_logic_vector(15 downto 0); -- reset
    servo : out std_logic
  );
end entity pwmP;

architecture behavioral of pwmP is
  signal contador : unsigned(36 downto 0);
  signal ref : integer range 0 to 36 := 0;
  signal pw : std_logic;

  -- declaración de señales
  signal clkdiv: std_logic_vector(15 downto 0); -- señal para el divisor
  signal cntPWM: integer range 1 to  1000000 := 1; -- contador de 10ms @ clk=50MHz
  signal cnt: integer range 0 to 37 := 0; -- contador de 0 a 35
  signal high: integer range min to max := min; -- duración del tiempo en alto
begin
  servo <= pw;

  process (posicion) is
  begin
    case posicion is
      when "1010000010010000" => ref <= 0; -- 90
      when "1010000010000101" => ref <= 1; -- 85
      when "1010000010000000" => ref <= 2; -- 80
      when "1010000001110101" => ref <= 3; -- 75
      when "1010000001110000" => ref <= 4; -- 70
      when "1010000001100101" => ref <= 5; -- 65
      when "1010000001100000" => ref <= 6; -- 60
      when "1010000001010101" => ref <= 7; -- 55
      when "1010000001010000" => ref <= 8; -- 50
      when "1010000001000101" => ref <= 9; -- 45
      when "1010000001000000" => ref <= 10; -- 40
      when "1010000000110101" => ref <= 11; -- 35
      when "1010000000110000" => ref <= 12; -- 30
      when "1010000000100101" => ref <= 13; -- 25
      when "1010000000100000" => ref <= 14; -- 20
      when "1010000000010101" => ref <= 15; -- 15
      when "1010000000010000" => ref <= 16; -- 10
      when "1010000000000101" => ref <= 17; -- 5
      when "0000000000000000" => ref <= 18; -- 0 POSITIVOS HACIA ABAJO
      when "1111000000000101" => ref <= 19; -- 5
      when "1111000000010000" => ref <= 20; -- 10
      when "1111000000010101" => ref <= 21; -- 15
      when "1111000000100000" => ref <= 22; -- 20
      when "1111000000100101" => ref <= 23; -- 25
      when "1111000000110000" => ref <= 24; -- 30
      when "1111000000110101" => ref <= 25; -- 35
      when "1111000001000000" => ref <= 26; -- 40
      when "1111000001000101" => ref <= 27; -- 45
      when "1111000001010000" => ref <= 28; -- 50
      when "1111000001010101" => ref <= 29; -- 55
      when "1111000001100000" => ref <= 30; -- 60
      when "1111000001100101" => ref <= 31; -- 65
      when "1111000001110000" => ref <= 32; -- 70
      when "1111000001110101" => ref <= 33; -- 75
      when "1111000010000000" => ref <= 34; -- 80
      when "1111000010000101" => ref <= 35; -- 85
      when "1111000010010000" => ref <= 36; -- 90
      when others => null;
    end case;
  end process;

  -- Sequential Logic
  process (clk) is
  begin
    if rising_edge(clk) then
      cntPWM <= cntPWM + 1; -- contador de 1 a 500,000
      high <= min + (ref*inc);
    end if;
    
    if cntPWM <= high then
      pw <= '1';
    else
      pw <= '0';
    end if;
  end process;
end architecture behavioral;