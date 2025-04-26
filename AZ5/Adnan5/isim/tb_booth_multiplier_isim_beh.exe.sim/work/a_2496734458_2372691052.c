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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/ISE_Share/Adnan5/Booth.vhd";
extern char *IEEE_P_0774719531;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_0774719531_sub_1306448836232530671_2162500114(char *, char *, char *, char *, char *);
unsigned char ieee_p_0774719531_sub_1306455576380142462_2162500114(char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_1496620905533649268_2162500114(char *, char *, char *, char *, char *, char *);
char *ieee_p_0774719531_sub_2255506239096166994_2162500114(char *, char *, char *, char *, int );
char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_2496734458_2372691052_p_0(char *t0)
{
    char t26[16];
    char t27[16];
    char t28[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    int t19;
    int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t3 = (t0 + 2128U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 10U);
    xsi_set_current_line(31, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t3 = (t0 + 2248U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 10U);
    xsi_set_current_line(32, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t3 = (t0 + 2368U);
    t4 = *((char **)t3);
    t3 = (t4 + 0);
    memcpy(t3, t1, 10U);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5744U);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    t3 = (t0 + 5792U);
    t6 = ieee_p_0774719531_sub_1306455576380142462_2162500114(IEEE_P_0774719531, t2, t1, t4, t3);
    if (t6 == 1)
        goto LAB5;

LAB6:    t5 = (unsigned char)0;

LAB7:    if (t5 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    t15 = (4 + 4);
    t16 = (9 - t15);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = (t0 + 3864);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 8U);
    xsi_driver_first_trans_fast_port(t3);
    t1 = (t0 + 3784);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(36, ng0);
    t12 = (t0 + 1032U);
    t13 = *((char **)t12);
    t12 = (t0 + 2128U);
    t14 = *((char **)t12);
    t15 = (4 + 4);
    t16 = (9 - t15);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t12 = (t14 + t18);
    memcpy(t12, t13, 4U);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t15 = (4 - 1);
    t19 = (t15 - 3);
    t16 = (t19 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t5 = *((unsigned char *)t1);
    t3 = (t0 + 2128U);
    t4 = *((char **)t3);
    t20 = (4 + 4);
    t21 = (t20 + 1);
    t22 = (t21 - 9);
    t23 = (t22 * -1);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t3 = (t4 + t25);
    *((unsigned char *)t3) = t5;
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5744U);
    t3 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t27, t2, t1);
    t4 = ieee_p_0774719531_sub_2255506239096166994_2162500114(IEEE_P_0774719531, t26, t3, t27, 1);
    t7 = (t0 + 2488U);
    t8 = *((char **)t7);
    t7 = (t8 + 0);
    t9 = (t26 + 12U);
    t16 = *((unsigned int *)t9);
    t17 = (1U * t16);
    memcpy(t7, t4, t17);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 2488U);
    t2 = *((char **)t1);
    t1 = (t0 + 2248U);
    t3 = *((char **)t1);
    t15 = (4 + 4);
    t16 = (9 - t15);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t3 + t18);
    memcpy(t1, t2, 4U);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t15 = (4 - 1);
    t19 = (t15 - 3);
    t16 = (t19 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t5 = *((unsigned char *)t1);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t5);
    t3 = (t0 + 2248U);
    t4 = *((char **)t3);
    t20 = (4 + 4);
    t21 = (t20 + 1);
    t22 = (t21 - 9);
    t23 = (t22 * -1);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t3 = (t4 + t25);
    *((unsigned char *)t3) = t6;
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 2368U);
    t3 = *((char **)t1);
    t16 = (9 - 4);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t3 + t18);
    memcpy(t1, t2, 4U);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 5922);
    *((int *)t1) = 1;
    t2 = (t0 + 5926);
    *((int *)t2) = 4;
    t15 = 1;
    t19 = 4;

LAB8:    if (t15 <= t19)
        goto LAB9;

LAB11:    goto LAB3;

LAB5:    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t7 = (t0 + 5760U);
    t9 = (t0 + 2008U);
    t10 = *((char **)t9);
    t9 = (t0 + 5808U);
    t11 = ieee_p_0774719531_sub_1306455576380142462_2162500114(IEEE_P_0774719531, t8, t7, t10, t9);
    t5 = t11;
    goto LAB7;

