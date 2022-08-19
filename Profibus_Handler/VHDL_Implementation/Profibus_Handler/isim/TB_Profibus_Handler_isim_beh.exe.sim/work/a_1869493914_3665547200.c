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
static const char *ng0 = "C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Profibus_Handler/VHDL_Implementation/Profibus_Handler/uart.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void work_a_1869493914_3665547200_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    int t11;
    int t12;
    int t13;
    unsigned char t14;
    int t15;
    int t16;
    int t17;

LAB0:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 5416U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 5216U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 18064);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 18448);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 18512);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 9152U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 9272U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB3;

LAB5:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 9152U);
    t6 = *((char **)t2);
    t11 = *((int *)t6);
    t12 = (100000000 / 19200);
    t13 = (t12 - 1);
    t14 = (t11 < t13);
    if (t14 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 9152U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 18448);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 9272U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;

LAB11:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 9272U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t12 = (100000000 / 19200);
    t13 = (t12 / 16);
    t15 = (t13 - 1);
    t3 = (t11 < t15);
    if (t3 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 9272U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 18512);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB3;

LAB7:    t2 = (t0 + 5256U);
    t5 = *((char **)t2);
    t9 = *((unsigned char *)t5);
    t10 = (t9 == (unsigned char)3);
    t3 = t10;
    goto LAB9;

LAB10:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 9152U);
    t7 = *((char **)t2);
    t15 = *((int *)t7);
    t16 = (t15 + 1);
    t2 = (t0 + 9152U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((int *)t2) = t16;
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 18448);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB11;

LAB13:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 9272U);
    t5 = *((char **)t1);
    t16 = *((int *)t5);
    t17 = (t16 + 1);
    t1 = (t0 + 9272U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t17;
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 18512);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

}

static void work_a_1869493914_3665547200_p_1(char *t0)
{
    char t26[16];
    char t27[16];
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
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t28;
    char *t29;
    static char *nl0[] = {&&LAB14, &&LAB15};

LAB0:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 5416U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 5216U);
    t10 = xsi_signal_has_event(t1);
    if (t10 == 1)
        goto LAB10;

LAB11:    t4 = (unsigned char)0;

LAB12:    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 18080);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 9512U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 9392U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 18576);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 18640);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(104, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 18704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 18768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 7016U);
    t7 = *((char **)t2);
    t15 = *((unsigned char *)t7);
    t2 = (char *)((nl0) + t15);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 7336U);
    t6 = *((char **)t2);
    t13 = *((unsigned char *)t6);
    t14 = (t13 == (unsigned char)3);
    t3 = t14;
    goto LAB9;

LAB10:    t2 = (t0 + 5256U);
    t5 = *((char **)t2);
    t11 = *((unsigned char *)t5);
    t12 = (t11 == (unsigned char)3);
    t4 = t12;
    goto LAB12;

LAB13:    goto LAB3;

LAB14:    xsi_set_current_line(109, ng0);
    t8 = (t0 + 18576);
    t9 = (t8 + 56U);
    t16 = *((char **)t9);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 9512U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 18768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB17:    goto LAB13;

LAB15:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 9512U);
    t2 = *((char **)t1);
    t19 = *((int *)t2);
    t20 = (16 - 1);
    t3 = (t19 < t20);
    if (t3 != 0)
        goto LAB24;

LAB26:    t1 = (t0 + 9392U);
    t2 = *((char **)t1);
    t19 = *((int *)t2);
    t20 = (1 + 8);
    t3 = (t19 < t20);
    if (t3 != 0)
        goto LAB27;

LAB28:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 7976U);
    t2 = *((char **)t1);
    t23 = (9 - 8);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t1 = (t2 + t25);
    t5 = (t0 + 18704);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 7976U);
    t2 = *((char **)t1);
    t19 = (0 - 9);
    t23 = (t19 * -1);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t1 = (t2 + t25);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 7496U);
    t6 = *((char **)t5);
    t4 = *((unsigned char *)t6);
    t10 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t4);
    t5 = (t0 + 5896U);
    t7 = *((char **)t5);
    t11 = *((unsigned char *)t7);
    t12 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t11);
    t13 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t10, t12);
    t5 = (t0 + 18640);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t16 = (t9 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 18576);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(138, ng0);
    t1 = (t0 + 18768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB25:    goto LAB13;

LAB16:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 9512U);
    t5 = *((char **)t1);
    t19 = *((int *)t5);
    t20 = (16 / 2);
    t10 = (t19 < t20);
    if (t10 != 0)
        goto LAB19;

