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
static const char *ng0 = "C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Profibus_Reciever/FSM_Reciever/VHDL_Implementation/Profibus_Reciever/Profibus_Recieve.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;
extern char *WORK_P_0791571954;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_3472088553_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3765349632_3212880686_p_0(char *t0)
{
    char t13[16];
    char t17[16];
    char t20[16];
    char t26[16];
    char t32[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    char *t15;
    unsigned char t16;
    int t18;
    unsigned int t19;
    int t21;
    unsigned int t22;
    int t23;
    unsigned int t24;
    unsigned int t25;
    int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned int t39;
    static char *nl0[] = {&&LAB18, &&LAB19, &&LAB20, &&LAB21, &&LAB22, &&LAB23, &&LAB24, &&LAB25, &&LAB26, &&LAB27, &&LAB28, &&LAB29, &&LAB30, &&LAB31, &&LAB32, &&LAB33, &&LAB34, &&LAB35, &&LAB36, &&LAB37, &&LAB38, &&LAB39, &&LAB40};

LAB0:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 4232);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 4312);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 11356);
    t5 = (t0 + 4376);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 11364);
    t5 = (t0 + 4440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(69, ng0);
    t1 = xsi_get_transient_memory(2040U);
    memset(t1, 0, 2040U);
    t2 = t1;
    t5 = (t0 + 11396);
    t3 = (8U != 0);
    if (t3 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 4504);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 2040U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    t10 = (2040U / 8U);
    xsi_mem_set_data(t2, t5, 8U, t10);
    goto LAB6;

LAB7:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2472U);
    t5 = *((char **)t2);
    t2 = (t0 + 8936U);
    t6 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t13, t5, t2, 1);
    t7 = (t13 + 12U);
    t10 = *((unsigned int *)t7);
    t14 = (1U * t10);
    t4 = (32U != t14);
    if (t4 == 1)
        goto LAB9;

LAB10:    t8 = (t0 + 4440);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB3;

LAB9:    xsi_size_not_matching(32U, t14, 0);
    goto LAB10;

LAB11:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t1 = (t0 + 8936U);
    t6 = ((WORK_P_0791571954) + 1888U);
    t7 = *((char **)t6);
    t6 = ((WORK_P_0791571954) + 5640U);
    t16 = ieee_p_1242562249_sub_3472088553_1035706684(IEEE_P_1242562249, t5, t1, t7, t6);
    if (t16 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB14:    xsi_set_current_line(74, ng0);
    t8 = (t0 + 4312);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t15 = *((char **)t12);
    *((unsigned char *)t15) = (unsigned char)0;
    xsi_driver_first_trans_fast(t8);

LAB15:    goto LAB12;

LAB17:    goto LAB15;

LAB18:    xsi_set_current_line(78, ng0);
    t5 = xsi_get_transient_memory(32U);
    memset(t5, 0, 32U);
    t6 = t5;
    memset(t6, (unsigned char)2, 32U);
    t7 = (t0 + 4440);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(79, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 4376);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4504);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 2032U, 8U, 0LL);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0791571954) + 1168U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB45;

LAB46:    t3 = 0;

LAB47:    if (t3 != 0)
        goto LAB42;

LAB44:
LAB43:    goto LAB17;

