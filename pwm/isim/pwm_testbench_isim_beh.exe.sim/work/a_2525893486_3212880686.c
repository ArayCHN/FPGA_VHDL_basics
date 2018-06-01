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


void work_a_2525893486_3212880686_sub_3807832798_3057020925(char *t0, char *t1, char *t2, unsigned int t3, unsigned int t4, char *t5, unsigned int t6, unsigned int t7, char *t8, int t9)
{
    char t11[8];
    char t12[16];
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned char t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;

LAB0:    t13 = (t12 + 0U);
    t14 = (t13 + 0U);
    *((int *)t14) = 0;
    t14 = (t13 + 4U);
    *((int *)t14) = 7;
    t14 = (t13 + 8U);
    *((int *)t14) = 1;
    t15 = (7 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t14 = (t13 + 12U);
    *((unsigned int *)t14) = t16;
    t14 = (t11 + 4U);
    *((int *)t14) = t9;
    t17 = (t9 != 3);
    if (t17 != 0)
        goto LAB2;

LAB4:    t13 = (t2 + 40U);
    t18 = *((char **)t13);
    t13 = (t18 + t4);
    t15 = *((int *)t13);
    if (t15 == 0)
        goto LAB29;

LAB40:    if (t15 == 1)
        goto LAB30;

LAB41:    if (t15 == 2)
        goto LAB31;

LAB42:    if (t15 == 3)
        goto LAB32;

LAB43:    if (t15 == 4)
        goto LAB33;

LAB44:    if (t15 == 5)
        goto LAB34;

LAB45:    if (t15 == 6)
        goto LAB35;

LAB46:    if (t15 == 7)
        goto LAB36;

LAB47:    if (t15 == 8)
        goto LAB37;

LAB48:    if (t15 == 9)
        goto LAB38;

LAB49:
LAB39:    t13 = (t0 + 19200);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);

LAB28:
LAB3:
LAB1:    return;
LAB2:    t18 = (t2 + 40U);
    t19 = *((char **)t18);
    t18 = (t19 + t4);
    t20 = *((int *)t18);
    if (t20 == 0)
        goto LAB6;

LAB17:    if (t20 == 1)
        goto LAB7;

LAB18:    if (t20 == 2)
        goto LAB8;

LAB19:    if (t20 == 3)
        goto LAB9;

LAB20:    if (t20 == 4)
        goto LAB10;

LAB21:    if (t20 == 5)
        goto LAB11;

LAB22:    if (t20 == 6)
        goto LAB12;

LAB23:    if (t20 == 7)
        goto LAB13;

LAB24:    if (t20 == 8)
        goto LAB14;

LAB25:    if (t20 == 9)
        goto LAB15;

LAB26:
LAB16:    t13 = (t0 + 19112);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);

LAB5:    goto LAB3;

LAB6:    t19 = (t0 + 19032);
    t16 = (0 + t6);
    t22 = (t8 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t12 + 12U);
    t27 = *((unsigned int *)t26);
    t27 = (t27 * 1U);
    memcpy(t25, t19, t27);
    t28 = (t12 + 12U);
    t29 = *((unsigned int *)t28);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB5;

LAB7:    t13 = (t0 + 19040);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB5;

LAB8:    t13 = (t0 + 19048);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB5;

LAB9:    t13 = (t0 + 19056);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB5;

LAB10:    t13 = (t0 + 19064);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB5;

LAB11:    t13 = (t0 + 19072);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB5;

LAB12:    t13 = (t0 + 19080);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB5;

LAB13:    t13 = (t0 + 19088);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB5;

LAB14:    t13 = (t0 + 19096);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB5;

LAB15:    t13 = (t0 + 19104);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB5;

LAB27:;
LAB29:    t18 = (t0 + 19120);
    t16 = (0 + t6);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t12 + 12U);
    t27 = *((unsigned int *)t25);
    t27 = (t27 * 1U);
    memcpy(t24, t18, t27);
    t26 = (t12 + 12U);
    t29 = *((unsigned int *)t26);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB28;

LAB30:    t13 = (t0 + 19128);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB28;

LAB31:    t13 = (t0 + 19136);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB28;

LAB32:    t13 = (t0 + 19144);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB28;