LAB21:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 9512U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 9392U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 18576);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7976U);
    t5 = *((char **)t1);
    t19 = (1 + 8);
    t23 = (9 - t19);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t1 = (t5 + t25);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t27 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 9;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t20 = (1 - 9);
    t28 = (t20 * -1);
    t28 = (t28 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t28;
    t6 = xsi_base_array_concat(t6, t26, t7, (char)99, t3, (char)97, t1, t27, (char)101);
    t28 = (1U + 9U);
    t4 = (10U != t28);
    if (t4 == 1)
        goto LAB22;

LAB23:    t9 = (t0 + 18832);
    t16 = (t9 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t29 = *((char **)t18);
    memcpy(t29, t6, 10U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 18768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);

LAB20:    goto LAB17;

LAB19:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 9512U);
    t6 = *((char **)t1);
    t21 = *((int *)t6);
    t22 = (t21 + 1);
    t1 = (t0 + 9512U);
    t7 = *((char **)t1);
    t1 = (t7 + 0);
    *((int *)t1) = t22;
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 18768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    xsi_size_not_matching(10U, t28, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 9512U);
    t5 = *((char **)t1);
    t21 = *((int *)t5);
    t22 = (t21 + 1);
    t1 = (t0 + 9512U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t22;
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 18768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

LAB27:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 9512U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 9392U);
    t2 = *((char **)t1);
    t19 = *((int *)t2);
    t20 = (t19 + 1);
    t1 = (t0 + 9392U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t20;
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 5896U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 7976U);
    t5 = *((char **)t1);
    t19 = (1 + 8);
    t23 = (9 - t19);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t1 = (t5 + t25);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t27 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 9;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t20 = (1 - 9);
    t28 = (t20 * -1);
    t28 = (t28 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t28;
    t6 = xsi_base_array_concat(t6, t26, t7, (char)99, t3, (char)97, t1, t27, (char)101);
    t28 = (1U + 9U);
    t4 = (10U != t28);
    if (t4 == 1)
        goto LAB29;

LAB30:    t9 = (t0 + 18832);
    t16 = (t9 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t29 = *((char **)t18);
    memcpy(t29, t6, 10U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 18768);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB25;

LAB29:    xsi_size_not_matching(10U, t28, 0);
    goto LAB30;

}

static void work_a_1869493914_3665547200_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(145, ng0);

LAB3:    t1 = (t0 + 18896);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(147, ng0);

LAB3:    t1 = (t0 + 7656U);
    t2 = *((char **)t1);
    t1 = (t0 + 9632U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 7976U);
    t11 = *((char **)t10);
    t10 = (t0 + 9632U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 + 1);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t10 = (t11 + t18);
    t19 = *((unsigned char *)t10);
    t20 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t19);
    t21 = (t0 + 18960);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t20;
    xsi_driver_first_trans_delta(t21, 7U, 1, 0LL);

LAB2:    t26 = (t0 + 18096);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(147, ng0);

LAB3:    t1 = (t0 + 7656U);
    t2 = *((char **)t1);
    t1 = (t0 + 9752U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 7976U);
    t11 = *((char **)t10);
    t10 = (t0 + 9752U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 + 1);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t10 = (t11 + t18);
    t19 = *((unsigned char *)t10);
    t20 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t19);
    t21 = (t0 + 19024);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t20;
    xsi_driver_first_trans_delta(t21, 6U, 1, 0LL);

LAB2:    t26 = (t0 + 18112);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(147, ng0);

LAB3:    t1 = (t0 + 7656U);
    t2 = *((char **)t1);
    t1 = (t0 + 9872U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 7976U);
    t11 = *((char **)t10);
    t10 = (t0 + 9872U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 + 1);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t10 = (t11 + t18);
    t19 = *((unsigned char *)t10);
    t20 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t19);
    t21 = (t0 + 19088);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t20;
    xsi_driver_first_trans_delta(t21, 5U, 1, 0LL);

LAB2:    t26 = (t0 + 18128);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(147, ng0);

LAB3:    t1 = (t0 + 7656U);
    t2 = *((char **)t1);
    t1 = (t0 + 9992U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 7976U);
    t11 = *((char **)t10);
    t10 = (t0 + 9992U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 + 1);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t10 = (t11 + t18);
    t19 = *((unsigned char *)t10);
    t20 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t19);
    t21 = (t0 + 19152);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t20;
    xsi_driver_first_trans_delta(t21, 4U, 1, 0LL);

