/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Hardware_Tests_DidgilentSpartan6/Neuer Ordner/Profibus_HardwareTest/Hardware_Test.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0905794359_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t11;

LAB0:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 7592);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(164, ng0);
    t3 = (t0 + 6288U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (t5 > 10000000);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(169, ng0);
    t1 = (t0 + 7672);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 7736);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB6:    xsi_set_current_line(172, ng0);
    t1 = (t0 + 6288U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t11 = (t5 + 1);
    t1 = (t0 + 6288U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t11;
    goto LAB3;

LAB5:    xsi_set_current_line(165, ng0);
    t3 = (t0 + 7672);
    t7 = (t3 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(166, ng0);
    t1 = (t0 + 7736);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(167, ng0);
    t1 = (t0 + 6288U);
    t3 = *((char **)t1);
    t1 = (t3 + 0);
    *((int *)t1) = 0;
    goto LAB6;

}


extern void work_a_0905794359_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0905794359_3212880686_p_0};
	xsi_register_didat("work_a_0905794359_3212880686", "isim/TB_hardware_test_isim_beh.exe.sim/work/a_0905794359_3212880686.didat");
	xsi_register_executes(pe);
}
