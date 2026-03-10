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
static const char *ng0 = "C:/Users/eslen/OneDrive/Escritorio/6to Semestre/DLP/PmodACL_Demo/Binary_To_BCD.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4060537613_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_674691591_3965413181(char *, char *, char *, char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_1543659282_3212880686_p_0(char *t0)
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

LAB0:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1192U);
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
LAB3:    t1 = (t0 + 4288);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 4400);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 4400);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_1543659282_3212880686_p_1(char *t0)
{
    char t13[16];
    char t14[16];
    char t24[16];
    char t26[16];
    char t30[16];
    char t36[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    int t25;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t31;
    char *t32;
    int t33;
    unsigned int t34;
    char *t35;
    char *t37;
    char *t38;
    int t39;
    char *t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    static char *nl0[] = {&&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14};

LAB0:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1192U);
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
LAB3:    t1 = (t0 + 4304);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 7639);
    t6 = (12U != 12U);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 4464);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 12U);
    xsi_driver_first_trans_delta(t7, 4U, 12U, 0LL);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 7651);
    t5 = (t0 + 4528);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 28U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_size_not_matching(12U, 12U, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (char *)((nl0) + t4);
    goto **((char **)t2);

LAB9:    goto LAB3;

LAB10:    xsi_set_current_line(91, ng0);
    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t7 = (t0 + 4464);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t8, 16U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 7679);
    t5 = (t0 + 4528);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 28U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB11:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 4464);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 7707);
    t5 = (t0 + 1512U);
    t7 = *((char **)t5);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t14 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 18;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t15 = (18 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t16;
    t10 = (t0 + 7520U);
    t5 = xsi_base_array_concat(t5, t13, t8, (char)97, t1, t14, (char)97, t7, t10, (char)101);
    t16 = (19U + 9U);
    t3 = (28U != t16);
    if (t3 == 1)
        goto LAB15;

LAB16:    t11 = (t0 + 4528);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t5, 28U);
    xsi_driver_first_trans_fast(t11);
    goto LAB9;

LAB12:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 4464);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t16 = (27 - 26);
    t20 = (t16 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t7 = ((IEEE_P_2592010699) + 4024);
    t8 = (t14 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 26;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t15 = (0 - 26);
    t22 = (t15 * -1);
    t22 = (t22 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t22;
    t5 = xsi_base_array_concat(t5, t13, t7, (char)97, t1, t14, (char)99, (unsigned char)2, (char)101);
    t22 = (27U + 1U);
    t3 = (28U != t22);
    if (t3 == 1)
        goto LAB17;

LAB18:    t9 = (t0 + 4528);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t17 = *((char **)t12);
    memcpy(t17, t5, 28U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7552U);
    t5 = ieee_p_3620187407_sub_674691591_3965413181(IEEE_P_3620187407, t13, t2, t1, (unsigned char)3);
    t7 = (t13 + 12U);
    t16 = *((unsigned int *)t7);
    t20 = (1U * t16);
    t3 = (5U != t20);
    if (t3 == 1)
        goto LAB19;

LAB20:    t8 = (t0 + 4592);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t5, 5U);
    xsi_driver_first_trans_fast(t8);
    goto LAB9;

LAB13:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 4464);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7552U);
    t5 = (t0 + 7726);
    t8 = (t13 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 3;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t15 = (3 - 0);
    t16 = (t15 * 1);
    t16 = (t16 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t16;
    t3 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t5, t13);
    if (t3 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB9;

LAB14:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t16 = (27 - 23);
    t20 = (t16 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t5 = (t0 + 4464);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 12U);
    xsi_driver_first_trans_delta(t5, 4U, 12U, 0LL);
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 7762);
    t5 = (t0 + 4528);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 28U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 7790);
    t5 = (t0 + 4592);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 5U);
    xsi_driver_first_trans_fast(t5);
    goto LAB9;

