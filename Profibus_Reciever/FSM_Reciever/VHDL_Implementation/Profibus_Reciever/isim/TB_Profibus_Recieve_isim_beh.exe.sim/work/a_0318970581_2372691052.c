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
static const char *ng0 = "C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Profibus_Reciever/FSM_Reciever/VHDL_Implementation/Profibus_Reciever/TB_Profibus_Recieve.vhd";



static void work_a_0318970581_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4552U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4360);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4360);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_0318970581_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int64 t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 11192);
    *((int *)t2) = 0;
    t3 = (t0 + 11196);
    *((int *)t3) = 5;
    t4 = 0;
    t5 = 5;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(129, ng0);
    t6 = (100 * 1000LL);
    t2 = (t0 + 4608);
    xsi_process_wait(t2, t6);

LAB19:    *((char **)t1) = &&LAB20;

LAB1:    return;
LAB5:    xsi_set_current_line(122, ng0);
    t6 = (50 * 1000LL);
    t7 = (t0 + 4608);
    xsi_process_wait(t7, t6);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 11192);
    t4 = *((int *)t2);
    t3 = (t0 + 11196);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB16:    t10 = (t4 + 1);
    t4 = t10;
    t7 = (t0 + 11192);
    *((int *)t7) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 5248);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 3112U);
    t3 = *((char **)t2);
    t2 = (t0 + 11192);
    t10 = *((int *)t2);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 5, 1, *((int *)t2));
    t13 = (8U * t12);
    t14 = (0 + t13);
    t7 = (t3 + t14);
    t8 = (t0 + 5312);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(125, ng0);
    t6 = (50 * 1000LL);
    t2 = (t0 + 4608);
    xsi_process_wait(t2, t6);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5248);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB6;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 11200);
    *((int *)t2) = 0;
    t3 = (t0 + 11204);
    *((int *)t3) = 10;
    t4 = 0;
    t5 = 10;

LAB21:    if (t4 <= t5)
        goto LAB22;

LAB24:    xsi_set_current_line(138, ng0);
    t6 = (100 * 1000LL);
    t2 = (t0 + 4608);
    xsi_process_wait(t2, t6);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB22:    xsi_set_current_line(131, ng0);
    t6 = (50 * 1000LL);
    t7 = (t0 + 4608);
    xsi_process_wait(t7, t6);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB23:    t2 = (t0 + 11200);
    t4 = *((int *)t2);
    t3 = (t0 + 11204);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB24;

LAB33:    t10 = (t4 + 1);
    t4 = t10;
    t7 = (t0 + 11200);
    *((int *)t7) = t4;
    goto LAB21;

LAB25:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 5248);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t0 + 11200);
    t10 = *((int *)t2);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 10, 1, *((int *)t2));
    t13 = (8U * t12);
    t14 = (0 + t13);
    t7 = (t3 + t14);
    t8 = (t0 + 5312);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(134, ng0);
    t6 = (50 * 1000LL);
    t2 = (t0 + 4608);
    xsi_process_wait(t2, t6);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

LAB29:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 5248);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB23;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB34:    xsi_set_current_line(141, ng0);
    if ((unsigned char)0 == 0)
        goto LAB38;

LAB39:    xsi_set_current_line(142, ng0);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    t2 = (t0 + 11208);
    xsi_report(t2, 19U, (unsigned char)3);
    goto LAB39;

LAB40:    goto LAB2;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

}


extern void work_a_0318970581_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0318970581_2372691052_p_0,(void *)work_a_0318970581_2372691052_p_1};
	xsi_register_didat("work_a_0318970581_2372691052", "isim/TB_Profibus_Recieve_isim_beh.exe.sim/work/a_0318970581_2372691052.didat");
	xsi_register_executes(pe);
}
