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
static const char *ng0 = "C:/Users/Agc/Desktop/CA-LAB-AUT/AZ6/AZ6_ROSE_ADNAN/shift_register.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1874319323_3212880686_p_0(char *t0)
{
    char t26[16];
    char t27[16];
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
    unsigned char t11;
    int t12;
    int t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    xsi_set_current_line(20, ng0);
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
LAB3:    t1 = (t0 + 3720);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 6113);
    t6 = (t0 + 3816);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t11 = (t4 == (unsigned char)3);
    if (t11 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6117);
    t12 = xsi_mem_cmp(t1, t2, 2U);
    if (t12 == 1)
        goto LAB11;

LAB16:    t6 = (t0 + 6119);
    t13 = xsi_mem_cmp(t6, t2, 2U);
    if (t13 == 1)
        goto LAB12;

LAB17:    t8 = (t0 + 6121);
    t14 = xsi_mem_cmp(t8, t2, 2U);
    if (t14 == 1)
        goto LAB13;

LAB18:    t10 = (t0 + 6123);
    t16 = xsi_mem_cmp(t10, t2, 2U);
    if (t16 == 1)
        goto LAB14;

LAB19:
LAB15:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 3816);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t1);

LAB10:
LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t2 = (t0 + 3816);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB11:    xsi_set_current_line(28, ng0);
    t17 = (t0 + 1992U);
    t18 = *((char **)t17);
    t17 = (t0 + 3816);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t18, 4U);
    xsi_driver_first_trans_fast(t17);
    goto LAB10;

LAB12:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t23 = (3 - 3);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t1 = (t2 + t25);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t27 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 1;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t12 = (1 - 3);
    t28 = (t12 * -1);
    t28 = (t28 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t28;
    t5 = xsi_base_array_concat(t5, t26, t6, (char)99, (unsigned char)2, (char)97, t1, t27, (char)101);
    t28 = (1U + 3U);
    t3 = (4U != t28);
    if (t3 == 1)
        goto LAB21;

LAB22:    t8 = (t0 + 3816);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t15 = (t10 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t5, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB10;

LAB13:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t23 = (3 - 2);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t1 = (t2 + t25);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t27 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 2;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t12 = (0 - 2);
    t28 = (t12 * -1);
    t28 = (t28 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t28;
    t5 = xsi_base_array_concat(t5, t26, t6, (char)97, t1, t27, (char)99, (unsigned char)2, (char)101);
    t28 = (3U + 1U);
    t3 = (4U != t28);
    if (t3 == 1)
        goto LAB23;

LAB24:    t8 = (t0 + 3816);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t15 = (t10 + 56U);
    t17 = *((char **)t15);
    memcpy(t17, t5, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB10;

LAB14:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t12 = (3 - 3);
    t23 = (t12 * -1);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t1 = (t2 + t25);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1992U);
    t6 = *((char **)t5);
    t28 = (3 - 3);
    t29 = (t28 * 1U);
    t30 = (0 + t29);
    t5 = (t6 + t30);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t27 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 3;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t13 = (1 - 3);
    t31 = (t13 * -1);
    t31 = (t31 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t31;
    t7 = xsi_base_array_concat(t7, t26, t8, (char)99, t3, (char)97, t5, t27, (char)101);
    t31 = (1U + 3U);
    t4 = (4U != t31);
    if (t4 == 1)
        goto LAB25;

LAB26:    t10 = (t0 + 3816);
    t15 = (t10 + 56U);
    t17 = *((char **)t15);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB10;

LAB20:;
LAB21:    xsi_size_not_matching(4U, t28, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(4U, t28, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(4U, t31, 0);
    goto LAB26;

}

static void work_a_1874319323_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(42, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 3880);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3736);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1874319323_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1874319323_3212880686_p_0,(void *)work_a_1874319323_3212880686_p_1};
	xsi_register_didat("work_a_1874319323_3212880686", "isim/Shift_Register_Top_isim_beh.exe.sim/work/a_1874319323_3212880686.didat");
	xsi_register_executes(pe);
}
