
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
use IEEE.std_logic_arith.all;
use IEEE.STD_LOGIC_UNSIGNED.ALL;


--  ===================================================================================
--  								Define Module, Inputs and Outputs
--  ===================================================================================
entity ssdCtrl is
    Port ( CLK : in  STD_LOGIC;
           RST : in  STD_LOGIC;
           DINx : in  STD_LOGIC_VECTOR (9 downto 0);
			  DINy : in  STD_LOGIC_VECTOR (9 downto 0);
           AN : out  STD_LOGIC_VECTOR (7 downto 0);
           SEG : out  STD_LOGIC_VECTOR (6 downto 0);
			  DOT : out STD_LOGIC;
			  bcdx: out STD_LOGIC_VECTOR(15 downto 0);
			  bcdy: out STD_LOGIC_VECTOR(15 downto 0)
			  
	 );
end ssdCtrl;

architecture Behavioral of ssdCtrl is

--  ===================================================================================
-- 							  				  Components
--  ===================================================================================

			component Format_Data Port (
					CLK : in  STD_LOGIC;
					DCLK : in STD_LOGIC;
					RST : in  STD_LOGIC;
					DIN : in  STD_LOGIC_VECTOR (8 downto 0);
					BCDOUT : out  STD_LOGIC_VECTOR (11 downto 0)
			);
			end component;

--  ===================================================================================
-- 							  			Signals and Constants
--  ===================================================================================

			-- 1 kHz Clock Divider
			constant cntEndVal : STD_LOGIC_VECTOR(15 downto 0) := X"C350";
			signal clkCount : STD_LOGIC_VECTOR(15 downto 0) := X"0000";
			signal DCLK : STD_LOGIC := '0';

			-- 2 Bit Counter
			signal CNT : STD_LOGIC_VECTOR(2 downto 0) := "000";

			-- Binary Data to BCD "g" value format x.xx
			signal bcdDatax : STD_LOGIC_VECTOR(15 downto 0) := X"0000";
			signal bcdDatay : STD_LOGIC_VECTOR(15 downto 0) := X"0000";

			-- Output Data Mux
			signal muxData : STD_LOGIC_VECTOR(3 downto 0);
			
--  ===================================================================================
-- 							  				Implementation
--  ===================================================================================
begin

			-- Assign minus sign if applicable
			bcdDatax(15 downto 12) <= (X"A") when DINx(9) = '0' else (X"F");
			bcdDatay(15 downto 12) <= (X"A") when DINy(9) = '0' else (X"F");
			-- Assign DOT when count is 2
--			DOT <= '1' when (CNT = "0100" or CNT ="0111") else '1';
			DOT <= '1';

		BCDX<=bcdDatax;
		BCDY<=bcdDatay;
			--------------------------------
			--		 	Format Data
			--------------------------------
			FDATAx : Format_Data port map (
						CLK => CLK,
						DCLK => DCLK,
						RST => RST,
						DIN => DINx(8 downto 0),
						BCDOUT => bcdDatax(11 downto 0)
			);
			FDATAy : Format_Data port map (
						CLK => CLK,
						DCLK => DCLK,
						RST => RST,
						DIN => DINy(8 downto 0),
						BCDOUT => bcdDatay(11 downto 0)
			);

			-------------------------------------------------
			--					 Output Data Mux
			-- 		Select data to display on SSD
			-------------------------------------------------
			process(CNT(1), CNT(0), bcdDatax,bcdDatay, RST) begin
					if(RST = '1') then
							muxData <= "0000";
					else
							case (CNT) is
									when "000" => muxData <= bcdDatax(3 downto 0);--unidad
									when "001" => muxData <= bcdDatax(7 downto 4);--decena
									when "010" => muxData <= bcdDatax(11 downto 8);--centena
									when "011" => muxData <= bcdDatax(15 downto 12);--signo
--									when "100" => muxData <= bcdDatay(3 downto 0);
--									when "101" => muxData <= bcdDatay(7 downto 4);
--									when "110" => muxData <= bcdDatay(11 downto 8);
--									when "111" => muxData <= bcdDatay(15 downto 12);
									when "100" => muxData <= bcdDatay(15 downto 12);
									when "101" => muxData <= bcdDatay(11 downto 8);
									when "110" => muxData <= bcdDatay(7 downto 4);
									when "111" => muxData <= bcdDatay(3 downto 0);
									when others => muxData <= "0000";
							end case;
					end if;
			end process;
			
			
			
			--------------------------------
			--		   Segment Decoder
			-- Determines cathode pattern
			--   to display digit on SSD
			--------------------------------
			process(DCLK, RST) begin
					if(RST = '1') then
							SEG <= "1000000";
					elsif rising_edge(DCLK) then
							case (muxData) is
				--signo(15:12)
				--
									when X"0" => SEG <= "1000000";  -- 0
									when X"1" => SEG <= "1111001";  -- 1
									when X"2" => SEG <= "0100100";  -- 2
									when X"3" => SEG <= "0110000";  -- 3
									when X"4" => SEG <= "0011001";  -- 4
									when X"5" => SEG <= "0010010";  -- 5
									when X"6" => SEG <= "0000010";  -- 6
									when X"7" => SEG <= "1111000";  -- 7
									when X"8" => SEG <= "0000000";  -- 8
									when X"9" => SEG <= "0010000";  -- 9
									when X"A" => SEG <= "0111111";  -- Minus
									when X"F" => SEG <= "1111111";  -- Off
									when others => SEG <= "1111111";
									
							end case;
					end if;
			end process;



			-----------------------------------
			--	  		  Anode Decoder
			--    Determines digit digit to
			--   illuminate for clock period
			-----------------------------------
			process(DCLK, RST) begin
					if(RST = '1') then
							AN <= "11111111";
					elsif rising_edge(DCLK) then
							case (CNT) is

									when "000" => AN <= "11111110";  -- 0
									when "001" => AN <= "11111101";  -- 1
									when "010" => AN <= "11111011";  -- 2
									when "011" => AN <= "11110111";  -- 3
									when "100" => AN <= "11101111";  -- 4
									when "101" => AN <= "11011111";  -- 5
									when "110" => AN <= "10111111";  -- 6
									when "111" => AN <= "01111111";  -- 7
									when others => AN <= "11111111";
									
							end case;
					end if;
			end process;
			

			--------------------------------
			--			2 Bit Counter
			--	 Used to select which digit
			--	  is being illuminated, and
			--	selects data to be displayed
			--------------------------------
			process(DCLK) begin

					if rising_edge(DCLK) then
							CNT <= CNT + 1;
					end if;
					
			end process;
			
			--------------------------------
			--			1khz Clock Divider
			--  Timing for refreshing the
			--  			 SSD, etc.
			--------------------------------
			process(CLK) begin

					if rising_edge(CLK) then
							if(clkCount = cntEndVal) then
									DCLK <= '1';
									clkCount <= X"0000";
							else
									DCLK <= '0';
									clkCount <= clkCount + 1;
							end if;
					end if;
					
			end process;

end Behavioral;

