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
static const char *ng0 = "C:/UserData/z003xazw/Documents/GitHub/ProfibusVhdl/Profibus_Handler/VHDL_Implementation/Profibus_Handler/TB_Profibus_Handler.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2888530165_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 8392U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(222, ng0);
    t2 = (t0 + 9432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(223, ng0);
    t2 = (t0 + 7408U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 8200);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(224, ng0);
    t2 = (t0 + 9432);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(225, ng0);
    t2 = (t0 + 7408U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 8200);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2888530165_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t9;
    int64 t10;

LAB0:    t1 = (t0 + 8640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 9496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(232, ng0);
    t2 = (t0 + 19132);
    t4 = (t0 + 9560);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(233, ng0);
    t2 = (t0 + 19140);
    t4 = (t0 + 9624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(234, ng0);

LAB6:    t2 = (t0 + 9208);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 9208);
    *((int *)t4) = 0;
    xsi_set_current_line(235, ng0);
    t2 = (t0 + 9496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(236, ng0);
    t2 = (t0 + 19148);
    t4 = (t0 + 9560);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(237, ng0);
    t2 = (t0 + 19156);
    t4 = (t0 + 9624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(238, ng0);

LAB10:    t2 = (t0 + 9224);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 1152U);
    t9 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    t4 = (t0 + 9224);
    *((int *)t4) = 0;
    xsi_set_current_line(239, ng0);
    t2 = (t0 + 9496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(240, ng0);
    t2 = (t0 + 19164);
    t4 = (t0 + 9560);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(241, ng0);
    t2 = (t0 + 19172);
    t4 = (t0 + 9624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(242, ng0);

LAB14:    t2 = (t0 + 9240);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    t3 = (t0 + 1152U);
    t9 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB8;
    else
        goto LAB10;

LAB11:    goto LAB9;

LAB12:    t4 = (t0 + 9240);
    *((int *)t4) = 0;
    xsi_set_current_line(243, ng0);
    t2 = (t0 + 9496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(244, ng0);
    t2 = (t0 + 19180);
    t4 = (t0 + 9560);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(245, ng0);
    t2 = (t0 + 19188);
    t4 = (t0 + 9624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(246, ng0);

LAB18:    t2 = (t0 + 9256);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t3 = (t0 + 1152U);
    t9 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    t4 = (t0 + 9256);
    *((int *)t4) = 0;
    xsi_set_current_line(247, ng0);
    t2 = (t0 + 9496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(248, ng0);
    t2 = (t0 + 19196);
    t4 = (t0 + 9560);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(249, ng0);
    t2 = (t0 + 19204);
    t4 = (t0 + 9624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(250, ng0);

LAB22:    t2 = (t0 + 9272);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    t3 = (t0 + 1152U);
    t9 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB16;
    else
        goto LAB18;

LAB19:    goto LAB17;

LAB20:    t4 = (t0 + 9272);
    *((int *)t4) = 0;
    xsi_set_current_line(251, ng0);
    t2 = (t0 + 9496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(252, ng0);
    t2 = (t0 + 19212);
    t4 = (t0 + 9560);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(253, ng0);
    t2 = (t0 + 19220);
    t4 = (t0 + 9624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(254, ng0);

LAB26:    t2 = (t0 + 9288);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    t3 = (t0 + 1152U);
    t9 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB20;
    else
        goto LAB22;

LAB23:    goto LAB21;

LAB24:    t4 = (t0 + 9288);
    *((int *)t4) = 0;
    xsi_set_current_line(255, ng0);
    t2 = (t0 + 9496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(256, ng0);
    t2 = (t0 + 19228);
    t4 = (t0 + 9560);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(257, ng0);
    t2 = (t0 + 19236);
    t4 = (t0 + 9624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(258, ng0);

LAB30:    t2 = (t0 + 9304);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB25:    t3 = (t0 + 1152U);
    t9 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB24;
    else
        goto LAB26;

LAB27:    goto LAB25;

LAB28:    t4 = (t0 + 9304);
    *((int *)t4) = 0;
    xsi_set_current_line(259, ng0);
    t2 = (t0 + 9496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(260, ng0);
    t2 = (t0 + 19244);
    t4 = (t0 + 9560);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(261, ng0);
    t2 = (t0 + 19252);
    t4 = (t0 + 9624);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(262, ng0);

LAB34:    t2 = (t0 + 9320);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB29:    t3 = (t0 + 1152U);
    t9 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB28;
    else
        goto LAB30;

LAB31:    goto LAB29;

LAB32:    t4 = (t0 + 9320);
    *((int *)t4) = 0;
    xsi_set_current_line(263, ng0);

LAB38:    t2 = (t0 + 9336);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    t3 = (t0 + 1152U);
    t9 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB32;
    else
        goto LAB34;

LAB35:    goto LAB33;

LAB36:    t4 = (t0 + 9336);
    *((int *)t4) = 0;
    xsi_set_current_line(264, ng0);

LAB42:    t2 = (t0 + 9352);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    t3 = (t0 + 1152U);
    t9 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB36;
    else
        goto LAB38;

LAB39:    goto LAB37;

LAB40:    t4 = (t0 + 9352);
    *((int *)t4) = 0;
    xsi_set_current_line(265, ng0);
    t2 = (t0 + 9496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(266, ng0);
    t10 = (20 * 1000000000LL);
    t2 = (t0 + 8448);
    xsi_process_wait(t2, t10);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB41:    t3 = (t0 + 1152U);
    t9 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t9 == 1)
        goto LAB40;
    else
        goto LAB42;

LAB43:    goto LAB41;

LAB44:    xsi_set_current_line(267, ng0);
    if ((unsigned char)0 == 0)
        goto LAB48;

LAB49:    goto LAB2;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB48:    t2 = (t0 + 19260);
    xsi_report(t2, 19U, (unsigned char)3);
    goto LAB49;

}

static void work_a_2888530165_2372691052_p_2(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(269, ng0);

LAB3:    t1 = (3 * 1000000000LL);
    t2 = (t0 + 9688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t7 = (t0 + 9688);
    xsi_driver_intertial_reject(t7, t1, t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2888530165_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2888530165_2372691052_p_0,(void *)work_a_2888530165_2372691052_p_1,(void *)work_a_2888530165_2372691052_p_2};
	xsi_register_didat("work_a_2888530165_2372691052", "isim/TB_Profibus_Handler_isim_beh.exe.sim/work/a_2888530165_2372691052.didat");
	xsi_register_executes(pe);
}
