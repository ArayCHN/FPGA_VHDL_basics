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


void work_a_2525893486_1516540902_sub_3984441535_2134189630(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5, unsigned int t6, unsigned int t7, char *t8, unsigned int t9, unsigned int t10, char *t11)
{
    char t14[16];
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    char *t19;
    int t20;
    unsigned char t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;

LAB0:    t15 = (t14 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 0;
    t16 = (t15 + 4U);
    *((int *)t16) = 7;
    t16 = (t15 + 8U);
    *((int *)t16) = 1;
    t17 = (7 - 0);
    t18 = (t17 * 1);
    t18 = (t18 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t18;
    t16 = (t5 + 40U);
    t19 = *((char **)t16);
    t16 = (t19 + t7);
    t20 = *((int *)t16);
    t21 = (t20 != 3);
    if (t21 != 0)
        goto LAB2;

LAB4:    t15 = (t2 + 40U);
    t16 = *((char **)t15);
    t15 = (t16 + t4);
    t17 = *((int *)t15);
    if (t17 == 0)
        goto LAB29;

LAB40:    if (t17 == 1)
        goto LAB30;

LAB41:    if (t17 == 2)
        goto LAB31;

LAB42:    if (t17 == 3)
        goto LAB32;

LAB43:    if (t17 == 4)
        goto LAB33;

LAB44:    if (t17 == 5)
        goto LAB34;

LAB45:    if (t17 == 6)
        goto LAB35;

LAB46:    if (t17 == 7)
        goto LAB36;

LAB47:    if (t17 == 8)
        goto LAB37;

LAB48:    if (t17 == 9)
        goto LAB38;

LAB49:
LAB39:    t15 = (t0 + 17792);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);

LAB28:
LAB3:
LAB1:    return;
LAB2:    t19 = (t2 + 40U);
    t22 = *((char **)t19);
    t19 = (t22 + t4);
    t23 = *((int *)t19);
    if (t23 == 0)
        goto LAB6;

LAB17:    if (t23 == 1)
        goto LAB7;

LAB18:    if (t23 == 2)
        goto LAB8;

LAB19:    if (t23 == 3)
        goto LAB9;

LAB20:    if (t23 == 4)
        goto LAB10;

LAB21:    if (t23 == 5)
        goto LAB11;

LAB22:    if (t23 == 6)
        goto LAB12;

LAB23:    if (t23 == 7)
        goto LAB13;

LAB24:    if (t23 == 8)
        goto LAB14;

LAB25:    if (t23 == 9)
        goto LAB15;

LAB26:
LAB16:    t15 = (t0 + 17704);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);

LAB5:    goto LAB3;

LAB6:    t22 = (t0 + 17624);
    t18 = (0 + t9);
    t25 = (t11 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t14 + 12U);
    t30 = *((unsigned int *)t29);
    t30 = (t30 * 1U);
    memcpy(t28, t22, t30);
    t31 = (t14 + 12U);
    t32 = *((unsigned int *)t31);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB5;

LAB7:    t15 = (t0 + 17632);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB5;

LAB8:    t15 = (t0 + 17640);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB5;

LAB9:    t15 = (t0 + 17648);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB5;

LAB10:    t15 = (t0 + 17656);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB5;

LAB11:    t15 = (t0 + 17664);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB5;

LAB12:    t15 = (t0 + 17672);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB5;

LAB13:    t15 = (t0 + 17680);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB5;

LAB14:    t15 = (t0 + 17688);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB5;

LAB15:    t15 = (t0 + 17696);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB5;

LAB27:;
LAB29:    t16 = (t0 + 17712);
    t18 = (0 + t9);
    t22 = (t11 + 56U);
    t24 = *((char **)t22);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t14 + 12U);
    t30 = *((unsigned int *)t27);
    t30 = (t30 * 1U);
    memcpy(t26, t16, t30);
    t28 = (t14 + 12U);
    t32 = *((unsigned int *)t28);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB28;

LAB30:    t15 = (t0 + 17720);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB28;

LAB31:    t15 = (t0 + 17728);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB28;

LAB32:    t15 = (t0 + 17736);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB28;

LAB33:    t15 = (t0 + 17744);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB28;

LAB34:    t15 = (t0 + 17752);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB28;

LAB35:    t15 = (t0 + 17760);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB28;

LAB36:    t15 = (t0 + 17768);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB28;

LAB37:    t15 = (t0 + 17776);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB28;

