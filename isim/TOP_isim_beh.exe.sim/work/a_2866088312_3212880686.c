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
static const char *ng0 = "C:/Users/eslen/OneDrive/Escritorio/6to Semestre/DLP/PmodACL_Demo/shift_add3.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_2546454082_3965413181(char *, char *, char *, int );
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_2866088312_3212880686_p_0(char *t0)
{
    char t5[16];
    char t7[16];
    char *t1;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(18, ng0);

LAB3:    t1 = (t0 + 8218);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t6 = ((IEEE_P_2592010699) + 4024);
    t8 = (t7 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 7;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t10 = (7 - 0);
    t11 = (t10 * 1);
    t11 = (t11 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t11;
    t9 = (t0 + 8016U);
    t3 = xsi_base_array_concat(t3, t5, t6, (char)97, t1, t7, (char)97, t4, t9, (char)101);
    t11 = (8U + 6U);
    t12 = (14U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 4992);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t3, 14U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 4832);
    *((int *)t18) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(14U, t11, 0);
    goto LAB6;

}

static void work_a_2866088312_3212880686_p_1(char *t0)
{
    char t16[16];
    char t19[16];
    char t21[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    unsigned char t18;
    char *t20;
    char *t22;
    char *t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 8226);
    *((int *)t1) = 0;
    t2 = (t0 + 8230);
    *((int *)t2) = 29;
    t3 = 0;
    t4 = 29;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t9 = (13 - 13);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = (t0 + 2288U);
    t6 = *((char **)t5);
    t13 = (29 - 13);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t5 = (t6 + t15);
    memcpy(t5, t1, 14U);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 8234);
    *((int *)t1) = 0;
    t2 = (t0 + 8238);
    *((int *)t2) = 13;
    t3 = 0;
    t4 = 13;

LAB7:    if (t3 <= t4)
        goto LAB8;

LAB10:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t9 = (29 - 29);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = (t0 + 5056);
    t6 = (t5 + 56U);
    t12 = *((char **)t6);
    t17 = (t12 + 56U);
    t20 = *((char **)t17);
    memcpy(t20, t1, 16U);
    xsi_driver_first_trans_fast(t5);
    t1 = (t0 + 4848);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(25, ng0);
    t5 = (t0 + 2288U);
    t6 = *((char **)t5);
    t5 = (t0 + 8226);
    t7 = *((int *)t5);
    t8 = (t7 - 29);
    t9 = (t8 * -1);
    xsi_vhdl_check_range_of_index(29, 0, -1, *((int *)t5));
    t10 = (1U * t9);
    t11 = (0 + t10);
    t12 = (t6 + t11);
    *((unsigned char *)t12) = (unsigned char)2;

LAB4:    t1 = (t0 + 8226);
    t3 = *((int *)t1);
    t2 = (t0 + 8230);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB6:    t7 = (t3 + 1);
    t3 = t7;
    t5 = (t0 + 8226);
    *((int *)t5) = t3;
    goto LAB2;

LAB8:    xsi_set_current_line(37, ng0);
    t5 = (t0 + 2288U);
    t6 = *((char **)t5);
    t9 = (29 - 17);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t5 = (t6 + t11);
    t12 = (t16 + 0U);
    t17 = (t12 + 0U);
    *((int *)t17) = 17;
    t17 = (t12 + 4U);
    *((int *)t17) = 14;
    t17 = (t12 + 8U);
    *((int *)t17) = -1;
    t7 = (14 - 17);
    t13 = (t7 * -1);
    t13 = (t13 + 1);
    t17 = (t12 + 12U);
    *((unsigned int *)t17) = t13;
    t18 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t5, t16, 4);
    if (t18 != 0)
        goto LAB11;

