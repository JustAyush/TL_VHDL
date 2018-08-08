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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/FromDiskG/6th semester/ES/Light/Light.vhd";
extern char *IEEE_P_3620187407;

unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_2184855151_3212880686_p_0(char *t0)
{
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    unsigned int t22;
    static char *nl0[] = {&&LAB11, &&LAB12, &&LAB13, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20, &&LAB21, &&LAB22};

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2096);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2148);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 4091);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 868U);
    t6 = *((char **)t2);
    t12 = *((unsigned char *)t6);
    t2 = (char *)((nl0) + t12);
    goto **((char **)t2);

LAB7:    t2 = (t0 + 592U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)3);
    t3 = t11;
    goto LAB9;

LAB10:    goto LAB3;

LAB11:    xsi_set_current_line(55, ng0);
    t7 = (t0 + 960U);
    t8 = *((char **)t7);
    t7 = (t0 + 4020U);
    t9 = (t0 + 1132U);
    t13 = *((char **)t9);
    t9 = (t0 + 4036U);
    t14 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t8, t7, t13, t9);
    if (t14 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 4095);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB25:    goto LAB10;

LAB12:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = (t0 + 1200U);
    t6 = *((char **)t5);
    t5 = (t0 + 4052U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 4099);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB30:    goto LAB10;

LAB13:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = (t0 + 1200U);
    t6 = *((char **)t5);
    t5 = (t0 + 4052U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 4103);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB35:    goto LAB10;

LAB14:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = (t0 + 1132U);
    t6 = *((char **)t5);
    t5 = (t0 + 4036U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB39;

LAB41:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 4107);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB40:    goto LAB10;

LAB15:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = (t0 + 1200U);
    t6 = *((char **)t5);
    t5 = (t0 + 4052U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB44;

LAB46:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)5;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 4111);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB45:    goto LAB10;

LAB16:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = (t0 + 1200U);
    t6 = *((char **)t5);
    t5 = (t0 + 4052U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB49;

LAB51:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)6;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(100, ng0);
    t1 = (t0 + 4115);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB50:    goto LAB10;

LAB17:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = (t0 + 1132U);
    t6 = *((char **)t5);
    t5 = (t0 + 4036U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB54;

LAB56:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)7;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(108, ng0);
    t1 = (t0 + 4119);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB55:    goto LAB10;

LAB18:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = (t0 + 1200U);
    t6 = *((char **)t5);
    t5 = (t0 + 4052U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB59;

LAB61:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)8;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 4123);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB60:    goto LAB10;

LAB19:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = (t0 + 1200U);
    t6 = *((char **)t5);
    t5 = (t0 + 4052U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB64;

LAB66:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)9;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(124, ng0);
    t1 = (t0 + 4127);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB65:    goto LAB10;

LAB20:    xsi_set_current_line(127, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = (t0 + 1132U);
    t6 = *((char **)t5);
    t5 = (t0 + 4036U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB69;

LAB71:    xsi_set_current_line(131, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)10;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 4131);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB70:    goto LAB10;

LAB21:    xsi_set_current_line(135, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = (t0 + 1200U);
    t6 = *((char **)t5);
    t5 = (t0 + 4052U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB74;

LAB76:    xsi_set_current_line(139, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)11;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 4135);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB75:    goto LAB10;

LAB22:    xsi_set_current_line(143, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = (t0 + 1200U);
    t6 = *((char **)t5);
    t5 = (t0 + 4052U);
    t3 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t6, t5);
    if (t3 != 0)
        goto LAB79;

LAB81:    xsi_set_current_line(147, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 4139);
    t5 = (t0 + 2184);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);

LAB80:    goto LAB10;

LAB23:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 2148);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB24:    xsi_set_current_line(56, ng0);
    t15 = (t0 + 2148);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)0;
    xsi_driver_first_trans_fast(t15);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB27;

LAB28:    t7 = (t0 + 2184);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB25;

LAB27:    xsi_size_not_matching(4U, t22, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(64, ng0);
    t7 = (t0 + 2148);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)1;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB32;

LAB33:    t7 = (t0 + 2184);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB30;

LAB32:    xsi_size_not_matching(4U, t22, 0);
    goto LAB33;