LAB38:    t15 = (t0 + 17784);
    t18 = (0 + t9);
    t19 = (t11 + 56U);
    t22 = *((char **)t19);
    t24 = (t22 + 56U);
    t25 = *((char **)t24);
    t26 = (t14 + 12U);
    t30 = *((unsigned int *)t26);
    t30 = (t30 * 1U);
    memcpy(t25, t15, t30);
    t27 = (t14 + 12U);
    t32 = *((unsigned int *)t27);
    t33 = (1U * t32);
    xsi_driver_first_trans_delta(t11, t18, t33, 0LL);
    goto LAB28;

LAB50:;
}

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

LAB0:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(140, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(146, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 4000;
    xsi_driver_first_trans_fast(t1);

LAB45:
LAB39:
LAB27:
LAB3:    t1 = (t0 + 10496);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(121, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 800;
    xsi_driver_first_trans_fast(t1);

LAB24:
LAB18:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1672U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 400;
    xsi_driver_first_trans_fast(t1);

LAB15:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1832U);
    t11 = *((char **)t1);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 200;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 10848);
    t14 = (t1 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = 100;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 10848);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 300;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 600;
    xsi_driver_first_trans_fast(t1);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 10848);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = 500;
    xsi_driver_first_trans_fast(t1);
    goto LAB21;

LAB23:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 10848);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 700;
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(136, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 2000;
    xsi_driver_first_trans_fast(t1);

LAB36:
LAB30:    goto LAB27;

LAB29:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 1832U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 1000;
    xsi_driver_first_trans_fast(t1);

LAB33:    goto LAB30;

LAB32:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 10848);
    t11 = (t1 + 56U);
    t14 = *((char **)t11);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = 900;
    xsi_driver_first_trans_fast(t1);
    goto LAB33;

LAB35:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 10848);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 1500;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB38:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 10848);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 3000;
    xsi_driver_first_trans_fast(t1);

LAB42:    goto LAB39;

LAB41:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 10848);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = 2500;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

LAB44:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 10848);
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

LAB0:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(187, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(201, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(207, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(210, ng0);
    t1 = (t0 + 10912);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);

LAB45:
LAB39:
LAB27:
LAB3:    t1 = (t0 + 10512);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(173, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(179, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(182, ng0);
    t1 = (t0 + 10912);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 7;
    xsi_driver_first_trans_fast(t1);

LAB24:
LAB18:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 2312U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(169, ng0);
    t1 = (t0 + 10912);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 3;
    xsi_driver_first_trans_fast(t1);

LAB15:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 2472U);
    t11 = *((char **)t1);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 10912);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 1;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 10912);
    t14 = (t1 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 10912);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 2;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(174, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(177, ng0);
    t1 = (t0 + 10912);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 5;
    xsi_driver_first_trans_fast(t1);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 10912);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = 4;
    xsi_driver_first_trans_fast(t1);
    goto LAB21;

LAB23:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 10912);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 6;
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    xsi_set_current_line(188, ng0);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(194, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(197, ng0);
    t1 = (t0 + 10912);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);

LAB36:
LAB30:    goto LAB27;

LAB29:    xsi_set_current_line(189, ng0);
    t1 = (t0 + 2472U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(192, ng0);
    t1 = (t0 + 10912);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 9;
    xsi_driver_first_trans_fast(t1);

LAB33:    goto LAB30;

LAB32:    xsi_set_current_line(190, ng0);
    t1 = (t0 + 10912);
    t11 = (t1 + 56U);
    t14 = *((char **)t11);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = 8;
    xsi_driver_first_trans_fast(t1);
    goto LAB33;

LAB35:    xsi_set_current_line(195, ng0);
    t1 = (t0 + 10912);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 10;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB38:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(205, ng0);
    t1 = (t0 + 10912);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);

LAB42:    goto LAB39;

LAB41:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 10912);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

LAB44:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 10912);
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

LAB0:    xsi_set_current_line(217, ng0);

LAB3:    t1 = (t0 + 5968U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 4392U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t6 = (t3 / t5);
    t1 = (t0 + 10976);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 10528);
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

LAB0:    xsi_set_current_line(218, ng0);

LAB3:    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 3752U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t6 = (t3 * t5);
    t7 = (t6 / 10);
    t1 = (t0 + 11040);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 10544);
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

