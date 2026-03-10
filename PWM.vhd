--library IEEE;
--use IEEE.STD_LOGIC_1164.ALL;
--use IEEE.STD_LOGIC_ARITH.ALL;
--use IEEE.STD_LOGIC_UNSIGNED.ALL;
--
--entity pwm is
--  Generic (
--    min : integer := 31668; -- 18332; --valor mínimo del contador para el tiempo en alto
--    max : integer := 124186; -- 121686; --valor máximo del contador para el tiempo en alto
--    inc : integer := 2500; -- 3334; -- incremento para el tiempo en alto
--    N : integer := 15 -- divisor
--  );
--  port (
--    clk : in std_logic; -- clock
--    posicion : in std_logic_vector(15 downto 0); -- posición
--    Servo : out std_logic -- salida
--  );
--end entity pwm;
--
--architecture behavioral of pwm is
--  signal cntPWM: integer range 1 to 500000 := 1; -- contador de 10ms @ clk=50MHz
----  signal contador: integer range 0 to 36 := 0; -- contador de 0 a 35
--  signal servos: std_logic; -- señal de PWM para las salidas servos
--  signal high: integer range min to max := min; -- duración del tiempo en alto de la señal PWM
--  signal contador: integer range 0 to 36:= 0; -- assuming 6-bit vector size for contador
--
--begin
--  process(clk) begin
--    if rising_edge(clk) then
--      contador <= contador + 1; -- contador de 0 a 35
--      cntPWM <= cntPWM + 1; -- contador de 1 a 500,000
--
--      high <= min + ((contador) * (inc));
--
--      if cntPWM <= high then
--        servos <= '1';
--      else
--        servos <= '0';
--      end if;
--    end if;
--  end process;
--
--  process(posicion) begin
--    case posicion is
--      -- se necesita para 0 a 90
--      -- signCentDeceUnid
--      when "1010000010010000" => contador <= 0; -- 90
--      when "1010000010000101" => contador <= 1; -- 85
--      when "1010000010000000" => contador <= 2; -- 80
--      when "1010000001110101" => contador <= 3; -- 75
--      when "1010000001110000" => contador <= 4; -- 70
--      when "1010000001100101" => contador <= 5; -- 65
--      when "1010000001100000" => contador <= 6; -- 60
--      when "1010000001010101" => contador <= 7; -- 55
--      when "1010000001010000" => contador <= 8; -- 50
--      when "1010000001000101" => contador <= 9; -- 45
--      when "1010000001000000" => contador <= 10; -- 40
--      when "1010000000110101" => contador <= 11; -- 35
--      when "1010000000110000" => contador <= 12; -- 30
--      when "1010000000100101" => contador <= 13; -- 25
--      when "1010000000100000" => contador <= 14; -- 20
--      when "1010000000010101" => contador <= 15; -- 15
--      when "1010000000010000" => contador <= 16; -- 10
--      when "1010000000000101" => contador <= 17; -- 5
--      when "0000000000000000" => contador <= 18; -- 0 POSITIVOS HACIA ABAJO
--      when "1111000000000101" => contador <= 19; -- 5
--      when "1111000000010000" => contador <= 20; -- 10
--      when "1111000000010101" => contador <= 21; -- 15
--      when "1111000000100000" => contador <= 22; -- 20
--      when "1111000000100101" => contador <= 23; -- 25
--      when "1111000000110000" => contador <= 24; -- 30
--      when "1111000000110101" => contador <= 25; -- 35
--      when "1111000001000000" => contador <= 26; -- 40
--      when "1111000001000101" => contador <= 27; -- 45
--      when "1111000001010000" => contador <= 28; -- 50
--      when "1111000001010101" => contador <= 29; -- 55
--      when "1111000001100000" => contador <= 30; -- 60
--      when "1111000001100101" => contador <= 31; -- 65
--      when "1111000001110000" => contador <= 32; -- 70
--      when "1111000001110101" => contador <= 33; -- 75
--      when "1111000010000000" => contador <= 34; -- 80
--      when "1111000010000101" => contador <= 35; -- 85
--      when "1111000010010000" => contador <= 36; -- 90
--      when others => null;
--    end case;
--  end process;
--
--  Servo <= servos; -- salida de la señal PWM hacia el servomotor
--
--end architecture behavioral;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity pwm is
  Generic (
    min : integer := 31668; -- 18332; --valor mínimo del contador para el tiempo en alto
    max : integer := 124186; -- 121686; --valor máximo del contador para el tiempo en alto
    inc : integer := 2500; -- 3334; -- incremento para el tiempo en alto
    N : integer := 15 -- divisor
  );
  port (
    clk : in std_logic; -- clock
    posicion : in std_logic_vector(15 downto 0); -- posición
    Servo : out std_logic -- salida
  );
