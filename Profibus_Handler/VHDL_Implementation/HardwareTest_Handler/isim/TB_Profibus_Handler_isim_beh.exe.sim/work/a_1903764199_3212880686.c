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
static const char *ng0 = "C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Profibus_Handler/VHDL_Implementation/Profibus_Handler/Read_Write.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1903764199_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    static char *nl0[] = {&&LAB8, &&LAB9};

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3792);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3872);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 3936);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 4000);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 4064);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 4000);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB7:    goto LAB3;

LAB8:    xsi_set_current_line(57, ng0);
    t5 = (t0 + 1032U);
    t6 = *((char **)t5);
    t10 = *((unsigned char *)t6);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB14;

LAB15:    t4 = (unsigned char)0;

LAB16:    if (t4 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB7;

LAB9:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)2);
    if (t10 == 1)
        goto LAB20;

LAB21:    t3 = (unsigned char)0;

LAB22:    if (t3 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB7;

LAB10:    goto LAB7;

LAB11:    xsi_set_current_line(57, ng0);
    t5 = (t0 + 4064);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)1;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 3872);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 3936);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB12;

LAB14:    t5 = (t0 + 1352U);
    t7 = *((char **)t5);
    t12 = *((unsigned char *)t7);
    t13 = (t12 == (unsigned char)3);
    t4 = t13;
    goto LAB16;

LAB17:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4064);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3872);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3936);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB18;

LAB20:    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t3 = t12;
    goto LAB22;

}


extern void work_a_1903764199_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1903764199_3212880686_p_0};
	xsi_register_didat("work_a_1903764199_3212880686", "isim/TB_Profibus_Handler_isim_beh.exe.sim/work/a_1903764199_3212880686.didat");
	xsi_register_executes(pe);
}