LAB13:
LAB12:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t9 = (29 - 21);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = (t16 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 21;
    t6 = (t5 + 4U);
    *((int *)t6) = 18;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t7 = (18 - 21);
    t13 = (t7 * -1);
    t13 = (t13 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t13;
    t18 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t16, 4);
    if (t18 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t9 = (29 - 25);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = (t16 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 25;
    t6 = (t5 + 4U);
    *((int *)t6) = 22;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t7 = (22 - 25);
    t13 = (t7 * -1);
    t13 = (t13 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t13;
    t18 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t16, 4);
    if (t18 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t9 = (29 - 29);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = (t16 + 0U);
    t6 = (t5 + 0U);
    *((int *)t6) = 29;
    t6 = (t5 + 4U);
    *((int *)t6) = 26;
    t6 = (t5 + 8U);
    *((int *)t6) = -1;
    t7 = (26 - 29);
    t13 = (t7 * -1);
    t13 = (t13 + 1);
    t6 = (t5 + 12U);
    *((unsigned int *)t6) = t13;
    t18 = ieee_p_3620187407_sub_2546454082_3965413181(IEEE_P_3620187407, t1, t16, 4);
    if (t18 != 0)
        goto LAB20;

LAB22:
LAB21:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2288U);
    t2 = *((char **)t1);
    t9 = (29 - 28);
    t10 = (t9 * 1U);
    t11 = (0 + t10);
    t1 = (t2 + t11);
    t5 = xsi_get_transient_memory(29U);
    memcpy(t5, t1, 29U);
    t6 = (t0 + 2288U);
    t12 = *((char **)t6);
    t13 = (29 - 29);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t6 = (t12 + t15);
    memcpy(t6, t5, 29U);

LAB9:    t1 = (t0 + 8234);
    t3 = *((int *)t1);
    t2 = (t0 + 8238);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB10;

LAB23:    t7 = (t3 + 1);
    t3 = t7;
    t5 = (t0 + 8234);
    *((int *)t5) = t3;
    goto LAB7;

LAB11:    xsi_set_current_line(38, ng0);
    t17 = (t0 + 2288U);
    t20 = *((char **)t17);
    t13 = (29 - 17);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t17 = (t20 + t15);
    t22 = (t21 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 17;
    t23 = (t22 + 4U);
    *((int *)t23) = 14;
    t23 = (t22 + 8U);
    *((int *)t23) = -1;
    t8 = (14 - 17);
    t24 = (t8 * -1);
    t24 = (t24 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t24;
    t23 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t19, t17, t21, 3);
    t25 = (t0 + 2288U);
    t26 = *((char **)t25);
    t24 = (29 - 17);
    t27 = (t24 * 1U);
    t28 = (0 + t27);
    t25 = (t26 + t28);
    t29 = (t19 + 12U);
    t30 = *((unsigned int *)t29);
    t31 = (1U * t30);
    memcpy(t25, t23, t31);
    goto LAB12;

LAB14:    xsi_set_current_line(41, ng0);
    t6 = (t0 + 2288U);
    t12 = *((char **)t6);
    t13 = (29 - 21);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t6 = (t12 + t15);
    t17 = (t21 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = 21;
    t20 = (t17 + 4U);
    *((int *)t20) = 18;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t8 = (18 - 21);
    t24 = (t8 * -1);
    t24 = (t24 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t24;
    t20 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t19, t6, t21, 3);
    t22 = (t0 + 2288U);
    t23 = *((char **)t22);
    t24 = (29 - 21);
    t27 = (t24 * 1U);
    t28 = (0 + t27);
    t22 = (t23 + t28);
    t25 = (t19 + 12U);
    t30 = *((unsigned int *)t25);
    t31 = (1U * t30);
    memcpy(t22, t20, t31);
    goto LAB15;

LAB17:    xsi_set_current_line(44, ng0);
    t6 = (t0 + 2288U);
    t12 = *((char **)t6);
    t13 = (29 - 25);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t6 = (t12 + t15);
    t17 = (t21 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = 25;
    t20 = (t17 + 4U);
    *((int *)t20) = 22;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t8 = (22 - 25);
    t24 = (t8 * -1);
    t24 = (t24 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t24;
    t20 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t19, t6, t21, 3);
    t22 = (t0 + 2288U);
    t23 = *((char **)t22);
    t24 = (29 - 25);
    t27 = (t24 * 1U);
    t28 = (0 + t27);
    t22 = (t23 + t28);
    t25 = (t19 + 12U);
    t30 = *((unsigned int *)t25);
    t31 = (1U * t30);
    memcpy(t22, t20, t31);
    goto LAB18;

LAB20:    xsi_set_current_line(47, ng0);
    t6 = (t0 + 2288U);
    t12 = *((char **)t6);
    t13 = (29 - 29);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t6 = (t12 + t15);
    t17 = (t21 + 0U);
    t20 = (t17 + 0U);
    *((int *)t20) = 29;
    t20 = (t17 + 4U);
    *((int *)t20) = 26;
    t20 = (t17 + 8U);
    *((int *)t20) = -1;
    t8 = (26 - 29);
    t24 = (t8 * -1);
    t24 = (t24 + 1);
    t20 = (t17 + 12U);
    *((unsigned int *)t20) = t24;
    t20 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t19, t6, t21, 3);
    t22 = (t0 + 2288U);
    t23 = *((char **)t22);
    t24 = (29 - 29);
    t27 = (t24 * 1U);
    t28 = (0 + t27);
    t22 = (t23 + t28);
    t25 = (t19 + 12U);
    t30 = *((unsigned int *)t25);
    t31 = (1U * t30);
    memcpy(t22, t20, t31);
    goto LAB21;

}

static void work_a_2866088312_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(57, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (15 - 3);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5120);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 4864);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2866088312_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(59, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (15 - 7);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5184);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 4880);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2866088312_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(61, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (15 - 11);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5248);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 4896);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2866088312_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(63, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (15 - 15);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5312);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast_port(t6);

LAB2:    t11 = (t0 + 4912);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2866088312_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2866088312_3212880686_p_0,(void *)work_a_2866088312_3212880686_p_1,(void *)work_a_2866088312_3212880686_p_2,(void *)work_a_2866088312_3212880686_p_3,(void *)work_a_2866088312_3212880686_p_4,(void *)work_a_2866088312_3212880686_p_5};
	xsi_register_didat("work_a_2866088312_3212880686", "isim/TOP_isim_beh.exe.sim/work/a_2866088312_3212880686.didat");
	xsi_register_executes(pe);
}
