//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_cmn.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_CMN_H__
#define __ISP_CMN_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_enable                : 1   ; /* [0 ]      */
        unsigned int    cnfg_reg_input_422             : 1   ; /* [1 ]      */
        unsigned int    cnfg_reg_ex_blur_en            : 1   ; /* [2 ]      */
        unsigned int    cnfg_reg_blur_nolimit_en       : 1   ; /* [3 ]      */
        unsigned int    reserved0                      : 12  ; /* [15..4 ]  */
        unsigned int    cnfg_reg_sat_thresh0_cb        : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_sat_thresh1_cb        : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    cnfg_reg_sat_thresh0_cr        : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_sat_thresh1_cr        : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    cnfg_reg_act_thresh0_cb        : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_act_thresh1_cb        : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    cnfg_reg_act_thresh0_cr        : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_act_thresh1_cr        : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    cnfg_reg_k0_sat0_cb_0_         : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_k0_sat0_cb_1_         : 5   ; /* [25..21]  */
        unsigned int    cnfg_reg_k0_sat0_cb_2_         : 5   ; /* [30..26]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_k0_sat1_cb_0_         : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_k0_sat1_cb_1_         : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_k0_sat1_cb_2_         : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_k0_sat2_cb_0_         : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_k0_sat2_cb_1_         : 5   ; /* [25..21]  */
        unsigned int    cnfg_reg_k0_sat2_cb_2_         : 5   ; /* [30..26]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_k0_sat0_cr_0_         : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_k0_sat0_cr_1_         : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_k0_sat0_cr_2_         : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_k0_sat1_cr_0_         : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_k0_sat1_cr_1_         : 5   ; /* [25..21]  */
        unsigned int    cnfg_reg_k0_sat1_cr_2_         : 5   ; /* [30..26]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_k0_sat2_cr_0_         : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_k0_sat2_cr_1_         : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_k0_sat2_cr_2_         : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_k1_sat0_cb_0_         : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_k1_sat0_cb_1_         : 5   ; /* [25..21]  */
        unsigned int    cnfg_reg_k1_sat0_cb_2_         : 5   ; /* [30..26]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_k1_sat1_cb_0_         : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_k1_sat1_cb_1_         : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_k1_sat1_cb_2_         : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_k1_sat2_cb_0_         : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_k1_sat2_cb_1_         : 5   ; /* [25..21]  */
        unsigned int    cnfg_reg_k1_sat2_cb_2_         : 5   ; /* [30..26]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_k1_sat0_cr_0_         : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_k1_sat0_cr_1_         : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_k1_sat0_cr_2_         : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_k1_sat1_cr_0_         : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_k1_sat1_cr_1_         : 5   ; /* [25..21]  */
        unsigned int    cnfg_reg_k1_sat1_cr_2_         : 5   ; /* [30..26]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_k1_sat2_cr_0_         : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_k1_sat2_cr_1_         : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_k1_sat2_cr_2_         : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_k2_sat0_cb_0_         : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_k2_sat0_cb_1_         : 5   ; /* [25..21]  */
        unsigned int    cnfg_reg_k2_sat0_cb_2_         : 5   ; /* [30..26]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_k2_sat1_cb_0_         : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_k2_sat1_cb_1_         : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_k2_sat1_cb_2_         : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_k2_sat2_cb_0_         : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_k2_sat2_cb_1_         : 5   ; /* [25..21]  */
        unsigned int    cnfg_reg_k2_sat2_cb_2_         : 5   ; /* [30..26]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X0B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_k2_sat0_cr_0_         : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_k2_sat0_cr_1_         : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_k2_sat0_cr_2_         : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_k2_sat1_cr_0_         : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_k2_sat1_cr_1_         : 5   ; /* [25..21]  */
        unsigned int    cnfg_reg_k2_sat1_cr_2_         : 5   ; /* [30..26]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X0C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_k2_sat2_cr_0_         : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_k2_sat2_cr_1_         : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_k2_sat2_cr_2_         : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_k3_sat0_cb_0_         : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_k3_sat0_cb_1_         : 5   ; /* [25..21]  */
        unsigned int    cnfg_reg_k3_sat0_cb_2_         : 5   ; /* [30..26]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X0D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_k3_sat1_cb_0_         : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_k3_sat1_cb_1_         : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_k3_sat1_cb_2_         : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_k3_sat2_cb_0_         : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_k3_sat2_cb_1_         : 5   ; /* [25..21]  */
        unsigned int    cnfg_reg_k3_sat2_cb_2_         : 5   ; /* [30..26]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X0E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_k3_sat0_cr_0_         : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_k3_sat0_cr_1_         : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_k3_sat0_cr_2_         : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_k3_sat1_cr_0_         : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_k3_sat1_cr_1_         : 5   ; /* [25..21]  */
        unsigned int    cnfg_reg_k3_sat1_cr_2_         : 5   ; /* [30..26]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X0F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_k3_sat2_cr_0_         : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_k3_sat2_cr_1_         : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_k3_sat2_cr_2_         : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_ex_blur_delta_1       : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_ex_blur_delta_2       : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_ex_blur_delta_3       : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X11;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_ex_blur_mul_1         : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_ex_blur_sft_1         : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_ex_blur_mul_2         : 8   ; /* [23..16]  */
        unsigned int    cnfg_reg_ex_blur_sft_2         : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X12;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_ex_blur_mul_3         : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_ex_blur_sft_3         : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_ex_blur_data_u        : 8   ; /* [23..16]  */
        unsigned int    cnfg_reg_ex_blur_data_v        : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X13;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_data_0                     : 6   ; /* [5 ..0 ]  */
        unsigned int    reserved0                      : 10  ; /* [15..6 ]  */
        unsigned int    dbg_data_1                     : 5   ; /* [20..16]  */
        unsigned int    reserved1                      : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X14;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_data_2                     : 2   ; /* [1 ..0 ]  */
        unsigned int    reserved0                      : 14  ; /* [15..2 ]  */
        unsigned int    dbg_data_3                     : 13  ; /* [28..16]  */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X15;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_data_4                     : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    dbg_data_5                     : 7   ; /* [22..16]  */
        unsigned int    reserved1                      : 9   ; /* [31..23]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X16;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_data_6                     : 7   ; /* [6 ..0 ]  */
        unsigned int    reserved0                      : 9   ; /* [15..7 ]  */
        unsigned int    dbg_data_7                     : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X17;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_sum_uv_fpga_               : 16  ; /* [15..0 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMN0X18;

typedef struct
{
    volatile U_ISP_CMN0X00                      ISP_CMN0x00;
    volatile U_ISP_CMN0X01                      ISP_CMN0x01;
    volatile U_ISP_CMN0X02                      ISP_CMN0x02;
    volatile U_ISP_CMN0X03                      ISP_CMN0x03;
    volatile U_ISP_CMN0X04                      ISP_CMN0x04;
    volatile U_ISP_CMN0X05                      ISP_CMN0x05;
    volatile U_ISP_CMN0X06                      ISP_CMN0x06;
    volatile U_ISP_CMN0X07                      ISP_CMN0x07;
    volatile U_ISP_CMN0X08                      ISP_CMN0x08;
    volatile U_ISP_CMN0X09                      ISP_CMN0x09;
    volatile U_ISP_CMN0X0A                      ISP_CMN0x0a;
    volatile U_ISP_CMN0X0B                      ISP_CMN0x0b;
    volatile U_ISP_CMN0X0C                      ISP_CMN0x0c;
    volatile U_ISP_CMN0X0D                      ISP_CMN0x0d;
    volatile U_ISP_CMN0X0E                      ISP_CMN0x0e;
    volatile U_ISP_CMN0X0F                      ISP_CMN0x0f;
    volatile U_ISP_CMN0X10                      ISP_CMN0x10;
    volatile U_ISP_CMN0X11                      ISP_CMN0x11;
    volatile U_ISP_CMN0X12                      ISP_CMN0x12;
    volatile U_ISP_CMN0X13                      ISP_CMN0x13;
    volatile U_ISP_CMN0X14                      ISP_CMN0x14;
    volatile U_ISP_CMN0X15                      ISP_CMN0x15;
    volatile U_ISP_CMN0X16                      ISP_CMN0x16;
    volatile U_ISP_CMN0X17                      ISP_CMN0x17;
    volatile U_ISP_CMN0X18                      ISP_CMN0x18;
} S_ISP_CMN_REGS_TYPE;



#endif 

