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


static void work_a_1654179568_0000452272_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
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
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;
    unsigned char t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB12;

LAB13:    t3 = (unsigned char)0;

LAB14:    if (t3 != 0)
        goto LAB10;

LAB11:
LAB3:    t1 = (t0 + 4144);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 15009);
    *((int *)t1) = 0;
    t5 = (t0 + 15013);
    *((int *)t5) = 255;
    t6 = 0;
    t7 = 255;

LAB5:    if (t6 <= t7)
        goto LAB6;

LAB8:    goto LAB3;

LAB6:    xsi_set_current_line(49, ng0);
    t8 = xsi_get_transient_memory(32U);
    memset(t8, 0, 32U);
    t9 = t8;
    memset(t9, (unsigned char)2, 32U);
    t10 = (t0 + 15009);
    t11 = *((int *)t10);
    t12 = (t11 - 255);
    t13 = (t12 * -1);
    t14 = (32U * t13);
    t15 = (0U + t14);
    t16 = (t0 + 4224);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 32U);
    xsi_driver_first_trans_delta(t16, t15, 32U, 0LL);

LAB7:    t1 = (t0 + 15009);
    t6 = *((int *)t1);
    t2 = (t0 + 15013);
    t7 = *((int *)t2);
    if (t6 == t7)
        goto LAB8;

LAB9:    t11 = (t6 + 1);
    t6 = t11;
    t5 = (t0 + 15009);
    *((int *)t5) = t6;
    goto LAB5;

LAB10:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1352U);
    t8 = *((char **)t2);
    t25 = *((unsigned char *)t8);
    t26 = (t25 == (unsigned char)3);
    if (t26 == 1)
        goto LAB21;

LAB22:    t24 = (unsigned char)0;

LAB23:    if (t24 == 1)
        goto LAB18;

LAB19:    t23 = (unsigned char)0;

LAB20:    if (t23 != 0)
        goto LAB15;

LAB17:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t21 = *((unsigned char *)t2);
    t22 = (t21 == (unsigned char)3);
    if (t22 == 1)
        goto LAB29;

LAB30:    t4 = (unsigned char)0;

LAB31:    if (t4 == 1)
        goto LAB26;

LAB27:    t3 = (unsigned char)0;

LAB28:    if (t3 != 0)
        goto LAB24;

LAB25:    xsi_set_current_line(57, ng0);
    t1 = xsi_get_transient_memory(32U);
    memset(t1, 0, 32U);
    t2 = t1;
    memset(t2, (unsigned char)4, 32U);
    t5 = (t0 + 4288);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t16 = *((char **)t10);
    memcpy(t16, t1, 32U);
    xsi_driver_first_trans_fast_port(t5);

LAB16:    goto LAB3;

LAB12:    t2 = (t0 + 1032U);
    t5 = *((char **)t2);
    t21 = *((unsigned char *)t5);
    t22 = (t21 == (unsigned char)3);
    t3 = t22;
    goto LAB14;

LAB15:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1992U);
    t16 = *((char **)t2);
    t2 = (t0 + 1832U);
    t17 = *((char **)t2);
    t2 = (t0 + 6672U);
    t6 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t17, t2);
    t7 = (t6 - 255);
    t13 = (t7 * -1);
    t14 = (32U * t13);
    t15 = (0U + t14);
    t18 = (t0 + 4224);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t31 = (t20 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t16, 32U);
    xsi_driver_first_trans_delta(t18, t15, 32U, 0LL);
    goto LAB16;

LAB18:    t2 = (t0 + 1512U);
    t10 = *((char **)t2);
    t29 = *((unsigned char *)t10);
    t30 = (t29 == (unsigned char)2);
    t23 = t30;
    goto LAB20;

LAB21:    t2 = (t0 + 1192U);
    t9 = *((char **)t2);
    t27 = *((unsigned char *)t9);
    t28 = (t27 == (unsigned char)3);
    t24 = t28;
    goto LAB23;

LAB24:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2312U);
    t9 = *((char **)t1);
    t1 = (t0 + 1832U);
    t10 = *((char **)t1);
    t1 = (t0 + 6672U);
    t6 = ieee_p_3620187407_sub_5109402382352621412_3965413181(IEEE_P_3620187407, t10, t1);
    t7 = (t6 - 255);
    t13 = (t7 * -1);
    xsi_vhdl_check_range_of_index(255, 0, -1, t6);
    t14 = (32U * t13);
    t15 = (0 + t14);
    t16 = (t9 + t15);
    t17 = (t0 + 4288);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t31 = *((char **)t20);
    memcpy(t31, t16, 32U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB16;

LAB26:    t1 = (t0 + 1192U);
    t8 = *((char **)t1);
    t25 = *((unsigned char *)t8);
    t26 = (t25 == (unsigned char)2);
    t3 = t26;
    goto LAB28;

LAB29:    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t23 = *((unsigned char *)t5);
    t24 = (t23 == (unsigned char)3);
    t4 = t24;
    goto LAB31;

}


extern void work_a_1654179568_0000452272_init()
{
	static char *pe[] = {(void *)work_a_1654179568_0000452272_p_0};
	xsi_register_didat("work_a_1654179568_0000452272", "isim/sim_ram_isim_beh.exe.sim/work/a_1654179568_0000452272.didat");
	xsi_register_executes(pe);
}
