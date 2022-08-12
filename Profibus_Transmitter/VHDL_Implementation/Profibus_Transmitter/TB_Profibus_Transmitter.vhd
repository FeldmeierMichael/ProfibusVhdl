--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:32:17 08/07/2022
-- Design Name:   
-- Module Name:   C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Profibus_Transmitter/VHDL_Implementation/Profibus_Transmitter/TB_Profibus_Transmitter.vhd
-- Project Name:  Profibus_Transmitter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: Profibus_Transmitter
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TB_Profibus_Transmitter IS
END TB_Profibus_Transmitter;
 
ARCHITECTURE behavior OF TB_Profibus_Transmitter IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT Profibus_Transmitter
    PORT(
         send_Telegram : IN  std_logic;
         type_i : IN  std_logic_vector(7 downto 0);
         DA : IN  std_logic_vector(7 downto 0);
         SA : IN  std_logic_vector(7 downto 0);
         FC : IN  std_logic_vector(7 downto 0);
         PDU_in : IN  std_logic_vector(7 downto 0);
         PDU_count : IN  std_logic_vector(7 downto 0);
         PDU_RAM_en : IN  std_logic;
         LE_i : IN  std_logic_vector(7 downto 0);
         tx_busy : IN  std_logic;
         reset : IN  std_logic;
         clk : IN  std_logic;
         telegram_busy : OUT  std_logic;
         send : OUT  std_logic;
         dataout : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal send_Telegram : std_logic := '0';
   signal type_i : std_logic_vector(7 downto 0) := (others => '0');
   signal DA : std_logic_vector(7 downto 0) := (others => '0');
   signal SA : std_logic_vector(7 downto 0) := (others => '0');
   signal FC : std_logic_vector(7 downto 0) := (others => '0');
   signal PDU_in : std_logic_vector(7 downto 0) := (others => '0');
   signal PDU_count : std_logic_vector(7 downto 0) := (others => '0');
   signal PDU_RAM_en : std_logic := '0';
   signal LE_i : std_logic_vector(7 downto 0) := (others => '0');
   signal tx_busy : std_logic := '0';
   signal reset : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal telegram_busy : std_logic;
   signal send : std_logic;
   signal dataout : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: Profibus_Transmitter PORT MAP (
          send_Telegram => send_Telegram,
          type_i => type_i,
          DA => DA,
          SA => SA,
          FC => FC,
          PDU_in => PDU_in,
          PDU_count => PDU_count,
          PDU_RAM_en => PDU_RAM_en,
          LE_i => LE_i,
          tx_busy => tx_busy,
          reset => reset,
          clk => clk,
          telegram_busy => telegram_busy,
          send => send,
          dataout => dataout
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 80 ns;
		-- SD1 Telegram
		send_Telegram<='1';
		type_i<=x"00";
		DA<=x"01";
		SA<=x"02";
		FC<=x"03";		
      wait until telegram_busy='0';
		send_Telegram<='0';
      wait for 80 ns;
		--SD2 Telegram
		send_Telegram<='1';
		type_i<=x"01";
		le_i<=x"05";
		wait until telegram_busy='0';
		send_Telegram<='0';
      wait for 80 ns;
		--SD3 Telegram
		type_i<=x"02";
		send_Telegram<='1';
		wait until telegram_busy='0';
		send_Telegram<='0';
      wait for 80 ns;
		--SD4 Telegram
		type_i<=x"03";
		send_Telegram<='1';
		wait until telegram_busy='0';
		send_Telegram<='0';
		wait for 80 ns;
		--SC Telegram
		type_i<=x"04";
		send_Telegram<='1';
		wait until telegram_busy='0';
		send_Telegram<='0';
		wait for 80 ns;
      assert false severity failure;
   end process;
	
	clk_process2 :process
   begin
		tx_busy <= '0';
		wait for 572916 ns;
		tx_busy<= '1';
		wait for 572916 ns;
   end process;
END;
