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
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3472088553_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);


static void work_a_3765349632_3212880686_p_0(char *t0)
{
    char t10[16];
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t21;
    static char *nl0[] = {&&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20, &&LAB21, &&LAB22, &&LAB23, &&LAB24, &&LAB25, &&LAB26, &&LAB27, &&LAB28, &&LAB29, &&LAB30, &&LAB31, &&LAB32, &&LAB33, &&LAB34, &&LAB35, &&LAB36, &&LAB37, &&LAB38, &&LAB39};

LAB0:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 5352);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 5432);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 13653);
    t5 = (t0 + 5496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 13661);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 13693);
    t5 = (t0 + 4048U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 8U);
    goto LAB3;

LAB5:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3272U);
    t5 = *((char **)t2);
    t2 = (t0 + 11344U);
    t6 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t10, t5, t2, 1);
    t7 = (t10 + 12U);
    t11 = *((unsigned int *)t7);
    t12 = (1U * t11);
    t4 = (32U != t12);
    if (t4 == 1)
        goto LAB7;

LAB8:    t8 = (t0 + 5560);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 32U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB3;

LAB7:    xsi_size_not_matching(32U, t12, 0);
    goto LAB8;

LAB9:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 3272U);
    t5 = *((char **)t1);
    t1 = (t0 + 11344U);
    t6 = ((WORK_P_0791571954) + 1888U);
    t7 = *((char **)t6);
    t6 = ((WORK_P_0791571954) + 6020U);
    t16 = ieee_p_1242562249_sub_3472088553_1035706684(IEEE_P_1242562249, t5, t1, t7, t6);
    if (t16 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB12:    xsi_set_current_line(82, ng0);
    t8 = (t0 + 5432);
    t9 = (t8 + 56U);
    t13 = *((char **)t9);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = (unsigned char)0;
    xsi_driver_first_trans_fast(t8);

LAB13:    goto LAB10;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(86, ng0);
    t5 = xsi_get_transient_memory(32U);
    memset(t5, 0, 32U);
    t6 = t5;
    memset(t6, (unsigned char)2, 32U);
    t7 = (t0 + 5560);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 32U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(87, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 5496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 13701);
    t5 = (t0 + 4048U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 8U);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0791571954) + 1168U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB44;

LAB45:    t3 = 0;

LAB46:    if (t3 != 0)
        goto LAB41;

LAB43:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0791571954) + 1288U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB52;

LAB53:    t3 = 0;

LAB54:    if (t3 != 0)
        goto LAB50;

LAB51:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0791571954) + 1408U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB60;

LAB61:    t3 = 0;

LAB62:    if (t3 != 0)
        goto LAB58;

LAB59:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0791571954) + 1528U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB68;

LAB69:    t3 = 0;

LAB70:    if (t3 != 0)
        goto LAB66;

LAB67:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0791571954) + 1768U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB76;

LAB77:    t3 = 0;

LAB78:    if (t3 != 0)
        goto LAB74;

LAB75:
LAB42:    goto LAB15;