LAB9:    xsi_set_current_line(48, ng0);
    t3 = (t0 + 2368U);
    t4 = *((char **)t3);
    t16 = (9 - 1);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t3 = (t4 + t18);
    t7 = (t26 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 1;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t20 = (0 - 1);
    t23 = (t20 * -1);
    t23 = (t23 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t23;
    t8 = (t0 + 5930);
    t10 = (t27 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 0;
    t12 = (t10 + 4U);
    *((int *)t12) = 1;
    t12 = (t10 + 8U);
    *((int *)t12) = 1;
    t21 = (1 - 0);
    t23 = (t21 * 1);
    t23 = (t23 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t23;
    t5 = ieee_p_0774719531_sub_1306448836232530671_2162500114(IEEE_P_0774719531, t3, t26, t8, t27);
    if (t5 != 0)
        goto LAB12;

LAB14:    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    t16 = (9 - 1);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = (t26 + 0U);
    t4 = (t3 + 0U);
    *((int *)t4) = 1;
    t4 = (t3 + 4U);
    *((int *)t4) = 0;
    t4 = (t3 + 8U);
    *((int *)t4) = -1;
    t20 = (0 - 1);
    t23 = (t20 * -1);
    t23 = (t23 + 1);
    t4 = (t3 + 12U);
    *((unsigned int *)t4) = t23;
    t4 = (t0 + 5932);
    t8 = (t27 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 0;
    t9 = (t8 + 4U);
    *((int *)t9) = 1;
    t9 = (t8 + 8U);
    *((int *)t9) = 1;
    t21 = (1 - 0);
    t23 = (t21 * 1);
    t23 = (t23 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t23;
    t5 = ieee_p_0774719531_sub_1306448836232530671_2162500114(IEEE_P_0774719531, t1, t26, t4, t27);
    if (t5 != 0)
        goto LAB15;

LAB16:
LAB13:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2368U);
    t2 = *((char **)t1);
    t20 = (4 + 4);
    t21 = (t20 + 1);
    t16 = (9 - t21);
    t17 = (t16 * 1U);
    t18 = (0 + t17);
    t1 = (t2 + t18);
    t3 = xsi_get_transient_memory(9U);
    memcpy(t3, t1, 9U);
    t4 = (t0 + 2368U);
    t7 = *((char **)t4);
    t22 = (4 + 4);
    t23 = (9 - t22);
    t24 = (t23 * 1U);
    t25 = (0 + t24);
    t4 = (t7 + t25);
    memcpy(t4, t3, 9U);

LAB10:    t1 = (t0 + 5922);
    t15 = *((int *)t1);
    t2 = (t0 + 5926);
    t19 = *((int *)t2);
    if (t15 == t19)
        goto LAB11;

LAB17:    t20 = (t15 + 1);
    t15 = t20;
    t3 = (t0 + 5922);
    *((int *)t3) = t15;
    goto LAB8;

LAB12:    xsi_set_current_line(49, ng0);
    t12 = (t0 + 2368U);
    t13 = *((char **)t12);
    t12 = (t0 + 5824U);
    t14 = (t0 + 2128U);
    t29 = *((char **)t14);
    t14 = (t0 + 5824U);
    t30 = ieee_p_0774719531_sub_1496620905533649268_2162500114(IEEE_P_0774719531, t28, t13, t12, t29, t14);
    t31 = (t0 + 2368U);
    t32 = *((char **)t31);
    t31 = (t32 + 0);
    t33 = (t28 + 12U);
    t23 = *((unsigned int *)t33);
    t24 = (1U * t23);
    memcpy(t31, t30, t24);
    goto LAB13;

LAB15:    xsi_set_current_line(51, ng0);
    t9 = (t0 + 2368U);
    t10 = *((char **)t9);
    t9 = (t0 + 5824U);
    t12 = (t0 + 2248U);
    t13 = *((char **)t12);
    t12 = (t0 + 5824U);
    t14 = ieee_p_0774719531_sub_1496620905533649268_2162500114(IEEE_P_0774719531, t28, t10, t9, t13, t12);
    t29 = (t0 + 2368U);
    t30 = *((char **)t29);
    t29 = (t30 + 0);
    t31 = (t28 + 12U);
    t23 = *((unsigned int *)t31);
    t24 = (1U * t23);
    memcpy(t29, t14, t24);
    goto LAB13;

}


extern void work_a_2496734458_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2496734458_2372691052_p_0};
	xsi_register_didat("work_a_2496734458_2372691052", "isim/tb_booth_multiplier_isim_beh.exe.sim/work/a_2496734458_2372691052.didat");
	xsi_register_executes(pe);
}