LAB33:    t13 = (t0 + 19152);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB28;

LAB34:    t13 = (t0 + 19160);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB28;

LAB35:    t13 = (t0 + 19168);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB28;

LAB36:    t13 = (t0 + 19176);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB28;

LAB37:    t13 = (t0 + 19184);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB28;

LAB38:    t13 = (t0 + 19192);
    t16 = (0 + t6);
    t19 = (t8 + 56U);
    t21 = *((char **)t19);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t12 + 12U);
    t27 = *((unsigned int *)t24);
    t27 = (t27 * 1U);
    memcpy(t23, t13, t27);
    t25 = (t12 + 12U);
    t29 = *((unsigned int *)t25);
    t30 = (1U * t29);
    xsi_driver_first_trans_delta(t8, t16, t30, 0LL);
    goto LAB28;

LAB50:;
}

static void work_a_2525893486_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(141, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 11376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 4000;
    xsi_driver_first_trans_fast(t1);

LAB45:
LAB39:
LAB27:
LAB3:    t1 = (t0 + 10992);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(122, ng0);
    t1 = (t0 + 11376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 800;
    xsi_driver_first_trans_fast(t1);

LAB24:
LAB18:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1672U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 11376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 400;
    xsi_driver_first_trans_fast(t1);

LAB15:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 1832U);
    t11 = *((char **)t1);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 11376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 200;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 11376);
    t14 = (t1 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = 100;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 11376);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 300;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 11376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 600;
    xsi_driver_first_trans_fast(t1);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 11376);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = 500;
    xsi_driver_first_trans_fast(t1);
    goto LAB21;

LAB23:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 11376);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 700;
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(134, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 11376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 2000;
    xsi_driver_first_trans_fast(t1);

LAB36:
LAB30:    goto LAB27;

LAB29:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 1832U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 11376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 1000;
    xsi_driver_first_trans_fast(t1);

LAB33:    goto LAB30;

LAB32:    xsi_set_current_line(130, ng0);
    t1 = (t0 + 11376);
    t11 = (t1 + 56U);
    t14 = *((char **)t11);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = 900;
    xsi_driver_first_trans_fast(t1);
    goto LAB33;

LAB35:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 11376);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 1500;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB38:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(145, ng0);
    t1 = (t0 + 11376);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 3000;
    xsi_driver_first_trans_fast(t1);

LAB42:    goto LAB39;

LAB41:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 11376);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = 2500;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

LAB44:    xsi_set_current_line(148, ng0);
    t1 = (t0 + 11376);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 3500;
    xsi_driver_first_trans_fast(t1);
    goto LAB45;

}

static void work_a_2525893486_3212880686_p_1(char *t0)
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

