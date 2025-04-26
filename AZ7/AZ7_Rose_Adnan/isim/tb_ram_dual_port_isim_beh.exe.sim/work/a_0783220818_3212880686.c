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
static const char *ng0 = "/home/ise/ISE_Share/4033106466/AZ7_Rose_Adnan/DualPortRAM.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_0783220818_3212880686_p_0(char *t0)
{
    char t10[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    int t5;
    int t6;
    char *t7;
    int t8;
    int t9;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1632U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB10;

LAB11:
LAB3:    t1 = (t0 + 4824);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t5 = xsi_vhdl_pow(2, 4);
    t6 = (t5 - 1);
    t1 = (t0 + 8358);
    *((int *)t1) = 0;
    t7 = (t0 + 8362);
    *((int *)t7) = t6;
    t8 = 0;
    t9 = t6;

LAB5:    if (t8 <= t9)
        goto LAB6;

LAB8:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 4968);
    t2 = (t1 + 56U);
    t7 = *((char **)t2);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB6:    xsi_set_current_line(47, ng0);
    t11 = (t0 + 8358);
    t12 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, *((int *)t11), 8);
    t13 = (t0 + 8358);
    t14 = *((int *)t13);
    t15 = (t14 - 15);
    t16 = (t15 * -1);
    t17 = (8U * t16);
    t18 = (0U + t17);
    t19 = (t0 + 4904);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t12, 8U);
    xsi_driver_first_trans_delta(t19, t18, 8U, 0LL);

LAB7:    t1 = (t0 + 8358);
    t8 = *((int *)t1);
    t2 = (t0 + 8362);
    t9 = *((int *)t2);
    if (t8 == t9)
        goto LAB8;

LAB9:    t5 = (t8 + 1);
    t8 = t5;
    t7 = (t0 + 8358);
    *((int *)t7) = t8;
    goto LAB5;

LAB10:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1032U);
    t7 = *((char **)t2);
    t25 = *((unsigned char *)t7);
    t26 = (t25 == (unsigned char)3);
    if (t26 == 1)
        goto LAB18;

LAB19:    t24 = (unsigned char)0;

LAB20:    if (t24 == 1)
        goto LAB15;

LAB16:    t4 = (unsigned char)0;

LAB17:    if (t4 != 0)
        goto LAB12;

LAB14:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t24 = *((unsigned char *)t2);
    t25 = (t24 == (unsigned char)3);
    if (t25 == 1)
        goto LAB26;

LAB27:    t4 = (unsigned char)0;

LAB28:    if (t4 == 1)
        goto LAB23;

LAB24:    t3 = (unsigned char)0;

LAB25:    if (t3 != 0)
        goto LAB21;

LAB22:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t24 = (t4 == (unsigned char)3);
    if (t24 == 1)
        goto LAB31;

LAB32:    t3 = (unsigned char)0;

LAB33:    if (t3 != 0)
        goto LAB29;

LAB30:
LAB13:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t24 = *((unsigned char *)t2);
    t25 = (t24 == (unsigned char)3);
    if (t25 == 1)
        goto LAB49;

LAB50:    t4 = (unsigned char)0;

LAB51:    if (t4 == 1)
        goto LAB46;

LAB47:    t3 = (unsigned char)0;

LAB48:    if (t3 != 0)
        goto LAB43;

LAB45:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t24 = *((unsigned char *)t2);
    t25 = (t24 == (unsigned char)3);
    if (t25 == 1)
        goto LAB57;

LAB58:    t4 = (unsigned char)0;

LAB59:    if (t4 == 1)
        goto LAB54;

LAB55:    t3 = (unsigned char)0;

LAB56:    if (t3 != 0)
        goto LAB52;

LAB53:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t24 = (t4 == (unsigned char)3);
    if (t24 == 1)
        goto LAB62;

LAB63:    t3 = (unsigned char)0;

LAB64:    if (t3 != 0)
        goto LAB60;

LAB61:
LAB44:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t24 = (t4 == (unsigned char)3);
    if (t24 == 1)
        goto LAB77;

LAB78:    t3 = (unsigned char)0;

LAB79:    if (t3 != 0)
        goto LAB74;

LAB76:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t24 = (t4 == (unsigned char)3);
    if (t24 == 1)
        goto LAB91;

LAB92:    t3 = (unsigned char)0;

LAB93:    if (t3 != 0)
        goto LAB89;

LAB90:
LAB75:    goto LAB3;

LAB12:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2312U);
    t13 = *((char **)t2);
    t2 = (t0 + 1992U);
    t19 = *((char **)t2);
    t2 = (t0 + 8072U);
    t5 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t19, t2);
    t6 = (t5 - 15);
    t16 = (t6 * -1);
    t17 = (8U * t16);
    t18 = (0U + t17);
    t20 = (t0 + 4904);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t31 = *((char **)t23);
    memcpy(t31, t13, 8U);
    xsi_driver_first_trans_delta(t20, t18, 8U, 0LL);
    goto LAB13;

