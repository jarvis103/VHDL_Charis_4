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
extern char *STD_TEXTIO;
static const char *ng1 = "romfile";
extern char *IEEE_P_3564397177;
static const char *ng3 = "C:/Users/vaila/Dropbox/ORGANWSH/Lab5/lab5VHDL/IF_MEM.vhd";
extern char *IEEE_P_3620187407;

void ieee_p_3564397177_sub_2889341154_91900896(char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


char *work_a_4202670372_0000452272_sub_3774611782_4251431050(char *t1, char *t2, char *t3)
{
    char t4[208];
    char t5[24];
    char t17[32];
    char t26[32768];
    char t40[16];
    char *t0;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    int t35;
    int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t41;

LAB0:    t6 = ((STD_TEXTIO) + 3440);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t9 = (t4 + 4U);
    t10 = xsi_create_file_variable_in_buffer(0, ng1, t6, t2, t8, 1);
    *((char **)t9) = t10;
    t11 = (t4 + 12U);
    t12 = ((STD_TEXTIO) + 3280);
    t13 = (t11 + 56U);
    *((char **)t13) = t12;
    t14 = (t11 + 40U);
    *((char **)t14) = 0;
    t15 = (t11 + 64U);
    *((int *)t15) = 1;
    t16 = (t11 + 48U);
    *((char **)t16) = 0;
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 1023;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = -1;
    t20 = (0 - 1023);
    t21 = (t20 * -1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t17 + 16U);
    t22 = (t19 + 0U);
    *((int *)t22) = 31;
    t22 = (t19 + 4U);
    *((int *)t22) = 0;
    t22 = (t19 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 31);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t22 = (t19 + 12U);
    *((unsigned int *)t22) = t21;
    t22 = (t4 + 84U);
    t24 = (t1 + 4056);
    t25 = (t22 + 88U);
    *((char **)t25) = t24;
    t27 = (t22 + 56U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, 0);
    t28 = (t22 + 64U);
    t29 = (t24 + 80U);
    t30 = *((char **)t29);
    *((char **)t28) = t30;
    t31 = (t22 + 80U);
    *((unsigned int *)t31) = 32768U;
    t32 = (t5 + 4U);
    t33 = (t2 != 0);
    if (t33 == 1)
        goto LAB3;

LAB2:    t34 = (t5 + 12U);
    *((char **)t34) = t3;
    t35 = 0;
    t36 = 1023;

LAB4:    if (t35 <= t36)
        goto LAB5;

LAB7:    t6 = (t22 + 56U);
    t7 = *((char **)t6);
    t33 = (32768U != 32768U);
    if (t33 == 1)
        goto LAB9;

LAB10:    t0 = xsi_get_transient_memory(32768U);
    memcpy(t0, t7, 32768U);

LAB1:    xsi_access_variable_delete(t11);
    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    xsi_delete_file_variable(t7);
    return t0;
LAB3:    *((char **)t32) = t2;
    goto LAB2;

LAB5:    t37 = (t4 + 4U);
    t38 = *((char **)t37);
    std_textio_readline(STD_TEXTIO, (char *)0, t38, t11);
    t6 = (t22 + 56U);
    t7 = *((char **)t6);
    t20 = (t35 - 1023);
    t8 = (t20 * -1);
    xsi_vhdl_check_range_of_index(1023, 0, -1, t35);
    t21 = (32U * t8);
    t39 = (0 + t21);
    t6 = (t7 + t39);
    t9 = (t40 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 31;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t23 = (0 - 31);
    t41 = (t23 * -1);
    t41 = (t41 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t41;
    ieee_p_3564397177_sub_2889341154_91900896(IEEE_P_3564397177, (char *)0, t11, t6, t40);

LAB6:    if (t35 == t36)
        goto LAB7;

LAB8:    t20 = (t35 + 1);
    t35 = t20;
    goto LAB4;

LAB9:    xsi_size_not_matching(32768U, 32768U, 0);
    goto LAB10;

LAB11:;
}

static void work_a_4202670372_0000452272_p_0(char *t0)
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

LAB0:    xsi_set_current_line(44, ng3);

LAB3:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = (9 - 9);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 3496);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 3400);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4202670372_0000452272_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(46, ng3);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t1 = (t0 + 5852U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t3, t1);
    t5 = (t4 - 1023);
    t6 = (t5 * -1);
    xsi_vhdl_check_range_of_index(1023, 0, -1, t4);
    t7 = (32U * t6);
    t8 = (0 + t7);
    t9 = (t2 + t8);
    t10 = (t0 + 3560);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 32U);
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 3416);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4202670372_0000452272_init()
{
	static char *pe[] = {(void *)work_a_4202670372_0000452272_p_0,(void *)work_a_4202670372_0000452272_p_1};
	static char *se[] = {(void *)work_a_4202670372_0000452272_sub_3774611782_4251431050};
	xsi_register_didat("work_a_4202670372_0000452272", "isim/CPU_TEST_isim_beh.exe.sim/work/a_4202670372_0000452272.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
