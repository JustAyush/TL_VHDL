----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:12:39 08/08/2018 
-- Design Name: 
-- Module Name:    Light - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.ALL; 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Light is
	 port (clk: in STD_LOGIC;
			clr: in STD_LOGIC;
			lights: out STD_LOGIC_VECTOR(11 downto 0)
			); 
end Light;

architecture Behavioral of Light is
	type state_type is (s0, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10, s11);
	signal state: state_type; 
	signal count: STD_LOGIC_VECTOR(3 downto 0);
	constant SEC5: STD_LOGIC_VECTOR(3 downto 0) := "1111";
	constant SEC1: STD_LOGIC_VECTOR(3 downto 0) := "0011"; 

begin
	process(clk, clr)
		begin
		 if clr = '1' then
			state <= s0;
			count <= X"0";
		 elsif clk'event and clk = '1' then
			case state is
				when s0 =>
					if count < SEC5 then
						state <= s0;
						count <= count + 1;
					else
						state <= s1;
						count <= X"0";
					end if;
				when s1 =>
					if count < SEC1 then
						state <= s1;
						count <= count + 1;
					else
						state <= s2;
						count <= X"0";
						end if;
				when s2 =>
					if count < SEC1 then
						 state <= s2;
						 count <= count + 1;
					else
						 state <= s3;
						 count <= X"0";
					end if; 
				when s3 =>
					if count < SEC5 then
						 state <= s3;
						 count <= count + 1;
					else
						 state <= s4;
						 count <= X"0";
					end if;
				when s4 =>
					if count < SEC1 then
						state <= s4;
						count <= count + 1;
					else
						state <= s5;
						count <= X"0";
					end if;
				when s5 =>
					if count < SEC1 then
						state <= s5;
						count <= count + 1;
					else
						state <= s6;
						count <= X"0";
					end if;
				when s6 =>
					if count < SEC5 then
						state <= s6;
						count <= count + 1;
					else
						state <= s7;
						count <= X"0";
					end if;
				when s7 =>
					if count < SEC1 then
						state <= s7;
						count <= count + 1;
					else
						state <= s8;
						count <= X"0";
					end if;
				when s8 =>
					if count < SEC1 then
						state <= s8;
						count <= count + 1;
					else
						state <= s9;
						count <= X"0";
					end if;
				when s9 =>
					if count < SEC5 then
						state <= s9;
						count <= count + 1;
					else
						state <= s10;
						count <= X"0";
					end if;
				when s10 =>
					if count < SEC1 then
						state <= s10;
						count <= count + 1;
					else
						state <= s11;
						count <= X"0";
					end if;
				when s11 =>
					if count < SEC1 then
						state <= s11;
						count <= count + 1;
					else
						state <= s0;
						count <= X"0";
					end if;
				when others =>
					state <= s0;
				end case;
		 end if;
	end process; 
	
	C2: process(state)
	begin
		case state is
			 when s0 => lights <= "100001100001"; --RedYellowGreen  S-N E-W N-S N-E
			 when s1 => lights <= "100001100010"; --
			 when s2 => lights <= "100010001100"; --
			 when s3 => lights <= "001100001100";       --
			 when s4 => lights <= "001100010100";       --
			 when s5 => lights <= "010001100100"; 
			 when s6 => lights <= "100001100001"; 
			 when s7 => lights <= "100010100001"; 
			 when s8 => lights <= "001100100010"; 
			 when s9 => lights <= "001100001100"; 
			 when s10 => lights <= "010100001100"; 
			 when s11 => lights <= "100100010001";  
			 when others => lights <= "100001100001";   --
		end case;
end process; 

end Behavioral;