LAB0:    xsi_set_current_line(224, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(228, ng0);
    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 10560);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(225, ng0);
    t1 = (t0 + 11104);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(226, ng0);
    t1 = (t0 + 11168);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(229, ng0);
    t2 = (t0 + 3112U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t2 = (t0 + 4072U);
    t6 = *((char **)t2);
    t10 = *((int *)t6);
    t11 = (t10 - 1);
    t4 = (t9 == t11);
    if (t4 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(242, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t1 = (t0 + 3912U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t11 = (t10 - 1);
    t3 = (t9 == t11);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(250, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 + 1);
    t1 = (t0 + 11104);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t10;
    xsi_driver_first_trans_fast(t1);

LAB18:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 3112U);
    t7 = *((char **)t2);
    t12 = *((int *)t7);
    t2 = (t0 + 3912U);
    t8 = *((char **)t2);
    t13 = *((int *)t8);
    t14 = (t13 - 1);
    t15 = (t12 == t14);
    if (t15 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(238, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 + 1);
    t1 = (t0 + 11104);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t10;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(239, ng0);
    t1 = (t0 + 11168);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 11104);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((int *)t19) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(232, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 != 0);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(235, ng0);
    t1 = (t0 + 11168);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(233, ng0);
    t1 = (t0 + 11168);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(243, ng0);
    t1 = (t0 + 11104);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    *((int *)t16) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(244, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 != 0);
    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(247, ng0);
    t1 = (t0 + 11168);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(245, ng0);
    t1 = (t0 + 11168);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB21;

}

static void work_a_2525893486_1516540902_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(257, ng0);

LAB3:    t1 = (t0 + 11232);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 0;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_1516540902_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(258, ng0);

LAB3:    t1 = (t0 + 11296);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 0;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_1516540902_p_7(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(259, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = xsi_vhdl_mod(t3, 10);
    t1 = (t0 + 11360);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 10576);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_1516540902_p_8(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(260, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 / 10);
    t1 = (t0 + 11424);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 10592);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_1516540902_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(261, ng0);

LAB3:    t1 = (t0 + 11488);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 0;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_1516540902_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(262, ng0);

LAB3:    t1 = (t0 + 11552);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((int *)t5) = 0;
    xsi_driver_first_trans_fast(t1);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_1516540902_p_11(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(263, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 / 100);
    t5 = xsi_vhdl_mod(t4, 10);
    t1 = (t0 + 11616);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t5;
    xsi_driver_first_trans_fast(t1);

LAB2:    t10 = (t0 + 10608);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_1516540902_p_12(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(264, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 / 1000);
    t1 = (t0 + 11680);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 10624);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_1516540902_p_13(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    char *t12;

LAB0:    xsi_set_current_line(268, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(273, ng0);
    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 10640);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(269, ng0);
    t1 = (t0 + 11744);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(270, ng0);
    t1 = (t0 + 17800);
    t5 = (t0 + 11808);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(271, ng0);
    t1 = (t0 + 17808);
    t5 = (t0 + 11872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(274, ng0);
    t2 = (t0 + 4232U);
    t5 = *((char **)t2);
    t10 = *((int *)t5);
    t4 = (t10 == 8);
    if (t4 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(277, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t11 = (t10 + 1);
    t1 = (t0 + 11744);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t11;
    xsi_driver_first_trans_fast(t1);

LAB9:    xsi_set_current_line(279, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    if (t10 == 0)
        goto LAB12;

LAB21:    if (t10 == 1)
        goto LAB13;

LAB22:    if (t10 == 2)
        goto LAB14;

LAB23:    if (t10 == 3)
        goto LAB15;

LAB24:    if (t10 == 4)
        goto LAB16;

LAB25:    if (t10 == 5)
        goto LAB17;

LAB26:    if (t10 == 6)
        goto LAB18;

LAB27:    if (t10 == 7)
        goto LAB19;

LAB28:
LAB20:    xsi_set_current_line(305, ng0);
    t1 = (t0 + 17880);
    t5 = (t0 + 11872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB11:    goto LAB6;

LAB8:    xsi_set_current_line(275, ng0);
    t2 = (t0 + 11744);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

LAB12:    xsi_set_current_line(281, ng0);
    t1 = (t0 + 17816);
    t6 = (t0 + 11872);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t12 = *((char **)t9);
    memcpy(t12, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(282, ng0);
    t1 = (t0 + 9984);
    t2 = (t0 + 4512U);
    t5 = (t0 + 4192U);
    t6 = (t0 + 2752U);
    t7 = (t0 + 11808);
    work_a_2525893486_1516540902_sub_3984441535_2134189630(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, 0U, 0U, t7);
    goto LAB11;

LAB13:    xsi_set_current_line(284, ng0);
    t1 = (t0 + 17824);
    t5 = (t0 + 11872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(285, ng0);
    t1 = (t0 + 9984);
    t2 = (t0 + 4672U);
    t5 = (t0 + 4192U);
    t6 = (t0 + 2752U);
    t7 = (t0 + 11808);
    work_a_2525893486_1516540902_sub_3984441535_2134189630(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, 0U, 0U, t7);
    goto LAB11;

LAB14:    xsi_set_current_line(287, ng0);
    t1 = (t0 + 17832);
    t5 = (t0 + 11872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(288, ng0);
    t1 = (t0 + 9984);
    t2 = (t0 + 4832U);
    t5 = (t0 + 4192U);
    t6 = (t0 + 2752U);
    t7 = (t0 + 11808);
    work_a_2525893486_1516540902_sub_3984441535_2134189630(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, 0U, 0U, t7);
    goto LAB11;

LAB15:    xsi_set_current_line(290, ng0);
    t1 = (t0 + 17840);
    t5 = (t0 + 11872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(291, ng0);
    t1 = (t0 + 9984);
    t2 = (t0 + 4992U);
    t5 = (t0 + 4192U);
    t6 = (t0 + 2752U);
    t7 = (t0 + 11808);
    work_a_2525893486_1516540902_sub_3984441535_2134189630(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, 0U, 0U, t7);
    goto LAB11;

LAB16:    xsi_set_current_line(293, ng0);
    t1 = (t0 + 17848);
    t5 = (t0 + 11872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(294, ng0);
    t1 = (t0 + 9984);
    t2 = (t0 + 5152U);
    t5 = (t0 + 4192U);
    t6 = (t0 + 2752U);
    t7 = (t0 + 11808);
    work_a_2525893486_1516540902_sub_3984441535_2134189630(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, 0U, 0U, t7);
    goto LAB11;

LAB17:    xsi_set_current_line(296, ng0);
    t1 = (t0 + 17856);
    t5 = (t0 + 11872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(297, ng0);
    t1 = (t0 + 9984);
    t2 = (t0 + 5312U);
    t5 = (t0 + 4192U);
    t6 = (t0 + 2752U);
    t7 = (t0 + 11808);
    work_a_2525893486_1516540902_sub_3984441535_2134189630(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, 0U, 0U, t7);
    goto LAB11;

LAB18:    xsi_set_current_line(299, ng0);
    t1 = (t0 + 17864);
    t5 = (t0 + 11872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(300, ng0);
    t1 = (t0 + 9984);
    t2 = (t0 + 5472U);
    t5 = (t0 + 4192U);
    t6 = (t0 + 2752U);
    t7 = (t0 + 11808);
    work_a_2525893486_1516540902_sub_3984441535_2134189630(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, 0U, 0U, t7);
    goto LAB11;

LAB19:    xsi_set_current_line(302, ng0);
    t1 = (t0 + 17872);
    t5 = (t0 + 11872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(303, ng0);
    t1 = (t0 + 9984);
    t2 = (t0 + 5632U);
    t5 = (t0 + 4192U);
    t6 = (t0 + 2752U);
    t7 = (t0 + 11808);
    work_a_2525893486_1516540902_sub_3984441535_2134189630(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, 0U, 0U, t7);
    goto LAB11;

LAB29:;
}


extern void work_a_2525893486_1516540902_init()
{
	static char *pe[] = {(void *)work_a_2525893486_1516540902_p_0,(void *)work_a_2525893486_1516540902_p_1,(void *)work_a_2525893486_1516540902_p_2,(void *)work_a_2525893486_1516540902_p_3,(void *)work_a_2525893486_1516540902_p_4,(void *)work_a_2525893486_1516540902_p_5,(void *)work_a_2525893486_1516540902_p_6,(void *)work_a_2525893486_1516540902_p_7,(void *)work_a_2525893486_1516540902_p_8,(void *)work_a_2525893486_1516540902_p_9,(void *)work_a_2525893486_1516540902_p_10,(void *)work_a_2525893486_1516540902_p_11,(void *)work_a_2525893486_1516540902_p_12,(void *)work_a_2525893486_1516540902_p_13};
	static char *se[] = {(void *)work_a_2525893486_1516540902_sub_3984441535_2134189630};
	xsi_register_didat("work_a_2525893486_1516540902", "isim/pwm_testbench_isim_beh.exe.sim/work/a_2525893486_1516540902.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