LAB17:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5624);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(102, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(103, ng0);
    t1 = (t0 + 5688);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 11392U);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t5 = (t0 + 11200U);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t10, t2, t1, t6, t5);
    t8 = (t0 + 4048U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t13 = (t10 + 12U);
    t11 = *((unsigned int *)t13);
    t12 = (1U * t11);
    memcpy(t8, t7, t12);
    goto LAB15;

LAB18:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5752);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(108, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(109, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 11392U);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t5 = (t0 + 11200U);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t10, t2, t1, t6, t5);
    t8 = (t0 + 4048U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t13 = (t10 + 12U);
    t11 = *((unsigned int *)t13);
    t12 = (1U * t11);
    memcpy(t8, t7, t12);
    goto LAB15;

LAB19:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5816);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(113, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 11392U);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t5 = (t0 + 11200U);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t10, t2, t1, t6, t5);
    t8 = (t0 + 4048U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t13 = (t10 + 12U);
    t11 = *((unsigned int *)t13);
    t12 = (1U * t11);
    memcpy(t8, t7, t12);
    goto LAB15;

LAB20:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5880);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(118, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB85;

LAB86:    t3 = 0;

LAB87:    if (t3 != 0)
        goto LAB82;

LAB84:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB83:    goto LAB15;

LAB21:    xsi_set_current_line(125, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(126, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0791571954) + 1648U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB94;

LAB95:    t3 = 0;

LAB96:    if (t3 != 0)
        goto LAB91;

LAB93:
LAB92:    goto LAB15;

LAB22:    xsi_set_current_line(132, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 4048U);
    t6 = *((char **)t5);
    t5 = (t6 + 0);
    memcpy(t5, t1, 8U);
    xsi_set_current_line(133, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6008);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6072);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(135, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 5688);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB23:    xsi_set_current_line(139, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t1 = (t0 + 11376U);
    t6 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t10, t5, t1);
    t7 = (t10 + 12U);
    t11 = *((unsigned int *)t7);
    t12 = (1U * t11);
    t3 = 1;
    if (8U == t12)
        goto LAB103;

LAB104:    t3 = 0;

LAB105:    if (t3 != 0)
        goto LAB100;

LAB102:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB101:    goto LAB15;

LAB24:    xsi_set_current_line(146, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0791571954) + 1288U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB112;

LAB113:    t3 = 0;

LAB114:    if (t3 != 0)
        goto LAB109;

LAB111:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB110:    goto LAB15;

LAB25:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 11392U);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t5 = (t0 + 11200U);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t10, t2, t1, t6, t5);
    t8 = (t0 + 4048U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t13 = (t10 + 12U);
    t11 = *((unsigned int *)t13);
    t12 = (1U * t11);
    memcpy(t8, t7, t12);
    xsi_set_current_line(154, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5624);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)10;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB26:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 11392U);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t5 = (t0 + 11200U);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t10, t2, t1, t6, t5);
    t8 = (t0 + 4048U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t13 = (t10 + 12U);
    t11 = *((unsigned int *)t13);
    t12 = (1U * t11);
    memcpy(t8, t7, t12);
    xsi_set_current_line(159, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5752);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)11;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB27:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 11392U);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t5 = (t0 + 11200U);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t10, t2, t1, t6, t5);
    t8 = (t0 + 4048U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t13 = (t10 + 12U);
    t11 = *((unsigned int *)t13);
    t12 = (1U * t11);
    memcpy(t8, t7, t12);
    xsi_set_current_line(164, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(165, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5816);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(166, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)12;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB28:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 11392U);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t5 = (t0 + 11200U);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t10, t2, t1, t6, t5);
    t8 = (t0 + 4048U);
    t9 = *((char **)t8);
    t8 = (t9 + 0);
    t13 = (t10 + 12U);
    t11 = *((unsigned int *)t13);
    t12 = (1U * t11);
    memcpy(t8, t7, t12);
    xsi_set_current_line(169, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(170, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6136);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_delta(t1, 0U, 8U, 0LL);
    xsi_set_current_line(172, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)13;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB29:    xsi_set_current_line(174, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(175, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 11360U);
    t5 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t10, t2, t1, 1);
    t6 = (t10 + 12U);
    t11 = *((unsigned int *)t6);
    t12 = (1U * t11);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB118;

LAB119:    t7 = (t0 + 5496);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t5, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(176, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 11360U);
    t5 = (t0 + 3592U);
    t6 = *((char **)t5);
    t5 = (t0 + 11376U);
    t7 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t10, t6, t5, 4);
    t3 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t2, t1, t7, t10);
    if (t3 != 0)
        goto LAB120;

LAB122:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB125;

LAB126:    t3 = 0;

LAB127:    if (t3 != 0)
        goto LAB123;

LAB124:
LAB121:    goto LAB15;