LAB2:    t26 = (t0 + 18144);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(147, ng0);

LAB3:    t1 = (t0 + 7656U);
    t2 = *((char **)t1);
    t1 = (t0 + 10112U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 7976U);
    t11 = *((char **)t10);
    t10 = (t0 + 10112U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 + 1);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t10 = (t11 + t18);
    t19 = *((unsigned char *)t10);
    t20 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t19);
    t21 = (t0 + 19216);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t20;
    xsi_driver_first_trans_delta(t21, 3U, 1, 0LL);

LAB2:    t26 = (t0 + 18160);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(147, ng0);

LAB3:    t1 = (t0 + 7656U);
    t2 = *((char **)t1);
    t1 = (t0 + 10232U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 7976U);
    t11 = *((char **)t10);
    t10 = (t0 + 10232U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 + 1);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t10 = (t11 + t18);
    t19 = *((unsigned char *)t10);
    t20 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t19);
    t21 = (t0 + 19280);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t20;
    xsi_driver_first_trans_delta(t21, 2U, 1, 0LL);

LAB2:    t26 = (t0 + 18176);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(147, ng0);

LAB3:    t1 = (t0 + 7656U);
    t2 = *((char **)t1);
    t1 = (t0 + 10352U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 7976U);
    t11 = *((char **)t10);
    t10 = (t0 + 10352U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 + 1);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t10 = (t11 + t18);
    t19 = *((unsigned char *)t10);
    t20 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t19);
    t21 = (t0 + 19344);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t20;
    xsi_driver_first_trans_delta(t21, 1U, 1, 0LL);

LAB2:    t26 = (t0 + 18192);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(147, ng0);

LAB3:    t1 = (t0 + 7656U);
    t2 = *((char **)t1);
    t1 = (t0 + 10472U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 7976U);
    t11 = *((char **)t10);
    t10 = (t0 + 10472U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 + 1);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t10 = (t11 + t18);
    t19 = *((unsigned char *)t10);
    t20 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t19);
    t21 = (t0 + 19408);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t20;
    xsi_driver_first_trans_delta(t21, 0U, 1, 0LL);

LAB2:    t26 = (t0 + 18208);
    *((int *)t26) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_11(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t1 = (t0 + 15264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(149, ng0);
    if (1 == 1)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 19472);
    t3 = (t2 + 56U);
    t9 = *((char **)t3);
    t10 = (t9 + 56U);
    t18 = *((char **)t10);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);

LAB4:    xsi_set_current_line(149, ng0);

LAB11:    t2 = (t0 + 18224);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB12;

LAB1:    return;
LAB5:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 7656U);
    t3 = *((char **)t2);
    t4 = (8 - 8);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = *((unsigned char *)t2);
    t9 = (t0 + 7976U);
    t10 = *((char **)t9);
    t11 = (1 + 8);
    t12 = (t11 - 9);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t9 = (t10 + t15);
    t16 = *((unsigned char *)t9);
    t17 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t8, t16);
    t18 = (t0 + 19472);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t17;
    xsi_driver_first_trans_fast(t18);
    goto LAB4;

LAB8:;
LAB9:    t3 = (t0 + 18224);
    *((int *)t3) = 0;
    goto LAB2;

LAB10:    goto LAB9;

LAB12:    goto LAB10;

}

static void work_a_1869493914_3665547200_p_12(char *t0)
{
    char t15[16];
    char t19[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    static char *nl0[] = {&&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 5416U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 5216U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 18240);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 10592U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 19536);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 19600);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 19664);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 6856U);
    t6 = *((char **)t2);
    t10 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t10);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 5256U);
    t5 = *((char **)t2);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    t3 = t9;
    goto LAB9;

LAB10:    xsi_set_current_line(188, ng0);
    t1 = (t0 + 8136U);
    t2 = *((char **)t1);
    t29 = (0 - 10);
    t21 = (t29 * -1);
    t22 = (1U * t21);
    t30 = (0 + t22);
    t1 = (t2 + t30);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 19536);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = t3;
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB11:    xsi_set_current_line(165, ng0);
    t7 = (t0 + 5576U);
    t11 = *((char **)t7);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(174, ng0);
    t1 = (t0 + 19600);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(175, ng0);
    t1 = (t0 + 19664);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB14:    goto LAB10;

