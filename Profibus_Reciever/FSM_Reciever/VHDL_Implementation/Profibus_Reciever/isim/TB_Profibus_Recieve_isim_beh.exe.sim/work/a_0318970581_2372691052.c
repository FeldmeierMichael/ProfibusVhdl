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

LAB0:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3240);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 4064);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2448U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3240);
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

LAB0:    t1 = (t0 + 3680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 8528);
    *((int *)t2) = 0;
    t3 = (t0 + 8532);
    *((int *)t3) = 5;
    t4 = 0;
    t5 = 5;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(106, ng0);
    if ((unsigned char)0 == 0)
        goto LAB17;

LAB18:    xsi_set_current_line(107, ng0);

LAB21:    *((char **)t1) = &&LAB22;

LAB1:    return;
LAB5:    xsi_set_current_line(99, ng0);
    t6 = (50 * 1000LL);
    t7 = (t0 + 3488);
    xsi_process_wait(t7, t6);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 8528);
    t4 = *((int *)t2);
    t3 = (t0 + 8532);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB16:    t10 = (t4 + 1);
    t4 = t10;
    t7 = (t0 + 8528);
    *((int *)t7) = t4;
    goto LAB4;

LAB8:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 4128);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 8528);
    t10 = *((int *)t2);
    t11 = (t10 - 0);
    t12 = (t11 * 1);
    xsi_vhdl_check_range_of_index(0, 5, 1, *((int *)t2));
    t13 = (8U * t12);
    t14 = (0 + t13);
    t7 = (t3 + t14);
    t8 = (t0 + 4192);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(102, ng0);
    t6 = (50 * 1000LL);
    t2 = (t0 + 3488);
    xsi_process_wait(t2, t6);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 4128);
    t3 = (t2 + 56U);
    t7 = *((char **)t3);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB6;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    t2 = (t0 + 8536);
    xsi_report(t2, 19U, (unsigned char)3);
    goto LAB18;

LAB19:    goto LAB2;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

}


extern void work_a_0318970581_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0318970581_2372691052_p_0,(void *)work_a_0318970581_2372691052_p_1};
	xsi_register_didat("work_a_0318970581_2372691052", "isim/TB_Profibus_Recieve_isim_beh.exe.sim/work/a_0318970581_2372691052.didat");
	xsi_register_executes(pe);
}
