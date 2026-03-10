--library ieee;
--use ieee.std_logic_1164.all;
--use ieee.numeric_std.all;
--
--entity Npwm is
--Generic ( msb : integer := 8; --número de bits del contador
--min : integer := 31668;--18332; --valor mínimo del contador para el tiempo en alto
--max : integer := 124186;--121686; --valor máximo del contador para el tiempo en alto
--inc : integer := 2500; --3334; -- incremento para el tiempo en alto
--N : integer := 15 ); --divisor
--  port (
--    clk : in std_logic;        -- clock
--    posicion : in std_logic_vector(9 downto 0);  -- reset
--    servo : out std_logic
--  );
--end entity Npwm;
--
--architecture behavioral of Npwm is
--  signal contador : unsigned(36 downto 0);
--  signal ref : unsigned(37 downto 0);
--  signal pw : std_logic;
--  
--  --declaración de señales
--signal clkdiv: std_logic_vector(15 downto 0); --señal para el divisor
--signal cntPWM: integer range 1 to 500000 := 1; --contador de 10ms @ clk=50MHz
--
---- o T=20ns
--signal cnt: integer range 0 to 36:= 0; --contador de 0 a 35
----signal servo: std_logic; --señal de PWM para las salidas servos
--signal high: integer range min to max := min; --duración del tiempo en alto de la
--begin
--  servo <= pw;
--
--  process (posicion) is
--  begin
--    case posicion is
--      when "1000000101" => ref <= to_unsigned(31668, 38);--0
--      when "1000001010" => ref <= to_unsigned(34168, 38);--1
--      when "1000001111" => ref <= to_unsigned(36668, 38);--2
--      when "1000010100" => ref <= to_unsigned(39168, 38);--3
--      when "1000011001" => ref <= to_unsigned(41668, 38);--4
--      when "1000011110" => ref <= to_unsigned(44168, 38);--5
--      when "1000100011" => ref <= to_unsigned(46668, 38);--6
--      when "1000101000" => ref <= to_unsigned(49168, 38);--7
--      when "1000101101" => ref <= to_unsigned(51668, 38);--8
--      when "1000110010" => ref <= to_unsigned(54168, 38);--9
--      when "1000110111" => ref <= to_unsigned(56668, 38);--10
--      when "1000111100" => ref <= to_unsigned(59168, 38);--11
--      when "1001000001" => ref <= to_unsigned(61668, 38);--12
--      when "1001000110" => ref <= to_unsigned(64168, 38);--13
--      when "1001001011" => ref <= to_unsigned(66668, 38);--14
--      when "1001010000" => ref <= to_unsigned(69168, 38);--15
--      when "1001010101" => ref <= to_unsigned(71668, 38);--16
--      when "1001011010" => ref <= to_unsigned(74178, 38);--17
--      when "1001011111" => ref <= to_unsigned(76668, 38);--18
--      when "0000000000" => ref <= to_unsigned(79168, 38);--19  0
--      when others => null;
--    end case;
--  end process;
--
--  -- Sequential Logic
--  process (clk) is
--  begin
--if rising_edge(clk) then cntPWM <= cntPWM + 1; --contador de 1 a 500,000
--high <= ref;
--if cntPWM <= high then servo <= '1';
--else servo <= '0';
--end if;
--end if;
--  end process;
--end architecture behavioral;

--library ieee;
--use ieee.std_logic_1164.all;
--use ieee.numeric_std.all;
--
--entity Npwm is
--  Generic (
--    msb : integer := 8; -- número de bits del contador
--    min : integer := 31668; -- valor mínimo del contador para el tiempo en alto
--    max : integer := 124186; -- valor máximo del contador para el tiempo en alto
--    inc : integer := 2500; -- incremento para el tiempo en alto
--    N : integer := 15 -- divisor
--  );
--  port (
--    clk : in std_logic; -- clock
--    posicion : in std_logic_vector(9 downto 0); -- reset
--    servo : out std_logic
--  );
--end entity Npwm;
--
--architecture behavioral of Npwm is
--  signal contador : unsigned(36 downto 0);
--  signal ref : integer range 1 to 124186 := 1;
--  signal pw : std_logic;
--
--  -- declaración de señales
--  signal clkdiv: std_logic_vector(15 downto 0); -- señal para el divisor
--  signal cntPWM: integer range 1 to 500000 := 1; -- contador de 10ms @ clk=50MHz
--  signal cnt: integer range 0 to 36 := 0; -- contador de 0 a 35
--  signal high: integer range min to max := min; -- duración del tiempo en alto
--begin
--  servo <= pw;
--
--  process (posicion) is
--  begin
--    case posicion is
--      when "1000000101" => ref <= 31668; -- 0
--      when "1000001010" => ref <= 34168; -- 1
--      when "1000001111" => ref <= 36668; -- 2
--      when "1000010100" => ref <= 39168; -- 3
--      when "1000011001" => ref <= 41668; -- 4
--      when "1000011110" => ref <= 44168; -- 5
--      when "1000100011" => ref <= 46668; -- 6
--      when "1000101000" => ref <= 49168; -- 7
--      when "1000101101" => ref <= 51668; -- 8
--      when "1000110010" => ref <= 54168; -- 9
--      when "1000110111" => ref <= 56668; -- 10
--      when "1000111100" => ref <= 59168; -- 11
--      when "1001000001" => ref <= 61668; -- 12
--      when "1001000110" => ref <= 64168; -- 13
--      when "1001001011" => ref <= 66668; -- 14
--      when "1001010000" => ref <= 69168; -- 15
--      when "1001010101" => ref <= 71668; -- 16
--      when "1001011010" => ref <= 74178; -- 17
--      when "1001011111" => ref <= 76668; -- 18
--      when "0000000000" => ref <= 79168; -- 19
--      when others => null;
--    end case;
--  end process;
--
--  -- Sequential Logic
--  process (clk) is
--  begin
--    if rising_edge(clk) then
--      cntPWM <= cntPWM + 1; -- contador de 1 a 500,000
--      high <= ref;
--      if cntPWM <= high then
--        servo <= '1';
--      else
--        servo <= '0';
--      end if;
--    end if;
--  end process;
--end architecture behavioral;

library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity Npwm is
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
end entity Npwm;

architecture behavioral of Npwm is
  signal contador : unsigned(36 downto 0);
  signal ref : integer range 0 to 36 := 0;
  signal pw : std_logic;

  -- declaración de señales
  signal clkdiv: std_logic_vector(15 downto 0); -- señal para el divisor
  signal cntPWM: integer range 1 to 1000000 := 1; -- contador de 10ms @ clk=50MHz
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
      when "1111000000000101" => ref <= 36; -- 5
      when "1111000000010000" => ref <= 35; -- 10
      when "1111000000010101" => ref <= 34; -- 15
      when "1111000000100000" => ref <= 33; -- 20
      when "1111000000100101" => ref <= 32; -- 25
      when "1111000000110000" => ref <= 31; -- 30
      when "1111000000110101" => ref <= 30; -- 35
      when "1111000001000000" => ref <= 29; -- 40
      when "1111000001000101" => ref <= 28; -- 45
      when "1111000001010000" => ref <= 27; -- 50
      when "1111000001010101" => ref <= 26; -- 55
      when "1111000001100000" => ref <= 25; -- 60
      when "1111000001100101" => ref <= 24; -- 65
      when "1111000001110000" => ref <= 23; -- 70
      when "1111000001110101" => ref <= 22; -- 75
      when "1111000010000000" => ref <= 21; -- 80
      when "1111000010000101" => ref <= 20; -- 85
      when "1111000010010000" => ref <= 19; -- 90
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