LAB12:    xsi_set_current_line(178, ng0);
    t1 = (t0 + 7176U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB21;

LAB23:
LAB22:    xsi_set_current_line(182, ng0);
    t1 = (t0 + 10592U);
    t2 = *((char **)t1);
    t29 = *((int *)t2);
    t31 = (1 + 8);
    t32 = (t31 + 3);
    t3 = (t29 < t32);
    if (t3 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(185, ng0);
    t1 = (t0 + 19664);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB27:    goto LAB10;

LAB13:    xsi_set_current_line(166, ng0);
    t7 = (t0 + 5736U);
    t14 = *((char **)t7);
    t16 = ((IEEE_P_2592010699) + 4024);
    t17 = (t0 + 33076U);
    t7 = xsi_base_array_concat(t7, t15, t16, (char)97, t14, t17, (char)99, (unsigned char)2, (char)101);
    t20 = ((IEEE_P_2592010699) + 4024);
    t18 = xsi_base_array_concat(t18, t19, t20, (char)97, t7, t15, (char)99, (unsigned char)3, (char)101);
    t21 = (8U + 1U);
    t22 = (t21 + 1U);
    t23 = (10U != t22);
    if (t23 == 1)
        goto LAB16;

LAB17:    t24 = (t0 + 19728);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t18, 10U);
    xsi_driver_first_trans_delta(t24, 1U, 10U, 0LL);
    xsi_set_current_line(167, ng0);
    t3 = (1 == 1);
    if (t3 != 0)
        goto LAB18;

LAB20:
LAB19:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 19600);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(171, ng0);
    t1 = (t0 + 10592U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 19664);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB14;

LAB16:    xsi_size_not_matching(10U, t22, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t29 = (8 - 8);
    t21 = (t29 * -1);
    t22 = (1U * t21);
    t30 = (0 + t22);
    t1 = (t2 + t30);
    t4 = *((unsigned char *)t1);
    t5 = (t0 + 19728);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t11 = (t7 + 56U);
    t14 = *((char **)t11);
    *((unsigned char *)t14) = t4;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    goto LAB19;

LAB21:    xsi_set_current_line(179, ng0);
    t1 = (t0 + 10592U);
    t5 = *((char **)t1);
    t29 = *((int *)t5);
    t31 = (t29 + 1);
    t1 = (t0 + 10592U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = t31;
    xsi_set_current_line(180, ng0);
    t1 = (t0 + 8136U);
    t2 = *((char **)t1);
    t29 = (1 + 8);
    t31 = (t29 + 1);
    t21 = (10 - t31);
    t22 = (t21 * 1U);
    t30 = (0 + t22);
    t1 = (t2 + t30);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t19 + 0U);
    t11 = (t7 + 0U);
    *((int *)t11) = 10;
    t11 = (t7 + 4U);
    *((int *)t11) = 1;
    t11 = (t7 + 8U);
    *((int *)t11) = -1;
    t32 = (1 - 10);
    t33 = (t32 * -1);
    t33 = (t33 + 1);
    t11 = (t7 + 12U);
    *((unsigned int *)t11) = t33;
    t5 = xsi_base_array_concat(t5, t15, t6, (char)99, (unsigned char)3, (char)97, t1, t19, (char)101);
    t33 = (1U + 10U);
    t3 = (11U != t33);
    if (t3 == 1)
        goto LAB24;

LAB25:    t11 = (t0 + 19728);
    t14 = (t11 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t5, 11U);
    xsi_driver_first_trans_fast(t11);
    goto LAB22;

LAB24:    xsi_size_not_matching(11U, t33, 0);
    goto LAB25;

LAB26:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 19664);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t11 = *((char **)t7);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB27;

}

