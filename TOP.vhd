library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.std_logic_arith.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
entity TOP is
    Port ( CLK : in  STD_LOGIC;--
           RST : in  STD_LOGIC;--
           SW : in  STD_LOGIC_VECTOR (1 downto 0);--
           SDI : in  STD_LOGIC;--
           SDO : out  STD_LOGIC;--
           SCLK : out  STD_LOGIC;--
           SS : out  STD_LOGIC;--
           AN : out  STD_LOGIC_VECTOR (7 downto 0);--
           SEG : out  STD_LOGIC_VECTOR (6 downto 0);--
           DOT : out  STD_LOGIC;--punto--
           LED : out  STD_LOGIC_VECTOR (2 downto 0);--
			  SERVO1 : out STD_LOGIC;--
			  SERVO2 : out STD_LOGIC;--
			  SERVO3 : out STD_LOGIC;--
			  SERVO4 : out STD_LOGIC;--
			  E : out STD_LOGIC;--
			  RW : OUT STD_LOGIC;--
			  RS : out STD_LOGIC;--
			  DATA : out std_logic_vector(7 downto 0);--
			  LOSE : out STD_LOGIC;--
			  MUSIC: out STD_LOGIC;--
			  SENSOR: in STD_LOGIC;--
			  START : in STD_LOGIC;--
			  LEDS : out STD_LOGIC;
			  SWMUSIC : in STD_LOGIC;--
			  WIN : out STD_LOGIC;--
			  pause : in STD_LOGIC
);
end TOP;

architecture Behavioral of TOP is
-----------------------COMPONENTES-----------------------------
component PmodACL_Demo Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           SW : in  STD_LOGIC_VECTOR (1 downto 0);
           SDI : in  STD_LOGIC;
           SDO : out  STD_LOGIC;
           SCLK : out  STD_LOGIC;
           SS : out  STD_LOGIC;
           AN : out  STD_LOGIC_VECTOR (7 downto 0);
           SEG : out  STD_LOGIC_VECTOR (6 downto 0);
           DOT : out  STD_LOGIC;--punto
           LED : out  STD_LOGIC_VECTOR (2 downto 0);
			  datosx : out STD_logic_vector (15 downto 0);
			  datosy : out STD_logic_vector (15 downto 0)
			  );
end component;

component texto_fijo port(
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
end component;

component contador_segundos_minutos port (
        clk_50mhz : in std_logic;
        reset : in std_logic;
        enable : in std_logic;
        segundos_out : out STD_LOGIC_VECTOR(5 downto 0);
		  minutos_out : out STD_LOGIC_VECTOR(5 downto 0)
    );
end component;

component NumberToASCII port (
        number : in std_logic_vector(3 downto 0);
        ascii  : out std_logic_vector(7 downto 0)
    );
end component;


component shift_add3 Port ( num1 : in  STD_LOGIC_VECTOR (5 downto 0);
           UNI : out  STD_LOGIC_VECTOR (3 downto 0);
           DEC : out  STD_LOGIC_VECTOR (3 downto 0);
           CEN : out  STD_LOGIC_VECTOR (3 downto 0);
           MIL : out  STD_LOGIC_VECTOR (3 downto 0));
end component;

component Npwm port (
    clk : in std_logic;        -- clock
    posicion : in std_logic_vector(15 downto 0);  -- reset
    servo : out std_logic
  );
end component;

component pwmp port (
    clk : in std_logic;        -- clock
    posicion : in std_logic_vector(15 downto 0);  -- reset
    servo : out std_logic
  );
end component;

-------------------------SEÑALES--------------------------------

signal x : STD_LOGIC_VECTOR(15 downto 0);	
signal y : STD_LOGIC_VECTOR(15 downto 0);
	
signal segundos: STD_LOGIC_VECTOR(5 dowNTO 0);
signal minutos: STD_LOGIC_VECTOR(5 downto 0);
signal Useg: STD_LOGIC_VECTOR(3 downto 0);
signal Dseg: STD_LOGIC_VECTOR(3 downto 0);
signal Umin: STD_LOGIC_VECTOR(3 downto 0);
signal Dmin: STD_LOGIC_VECTOR(3 downto 0);
signal USascii: std_logic_vector(7 downto 0);
signal DSascii: std_logic_vector(7 downto 0);
signal UMascii: std_logic_vector(7 downto 0);
signal DMascii: std_logic_vector(7 downto 0);
begin

-- Instancia del componente PmodACL_Demo
    controlACL : PmodACL_Demo
    port map (
        CLK => CLK,
        RST => RST,
        SW => SW,
        SDI => SDI,
        SDO => SDO,
        SCLK => SCLK,
        SS => SS,
        AN => AN,
        SEG => SEG,
        DOT => DOT,
        LED => LED,
		  datosx => x, 
		  datosy =>y

    );
	 
	 LCD : texto_fijo 
	 port map(
	--Entradas
	clk => clk, --Reloj interno de la FPGA
	reset => RST,
	asciiU => USascii,
	asciiD => DSascii,
	asciiC => UMascii,

	--Salidas
	rs => RS,
	rw => RW,
	enable => E,
	data=> DATA
);

	Segundero : contador_segundos_minutos 
	 port map(
	--Entradas
	clk_50mhz => clk, --Reloj interno de la FPGA
	reset => RST,
	enable =>START,
	--Salidas
	segundos_out => segundos,
	minutos_out => minutos
);

  ShiftSeg : shift_add3
  port map (
	num1 => segundos,
	UNI => Useg,
	DEC => Dseg
  );
  
  ShiftMin : shift_add3
  port map (
	num1 => minutos,
	UNI => Umin,
	DEC => Dmin
  );
  
  Usegundos : NumberToASCII
  port map(
	number => Useg,
	ascii => USascii
  );
  
  Dsegundos : NumberToASCII
  port map(
	number => Dseg,
	ascii => DSascii
  );
  
  Uminutos : NumberToASCII
  port map(
	number => Umin,
	ascii => UMascii
  );
  
  Dminutos : NumberToASCII
  port map(
	number => Dmin,
	ascii => DMascii
  );

	pwmx : Npwm
	port map(
	clk => CLK,
	posicion => x,
	servo => servo1
	);
	
		pwmy : Npwm
	port map(
	clk => CLK,
	posicion => y,
	servo => servo2
	);

	pwmpx : PWMP
	port map(
	clk => CLK,
	posicion => x,
	servo => servo3
	);
	
	pwmpy : PWMP
	port map(
	clk => CLK,
	posicion => y,
	servo => servo4
	);



end Behavioral;


