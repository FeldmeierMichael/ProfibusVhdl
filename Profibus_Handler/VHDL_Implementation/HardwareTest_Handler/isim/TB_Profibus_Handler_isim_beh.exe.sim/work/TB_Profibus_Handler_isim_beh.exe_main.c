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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_1242562249;
char *STD_STANDARD;
char *IEEE_P_2592010699;
char *WORK_P_0791571954;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    work_a_2689175049_3212880686_init();
    work_p_0791571954_init();
    work_a_3765349632_3212880686_init();
    work_a_4266732099_3212880686_init();
    work_a_0921867480_3212880686_init();
    work_a_1903764199_3212880686_init();
    work_a_1869493914_3665547200_init();
    work_a_2336987134_3212880686_init();
    work_a_3355253031_3212880686_init();
    work_a_2888530165_2372691052_init();


    xsi_register_tops("work_a_2888530165_2372691052");

    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    WORK_P_0791571954 = xsi_get_engine_memory("work_p_0791571954");

    return xsi_run_simulation(argc, argv);

}