LAB15:    xsi_size_not_matching(28U, t16, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(28U, t22, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(5U, t20, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(108, ng0);
    t9 = (t0 + 1992U);
    t10 = *((char **)t9);
    t16 = (27 - 27);
    t20 = (t16 * 1U);
    t21 = (0 + t20);
    t9 = (t10 + t21);
    t11 = (t14 + 0U);
    t12 = (t11 + 0U);
    *((int *)t12) = 27;
    t12 = (t11 + 4U);
    *((int *)t12) = 24;
    t12 = (t11 + 8U);
    *((int *)t12) = -1;
    t23 = (24 - 27);
    t22 = (t23 * -1);
    t22 = (t22 + 1);
    t12 = (t11 + 12U);
    *((unsigned int *)t12) = t22;
    t12 = (t0 + 7730);
    t18 = (t24 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 3;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t25 = (3 - 0);
    t22 = (t25 * 1);
    t22 = (t22 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t22;
    t4 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t9, t14, t12, t24);
    if (t4 != 0)
        goto LAB24;

LAB26:
LAB25:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t16 = (27 - 23);
    t20 = (t16 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t5 = (t13 + 0U);
    t7 = (t5 + 0U);
    *((int *)t7) = 23;
    t7 = (t5 + 4U);
    *((int *)t7) = 20;
    t7 = (t5 + 8U);
    *((int *)t7) = -1;
    t15 = (20 - 23);
    t22 = (t15 * -1);
    t22 = (t22 + 1);
    t7 = (t5 + 12U);
    *((unsigned int *)t7) = t22;
    t7 = (t0 + 7738);
    t9 = (t14 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t23 = (3 - 0);
    t22 = (t23 * 1);
    t22 = (t22 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t22;
    t3 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t1, t13, t7, t14);
    if (t3 != 0)
        goto LAB29;

LAB31:
LAB30:    xsi_set_current_line(118, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t16 = (27 - 19);
    t20 = (t16 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t5 = (t13 + 0U);
    t7 = (t5 + 0U);
    *((int *)t7) = 19;
    t7 = (t5 + 4U);
    *((int *)t7) = 16;
    t7 = (t5 + 8U);
    *((int *)t7) = -1;
    t15 = (16 - 19);
    t22 = (t15 * -1);
    t22 = (t22 + 1);
    t7 = (t5 + 12U);
    *((unsigned int *)t7) = t22;
    t7 = (t0 + 7746);
    t9 = (t14 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t23 = (3 - 0);
    t22 = (t23 * 1);
    t22 = (t22 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t22;
    t3 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t1, t13, t7, t14);
    if (t3 != 0)
        goto LAB34;

LAB36:
LAB35:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t16 = (27 - 15);
    t20 = (t16 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t5 = (t13 + 0U);
    t7 = (t5 + 0U);
    *((int *)t7) = 15;
    t7 = (t5 + 4U);
    *((int *)t7) = 12;
    t7 = (t5 + 8U);
    *((int *)t7) = -1;
    t15 = (12 - 15);
    t22 = (t15 * -1);
    t22 = (t22 + 1);
    t7 = (t5 + 12U);
    *((unsigned int *)t7) = t22;
    t7 = (t0 + 7754);
    t9 = (t14 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 3;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t23 = (3 - 0);
    t22 = (t23 * 1);
    t22 = (t22 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t22;
    t3 = ieee_p_3620187407_sub_4060537613_3965413181(IEEE_P_3620187407, t1, t13, t7, t14);
    if (t3 != 0)
        goto LAB39;

LAB41:
LAB40:    goto LAB22;

LAB24:    xsi_set_current_line(109, ng0);
    t19 = (t0 + 1992U);
    t27 = *((char **)t19);
    t22 = (27 - 27);
    t28 = (t22 * 1U);
    t29 = (0 + t28);
    t19 = (t27 + t29);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 27;
    t32 = (t31 + 4U);
    *((int *)t32) = 24;
    t32 = (t31 + 8U);
    *((int *)t32) = -1;
    t33 = (24 - 27);
    t34 = (t33 * -1);
    t34 = (t34 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t34;
    t32 = (t0 + 7734);
    t37 = (t36 + 0U);
    t38 = (t37 + 0U);
    *((int *)t38) = 0;
    t38 = (t37 + 4U);
    *((int *)t38) = 3;
    t38 = (t37 + 8U);
    *((int *)t38) = 1;
    t39 = (3 - 0);
    t34 = (t39 * 1);
    t34 = (t34 + 1);
    t38 = (t37 + 12U);
    *((unsigned int *)t38) = t34;
    t38 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t26, t19, t30, t32, t36);
    t40 = (t26 + 12U);
    t34 = *((unsigned int *)t40);
    t41 = (1U * t34);
    t6 = (4U != t41);
    if (t6 == 1)
        goto LAB27;

LAB28:    t42 = (t0 + 4528);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t38, 4U);
    xsi_driver_first_trans_delta(t42, 0U, 4U, 0LL);
    goto LAB25;

LAB27:    xsi_size_not_matching(4U, t41, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(114, ng0);
    t10 = (t0 + 1992U);
    t11 = *((char **)t10);
    t22 = (27 - 23);
    t28 = (t22 * 1U);
    t29 = (0 + t28);
    t10 = (t11 + t29);
    t12 = (t26 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 23;
    t17 = (t12 + 4U);
    *((int *)t17) = 20;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t25 = (20 - 23);
    t34 = (t25 * -1);
    t34 = (t34 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t34;
    t17 = (t0 + 7742);
    t19 = (t30 + 0U);
    t27 = (t19 + 0U);
    *((int *)t27) = 0;
    t27 = (t19 + 4U);
    *((int *)t27) = 3;
    t27 = (t19 + 8U);
    *((int *)t27) = 1;
    t33 = (3 - 0);
    t34 = (t33 * 1);
    t34 = (t34 + 1);
    t27 = (t19 + 12U);
    *((unsigned int *)t27) = t34;
    t27 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t24, t10, t26, t17, t30);
    t31 = (t24 + 12U);
    t34 = *((unsigned int *)t31);
    t41 = (1U * t34);
    t4 = (4U != t41);
    if (t4 == 1)
        goto LAB32;

LAB33:    t32 = (t0 + 4528);
    t35 = (t32 + 56U);
    t37 = *((char **)t35);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    memcpy(t40, t27, 4U);
    xsi_driver_first_trans_delta(t32, 4U, 4U, 0LL);
    goto LAB30;

LAB32:    xsi_size_not_matching(4U, t41, 0);
    goto LAB33;

LAB34:    xsi_set_current_line(119, ng0);
    t10 = (t0 + 1992U);
    t11 = *((char **)t10);
    t22 = (27 - 19);
    t28 = (t22 * 1U);
    t29 = (0 + t28);
    t10 = (t11 + t29);
    t12 = (t26 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 19;
    t17 = (t12 + 4U);
    *((int *)t17) = 16;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t25 = (16 - 19);
    t34 = (t25 * -1);
    t34 = (t34 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t34;
    t17 = (t0 + 7750);
    t19 = (t30 + 0U);
    t27 = (t19 + 0U);
    *((int *)t27) = 0;
    t27 = (t19 + 4U);
    *((int *)t27) = 3;
    t27 = (t19 + 8U);
    *((int *)t27) = 1;
    t33 = (3 - 0);
    t34 = (t33 * 1);
    t34 = (t34 + 1);
    t27 = (t19 + 12U);
    *((unsigned int *)t27) = t34;
    t27 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t24, t10, t26, t17, t30);
    t31 = (t24 + 12U);
    t34 = *((unsigned int *)t31);
    t41 = (1U * t34);
    t4 = (4U != t41);
    if (t4 == 1)
        goto LAB37;

LAB38:    t32 = (t0 + 4528);
    t35 = (t32 + 56U);
    t37 = *((char **)t35);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    memcpy(t40, t27, 4U);
    xsi_driver_first_trans_delta(t32, 8U, 4U, 0LL);
    goto LAB35;

LAB37:    xsi_size_not_matching(4U, t41, 0);
    goto LAB38;

LAB39:    xsi_set_current_line(124, ng0);
    t10 = (t0 + 1992U);
    t11 = *((char **)t10);
    t22 = (27 - 15);
    t28 = (t22 * 1U);
    t29 = (0 + t28);
    t10 = (t11 + t29);
    t12 = (t26 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 15;
    t17 = (t12 + 4U);
    *((int *)t17) = 12;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t25 = (12 - 15);
    t34 = (t25 * -1);
    t34 = (t34 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t34;
    t17 = (t0 + 7758);
    t19 = (t30 + 0U);
    t27 = (t19 + 0U);
    *((int *)t27) = 0;
    t27 = (t19 + 4U);
    *((int *)t27) = 3;
    t27 = (t19 + 8U);
    *((int *)t27) = 1;
    t33 = (3 - 0);
    t34 = (t33 * 1);
    t34 = (t34 + 1);
    t27 = (t19 + 12U);
    *((unsigned int *)t27) = t34;
    t27 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t24, t10, t26, t17, t30);
    t31 = (t24 + 12U);
    t34 = *((unsigned int *)t31);
    t41 = (1U * t34);
    t4 = (4U != t41);
    if (t4 == 1)
        goto LAB42;

LAB43:    t32 = (t0 + 4528);
    t35 = (t32 + 56U);
    t37 = *((char **)t35);
    t38 = (t37 + 56U);
    t40 = *((char **)t38);
    memcpy(t40, t27, 4U);
    xsi_driver_first_trans_delta(t32, 12U, 4U, 0LL);
    goto LAB40;

LAB42:    xsi_size_not_matching(4U, t41, 0);
    goto LAB43;

}

static void work_a_1543659282_3212880686_p_2(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7};

LAB0:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 4656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t6);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4320);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(147, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t7 = *((unsigned char *)t4);
    t8 = (t7 == (unsigned char)3);
    if (t8 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(150, ng0);
    t1 = (t0 + 4656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB10:    goto LAB2;

LAB4:    xsi_set_current_line(153, ng0);
    t1 = (t0 + 4656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(155, ng0);
    t1 = (t0 + 4656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(157, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 7552U);
    t3 = (t0 + 7795);
    t5 = (t12 + 0U);
    t9 = (t5 + 0U);
    *((int *)t9) = 0;
    t9 = (t5 + 4U);
    *((int *)t9) = 3;
    t9 = (t5 + 8U);
    *((int *)t9) = 1;
    t13 = (3 - 0);
    t14 = (t13 * 1);
    t14 = (t14 + 1);
    t9 = (t5 + 12U);
    *((unsigned int *)t9) = t14;
    t6 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t3, t12);
    if (t6 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 4656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);

LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 4656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB8:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 4656);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB9:    xsi_set_current_line(148, ng0);
    t3 = (t0 + 4656);
    t5 = (t3 + 56U);
    t9 = *((char **)t5);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)1;
    xsi_driver_first_trans_fast(t3);
    goto LAB10;

LAB12:    xsi_set_current_line(158, ng0);
    t9 = (t0 + 4656);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t9);
    goto LAB13;

}


extern void work_a_1543659282_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1543659282_3212880686_p_0,(void *)work_a_1543659282_3212880686_p_1,(void *)work_a_1543659282_3212880686_p_2};
	xsi_register_didat("work_a_1543659282_3212880686", "isim/TOP_isim_beh.exe.sim/work/a_1543659282_3212880686.didat");
	xsi_register_executes(pe);
}
