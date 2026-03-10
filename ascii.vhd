library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity NumberToASCII is
    port (
        number : in std_logic_vector(3 downto 0);
        ascii  : out std_logic_vector(7 downto 0)
    );
end NumberToASCII;

architecture Behavioral of NumberToASCII is
begin
    process(number)
    begin
        case number is
				  when x"0"    => ascii <= x"30";  -- ASCII para el número 0 en hexadecimal
				  when x"1"    => ascii <= x"31";  -- ASCII para el número 1 en hexadecimal
				  when x"2"    => ascii <= x"32";  -- ASCII para el número 2 en hexadecimal
				  when x"3"    => ascii <= x"33";  -- ASCII para el número 3 en hexadecimal
				  when x"4"    => ascii <= x"34";  -- ASCII para el número 4 en hexadecimal
				  when x"5"    => ascii <= x"35";  -- ASCII para el número 5 en hexadecimal
				  when x"6"    => ascii <= x"36";  -- ASCII para el número 6 en hexadecimal
				  when x"7"    => ascii <= x"37";  -- ASCII para el número 7 en hexadecimal
				  when x"8"    => ascii <= x"38";  -- ASCII para el número 8 en hexadecimal
				  when x"9"    => ascii <= x"39";  -- ASCII para el número 9 en hexadecimal
				  -- otros casos
				  when others => ascii <= x"00"; -- manejo de otros casos (opcional)
		  end case;
    end process;
end Behavioral;
