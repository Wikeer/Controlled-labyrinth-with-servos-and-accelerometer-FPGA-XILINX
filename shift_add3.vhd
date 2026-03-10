library IEEE;
use ieee.std_logic_1164.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_unsigned.all;

entity shift_add3 is
    Port ( num1 : in  STD_LOGIC_VECTOR (5 downto 0);
           UNI : out  STD_LOGIC_VECTOR (3 downto 0);
           DEC : out  STD_LOGIC_VECTOR (3 downto 0);
           CEN : out  STD_LOGIC_VECTOR (3 downto 0);
           MIL : out  STD_LOGIC_VECTOR (3 downto 0));
end shift_add3;

architecture Behavioral of shift_add3 is
signal P: std_logic_vector (15 DOWNTO 0); -- asigna UNI, DEC,CEN, MIL
signal num: std_logic_vector (13 downto 0);
begin
num<= x"00" & num1;
	PROCESS(num)
	VARIABLE UM_C_D_U:STD_LOGIC_VECTOR(29 DOWNTO 0);
	--30 bits para separar las U.Millar-Centenas-Decenas-Unidades
	BEGIN
	--ciclo de inicialización
	FOR I IN 0 TO 29 LOOP --
		UM_C_D_U(I):='0'; -- se inicializa con 0
	END LOOP;

	UM_C_D_U(13 DOWNTO 0):=num(13 downto 0); --contador de 14 bits
	-- UM_C_D_U(17 DOWNTO 4):=CONT(13 downto 0); --contador de 14 bits, carga desde

	-- el shift4

	--ciclo de asignación UM-C-D-U
	FOR I IN 0 TO 13 LOOP
		-- FOR I IN 0 TO 9 LOOP -- si carga desde shift4 solo hace 10 veces el ciclo shift add
		-- los siguientes condicionantes comparan (>=5) y suman 3
		IF UM_C_D_U(17 DOWNTO 14) > 4 THEN -- U
			UM_C_D_U(17 DOWNTO 14):= UM_C_D_U(17 DOWNTO 14)+3;
		END IF;
		IF UM_C_D_U(21 DOWNTO 18) > 4 THEN -- D
			UM_C_D_U(21 DOWNTO 18):= UM_C_D_U(21 DOWNTO 18)+3;
		END IF;
		IF UM_C_D_U(25 DOWNTO 22) > 4 THEN -- C
			UM_C_D_U(25 DOWNTO 22):= UM_C_D_U(25 DOWNTO 22)+3;
		END IF;
		IF UM_C_D_U(29 DOWNTO 26) > 4 THEN -- UM
			UM_C_D_U(29 DOWNTO 26):= UM_C_D_U(29 DOWNTO 26)+3;
		END IF;
		-- realiza el corrimiento
		UM_C_D_U(29 DOWNTO 1):= UM_C_D_U(28 DOWNTO 0);
	END LOOP;
	P<=UM_C_D_U(29 DOWNTO 14); -- guarda en P y en seguida se separan UM-C-D-U
	
END PROCESS;

--UNIDADES
UNI<=P(3 DOWNTO 0);
--DECENAS
DEC<=P(7 DOWNTO 4);
--CENTENAS
CEN<=P(11 DOWNTO 8);
--MILLARES
MIL<=P(15 DOWNTO 12);

end Behavioral;