LAB19:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4504);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 2024U, 8U, 0LL);
    xsi_set_current_line(86, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 4440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 4568);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 4312);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB20:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4504);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 2016U, 8U, 0LL);
    xsi_set_current_line(91, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 4440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 4312);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB21:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4504);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 2008U, 8U, 0LL);
    xsi_set_current_line(95, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 4440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 4312);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB22:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4504);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 2000U, 8U, 0LL);
    xsi_set_current_line(99, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 4440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t18 = (1 - 254);
    t10 = (t18 * -1);
    t14 = (8U * t10);
    t19 = (0 + t14);
    t1 = (t2 + t19);
    t5 = (t20 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 7;
    t6 = (t5 + 4U);
    *((int *)t6) = 0;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t21 = (0 - 7);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t22;
    t6 = (t0 + 2152U);
    t7 = *((char **)t6);
    t23 = (2 - 254);
    t22 = (t23 * -1);
    t24 = (8U * t22);
    t25 = (0 + t24);
    t6 = (t7 + t25);
    t8 = (t26 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 7;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t27 = (0 - 7);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t28;
    t9 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t17, t1, t20, t6, t26);
    t11 = (t0 + 2152U);
    t12 = *((char **)t11);
    t29 = (3 - 254);
    t28 = (t29 * -1);
    t30 = (8U * t28);
    t31 = (0 + t30);
    t11 = (t12 + t31);
    t15 = (t32 + 0U);
    t33 = (t15 + 0U);
    *((int *)t33) = 7;
    t33 = (t15 + 4U);
    *((int *)t33) = 0;
    t33 = (t15 + 8U);
    *((int *)t33) = -1;
    t34 = (0 - 7);
    t35 = (t34 * -1);
    t35 = (t35 + 1);
    t33 = (t15 + 12U);
    *((unsigned int *)t33) = t35;
    t33 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t13, t9, t17, t11, t32);
    t36 = (t0 + 2928U);
    t37 = *((char **)t36);
    t36 = (t37 + 0);
    t38 = (t13 + 12U);
    t35 = *((unsigned int *)t38);
    t39 = (1U * t35);
    memcpy(t36, t33, t39);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 2928U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB54;

LAB55:    t3 = 0;

LAB56:    if (t3 != 0)
        goto LAB51;

LAB53:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 4312);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB52:    goto LAB17;

LAB23:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4504);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 1992U, 8U, 0LL);
    xsi_set_current_line(108, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 4440);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 4312);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0791571954) + 1648U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB63;

LAB64:    t3 = 0;

LAB65:    if (t3 != 0)
        goto LAB60;

LAB62:
LAB61:    goto LAB17;

LAB24:    goto LAB17;

LAB25:    goto LAB17;

LAB26:    goto LAB17;

LAB27:    goto LAB17;

LAB28:    goto LAB17;

LAB29:    goto LAB17;

LAB30:    goto LAB17;

LAB31:    goto LAB17;

LAB32:    goto LAB17;

LAB33:    goto LAB17;

LAB34:    goto LAB17;

LAB35:    goto LAB17;

LAB36:    goto LAB17;

LAB37:    goto LAB17;

LAB38:    goto LAB17;

LAB39:    goto LAB17;

LAB40:    goto LAB17;

LAB41:    goto LAB17;

LAB42:    xsi_set_current_line(82, ng0);
    t7 = (t0 + 4312);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    goto LAB43;

LAB45:    t10 = 0;

LAB48:    if (t10 < 8U)
        goto LAB49;
    else
        goto LAB47;

LAB49:    t1 = (t2 + t10);
    t6 = (t5 + t10);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB46;

LAB50:    t10 = (t10 + 1);
    goto LAB48;

LAB51:    xsi_set_current_line(102, ng0);
    t7 = (t0 + 4312);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)5;
    xsi_driver_first_trans_fast(t7);
    goto LAB52;

LAB54:    t10 = 0;

LAB57:    if (t10 < 8U)
        goto LAB58;
    else
        goto LAB56;

LAB58:    t1 = (t2 + t10);
    t6 = (t5 + t10);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB55;

LAB59:    t10 = (t10 + 1);
    goto LAB57;

LAB60:    xsi_set_current_line(111, ng0);
    t7 = (t0 + 4568);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(112, ng0);
    t1 = (t0 + 11404);
    t5 = (t0 + 4632);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB61;

LAB63:    t10 = 0;

LAB66:    if (t10 < 8U)
        goto LAB67;
    else
        goto LAB65;

LAB67:    t1 = (t2 + t10);
    t6 = (t5 + t10);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB64;

LAB68:    t10 = (t10 + 1);
    goto LAB66;

}


extern void work_a_3765349632_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3765349632_3212880686_p_0};
	xsi_register_didat("work_a_3765349632_3212880686", "isim/TB_Profibus_Recieve_isim_beh.exe.sim/work/a_3765349632_3212880686.didat");
	xsi_register_executes(pe);
}
