--Codigo ASCII controlado por switches en LCD
--Falta actualizar datos
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity texto_fijo is port(
	--Entradas
	clk: in std_logic; --Reloj interno de la FPGA
	reset: in std_logic;
	asciiU: in std_logic_vector (7 downto 0); --Vector de 6 bits para introducir ascii desde switches
	asciiD: in std_logic_vector (7 downto 0); --Vector de 6 bits para introducir ascii desde switches
	asciiC: in std_logic_vector (7 downto 0); --Vector de 6 bits para introducir ascii desde switches

	--Salidas
	rs: out std_logic;
	rw: out std_logic;
	enable: out std_logic;
	data: out std_logic_vector(7 downto 0)
);
end texto_fijo;
architecture texto_fijo_arc of texto_fijo is

--Contadores y reloj ajustado
signal contador_reloj: integer range 1 to 100:=1;
signal contador_aux: integer range 1 to 100_000:=1;
signal reloj_ajustado: std_logic;

--Posibles estados de la LCD
type estados_lcd is(
	--Inicializacion
	function_set, --Establecer fuente utilizada, cantidad de renglones a ocupar y bits del bus de datos
	display_ctrl_set, --Configura cursor y estado de leds de retroiluminacion
	display_clear, --Limpiar pantalla
	--Generan delays para los estados
	power_delay,
	function_set_delay,
	display_ctrl_set_delay,
	display_clear_delay,
	--Mostrar caracteres y ejecturar operaciones estandar para la escritura
	init_done, --Inicializacion terminada
	write_char, --Escribe los caracteres en la pantalla
	char_delay --delay entre operaciones de escritura
	--Estados para la actualizacion de datos ascii 
	--write_char_ascii;
	--char_delay_ascii;
);

--Estado actual y futuro para comparacion de datos
signal estado_actual: estados_lcd:=power_delay;
signal estado_futuro: estados_lcd;

--Herramientas de delay
signal bandera_delay: std_logic;
type caracteres is array(integer range <>) of std_logic_vector(9 downto 0);
signal bandera_write: std_logic;
constant LCD_Texto: caracteres:=( --Texto que escribe "CODIGO ASCII" en la primera fila
	--Primeros dos bits controlan RS y RW, salida hexadecimal corresponde al bus de datos
	--Inicializacion de pantalla
	0 => "00"&x"3C",--Function set
	1 => "00"&x"0C",--Encender display, desactivar parpadeo y cursor
	2 => "00"&x"01",--Limpiar display
	3 => "00"&x"02",--Regresar a posicion (0,0) de la matriz
	--Caracteres a escribir, con respecto a la tabla ASCII para la LCD
	--Primera linea
	4 => "10"&x"45", --=> E
5 => "10"&x"6C", --=> --l
6 => "10"&x"20", --=> --(espacio)
7 => "10"&x"6C", --=> --l
8 => "10"&x"61", --=> --a
9 => "10"&x"62", --=> --b
10 => "10"&x"65", --=> --e
11 => "10"&x"72", --=> --r
12 => "10"&x"69", --=> --i
13 => "10"&x"6E", --=> --n
14 => "10"&x"74", --=> --t
15 => "10"&x"6F", --=> --o
16 => "10"&x"20", --=> --(espacio)
17 => "10"&x"3A", --=> --:
	--Instrucciones para caer en segunda linea
	18 => "00"&x"02"--Regresar a 0,0
);

signal caracteres_signal: integer range 0 to LCD_Texto'high+1:=0;
signal caracteres_ascii: integer range 0 to 4:=0;
signal bandera_ascii: std_logic:='0';