LAB30:    xsi_set_current_line(184, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)2, 32U);
    t5 = (t0 + 5560);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 32U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(185, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t2 = t1;
    memset(t2, (unsigned char)2, 8U);
    t5 = (t0 + 5496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(186, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = ((WORK_P_0791571954) + 1648U);
    t5 = *((char **)t1);
    t3 = 1;
    if (8U == 8U)
        goto LAB134;

LAB135:    t3 = 0;

LAB136:    if (t3 != 0)
        goto LAB131;

LAB133:
LAB132:    goto LAB15;

LAB31:    goto LAB15;

LAB32:    goto LAB15;

LAB33:    goto LAB15;

LAB34:    goto LAB15;

LAB35:    goto LAB15;

LAB36:    goto LAB15;

LAB37:    goto LAB15;

LAB38:    goto LAB15;

LAB39:    goto LAB15;

LAB40:    goto LAB15;

LAB41:    xsi_set_current_line(90, ng0);
    t7 = (t0 + 5432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    goto LAB42;

LAB44:    t11 = 0;

LAB47:    if (t11 < 8U)
        goto LAB48;
    else
        goto LAB46;

LAB48:    t1 = (t2 + t11);
    t6 = (t5 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB45;

LAB49:    t11 = (t11 + 1);
    goto LAB47;

LAB50:    xsi_set_current_line(92, ng0);
    t7 = (t0 + 5432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)6;
    xsi_driver_first_trans_fast(t7);
    goto LAB42;

LAB52:    t11 = 0;

LAB55:    if (t11 < 8U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t1 = (t2 + t11);
    t6 = (t5 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB53;

LAB57:    t11 = (t11 + 1);
    goto LAB55;

LAB58:    xsi_set_current_line(94, ng0);
    t7 = (t0 + 5432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)15;
    xsi_driver_first_trans_fast(t7);
    goto LAB42;

LAB60:    t11 = 0;

LAB63:    if (t11 < 8U)
        goto LAB64;
    else
        goto LAB62;

LAB64:    t1 = (t2 + t11);
    t6 = (t5 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB61;

LAB65:    t11 = (t11 + 1);
    goto LAB63;

LAB66:    xsi_set_current_line(96, ng0);
    t7 = (t0 + 5432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)21;
    xsi_driver_first_trans_fast(t7);
    goto LAB42;

LAB68:    t11 = 0;

LAB71:    if (t11 < 8U)
        goto LAB72;
    else
        goto LAB70;

LAB72:    t1 = (t2 + t11);
    t6 = (t5 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB69;

LAB73:    t11 = (t11 + 1);
    goto LAB71;

LAB74:    xsi_set_current_line(98, ng0);
    t7 = (t0 + 5432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)23;
    xsi_driver_first_trans_fast(t7);
    goto LAB42;

LAB76:    t11 = 0;

LAB79:    if (t11 < 8U)
        goto LAB80;
    else
        goto LAB78;

LAB80:    t1 = (t2 + t11);
    t6 = (t5 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB77;

LAB81:    t11 = (t11 + 1);
    goto LAB79;

LAB82:    xsi_set_current_line(120, ng0);
    t7 = (t0 + 5432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)5;
    xsi_driver_first_trans_fast(t7);
    goto LAB83;

LAB85:    t11 = 0;

LAB88:    if (t11 < 8U)
        goto LAB89;
    else
        goto LAB87;

LAB89:    t1 = (t2 + t11);
    t6 = (t5 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB86;

LAB90:    t11 = (t11 + 1);
    goto LAB88;

LAB91:    xsi_set_current_line(128, ng0);
    t7 = (t0 + 5688);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 13709);
    t5 = (t0 + 5944);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB92;

LAB94:    t11 = 0;

LAB97:    if (t11 < 8U)
        goto LAB98;
    else
        goto LAB96;

LAB98:    t1 = (t2 + t11);
    t6 = (t5 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB95;

LAB99:    t11 = (t11 + 1);
    goto LAB97;

LAB100:    xsi_set_current_line(141, ng0);
    t13 = (t0 + 5432);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)8;
    xsi_driver_first_trans_fast(t13);
    goto LAB101;

LAB103:    t17 = 0;

LAB106:    if (t17 < 8U)
        goto LAB107;
    else
        goto LAB105;

LAB107:    t8 = (t2 + t17);
    t9 = (t6 + t17);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB104;

LAB108:    t17 = (t17 + 1);
    goto LAB106;

LAB109:    xsi_set_current_line(148, ng0);
    t7 = (t0 + 5432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)9;
    xsi_driver_first_trans_fast(t7);
    goto LAB110;

LAB112:    t11 = 0;

LAB115:    if (t11 < 8U)
        goto LAB116;
    else
        goto LAB114;

LAB116:    t1 = (t2 + t11);
    t6 = (t5 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB113;

LAB117:    t11 = (t11 + 1);
    goto LAB115;

LAB118:    xsi_size_not_matching(8U, t12, 0);
    goto LAB119;

LAB120:    xsi_set_current_line(177, ng0);
    t8 = (t0 + 4048U);
    t9 = *((char **)t8);
    t8 = (t0 + 11392U);
    t13 = (t0 + 1512U);
    t14 = *((char **)t13);
    t13 = (t0 + 11200U);
    t15 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t20, t9, t8, t14, t13);
    t18 = (t0 + 4048U);
    t19 = *((char **)t18);
    t18 = (t19 + 0);
    t21 = (t20 + 12U);
    t11 = *((unsigned int *)t21);
    t12 = (1U * t11);
    memcpy(t18, t15, t12);
    xsi_set_current_line(178, ng0);
    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 5880);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB121;

LAB123:    xsi_set_current_line(181, ng0);
    t7 = (t0 + 5432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)14;
    xsi_driver_first_trans_fast(t7);
    goto LAB121;

LAB125:    t11 = 0;

LAB128:    if (t11 < 8U)
        goto LAB129;
    else
        goto LAB127;

LAB129:    t1 = (t2 + t11);
    t6 = (t5 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB126;

LAB130:    t11 = (t11 + 1);
    goto LAB128;

LAB131:    xsi_set_current_line(187, ng0);
    t7 = (t0 + 5688);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t13 = (t9 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(188, ng0);
    t1 = (t0 + 13717);
    t5 = (t0 + 5944);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(189, ng0);
    t1 = (t0 + 5432);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB132;

LAB134:    t11 = 0;

LAB137:    if (t11 < 8U)
        goto LAB138;
    else
        goto LAB136;

LAB138:    t1 = (t2 + t11);
    t6 = (t5 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB135;

LAB139:    t11 = (t11 + 1);
    goto LAB137;

}


extern void work_a_3765349632_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3765349632_3212880686_p_0};
	xsi_register_didat("work_a_3765349632_3212880686", "isim/TB_Profibus_Recieve_isim_beh.exe.sim/work/a_3765349632_3212880686.didat");
	xsi_register_executes(pe);
}
