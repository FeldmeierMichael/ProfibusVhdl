--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;
use Ieee.numeric_std.all;

package Profibus_Constants is

constant sd1_c:std_logic_vector(7 downto 0):=x"10" ;
constant sd2_c:std_logic_vector(7 downto 0):=x"68" ;
constant sd3_c:std_logic_vector(7 downto 0):=x"A2" ;
constant sd4_c:std_logic_vector(7 downto 0):=x"DC" ;
constant ed_c:std_logic_vector(7 downto 0):=x"16" ;
constant sc_c:std_logic_vector(7 downto 0):=x"E5" ;
constant diff_c:unsigned(31 downto 0):=x"000186A0" ;
type data_buffer is array(0 to 64) OF std_logic_vector(31 downto 0);

end Profibus_Constants;

package body Profibus_Constants is

---- Example 1
--  function <function_name>  (signal <signal_name> : in <type_declaration>  ) return <type_declaration> is
--    variable <variable_name>     : <type_declaration>;
--  begin
--    <variable_name> := <signal_name> xor <signal_name>;
--    return <variable_name>; 
--  end <function_name>;

---- Example 2
--  function <function_name>  (signal <signal_name> : in <type_declaration>;
--                         signal <signal_name>   : in <type_declaration>  ) return <type_declaration> is
--  begin
--    if (<signal_name> = '1') then
--      return <signal_name>;
--    else
--      return 'Z';
--    end if;
--  end <function_name>;

---- Procedure Example
--  procedure <procedure_name>  (<type_declaration> <constant_name>  : in <type_declaration>) is
--    
--  begin
--    
--  end <procedure_name>;
 
end Profibus_Constants;
