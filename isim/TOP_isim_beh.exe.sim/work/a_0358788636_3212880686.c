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
static const char *ng0 = "C:/Users/eslen/OneDrive/Escritorio/6to Semestre/DLP/PmodACL_Demo/selData.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0358788636_3212880686_p_0(char *t0)
{
    char t11[16];
    char t26[16];
    char t31[16];
    char t34[16];
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
    int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned char t25;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t32;
    unsigned int t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned char t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(42, ng0);
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
LAB3:    t1 = (t0 + 3792);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 6498);
    t6 = (t0 + 3872);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 3U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 6501);
    t5 = (t0 + 3936);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 6511);
    t5 = (t0 + 4000);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 10U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t2 = (t0 + 6344U);
    t6 = (t0 + 6521);
    t8 = (t11 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t12 = (1 - 0);
    t13 = (t12 * 1);
    t13 = (t13 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t13;
    t4 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t5, t2, t6, t11);
    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 6547);
    t5 = (t0 + 3872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t12 = (9 - 9);
    t13 = (t12 * -1);
    t19 = (1U * t13);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3936);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 10U);
    xsi_driver_first_trans_fast_port(t1);

LAB21:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(48, ng0);
    t9 = (t0 + 6523);
    t14 = (t0 + 3872);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t9, 3U);
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t12 = (9 - 9);
    t13 = (t12 * -1);
    t19 = (1U * t13);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 3936);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 10U);
    xsi_driver_first_trans_fast_port(t1);

LAB11:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 6535);
    t5 = (t0 + 3872);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t12 = (9 - 9);
    t13 = (t12 * -1);
    t19 = (1U * t13);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB15;

LAB17:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 4000);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 10U);
    xsi_driver_first_trans_fast_port(t1);

LAB16:    goto LAB8;

LAB10:    xsi_set_current_line(50, ng0);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t21 = (9 - 9);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t5 = (t6 + t24);
    t25 = *((unsigned char *)t5);
    t7 = (t0 + 6526);
    t9 = (t26 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 8;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t27 = (8 - 0);
    t28 = (t27 * 1);
    t28 = (t28 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t28;
    t10 = (t0 + 1512U);
    t14 = *((char **)t10);
    t28 = (9 - 8);
    t29 = (t28 * 1U);
    t30 = (0 + t29);
    t10 = (t14 + t30);
    t15 = (t31 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 8;
    t16 = (t15 + 4U);
    *((int *)t16) = 0;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t32 = (0 - 8);
    t33 = (t32 * -1);
    t33 = (t33 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t33;
    t16 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t11, t7, t26, t10, t31);
    t18 = ((IEEE_P_2592010699) + 4024);
    t17 = xsi_base_array_concat(t17, t34, t18, (char)99, t25, (char)97, t16, t11, (char)101);
    t35 = (t11 + 12U);
    t33 = *((unsigned int *)t35);
    t36 = (1U * t33);
    t37 = (1U + t36);
    t38 = (10U != t37);
    if (t38 == 1)
        goto LAB13;

LAB14:    t39 = (t0 + 3936);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t17, 10U);
    xsi_driver_first_trans_fast_port(t39);
    goto LAB11;

LAB13:    xsi_size_not_matching(10U, t37, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(57, ng0);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t21 = (9 - 9);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t5 = (t6 + t24);
    t25 = *((unsigned char *)t5);
    t7 = (t0 + 6538);
    t9 = (t26 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 8;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t27 = (8 - 0);
    t28 = (t27 * 1);
    t28 = (t28 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t28;
    t10 = (t0 + 1672U);
    t14 = *((char **)t10);
    t28 = (9 - 8);
    t29 = (t28 * 1U);
    t30 = (0 + t29);
    t10 = (t14 + t30);
    t15 = (t31 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 8;
    t16 = (t15 + 4U);
    *((int *)t16) = 0;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t32 = (0 - 8);
    t33 = (t32 * -1);
    t33 = (t33 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t33;
    t16 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t11, t7, t26, t10, t31);
    t18 = ((IEEE_P_2592010699) + 4024);
    t17 = xsi_base_array_concat(t17, t34, t18, (char)99, t25, (char)97, t16, t11, (char)101);
    t35 = (t11 + 12U);
    t33 = *((unsigned int *)t35);
    t36 = (1U * t33);
    t37 = (1U + t36);
    t38 = (10U != t37);
    if (t38 == 1)
        goto LAB18;

LAB19:    t39 = (t0 + 4000);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t17, 10U);
    xsi_driver_first_trans_fast_port(t39);
    goto LAB16;

LAB18:    xsi_size_not_matching(10U, t37, 0);
    goto LAB19;

LAB20:    xsi_set_current_line(71, ng0);
    t5 = (t0 + 1512U);
    t6 = *((char **)t5);
    t21 = (9 - 9);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t5 = (t6 + t24);
    t25 = *((unsigned char *)t5);
    t7 = (t0 + 6550);
    t9 = (t26 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 8;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t27 = (8 - 0);
    t28 = (t27 * 1);
    t28 = (t28 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t28;
    t10 = (t0 + 1512U);
    t14 = *((char **)t10);
    t28 = (9 - 8);
    t29 = (t28 * 1U);
    t30 = (0 + t29);
    t10 = (t14 + t30);
    t15 = (t31 + 0U);
    t16 = (t15 + 0U);
    *((int *)t16) = 8;
    t16 = (t15 + 4U);
    *((int *)t16) = 0;
    t16 = (t15 + 8U);
    *((int *)t16) = -1;
    t32 = (0 - 8);
    t33 = (t32 * -1);
    t33 = (t33 + 1);
    t16 = (t15 + 12U);
    *((unsigned int *)t16) = t33;
    t16 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t11, t7, t26, t10, t31);
    t18 = ((IEEE_P_2592010699) + 4024);
    t17 = xsi_base_array_concat(t17, t34, t18, (char)99, t25, (char)97, t16, t11, (char)101);
    t35 = (t11 + 12U);
    t33 = *((unsigned int *)t35);
    t36 = (1U * t33);
    t37 = (1U + t36);
    t38 = (10U != t37);
    if (t38 == 1)
        goto LAB23;

LAB24:    t39 = (t0 + 3936);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t17, 10U);
    xsi_driver_first_trans_fast_port(t39);
    goto LAB21;

LAB23:    xsi_size_not_matching(10U, t37, 0);
    goto LAB24;

}


extern void work_a_0358788636_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0358788636_3212880686_p_0};
	xsi_register_didat("work_a_0358788636_3212880686", "isim/TOP_isim_beh.exe.sim/work/a_0358788636_3212880686.didat");
	xsi_register_executes(pe);
}