static void work_a_1869493914_3665547200_p_13(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(193, ng0);

LAB3:    t1 = (t0 + 19792);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_delta(t1, 8U, 1, 0LL);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_14(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(195, ng0);

LAB3:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t1 = (t0 + 10712U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 5736U);
    t11 = *((char **)t10);
    t10 = (t0 + 10712U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t10 = (t11 + t17);
    t18 = *((unsigned char *)t10);
    t19 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t18);
    t20 = (t0 + 19856);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t19;
    xsi_driver_first_trans_delta(t20, 7U, 1, 0LL);

LAB2:    t25 = (t0 + 18256);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_15(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(195, ng0);

LAB3:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t1 = (t0 + 10832U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 5736U);
    t11 = *((char **)t10);
    t10 = (t0 + 10832U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t10 = (t11 + t17);
    t18 = *((unsigned char *)t10);
    t19 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t18);
    t20 = (t0 + 19920);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t19;
    xsi_driver_first_trans_delta(t20, 6U, 1, 0LL);

LAB2:    t25 = (t0 + 18272);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_16(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(195, ng0);

LAB3:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t1 = (t0 + 10952U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 5736U);
    t11 = *((char **)t10);
    t10 = (t0 + 10952U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t10 = (t11 + t17);
    t18 = *((unsigned char *)t10);
    t19 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t18);
    t20 = (t0 + 19984);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t19;
    xsi_driver_first_trans_delta(t20, 5U, 1, 0LL);

LAB2:    t25 = (t0 + 18288);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_17(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(195, ng0);

LAB3:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t1 = (t0 + 11072U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 5736U);
    t11 = *((char **)t10);
    t10 = (t0 + 11072U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t10 = (t11 + t17);
    t18 = *((unsigned char *)t10);
    t19 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t18);
    t20 = (t0 + 20048);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t19;
    xsi_driver_first_trans_delta(t20, 4U, 1, 0LL);

LAB2:    t25 = (t0 + 18304);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_18(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(195, ng0);

LAB3:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t1 = (t0 + 11192U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 5736U);
    t11 = *((char **)t10);
    t10 = (t0 + 11192U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t10 = (t11 + t17);
    t18 = *((unsigned char *)t10);
    t19 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t18);
    t20 = (t0 + 20112);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t19;
    xsi_driver_first_trans_delta(t20, 3U, 1, 0LL);

LAB2:    t25 = (t0 + 18320);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_19(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(195, ng0);

LAB3:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t1 = (t0 + 11312U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 5736U);
    t11 = *((char **)t10);
    t10 = (t0 + 11312U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t10 = (t11 + t17);
    t18 = *((unsigned char *)t10);
    t19 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t18);
    t20 = (t0 + 20176);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t19;
    xsi_driver_first_trans_delta(t20, 2U, 1, 0LL);

LAB2:    t25 = (t0 + 18336);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(195, ng0);

LAB3:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t1 = (t0 + 11432U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 5736U);
    t11 = *((char **)t10);
    t10 = (t0 + 11432U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t10 = (t11 + t17);
    t18 = *((unsigned char *)t10);
    t19 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t18);
    t20 = (t0 + 20240);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t19;
    xsi_driver_first_trans_delta(t20, 1U, 1, 0LL);

LAB2:    t25 = (t0 + 18352);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1869493914_3665547200_p_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    xsi_set_current_line(195, ng0);

LAB3:    t1 = (t0 + 7816U);
    t2 = *((char **)t1);
    t1 = (t0 + 11552U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 8);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 5736U);
    t11 = *((char **)t10);
    t10 = (t0 + 11552U);
    t12 = *((char **)t10);
    t13 = *((int *)t12);
    t14 = (t13 - 7);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t10 = (t11 + t17);
    t18 = *((unsigned char *)t10);
    t19 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t9, t18);
    t20 = (t0 + 20304);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t19;
    xsi_driver_first_trans_delta(t20, 0U, 1, 0LL);

LAB2:    t25 = (t0 + 18368);
    *((int *)t25) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1869493914_3665547200_init()
{
	static char *pe[] = {(void *)work_a_1869493914_3665547200_p_0,(void *)work_a_1869493914_3665547200_p_1,(void *)work_a_1869493914_3665547200_p_2,(void *)work_a_1869493914_3665547200_p_3,(void *)work_a_1869493914_3665547200_p_4,(void *)work_a_1869493914_3665547200_p_5,(void *)work_a_1869493914_3665547200_p_6,(void *)work_a_1869493914_3665547200_p_7,(void *)work_a_1869493914_3665547200_p_8,(void *)work_a_1869493914_3665547200_p_9,(void *)work_a_1869493914_3665547200_p_10,(void *)work_a_1869493914_3665547200_p_11,(void *)work_a_1869493914_3665547200_p_12,(void *)work_a_1869493914_3665547200_p_13,(void *)work_a_1869493914_3665547200_p_14,(void *)work_a_1869493914_3665547200_p_15,(void *)work_a_1869493914_3665547200_p_16,(void *)work_a_1869493914_3665547200_p_17,(void *)work_a_1869493914_3665547200_p_18,(void *)work_a_1869493914_3665547200_p_19,(void *)work_a_1869493914_3665547200_p_20,(void *)work_a_1869493914_3665547200_p_21};
	xsi_register_didat("work_a_1869493914_3665547200", "isim/TB_Profibus_Handler_isim_beh.exe.sim/work/a_1869493914_3665547200.didat");
	xsi_register_executes(pe);
}
