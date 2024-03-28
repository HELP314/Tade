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
static const char *ng0 = "/home/ise/Documents/Proyecto/MemoriaRam/Ram.vhd";
extern char *IEEE_P_3620187407;

int ieee_p_3620187407_sub_5109402382352621412_3965413181(char *, char *, char *);


static void work_a_0505310011_0000452272_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
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
    int t15;
    int t16;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(61, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t4 = t2;
    memset(t4, (unsigned char)4, 32U);
    t5 = (t0 + 4288);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t2, 32U);
    xsi_driver_first_trans_fast_port(t5);

LAB3:    t2 = (t0 + 4144);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 1672U);
    t11 = *((char **)t4);
    t12 = *((unsigned char *)t11);
    t13 = (t12 == (unsigned char)3);
    if (t13 != 0)
        goto LAB11;

LAB13:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 15017);
    *((int *)t4) = 0;
    t14 = (t0 + 15021);
    *((int *)t14) = 255;
    t15 = 0;
    t16 = 255;

LAB14:    if (t15 <= t16)
        goto LAB15;

LAB17:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB19;

LAB21:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB22;

LAB23:
LAB20:    goto LAB12;

LAB15:    xsi_set_current_line(51, ng0);
    t17 = xsi_get_transient_memory(32U);
    memset(t17, 0, 32U);
    t18 = t17;
    memset(t18, (unsigned char)2, 32U);
    t19 = (t0 + 15017);
    t20 = *((int *)t19);
    t21 = (t20 - 255);
    t22 = (t21 * -1);
    t23 = (32U * t22);
    t24 = (0U + t23);
    t25 = (t0 + 4224);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t17, 32U);
    xsi_driver_first_trans_delta(t25, t24, 32U, 0LL);

LAB16:    t2 = (t0 + 15017);
    t15 = *((int *)t2);
    t4 = (t0 + 15021);
    t16 = *((int *)t4);
    if (t15 == t16)
        goto LAB17;

LAB18:    t20 = (t15 + 1);
    t15 = t20;
    t5 = (t0 + 15017);
    *((int *)t5) = t15;
    goto LAB14;

LAB19:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t2 = (t0 + 1832U);
    t8 = *((char **)t2);
    t2 = (t0 + 6680U);
    t15 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t8, t2);
    t16 = (t15 - 255);
    t22 = (t16 * -1);
    t23 = (32U * t22);
    t24 = (0U + t23);
    t11 = (t0 + 4224);
    t14 = (t11 + 56U);
    t17 = *((char **)t14);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t5, 32U);
    xsi_driver_first_trans_delta(t11, t24, 32U, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2312U);
    t5 = *((char **)t2);
    t2 = (t0 + 1832U);
    t8 = *((char **)t2);
    t2 = (t0 + 6680U);
    t15 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t8, t2);
    t16 = (t15 - 255);
    t22 = (t16 * -1);
    xsi_vhdl_check_range_of_index(255, 0, -1, t15);
    t23 = (32U * t22);
    t24 = (0 + t23);
    t11 = (t5 + t24);
    t14 = (t0 + 4288);
    t17 = (t14 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t25 = *((char **)t19);
    memcpy(t25, t11, 32U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB20;

}


extern void work_a_0505310011_0000452272_init()
{
	static char *pe[] = {(void *)work_a_0505310011_0000452272_p_0};
	xsi_register_didat("work_a_0505310011_0000452272", "isim/rams_isim_beh.exe.sim/work/a_0505310011_0000452272.didat");
	xsi_register_executes(pe);
}