end entity pwm;

architecture behavioral of pwm is
  signal cntPWM: integer range 1 to 500000 := 1; -- contador de 10ms @ clk=50MHz
  signal servos: std_logic; -- señal de PWM para las salidas servos
  signal high: integer range min to max := min; -- duración del tiempo en alto de la señal PWM
  signal posicion_value: integer range 0 to 36 := 0; -- separate signal to store the desired value of contador
  signal contador: integer range 0 to 36 := 0; -- contador de 0 a 35

begin
--  process(clk) begin
--    if rising_edge(clk) then
--      contador <= contador + 1; -- contador de 0 a 35
--      cntPWM <= cntPWM + 1; -- contador de 1 a 500,000
--
--      high <= min + (contador * inc);
--
--      if cntPWM <= high then
--        servos <= '1';
--      else
--        servos <= '0';
--      end if;
--      
--      if cntPWM = 500000 then
--        contador <= posicion_value; -- update contador based on the separate signal
--      end if;
--    end if;
--  end process;

  process(posicion,clk) begin
  if rising_edge(clk) then
      contador <= contador + 1; -- contador de 0 a 35
      cntPWM <= cntPWM + 1; -- contador de 1 a 500,000

      high <= min + (contador * inc);

      if cntPWM <= high then
        servos <= '1';
      else
        servos <= '0';
      end if;
      
      if cntPWM = 500000 then
        contador <= posicion_value; -- update contador based on the separate signal
      end if;
    end if;
    case posicion is
      -- se necesita para 0 a 90
      -- signCentDeceUnid
      when "1010000010010000" => posicion_value <= 0; -- 90
      when "1010000010000101" => posicion_value <= 1; -- 85
      when "1010000010000000" => posicion_value <= 2; -- 80
      when "1010000001110101" => posicion_value <= 3; -- 75
      when "1010000001110000" => posicion_value <= 4; -- 70
      when "1010000001100101" => posicion_value <= 5; -- 65
      when "1010000001100000" => posicion_value <= 6; -- 60
      when "1010000001010101" => posicion_value <= 7; -- 55
      when "1010000001010000" => posicion_value <= 8; -- 50
      when "1010000001000101" => posicion_value <= 9; -- 45
      when "1010000001000000" => posicion_value <= 10; -- 40
      when "1010000000110101" => posicion_value <= 11; -- 35
      when "1010000000110000" => posicion_value <= 12; -- 30
      when "1010000000100101" => posicion_value <= 13; -- 25
      when "1010000000100000" => posicion_value <= 14; -- 20
      when "1010000000010101" => posicion_value <= 15; -- 15
      when "1010000000010000" => posicion_value <= 16; -- 10
      when "1010000000000101" => posicion_value <= 17; -- 5
      when "0000000000000000" => posicion_value <= 18; -- 0 POSITIVOS HACIA ABAJO
      when "1111000000000101" => posicion_value <= 19; -- 5
      when "1111000000010000" => posicion_value <= 20; -- 10
      when "1111000000010101" => posicion_value <= 21; -- 15
      when "1111000000100000" => posicion_value <= 22; -- 20
      when "1111000000100101" => posicion_value <= 23; -- 25
      when "1111000000110000" => posicion_value <= 24; -- 30
      when "1111000000110101" => posicion_value <= 25; -- 35
      when "1111000001000000" => posicion_value <= 26; -- 40
      when "1111000001000101" => posicion_value <= 27; -- 45
      when "1111000001010000" => posicion_value <= 28; -- 50
      when "1111000001010101" => posicion_value <= 29; -- 55
      when "1111000001100000" => posicion_value <= 30; -- 60
      when "1111000001100101" => posicion_value <= 31; -- 65
      when "1111000001110000" => posicion_value <= 32; -- 70
      when "1111000001110101" => posicion_value <= 33; -- 75
      when "1111000010000000" => posicion_value <= 34; -- 80
      when "1111000010000101" => posicion_value <= 35; -- 85
      when "1111000010010000" => posicion_value <= 36; -- 90
      when others => null;
    end case;
  end process;

  Servo <= servos; -- salida de la señal PWM hacia el servomotor

end architecture behavioral;
