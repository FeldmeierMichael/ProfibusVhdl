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
static const char *ng0 = "C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Profibus_UART/TB_Profibus_UART.vhd";



static void work_a_2939758615_2372691052_p_0(char *t0)
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

LAB2:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 5432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3568U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 4360);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 5432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);
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

static void work_a_2939758615_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int t8;
    int t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    int64 t19;

LAB0:    t1 = (t0 + 4800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 5496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(111, ng0);
    t7 = (5000 * 1000LL);
    t2 = (t0 + 4608);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 5496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(113, ng0);
    t2 = (t0 + 9652);
    *((int *)t2) = 0;
    t3 = (t0 + 9656);
    *((int *)t3) = 10;
    t8 = 0;
    t9 = 10;

LAB8:    if (t8 <= t9)
        goto LAB9;

LAB11:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 5560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(118, ng0);
    t7 = (100000 * 1000LL);
    t2 = (t0 + 4608);
    xsi_process_wait(t2, t7);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(114, ng0);
    t7 = (52083 * 1000LL);
    t4 = (t0 + 4608);
    xsi_process_wait(t4, t7);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 9652);
    t8 = *((int *)t2);
    t3 = (t0 + 9656);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB11;

LAB16:    t10 = (t8 + 1);
    t8 = t10;
    t4 = (t0 + 9652);
    *((int *)t4) = t8;
    goto LAB8;

LAB12:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 9652);
    t10 = *((int *)t2);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 10, 1, *((int *)t2));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t4 = (t3 + t14);
    t15 = *((unsigned char *)t4);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t16 = *((char **)t6);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t15;
    xsi_driver_first_trans_fast(t5);
    goto LAB10;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 5624);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t16 = *((char **)t6);
    memcpy(t16, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 5688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(122, ng0);
    t7 = (52083 * 1000LL);
    t19 = (20 * t7);
    t2 = (t0 + 4608);
    xsi_process_wait(t2, t19);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB21:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 5688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 9660);
    *((int *)t2) = 0;
    t3 = (t0 + 9664);
    *((int *)t3) = 10;
    t8 = 0;
    t9 = 10;

LAB25:    if (t8 <= t9)
        goto LAB26;

LAB28:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 5560);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(129, ng0);
    t7 = (100000 * 1000LL);
    t2 = (t0 + 4608);
    xsi_process_wait(t2, t7);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

LAB26:    xsi_set_current_line(125, ng0);
    t7 = (52083 * 1000LL);
    t4 = (t0 + 4608);
    xsi_process_wait(t4, t7);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB27:    t2 = (t0 + 9660);
    t8 = *((int *)t2);
    t3 = (t0 + 9664);
    t9 = *((int *)t3);
    if (t8 == t9)
        goto LAB28;

LAB33:    t10 = (t8 + 1);
    t8 = t10;
    t4 = (t0 + 9660);
    *((int *)t4) = t8;
    goto LAB25;

LAB29:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 9660);
    t10 = *((int *)t2);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 10, 1, *((int *)t2));
    t13 = (1U * t12);
    t14 = (0 + t13);
    t4 = (t3 + t14);
    t15 = *((unsigned char *)t4);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t16 = *((char **)t6);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t15;
    xsi_driver_first_trans_fast(t5);
    goto LAB27;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB34:    xsi_set_current_line(131, ng0);
    if ((unsigned char)0 == 0)
        goto LAB38;

LAB39:    goto LAB2;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    t2 = (t0 + 9668);
    xsi_report(t2, 19U, (unsigned char)3);
    goto LAB39;

}

static void work_a_2939758615_2372691052_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 5048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 5752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(136, ng0);
    t7 = (52083 * 1000LL);
    t8 = (t7 / 2);
    t2 = (t0 + 4856);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 5752);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(138, ng0);
    t7 = (52083 * 1000LL);
    t8 = (t7 / 2);
    t2 = (t0 + 4856);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}


extern void work_a_2939758615_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2939758615_2372691052_p_0,(void *)work_a_2939758615_2372691052_p_1,(void *)work_a_2939758615_2372691052_p_2};
	xsi_register_didat("work_a_2939758615_2372691052", "isim/TB_Profibus_UART_isim_beh.exe.sim/work/a_2939758615_2372691052.didat");
	xsi_register_executes(pe);
}