LAB34:    xsi_set_current_line(72, ng0);
    t7 = (t0 + 2148);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(73, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB37;

LAB38:    t7 = (t0 + 2184);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB35;

LAB37:    xsi_size_not_matching(4U, t22, 0);
    goto LAB38;

LAB39:    xsi_set_current_line(80, ng0);
    t7 = (t0 + 2148);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(81, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB42;

LAB43:    t7 = (t0 + 2184);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB40;

LAB42:    xsi_size_not_matching(4U, t22, 0);
    goto LAB43;

LAB44:    xsi_set_current_line(88, ng0);
    t7 = (t0 + 2148);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)4;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB47;

LAB48:    t7 = (t0 + 2184);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB45;

LAB47:    xsi_size_not_matching(4U, t22, 0);
    goto LAB48;

LAB49:    xsi_set_current_line(96, ng0);
    t7 = (t0 + 2148);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)5;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(97, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB52;

LAB53:    t7 = (t0 + 2184);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB50;

LAB52:    xsi_size_not_matching(4U, t22, 0);
    goto LAB53;

LAB54:    xsi_set_current_line(104, ng0);
    t7 = (t0 + 2148);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)6;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB57;

LAB58:    t7 = (t0 + 2184);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB55;

LAB57:    xsi_size_not_matching(4U, t22, 0);
    goto LAB58;

LAB59:    xsi_set_current_line(112, ng0);
    t7 = (t0 + 2148);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)7;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB62;

LAB63:    t7 = (t0 + 2184);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB60;

LAB62:    xsi_size_not_matching(4U, t22, 0);
    goto LAB63;

LAB64:    xsi_set_current_line(120, ng0);
    t7 = (t0 + 2148);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)8;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(121, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB67;

LAB68:    t7 = (t0 + 2184);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB65;

LAB67:    xsi_size_not_matching(4U, t22, 0);
    goto LAB68;

LAB69:    xsi_set_current_line(128, ng0);
    t7 = (t0 + 2148);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)9;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(129, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB72;

LAB73:    t7 = (t0 + 2184);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB70;

LAB72:    xsi_size_not_matching(4U, t22, 0);
    goto LAB73;

LAB74:    xsi_set_current_line(136, ng0);
    t7 = (t0 + 2148);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)10;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB77;

LAB78:    t7 = (t0 + 2184);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB75;

LAB77:    xsi_size_not_matching(4U, t22, 0);
    goto LAB78;

LAB79:    xsi_set_current_line(144, ng0);
    t7 = (t0 + 2148);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    *((unsigned char *)t15) = (unsigned char)11;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 4020U);
    t5 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t20, t2, t1, 1);
    t6 = (t20 + 12U);
    t21 = *((unsigned int *)t6);
    t22 = (1U * t21);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB82;

LAB83:    t7 = (t0 + 2184);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t13 = (t9 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t5, 4U);
    xsi_driver_first_trans_fast(t7);
    goto LAB80;

LAB82:    xsi_size_not_matching(4U, t22, 0);
    goto LAB83;

}

static void work_a_2184855151_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5, &&LAB6, &&LAB7, &&LAB8, &&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB14};

LAB0:    xsi_set_current_line(158, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 2104);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(159, ng0);
    t4 = (t0 + 4143);
    t6 = (t0 + 2220);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 12U);
    xsi_driver_first_trans_fast_port(t6);
    goto LAB2;

LAB4:    xsi_set_current_line(160, ng0);
    t1 = (t0 + 4155);
    t4 = (t0 + 2220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB5:    xsi_set_current_line(161, ng0);
    t1 = (t0 + 4167);
    t4 = (t0 + 2220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB6:    xsi_set_current_line(162, ng0);
    t1 = (t0 + 4179);
    t4 = (t0 + 2220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB7:    xsi_set_current_line(163, ng0);
    t1 = (t0 + 4191);
    t4 = (t0 + 2220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB8:    xsi_set_current_line(164, ng0);
    t1 = (t0 + 4203);
    t4 = (t0 + 2220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB9:    xsi_set_current_line(165, ng0);
    t1 = (t0 + 4215);
    t4 = (t0 + 2220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB10:    xsi_set_current_line(166, ng0);
    t1 = (t0 + 4227);
    t4 = (t0 + 2220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB11:    xsi_set_current_line(167, ng0);
    t1 = (t0 + 4239);
    t4 = (t0 + 2220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB12:    xsi_set_current_line(168, ng0);
    t1 = (t0 + 4251);
    t4 = (t0 + 2220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB13:    xsi_set_current_line(169, ng0);
    t1 = (t0 + 4263);
    t4 = (t0 + 2220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB14:    xsi_set_current_line(170, ng0);
    t1 = (t0 + 4275);
    t4 = (t0 + 2220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

LAB15:    xsi_set_current_line(171, ng0);
    t1 = (t0 + 4287);
    t4 = (t0 + 2220);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 12U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB2;

}


extern void work_a_2184855151_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2184855151_3212880686_p_0,(void *)work_a_2184855151_3212880686_p_1};
	xsi_register_didat("work_a_2184855151_3212880686", "isim/light1_ob_isim_beh.exe.sim/work/a_2184855151_3212880686.didat");
	xsi_register_executes(pe);
}
