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
static const char *ng0 = "/home/ise/ISE_Share/4033106466/AZ7_Rose_Adnan/CAM.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1452124681_2445836693_p_0(char *t0)
{
    char t22[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    int t5;
    char *t6;
    int t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned int t30;

LAB0:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1472U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB10;

LAB11:
LAB3:    t1 = (t0 + 4104);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(34, ng0);
    t5 = (16 - 1);
    t1 = (t0 + 7040);
    *((int *)t1) = 0;
    t6 = (t0 + 7044);
    *((int *)t6) = t5;
    t7 = 0;
    t8 = t5;

LAB5:    if (t7 <= t8)
        goto LAB6;

LAB8:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 4248);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB6:    xsi_set_current_line(35, ng0);
    t9 = (t0 + 2808U);
    t10 = *((char **)t9);
    t9 = (t0 + 7040);
    t11 = *((int *)t9);
    t12 = (t11 - 15);
    t13 = (t12 * -1);
    t14 = (4U * t13);
    t15 = (0U + t14);
    t16 = (t0 + 4184);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t10, 4U);
    xsi_driver_first_trans_delta(t16, t15, 4U, 0LL);

LAB7:    t1 = (t0 + 7040);
    t7 = *((int *)t1);
    t2 = (t0 + 7044);
    t8 = *((int *)t2);
    if (t7 == t8)
        goto LAB8;

LAB9:    t5 = (t7 + 1);
    t7 = t5;
    t6 = (t0 + 7040);
    *((int *)t6) = t7;
    goto LAB5;

LAB10:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1032U);
    t6 = *((char **)t2);
    t4 = *((unsigned char *)t6);
    t21 = (t4 == (unsigned char)3);
    if (t21 != 0)
        goto LAB12;

LAB14:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB24;

LAB25:
LAB13:    goto LAB3;

LAB12:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4248);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(41, ng0);
    t5 = (16 - 1);
    t1 = (t0 + 7048);
    *((int *)t1) = 0;
    t2 = (t0 + 7052);
    *((int *)t2) = t5;
    t7 = 0;
    t8 = t5;

LAB15:    if (t7 <= t8)
        goto LAB16;

LAB18:    goto LAB13;

LAB16:    xsi_set_current_line(42, ng0);
    t6 = (t0 + 1832U);
    t9 = *((char **)t6);
    t6 = (t0 + 6864U);
    t10 = (t0 + 2152U);
    t16 = *((char **)t10);
    t10 = (t0 + 7048);
    t11 = *((int *)t10);
    t12 = (t11 - 15);
    t13 = (t12 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t10));
    t14 = (4U * t13);
    t15 = (0 + t14);
    t17 = (t16 + t15);
    t18 = (t22 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 3;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t23 = (0 - 3);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t24;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t9, t6, t17, t22);
    if (t3 != 0)
        goto LAB19;

LAB21:
LAB20:
LAB17:    t1 = (t0 + 7048);
    t7 = *((int *)t1);
    t2 = (t0 + 7052);
    t8 = *((int *)t2);
    if (t7 == t8)
        goto LAB18;

LAB23:    t5 = (t7 + 1);
    t7 = t5;
    t6 = (t0 + 7048);
    *((int *)t6) = t7;
    goto LAB15;

LAB19:    xsi_set_current_line(43, ng0);
    t19 = (t0 + 4248);
    t20 = (t19 + 56U);
    t25 = *((char **)t20);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t19);
    xsi_set_current_line(44, ng0);
    goto LAB18;

LAB22:    goto LAB20;

LAB24:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 4248);
    t6 = (t1 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(50, ng0);
    t5 = (16 - 1);
    t1 = (t0 + 7056);
    *((int *)t1) = 0;
    t2 = (t0 + 7060);
    *((int *)t2) = t5;
    t7 = 0;
    t8 = t5;

LAB26:    if (t7 <= t8)
        goto LAB27;

LAB29:    goto LAB13;

LAB27:    xsi_set_current_line(51, ng0);
    t6 = (t0 + 1832U);
    t9 = *((char **)t6);
    t6 = (t0 + 6864U);
    t10 = (t0 + 2152U);
    t16 = *((char **)t10);
    t10 = (t0 + 7056);
    t11 = *((int *)t10);
    t12 = (t11 - 15);
    t13 = (t12 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t10));
    t14 = (4U * t13);
    t15 = (0 + t14);
    t17 = (t16 + t15);
    t18 = (t22 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 3;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t23 = (0 - 3);
    t24 = (t23 * -1);
    t24 = (t24 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t24;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t9, t6, t17, t22);
    if (t3 != 0)
        goto LAB30;

LAB32:    t1 = (t0 + 2808U);
    t2 = *((char **)t1);
    t1 = (t0 + 6928U);
    t6 = (t0 + 2152U);
    t9 = *((char **)t6);
    t6 = (t0 + 7056);
    t5 = *((int *)t6);
    t11 = (t5 - 15);
    t13 = (t11 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, *((int *)t6));
    t14 = (4U * t13);
    t15 = (0 + t14);
    t10 = (t9 + t15);
    t16 = (t22 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 3;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t12 = (0 - 3);
    t24 = (t12 * -1);
    t24 = (t24 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t24;
    t3 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t10, t22);
    if (t3 != 0)
        goto LAB34;

LAB35:
LAB31:
LAB28:    t1 = (t0 + 7056);
    t7 = *((int *)t1);
    t2 = (t0 + 7060);
    t8 = *((int *)t2);
    if (t7 == t8)
        goto LAB29;

LAB37:    t5 = (t7 + 1);
    t7 = t5;
    t6 = (t0 + 7056);
    *((int *)t6) = t7;
    goto LAB26;

LAB30:    xsi_set_current_line(52, ng0);
    t19 = (t0 + 4248);
    t20 = (t19 + 56U);
    t25 = *((char **)t20);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t19);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 7056);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t22, *((int *)t1), 4);
    t6 = (t0 + 4312);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t2, 4U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(54, ng0);
    goto LAB29;

LAB33:    goto LAB31;

LAB34:    xsi_set_current_line(56, ng0);
    t17 = (t0 + 1832U);
    t18 = *((char **)t17);
    t17 = (t0 + 7056);
    t23 = *((int *)t17);
    t28 = (t23 - 15);
    t24 = (t28 * -1);
    t29 = (4U * t24);
    t30 = (0U + t29);
    t19 = (t0 + 4184);
    t20 = (t19 + 56U);
    t25 = *((char **)t20);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t18, 4U);
    xsi_driver_first_trans_delta(t19, t30, 4U, 0LL);
    xsi_set_current_line(57, ng0);
    goto LAB29;

LAB36:    goto LAB31;

}


extern void work_a_1452124681_2445836693_init()
{
	static char *pe[] = {(void *)work_a_1452124681_2445836693_p_0};
	xsi_register_didat("work_a_1452124681_2445836693", "isim/tb_Cam_isim_beh.exe.sim/work/a_1452124681_2445836693.didat");
	xsi_register_executes(pe);
}
