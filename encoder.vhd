
------------------------------------------------------------------------------------------------------
-- Se presenta un generador de señal PWM para controlar un servomotor, utilizando un
-- encoder rotatorio mecánico para manipular su posición. El sentido de giro es CW y
-- CCW, tanto para el encoder como para el servomotor, teniendo un tope en ambos
-- sentidos. El tiempo en alto "high" se obtiene con la función Ta=K1+(conta*K2) o bien
-- high <= min + (cnt*inc), colocada como high = 15000 + (cnt * 3225) para 32 posiciones.
-- Archivos: encoder.vhd y encoder.ucf
------------------------------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
entity encoder is
Generic ( msb : integer := 8; --número de bits del contador
min : integer := 31668;--18332; --valor mínimo del contador para el tiempo en alto
max : integer := 124186;--121686; --valor máximo del contador para el tiempo en alto
inc : integer := 2500; --3334; -- incremento para el tiempo en alto
N : integer := 15 ); --divisor

Port (
--reloj de 50MHz de la nexys2
clk : in STD_LOGIC;
reset asíncrono en alto en la nexys2 (BTN0) y en el encoder (Push)
------resetB,resetP: in STD_LOGIC;
--señales A y B del encoder
--A,B : in STD_LOGIC;
--salida del contador de 5 bits cuando msb=5
--contador : out STD_LOGIC_VECTOR (msb-1 downto 0);
--salida a display de 7 segmentos + P
--display : out STD_LOGIC_VECTOR (7 downto 0):="00000001";
--salida a los ánodos
--AN : out STD_LOGIC_VECTOR (0 to 3);
--salidas de pwm para el servomotor y un led testigo
servomotor,servoLED : out STD_LOGIC

);

end encoder;
architecture encoder of encoder is
--se utiliza una FSM moore para leer el encoder
type edos is (EA, EB, EC, ED);
signal EP: edos:=EA;
--declaración de señales
signal clkdiv: std_logic_vector(N downto 0); --señal para el divisor
signal AB: std_logic_vector (1 to 2); --señal que une las señales del encoder
signal cntPWM: integer range 1 to 500000 := 1; --contador de 10ms @ clk=50MHz

-- o T=20ns
signal cnt: integer range 0 to 36:= 0; --contador de 0 a 35
signal servo: std_logic; --señal de PWM para las salidas servos
signal high: integer range min to max := min; --duración del tiempo en alto de la

-- señal PWM

------------ end signal declarations ------------
begin
AB <= a & b; --unión (concatenación) de las señales del encoder
--AN <= "1110"; --activación del ánodo del display uno
divisor: --proceso del divisor
process(clk,resetB,resetP)
begin
if resetB = '1' or resetP = '1' then clkdiv <= (others => '0');
elsif rising_edge(clk) then clkdiv <= clkdiv + 1;
end if;
end process divisor;
FSM: --proceso que detecta los giros del encoder y genera la variable cnt
process (clkdiv(N),resetB,resetP,cnt)
begin
if resetB = '1' or resetP = '1' then EP <= EA; cnt<=0;
elsif rising_edge(clkdiv(N)) then
case EP is
when EA =>
if AB = "00" then EP <= EA; cnt<=cnt; --hold
elsif AB = "10" then EP <= EB; --cw
if cnt = 36 then cnt <= 36;
elsif cnt < 36 then cnt <= cnt + 1;
else cnt <= cnt;
end if;

elsif AB = "01" then EP <= ED; --ccw
if cnt = 0 then cnt <= 0;

elsif cnt > 0 then cnt <= cnt - 1;
else cnt <= cnt;
end if;

end if;
when EB => cnt <= cnt; --hold
if AB = "10" then EP <= EB;
elsif AB = "11" then EP <= EC;
elsif AB = "00" then EP <= EA;
end if;
when EC =>
if AB = "11" then EP <= EC; cnt<=cnt; --hold
elsif AB = "01" then EP <= ED; --cw
if cnt = 36 then cnt <= 36;
elsif cnt < 36 then cnt <= cnt + 1;
else cnt <= cnt;
end if;

elsif AB = "10" then EP <= EB; --ccw
if cnt = 0 then cnt <= 0;
elsif cnt > 0 then cnt <= cnt - 1;
else cnt <= cnt;
end if;

end if;
when ED => cnt <= cnt; --hold
if AB = "01" then EP <= ED;
elsif AB = "00" then EP <= EA;
elsif AB = "11" then EP <= EC;
end if;
when others => null;
end case;
end if;
end process FSM;
ModulPulso: --proceso que genera el pulso de salida e indica en el display un valor
process(clk,servo)
begin
if rising_edge(clk) then cntPWM <= cntPWM + 1; --contador de 1 a 500,000
high <= min + ((cnt)*(inc));
if cntPWM <= high then servo <= '1';
else servo <= '0';
end if;
case cnt is --orden: abcdefgP-ánodo común, contador = salida a leds
when 0 => contador <= x"00"; -- 0 al display
when 1 => contador <= x"05"; -- 5 al display
when 2 => contador <= x"0A"; -- 10 al display
when 3 => contador <= x"0F"; -- 15 al display
when 4 => contador <= x"14"; -- 20 al display
when 5 => contador <= x"19"; -- 25 al display
when 6 => contador <= x"1E"; -- 30 al display
when 7 => contador <= x"23"; -- 35 al display
when 8 => contador <= x"28"; -- 40 al display
when 9 => contador <= x"2D"; -- 45 al display
when 10 => contador <= x"32"; -- 50 al display
when 11 => contador <= x"37"; -- 55 al display
when 12 => contador <= x"3C"; --60 al display
when 13 => contador <= x"41"; -- 65 al display
when 14 => contador <= x"46"; -- 70 al display
when 15 => contador <= x"4B"; -- 75 al display
when 16 => contador <= x"50"; -- 80 al display
when 17 => contador <= x"55"; -- 85 al display
when 18 => contador <= x"5A"; -- 90 al display
when 19 => contador <= x"5F"; -- 95 al display
when 20 => contador <= x"64"; -- 100 al display
when 21 => contador <= x"69"; -- 105. al display
when 22 => contador <= x"6E"; -- 110 al display
when 23 => contador <= x"73"; -- 115 al display
when 24 => contador <= x"78"; -- 120. al display
when 25 => contador <= x"7D"; -- 125. al display
when 26 => contador <= x"82"; -- 130. al display
when 27 => contador <= x"87"; -- 135 al display
when 28 => contador <= x"8C"; -- 140 al display
when 29 => contador <= x"91"; -- 145 al display
when 30 => contador <= x"96"; -- 150 al display
when 31 => contador <= x"9B"; -- 155 al display
when 32 => contador <= x"A0"; -- 160 al display
when 33 => contador <= x"A5"; -- 165 al display
when 34 => contador <= x"AA"; -- 170 al display
when 35 => contador <= x"AF"; -- 175 al display
when 36 => contador <= x"B4"; -- 180 al display
end case;
end if;
servomotor <= servo; --salida de la señal PWM hacia el servomotor
servoLED <= servo; --salida de la señal PWM del led testigo
end process ModulPulso; -- fin del proceso
end encoder; -- fin de la arquitectura
--------------------------------------------------------------------------------------------------
