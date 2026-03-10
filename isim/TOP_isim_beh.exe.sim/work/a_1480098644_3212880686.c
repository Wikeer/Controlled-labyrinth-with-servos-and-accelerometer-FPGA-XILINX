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
static const char *ng0 = "C:/Users/eslen/OneDrive/Escritorio/6to Semestre/DLP/PmodACL_Demo/Timer.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_1781507893_1035706684(char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919365254_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_1919437128_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1480098644_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4904);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(26, ng0);
    t3 = (t0 + 2608U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t6 = (25000000 - 1);
    t7 = (t5 == t6);
    if (t7 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 2608U);
    t3 = *((char **)t1);
    t5 = *((int *)t3);
    t6 = (t5 + 1);
    t1 = (t0 + 2608U);
    t4 = *((char **)t1);
    t1 = (t4 + 0);
    *((int *)t1) = t6;

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(27, ng0);
    t3 = (t0 + 2608U);
    t8 = *((char **)t3);
    t3 = (t8 + 0);
    *((int *)t3) = 0;
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t7 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t2);
    t1 = (t0 + 5048);
    t4 = (t1 + 56U);
    t8 = *((char **)t4);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t7;
    xsi_driver_first_trans_fast(t1);
    goto LAB6;

}

static void work_a_1480098644_3212880686_p_1(char *t0)
{
    char t14[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;

LAB0:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1792U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4920);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(39, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(40, ng0);
    t3 = xsi_get_transient_memory(6U);
    memset(t3, 0, 6U);
    t7 = t3;
    memset(t7, (unsigned char)2, 6U);
    t8 = (t0 + 5112);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 6U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t1 = (t0 + 8196U);
    t6 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t4, t1, 58);
    if (t6 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 8196U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t14, t3, t1, 1);
    t7 = (t14 + 12U);
    t15 = *((unsigned int *)t7);
    t16 = (1U * t15);
    t2 = (6U != t16);
    if (t2 == 1)
        goto LAB13;

LAB14:    t8 = (t0 + 5112);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 6U);
    xsi_driver_first_trans_fast(t8);

LAB11:    goto LAB6;

LAB10:    xsi_set_current_line(43, ng0);
    t7 = xsi_get_transient_memory(6U);
    memset(t7, 0, 6U);
    t8 = t7;
    memset(t8, (unsigned char)2, 6U);
    t9 = (t0 + 5112);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 6U);
    xsi_driver_first_trans_fast(t9);
    goto LAB11;

LAB13:    xsi_size_not_matching(6U, t16, 0);
    goto LAB14;

}

static void work_a_1480098644_3212880686_p_2(char *t0)
{
    char t20[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1792U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4936);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(55, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB8;

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(56, ng0);
    t3 = xsi_get_transient_memory(6U);
    memset(t3, 0, 6U);
    t7 = t3;
    memset(t7, (unsigned char)2, 6U);
    t8 = (t0 + 5176);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 6U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(57, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t3 = t1;
    memset(t3, (unsigned char)2, 6U);
    t4 = (t0 + 5240);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1992U);
    t4 = *((char **)t1);
    t1 = (t0 + 8196U);
    t6 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t4, t1, 0);
    if (t6 != 0)
        goto LAB10;

LAB12:
LAB11:    goto LAB6;

LAB10:    xsi_set_current_line(60, ng0);
    t7 = (t0 + 2152U);
    t8 = *((char **)t7);
    t7 = (t0 + 8212U);
    t13 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t8, t7, 9);
    if (t13 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 8212U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t3, t1, 1);
    t7 = (t20 + 12U);
    t21 = *((unsigned int *)t7);
    t22 = (1U * t21);
    t2 = (6U != t22);
    if (t2 == 1)
        goto LAB21;

LAB22:    t8 = (t0 + 5176);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 6U);
    xsi_driver_first_trans_fast(t8);

LAB14:    goto LAB11;

LAB13:    xsi_set_current_line(61, ng0);
    t9 = (t0 + 2312U);
    t10 = *((char **)t9);
    t9 = (t0 + 8228U);
    t14 = ieee_p_1242562249_sub_1781507893_1035706684(IEEE_P_1242562249, t10, t9, 9);
    if (t14 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8228U);
    t4 = ieee_p_1242562249_sub_1919365254_1035706684(IEEE_P_1242562249, t20, t3, t1, 1);
    t7 = (t20 + 12U);
    t21 = *((unsigned int *)t7);
    t22 = (1U * t21);
    t2 = (6U != t22);
    if (t2 == 1)
        goto LAB19;

LAB20:    t8 = (t0 + 5240);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t4, 6U);
    xsi_driver_first_trans_fast(t8);

LAB17:    goto LAB14;

LAB16:    xsi_set_current_line(62, ng0);
    t11 = xsi_get_transient_memory(6U);
    memset(t11, 0, 6U);
    t12 = t11;
    memset(t12, (unsigned char)2, 6U);
    t15 = (t0 + 5176);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t11, 6U);
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(63, ng0);
    t1 = xsi_get_transient_memory(6U);
    memset(t1, 0, 6U);
    t3 = t1;
    memset(t3, (unsigned char)2, 6U);
    t4 = (t0 + 5240);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 6U);
    xsi_driver_first_trans_fast(t4);
    goto LAB17;

LAB19:    xsi_size_not_matching(6U, t22, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(6U, t22, 0);
    goto LAB22;

}

static void work_a_1480098644_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(75, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5304);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 6U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4952);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1480098644_3212880686_p_4(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(76, ng0);

LAB3:    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 8212U);
    t4 = ieee_p_1242562249_sub_1919437128_1035706684(IEEE_P_1242562249, t1, t3, t2, 1);
    t5 = (t0 + 5368);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 6U);
    xsi_driver_first_trans_fast_port(t5);

LAB2:    t10 = (t0 + 4968);
    *((int *)t10) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1480098644_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1480098644_3212880686_p_0,(void *)work_a_1480098644_3212880686_p_1,(void *)work_a_1480098644_3212880686_p_2,(void *)work_a_1480098644_3212880686_p_3,(void *)work_a_1480098644_3212880686_p_4};
	xsi_register_didat("work_a_1480098644_3212880686", "isim/TOP_isim_beh.exe.sim/work/a_1480098644_3212880686.didat");
	xsi_register_executes(pe);
}