begin
	
	--Divisor de frecuencia de 50Mhz a 1Mhz (1us)
	process(clk)begin
		if(rising_edge(clk))then
			if(contador_reloj=50)then
				contador_reloj<=1;
				reloj_ajustado<=not(reloj_ajustado);
			else
				contador_reloj<=contador_reloj+1;
			end if;
		end if;
	end process;
	
	--Conteo hasta que bandera de delay indique lo contrario
	process(reloj_ajustado, bandera_delay)begin
		if(rising_edge(reloj_ajustado))then
			if(bandera_delay='1')then
				contador_aux<=1;
			else
				contador_aux<=contador_aux+1;
			end if;
		end if;
	end process;
	
	--Determinar si la escritura inicial fue realizada
	bandera_write<='1' when (caracteres_signal=LCD_TExto'high)
	else '0';
	
	--Determinar si el conteo (para ocupar un determinado tiempo) es adecuado segun la instruccion y estado en la LCD
	process(estado_actual, contador_aux, bandera_delay)begin
		case(estado_actual) is
			when(power_delay) => --20ms
				if(contador_aux=20_000) then
					bandera_delay<='1';
				else
					bandera_delay<='0';
				end if;
			when(function_set_delay) => --40us
				if(contador_aux=40) then
					bandera_delay<='1';
				else
					bandera_delay<='0';
				end if;
			when(display_ctrl_set_delay) => --40us
				if(contador_aux=40) then
					bandera_delay<='1';
				else
					bandera_delay<='0';
				end if;
			when(display_clear_delay) => --1.6ms
				if(contador_aux=1_600) then
					bandera_delay<='1';
				else
					bandera_delay<='0';
				end if;
			when(char_delay) => --2.6ms
				if(contador_aux=2_600) then
					bandera_delay<='1';
				else
					bandera_delay<='0';
				end if;
			when others => 
				bandera_delay <='0';
		end case;
		end process;
		
		--Incremento de caracteres_signal
		bandera_write <= '1' when (caracteres_signal = LCD_texto'HIGH)
		else '0';
		
		--Corrimiento de los estados de la LCD
		process(reloj_ajustado, estado_actual, reset)begin
			if(rising_edge(reloj_ajustado))then
				if(reset='1')then
					estado_actual<=power_delay;
				else
					estado_actual<=estado_futuro;
				end if;
			end if;
		end process;
		
		--Incrementa el puntero para ejecutar los comandos en el orden establecido
		process(reloj_ajustado, caracteres_signal, caracteres_ascii)begin
			if(rising_edge(reloj_ajustado))then
				if((estado_futuro=init_done or estado_futuro=display_ctrl_set or estado_futuro=display_clear) and bandera_write='0')then
					caracteres_signal<=caracteres_signal+1; --Incrementa en secuencias distintas de encendido
				elsif(estado_actual=power_delay or estado_futuro=power_delay)then
					caracteres_signal<=0; --Manda a 0 en secuencias de encendido
				elsif((estado_futuro=init_done or estado_futuro=display_ctrl_set or estado_futuro=display_clear) and bandera_write='1')then
					caracteres_ascii<=caracteres_ascii+1;
				else
					caracteres_signal<=caracteres_signal; --Mantiene su valor
				end if;
			end if;
		end process;
		
		
		--Secuencia de estados de la LCD
		process(estado_actual, estado_futuro, bandera_write, caracteres_signal, bandera_delay)begin
				case(estado_actual) is
					--Inicializacion
					when power_delay =>
						if(bandera_delay='1') then
							estado_futuro<=function_set;
						else
							estado_futuro<=power_delay;
						end if;
					when function_set =>
						estado_futuro<=function_set_delay;
					when function_set_delay =>
						if(bandera_delay='1') then
							estado_futuro<=display_ctrl_set;
						else
							estado_futuro<=function_set_delay;
						end if;
					when display_ctrl_set =>
						estado_futuro<=display_ctrl_set_delay;
					when display_ctrl_set_delay =>
						if(bandera_delay='1') then
							estado_futuro<=display_clear;
						else
							estado_futuro<=display_ctrl_set_delay;
						end if;
					when display_clear =>
						estado_futuro<=display_clear_delay;
					when display_clear_delay =>
						if(bandera_delay='1') then
							estado_futuro<=init_done;
						else
							estado_futuro<=display_clear_delay;
						end if;
					--Inicializacion terminada
					when init_done =>
						estado_futuro<=write_char;
					when write_char =>
						estado_futuro<=char_delay;
					when char_delay =>
						if(bandera_delay='1')then
							estado_futuro<=init_done;
						else
							estado_futuro<=char_delay;
						end if;
				end case;
		end process;
		
		--Asignar valores RW, RS, enable y a bus de datos segun la logica trabajada
		process(bandera_write,asciiC,asciiD,asciiU,reloj_ajustado,caracteres_signal,caracteres_ascii)
		variable LCD_ascii: caracteres:=(
						0 => "00"&x"C0",--Ir a fila 2 columna 1
						1 => "10"&asciiC,
						2 => "10"&x"3A",
						3 => "10"&asciiD,
						4 => "10"&asciiU
--						4 => "10"&X"DF"
					);
		begin
			if(bandera_write='0')then
				--Escribir primera linea de texto
				data<=LCD_texto(caracteres_signal)(7 downto 0);
				rs<=LCD_texto(caracteres_signal)(9);
				rw<=LCD_texto(caracteres_signal)(8);
			else
				--Escribir codigo ascii
				if(rising_edge(reloj_ajustado))then
					LCD_ascii(1):="10"&asciiC;
					LCD_ascii(2):="10"&x"3A";
					LCD_ascii(3):="10"&asciiD;
					LCD_ascii(4):="10"&asciiU;
--					LCD_ascii(4):="10"&X"1A";
					LCD_ascii:=(
						0 => "00"&x"C0",--Ir a fila 2 columna 1
						1 => "10"&asciiC,
						2 => "10"&x"3A",
						3 => "10"&asciiD,
						4 => "10"&asciiU
--						4 => "10"&X"DF"
					);
					data<=LCD_ascii(caracteres_ascii)(7 downto 0);
					rs<=LCD_ascii(caracteres_ascii)(9);
					rw<=LCD_ascii(caracteres_ascii)(8);
				end if;
			end if;
		end process;
		
		process(estado_actual)begin
			if(estado_actual=function_set or estado_actual=display_ctrl_set or estado_actual=display_clear or estado_actual=write_char) then
			enable<='1';
		else
			enable<='0';
		end if;
	end process;
	
end texto_fijo_arc;