LAB15:    t2 = (t0 + 1192U);
    t12 = *((char **)t2);
    t29 = *((unsigned char *)t12);
    t30 = (t29 == (unsigned char)2);
    t4 = t30;
    goto LAB17;

LAB18:    t2 = (t0 + 1352U);
    t11 = *((char **)t2);
    t27 = *((unsigned char *)t11);
    t28 = (t27 == (unsigned char)2);
    t24 = t28;
    goto LAB20;

LAB21:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3112U);
    t12 = *((char **)t1);
    t1 = (t0 + 1832U);
    t13 = *((char **)t1);
    t1 = (t0 + 8056U);
    t5 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t13, t1);
    t6 = (t5 - 15);
    t16 = (t6 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t5);
    t17 = (8U * t16);
    t18 = (0 + t17);
    t19 = (t12 + t18);
    t20 = (t0 + 5032);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t31 = *((char **)t23);
    memcpy(t31, t19, 8U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB13;

LAB23:    t1 = (t0 + 1512U);
    t11 = *((char **)t1);
    t28 = *((unsigned char *)t11);
    t29 = (t28 == (unsigned char)2);
    t3 = t29;
    goto LAB25;

LAB26:    t1 = (t0 + 1032U);
    t7 = *((char **)t1);
    t26 = *((unsigned char *)t7);
    t27 = (t26 == (unsigned char)2);
    t4 = t27;
    goto LAB28;

LAB29:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1832U);
    t11 = *((char **)t1);
    t1 = (t0 + 1992U);
    t12 = *((char **)t1);
    t27 = 1;
    if (4U == 4U)
        goto LAB37;

LAB38:    t27 = 0;

LAB39:    if (t27 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 1992U);
    t7 = *((char **)t1);
    t1 = (t0 + 8072U);
    t5 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t7, t1);
    t6 = (t5 - 15);
    t16 = (t6 * -1);
    t17 = (8U * t16);
    t18 = (0U + t17);
    t11 = (t0 + 4904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t2, 8U);
    xsi_driver_first_trans_delta(t11, t18, 8U, 0LL);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t1 = (t0 + 8056U);
    t5 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t7, t1);
    t6 = (t5 - 15);
    t16 = (t6 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t5);
    t17 = (8U * t16);
    t18 = (0 + t17);
    t11 = (t2 + t18);
    t12 = (t0 + 5032);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 8U);
    xsi_driver_first_trans_fast_port(t12);

LAB35:    goto LAB13;

LAB31:    t1 = (t0 + 1032U);
    t7 = *((char **)t1);
    t25 = *((unsigned char *)t7);
    t26 = (t25 == (unsigned char)3);
    t3 = t26;
    goto LAB33;

LAB34:    xsi_set_current_line(59, ng0);
    t19 = (t0 + 4968);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t19);
    goto LAB35;

LAB37:    t16 = 0;

LAB40:    if (t16 < 4U)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t1 = (t11 + t16);
    t13 = (t12 + t16);
    if (*((unsigned char *)t1) != *((unsigned char *)t13))
        goto LAB38;

LAB42:    t16 = (t16 + 1);
    goto LAB40;

LAB43:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2472U);
    t12 = *((char **)t1);
    t1 = (t0 + 1992U);
    t13 = *((char **)t1);
    t1 = (t0 + 8072U);
    t5 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t13, t1);
    t6 = (t5 - 15);
    t16 = (t6 * -1);
    t17 = (8U * t16);
    t18 = (0U + t17);
    t19 = (t0 + 4904);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t12, 8U);
    xsi_driver_first_trans_delta(t19, t18, 8U, 0LL);
    goto LAB44;

LAB46:    t1 = (t0 + 1032U);
    t11 = *((char **)t1);
    t28 = *((unsigned char *)t11);
    t29 = (t28 == (unsigned char)2);
    t3 = t29;
    goto LAB48;

LAB49:    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t26 = *((unsigned char *)t7);
    t27 = (t26 == (unsigned char)2);
    t4 = t27;
    goto LAB51;

LAB52:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 3112U);
    t12 = *((char **)t1);
    t1 = (t0 + 1832U);
    t13 = *((char **)t1);
    t1 = (t0 + 8056U);
    t5 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t13, t1);
    t6 = (t5 - 15);
    t16 = (t6 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t5);
    t17 = (8U * t16);
    t18 = (0 + t17);
    t19 = (t12 + t18);
    t20 = (t0 + 5096);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t31 = *((char **)t23);
    memcpy(t31, t19, 8U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB44;

LAB54:    t1 = (t0 + 1352U);
    t11 = *((char **)t1);
    t28 = *((unsigned char *)t11);
    t29 = (t28 == (unsigned char)2);
    t3 = t29;
    goto LAB56;

LAB57:    t1 = (t0 + 1192U);
    t7 = *((char **)t1);
    t26 = *((unsigned char *)t7);
    t27 = (t26 == (unsigned char)2);
    t4 = t27;
    goto LAB59;

LAB60:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1832U);
    t11 = *((char **)t1);
    t1 = (t0 + 1992U);
    t12 = *((char **)t1);
    t27 = 1;
    if (4U == 4U)
        goto LAB68;

