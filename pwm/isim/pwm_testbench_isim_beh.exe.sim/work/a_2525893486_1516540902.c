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
static const char *ng0 = "//vmware-host/Shared Folders/WangRui/Programming/FPGA/pwm/pwm_controller.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2525893486_1516540902_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 6648);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 4000;
    xsi_driver_first_trans_fast(t1);

LAB45:
LAB39:
LAB27:
LAB3:    t1 = (t0 + 6504);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 6648);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 800;
    xsi_driver_first_trans_fast(t1);

LAB24:
LAB18:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1672U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 6648);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 400;
    xsi_driver_first_trans_fast(t1);

LAB15:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1832U);
    t11 = *((char **)t1);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 6648);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 200;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 6648);
    t14 = (t1 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = 100;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 6648);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 300;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 6648);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 600;
    xsi_driver_first_trans_fast(t1);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 6648);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = 500;
    xsi_driver_first_trans_fast(t1);
    goto LAB21;

LAB23:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 6648);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 700;
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 6648);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 2000;
    xsi_driver_first_trans_fast(t1);

LAB36:
LAB30:    goto LAB27;

LAB29:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 1832U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 6648);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 1000;
    xsi_driver_first_trans_fast(t1);

LAB33:    goto LAB30;

LAB32:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 6648);
    t11 = (t1 + 56U);
    t14 = *((char **)t11);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = 900;
    xsi_driver_first_trans_fast(t1);
    goto LAB33;

LAB35:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 6648);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 1500;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB38:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 6648);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 3000;
    xsi_driver_first_trans_fast(t1);

LAB42:    goto LAB39;

LAB41:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 6648);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = 2500;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

LAB44:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 6648);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 3500;
    xsi_driver_first_trans_fast(t1);
    goto LAB45;

}

static void work_a_2525893486_1516540902_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(169, ng0);
    t1 = (t0 + 6712);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);

LAB45:
LAB39:
LAB27:
LAB3:    t1 = (t0 + 6520);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 6712);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 7;
    xsi_driver_first_trans_fast(t1);

LAB24:
LAB18:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 2312U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(125, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 6712);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 3;
    xsi_driver_first_trans_fast(t1);

LAB15:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 2472U);
    t11 = *((char **)t1);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 6712);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 1;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 6712);
    t14 = (t1 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 6712);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 2;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 6712);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 5;
    xsi_driver_first_trans_fast(t1);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 6712);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = 4;
    xsi_driver_first_trans_fast(t1);
    goto LAB21;

LAB23:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 6712);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 6;
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(156, ng0);
    t1 = (t0 + 6712);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);

LAB36:
LAB30:    goto LAB27;

LAB29:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 2472U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 6712);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 9;
    xsi_driver_first_trans_fast(t1);

LAB33:    goto LAB30;

LAB32:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 6712);
    t11 = (t1 + 56U);
    t14 = *((char **)t11);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = 8;
    xsi_driver_first_trans_fast(t1);
    goto LAB33;

LAB35:    xsi_set_current_line(154, ng0);
    t1 = (t0 + 6712);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 10;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB38:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 6712);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);

LAB42:    goto LAB39;

LAB41:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 6712);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

LAB44:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 6712);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB45;

}

static void work_a_2525893486_1516540902_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(176, ng0);

LAB3:    t1 = (t0 + 4208U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 3912U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t6 = (t3 / t5);
    t1 = (t0 + 6776);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 6536);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_1516540902_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    int t5;
    int t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(177, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 3432U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t6 = (t3 * t5);
    t7 = (t6 / 10);
    t1 = (t0 + 6840);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 6552);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_1516540902_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 6568);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(184, ng0);
    t1 = (t0 + 6904);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(185, ng0);
    t1 = (t0 + 6968);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(188, ng0);
    t2 = (t0 + 2792U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t2 = (t0 + 3752U);
    t6 = *((char **)t2);
    t10 = *((int *)t6);
    t11 = (t10 - 1);
    t4 = (t9 == t11);
    if (t4 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t11 = (t10 - 1);
    t3 = (t9 == t11);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(209, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 + 1);
    t1 = (t0 + 6904);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t10;
    xsi_driver_first_trans_fast(t1);

LAB18:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(189, ng0);
    t2 = (t0 + 2792U);
    t7 = *((char **)t2);
    t12 = *((int *)t7);
    t2 = (t0 + 3592U);
    t8 = *((char **)t2);
    t13 = *((int *)t8);
    t14 = (t13 - 1);
    t15 = (t12 == t14);
    if (t15 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 + 1);
    t1 = (t0 + 6904);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t10;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(198, ng0);
    t1 = (t0 + 6968);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 6904);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((int *)t19) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(191, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 != 0);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 6968);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 6968);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 6904);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    *((int *)t16) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(203, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 != 0);
    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 6968);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(204, ng0);
    t1 = (t0 + 6968);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB21;

}


extern void work_a_2525893486_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2525893486_1516540902_p_0,(void *)work_a_2525893486_1516540902_p_1,(void *)work_a_2525893486_1516540902_p_2,(void *)work_a_2525893486_1516540902_p_3,(void *)work_a_2525893486_1516540902_p_4};
	xsi_register_didat("work_a_2525893486_1516540902", "isim/pwm_testbench_isim_beh.exe.sim/work/a_2525893486_1516540902.didat");
	xsi_register_executes(pe);
}
