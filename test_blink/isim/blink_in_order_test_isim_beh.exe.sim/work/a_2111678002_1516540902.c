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
static const char *ng0 = "//vmware-host/Shared Folders/WangRui/Programming/FPGA/test_blink/test_blink.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_2111678002_1516540902_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    int t12;
    int t13;
    unsigned char t14;
    char *t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4248);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 2152U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t4 = (t0 + 2448U);
    t10 = *((char **)t4);
    t11 = *((int *)t10);
    t12 = (t11 / 2);
    t13 = (t12 - 1);
    t14 = (t9 == t13);
    if (t14 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t11 = (t9 + 1);
    t2 = (t0 + 4424);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t15 = *((char **)t10);
    *((int *)t15) = t11;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1832U);
    t15 = *((char **)t4);
    t16 = *((unsigned char *)t15);
    t17 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t16);
    t4 = (t0 + 4360);
    t18 = (t4 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t17;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4424);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_2111678002_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(66, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4488);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4264);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2111678002_1516540902_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1792U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4280);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 1992U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t4 = (t0 + 4552);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 4616);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t1;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB3;

LAB5:    t4 = (t0 + 1832U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}


extern void work_a_2111678002_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2111678002_1516540902_p_0,(void *)work_a_2111678002_1516540902_p_1,(void *)work_a_2111678002_1516540902_p_2};
	xsi_register_didat("work_a_2111678002_1516540902", "isim/blink_in_order_test_isim_beh.exe.sim/work/a_2111678002_1516540902.didat");
	xsi_register_executes(pe);
}