LAB69:    t27 = 0;

LAB70:    if (t27 != 0)
        goto LAB65;

LAB67:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 1992U);
    t7 = *((char **)t1);
    t1 = (t0 + 8072U);
    t5 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t7, t1);
    t6 = (t5 - 15);
    t16 = (t6 * -1);
    t17 = (8U * t16);
    t18 = (0U + t17);
    t11 = (t0 + 4904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t2, 8U);
    xsi_driver_first_trans_delta(t11, t18, 8U, 0LL);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 1832U);
    t7 = *((char **)t1);
    t1 = (t0 + 8056U);
    t5 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t7, t1);
    t6 = (t5 - 15);
    t16 = (t6 * -1);
    xsi_vhdl_check_range_of_index(15, 0, -1, t5);
    t17 = (8U * t16);
    t18 = (0 + t17);
    t11 = (t2 + t18);
    t12 = (t0 + 5096);
    t13 = (t12 + 56U);
    t19 = *((char **)t13);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t11, 8U);
    xsi_driver_first_trans_fast_port(t12);

LAB66:    goto LAB44;

LAB62:    t1 = (t0 + 1192U);
    t7 = *((char **)t1);
    t25 = *((unsigned char *)t7);
    t26 = (t25 == (unsigned char)3);
    t3 = t26;
    goto LAB64;

LAB65:    xsi_set_current_line(73, ng0);
    t19 = (t0 + 4968);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t19);
    goto LAB66;

LAB68:    t16 = 0;

LAB71:    if (t16 < 4U)
        goto LAB72;
    else
        goto LAB70;

LAB72:    t1 = (t11 + t16);
    t13 = (t12 + t16);
    if (*((unsigned char *)t1) != *((unsigned char *)t13))
        goto LAB69;

LAB73:    t16 = (t16 + 1);
    goto LAB71;

LAB74:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1832U);
    t11 = *((char **)t1);
    t1 = (t0 + 1992U);
    t12 = *((char **)t1);
    t27 = 1;
    if (4U == 4U)
        goto LAB83;

LAB84:    t27 = 0;

LAB85:    if (t27 != 0)
        goto LAB80;

LAB82:
LAB81:    goto LAB75;

LAB77:    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t25 = *((unsigned char *)t7);
    t26 = (t25 == (unsigned char)3);
    t3 = t26;
    goto LAB79;

LAB80:    xsi_set_current_line(81, ng0);
    t19 = (t0 + 4968);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t19);
    goto LAB81;

LAB83:    t16 = 0;

LAB86:    if (t16 < 4U)
        goto LAB87;
    else
        goto LAB85;

LAB87:    t1 = (t11 + t16);
    t13 = (t12 + t16);
    if (*((unsigned char *)t1) != *((unsigned char *)t13))
        goto LAB84;

LAB88:    t16 = (t16 + 1);
    goto LAB86;

LAB89:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1832U);
    t11 = *((char **)t1);
    t1 = (t0 + 1992U);
    t12 = *((char **)t1);
    t27 = 1;
    if (4U == 4U)
        goto LAB97;

LAB98:    t27 = 0;

LAB99:    if (t27 != 0)
        goto LAB94;

LAB96:
LAB95:    goto LAB75;

LAB91:    t1 = (t0 + 1352U);
    t7 = *((char **)t1);
    t25 = *((unsigned char *)t7);
    t26 = (t25 == (unsigned char)3);
    t3 = t26;
    goto LAB93;

LAB94:    xsi_set_current_line(85, ng0);
    t19 = (t0 + 4968);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t19);
    goto LAB95;

LAB97:    t16 = 0;

LAB100:    if (t16 < 4U)
        goto LAB101;
    else
        goto LAB99;

LAB101:    t1 = (t11 + t16);
    t13 = (t12 + t16);
    if (*((unsigned char *)t1) != *((unsigned char *)t13))
        goto LAB98;

LAB102:    t16 = (t16 + 1);
    goto LAB100;

}


extern void work_a_0783220818_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0783220818_3212880686_p_0};
	xsi_register_didat("work_a_0783220818_3212880686", "isim/tb_ram_dual_port_isim_beh.exe.sim/work/a_0783220818_3212880686.didat");
	xsi_register_executes(pe);
}