LAB0:    xsi_set_current_line(159, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(188, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(202, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(208, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(211, ng0);
    t1 = (t0 + 11440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);

LAB45:
LAB39:
LAB27:
LAB3:    t1 = (t0 + 11008);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 2152U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(174, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(180, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(183, ng0);
    t1 = (t0 + 11440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 7;
    xsi_driver_first_trans_fast(t1);

LAB24:
LAB18:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 2312U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 11440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 3;
    xsi_driver_first_trans_fast(t1);

LAB15:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 2472U);
    t11 = *((char **)t1);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)2);
    if (t13 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 11440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 1;
    xsi_driver_first_trans_fast(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 11440);
    t14 = (t1 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB12;

LAB14:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 11440);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 2;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(175, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(178, ng0);
    t1 = (t0 + 11440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 5;
    xsi_driver_first_trans_fast(t1);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(176, ng0);
    t1 = (t0 + 11440);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = 4;
    xsi_driver_first_trans_fast(t1);
    goto LAB21;

LAB23:    xsi_set_current_line(181, ng0);
    t1 = (t0 + 11440);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 6;
    xsi_driver_first_trans_fast(t1);
    goto LAB24;

LAB26:    xsi_set_current_line(189, ng0);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(195, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB35;

LAB37:    xsi_set_current_line(198, ng0);
    t1 = (t0 + 11440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);

LAB36:
LAB30:    goto LAB27;

LAB29:    xsi_set_current_line(190, ng0);
    t1 = (t0 + 2472U);
    t8 = *((char **)t1);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)2);
    if (t10 != 0)
        goto LAB32;

LAB34:    xsi_set_current_line(193, ng0);
    t1 = (t0 + 11440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 9;
    xsi_driver_first_trans_fast(t1);

LAB33:    goto LAB30;

LAB32:    xsi_set_current_line(191, ng0);
    t1 = (t0 + 11440);
    t11 = (t1 + 56U);
    t14 = *((char **)t11);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = 8;
    xsi_driver_first_trans_fast(t1);
    goto LAB33;

LAB35:    xsi_set_current_line(196, ng0);
    t1 = (t0 + 11440);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 10;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

LAB38:    xsi_set_current_line(203, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    if (t7 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(206, ng0);
    t1 = (t0 + 11440);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    *((int *)t11) = 0;
    xsi_driver_first_trans_fast(t1);

LAB42:    goto LAB39;

LAB41:    xsi_set_current_line(204, ng0);
    t1 = (t0 + 11440);
    t8 = (t1 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    *((int *)t15) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB42;

LAB44:    xsi_set_current_line(209, ng0);
    t1 = (t0 + 11440);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t11 = (t8 + 56U);
    t14 = *((char **)t11);
    *((int *)t14) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB45;

}

static void work_a_2525893486_3212880686_p_2(char *t0)
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

LAB0:    xsi_set_current_line(218, ng0);

LAB3:    t1 = (t0 + 5968U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 4392U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t6 = (t3 / t5);
    t1 = (t0 + 11504);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 11024);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_3212880686_p_3(char *t0)
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

LAB0:    xsi_set_current_line(219, ng0);

LAB3:    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t1 = (t0 + 4072U);
    t4 = *((char **)t1);
    t5 = *((int *)t4);
    t6 = (t3 * t5);
    t7 = (t6 / 10);
    t1 = (t0 + 11568);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t7;
    xsi_driver_first_trans_fast(t1);

LAB2:    t12 = (t0 + 11040);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_3212880686_p_4(char *t0)
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

LAB0:    xsi_set_current_line(225, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(229, ng0);
    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 11056);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(226, ng0);
    t1 = (t0 + 11632);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(227, ng0);
    t1 = (t0 + 11696);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(230, ng0);
    t2 = (t0 + 3432U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t2 = (t0 + 3912U);
    t6 = *((char **)t2);
    t10 = *((int *)t6);
    t11 = (t10 - 1);
    t4 = (t9 == t11);
    if (t4 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(243, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t1 = (t0 + 3752U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    t11 = (t10 - 1);
    t3 = (t9 == t11);
    if (t3 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(251, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 + 1);
    t1 = (t0 + 11632);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t10;
    xsi_driver_first_trans_fast(t1);

LAB18:
LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(231, ng0);
    t2 = (t0 + 3432U);
    t7 = *((char **)t2);
    t12 = *((int *)t7);
    t2 = (t0 + 3752U);
    t8 = *((char **)t2);
    t13 = *((int *)t8);
    t14 = (t13 - 1);
    t15 = (t12 == t14);
    if (t15 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(239, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t10 = (t9 + 1);
    t1 = (t0 + 11632);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t10;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(240, ng0);
    t1 = (t0 + 11696);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(232, ng0);
    t2 = (t0 + 11632);
    t16 = (t2 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((int *)t19) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(233, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 != 0);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(236, ng0);
    t1 = (t0 + 11696);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(234, ng0);
    t1 = (t0 + 11696);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB15;

LAB17:    xsi_set_current_line(244, ng0);
    t1 = (t0 + 11632);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t16 = *((char **)t8);
    *((int *)t16) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(245, ng0);
    t1 = (t0 + 3912U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t3 = (t9 != 0);
    if (t3 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(248, ng0);
    t1 = (t0 + 11696);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(246, ng0);
    t1 = (t0 + 11696);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB21;

}

static void work_a_2525893486_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(258, ng0);

LAB3:    t1 = (t0 + 11760);
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

static void work_a_2525893486_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(259, ng0);

LAB3:    t1 = (t0 + 11824);
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

static void work_a_2525893486_3212880686_p_7(char *t0)
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

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = xsi_vhdl_mod(t3, 10);
    t1 = (t0 + 11888);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 11072);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_3212880686_p_8(char *t0)
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

LAB0:    xsi_set_current_line(261, ng0);

LAB3:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 / 10);
    t1 = (t0 + 11952);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 11088);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_3212880686_p_9(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(262, ng0);

LAB3:    t1 = (t0 + 12016);
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

static void work_a_2525893486_3212880686_p_10(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    xsi_set_current_line(263, ng0);

LAB3:    t1 = (t0 + 12080);
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

static void work_a_2525893486_3212880686_p_11(char *t0)
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

LAB0:    xsi_set_current_line(264, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 / 100);
    t5 = xsi_vhdl_mod(t4, 10);
    t1 = (t0 + 12144);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t5;
    xsi_driver_first_trans_fast(t1);

LAB2:    t10 = (t0 + 11104);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_3212880686_p_12(char *t0)
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

LAB0:    xsi_set_current_line(265, ng0);

LAB3:    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 / 1000);
    t1 = (t0 + 12208);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 11120);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_3212880686_p_13(char *t0)
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
    char *t10;
    int t11;

LAB0:    xsi_set_current_line(269, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(272, ng0);
    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    t1 = (t0 + 11136);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(270, ng0);
    t1 = (t0 + 12272);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(273, ng0);
    t2 = (t0 + 3592U);
    t5 = *((char **)t2);
    t9 = *((int *)t5);
    t4 = (t9 == 79999);
    if (t4 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(276, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t11 = (t9 + 1);
    t1 = (t0 + 12272);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t11;
    xsi_driver_first_trans_fast(t1);

LAB9:    goto LAB6;

LAB8:    xsi_set_current_line(274, ng0);
    t2 = (t0 + 12272);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);
    goto LAB9;

}

static void work_a_2525893486_3212880686_p_14(char *t0)
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

LAB0:    xsi_set_current_line(282, ng0);

LAB3:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 / 10000);
    t1 = (t0 + 12336);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 11152);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2525893486_3212880686_p_15(char *t0)
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
    char *t10;
    int t11;

LAB0:    xsi_set_current_line(286, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(290, ng0);
    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    if (t11 == 0)
        goto LAB6;

LAB15:    if (t11 == 1)
        goto LAB7;

LAB16:    if (t11 == 2)
        goto LAB8;

LAB17:    if (t11 == 3)
        goto LAB9;

LAB18:    if (t11 == 4)
        goto LAB10;

LAB19:    if (t11 == 5)
        goto LAB11;

LAB20:    if (t11 == 6)
        goto LAB12;

LAB21:    if (t11 == 7)
        goto LAB13;

LAB22:
LAB14:    xsi_set_current_line(316, ng0);
    t1 = (t0 + 19288);
    t5 = (t0 + 12464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);

LAB5:
LAB3:    t1 = (t0 + 11168);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(287, ng0);
    t1 = (t0 + 19208);
    t6 = (t0 + 12400);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(288, ng0);
    t1 = (t0 + 19216);
    t5 = (t0 + 12464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB6:    xsi_set_current_line(292, ng0);
    t1 = (t0 + 19224);
    t6 = (t0 + 12464);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(293, ng0);
    t1 = (t0 + 10480);
    t2 = (t0 + 4512U);
    t5 = (t0 + 2752U);
    t6 = (t0 + 12400);
    t7 = (t0 + 4232U);
    t8 = *((char **)t7);
    t11 = *((int *)t8);
    work_a_2525893486_3212880686_sub_3807832798_3057020925(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, t11);
    goto LAB5;

LAB7:    xsi_set_current_line(295, ng0);
    t1 = (t0 + 19232);
    t5 = (t0 + 12464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(296, ng0);
    t1 = (t0 + 10480);
    t2 = (t0 + 4672U);
    t5 = (t0 + 2752U);
    t6 = (t0 + 12400);
    t7 = (t0 + 4232U);
    t8 = *((char **)t7);
    t11 = *((int *)t8);
    work_a_2525893486_3212880686_sub_3807832798_3057020925(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, t11);
    goto LAB5;

LAB8:    xsi_set_current_line(298, ng0);
    t1 = (t0 + 19240);
    t5 = (t0 + 12464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(299, ng0);
    t1 = (t0 + 10480);
    t2 = (t0 + 4832U);
    t5 = (t0 + 2752U);
    t6 = (t0 + 12400);
    t7 = (t0 + 4232U);
    t8 = *((char **)t7);
    t11 = *((int *)t8);
    work_a_2525893486_3212880686_sub_3807832798_3057020925(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, t11);
    goto LAB5;

LAB9:    xsi_set_current_line(301, ng0);
    t1 = (t0 + 19248);
    t5 = (t0 + 12464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(302, ng0);
    t1 = (t0 + 10480);
    t2 = (t0 + 4992U);
    t5 = (t0 + 2752U);
    t6 = (t0 + 12400);
    t7 = (t0 + 4232U);
    t8 = *((char **)t7);
    t11 = *((int *)t8);
    work_a_2525893486_3212880686_sub_3807832798_3057020925(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, t11);
    goto LAB5;

LAB10:    xsi_set_current_line(304, ng0);
    t1 = (t0 + 19256);
    t5 = (t0 + 12464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(305, ng0);
    t1 = (t0 + 10480);
    t2 = (t0 + 5152U);
    t5 = (t0 + 2752U);
    t6 = (t0 + 12400);
    t7 = (t0 + 4232U);
    t8 = *((char **)t7);
    t11 = *((int *)t8);
    work_a_2525893486_3212880686_sub_3807832798_3057020925(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, t11);
    goto LAB5;

LAB11:    xsi_set_current_line(307, ng0);
    t1 = (t0 + 19264);
    t5 = (t0 + 12464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(308, ng0);
    t1 = (t0 + 10480);
    t2 = (t0 + 5312U);
    t5 = (t0 + 2752U);
    t6 = (t0 + 12400);
    t7 = (t0 + 4232U);
    t8 = *((char **)t7);
    t11 = *((int *)t8);
    work_a_2525893486_3212880686_sub_3807832798_3057020925(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, t11);
    goto LAB5;

LAB12:    xsi_set_current_line(310, ng0);
    t1 = (t0 + 19272);
    t5 = (t0 + 12464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(311, ng0);
    t1 = (t0 + 10480);
    t2 = (t0 + 5472U);
    t5 = (t0 + 2752U);
    t6 = (t0 + 12400);
    t7 = (t0 + 4232U);
    t8 = *((char **)t7);
    t11 = *((int *)t8);
    work_a_2525893486_3212880686_sub_3807832798_3057020925(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, t11);
    goto LAB5;

LAB13:    xsi_set_current_line(313, ng0);
    t1 = (t0 + 19280);
    t5 = (t0 + 12464);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(314, ng0);
    t1 = (t0 + 10480);
    t2 = (t0 + 5632U);
    t5 = (t0 + 2752U);
    t6 = (t0 + 12400);
    t7 = (t0 + 4232U);
    t8 = *((char **)t7);
    t11 = *((int *)t8);
    work_a_2525893486_3212880686_sub_3807832798_3057020925(t0, t1, t2, 0U, 0U, t5, 0U, 0U, t6, t11);
    goto LAB5;

LAB23:;
}


extern void work_a_2525893486_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2525893486_3212880686_p_0,(void *)work_a_2525893486_3212880686_p_1,(void *)work_a_2525893486_3212880686_p_2,(void *)work_a_2525893486_3212880686_p_3,(void *)work_a_2525893486_3212880686_p_4,(void *)work_a_2525893486_3212880686_p_5,(void *)work_a_2525893486_3212880686_p_6,(void *)work_a_2525893486_3212880686_p_7,(void *)work_a_2525893486_3212880686_p_8,(void *)work_a_2525893486_3212880686_p_9,(void *)work_a_2525893486_3212880686_p_10,(void *)work_a_2525893486_3212880686_p_11,(void *)work_a_2525893486_3212880686_p_12,(void *)work_a_2525893486_3212880686_p_13,(void *)work_a_2525893486_3212880686_p_14,(void *)work_a_2525893486_3212880686_p_15};
	static char *se[] = {(void *)work_a_2525893486_3212880686_sub_3807832798_3057020925};
	xsi_register_didat("work_a_2525893486_3212880686", "isim/pwm_testbench_isim_beh.exe.sim/work/a_2525893486_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
