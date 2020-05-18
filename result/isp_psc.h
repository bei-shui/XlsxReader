//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_psc.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_PSC_H__
#define __ISP_PSC_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_ctrl_0                 : 3   ; /* [2 ..0 ]  */
        unsigned int    creg_2d_ctrl_1                 : 1   ; /* [3 ]      */
        unsigned int    creg_2d_ctrl_2                 : 1   ; /* [4 ]      */
        unsigned int    cnfg_reg_psc_cor_enable        : 1   ; /* [5 ]      */
        unsigned int    cnfg_reg_psc_cor_range         : 2   ; /* [7 ..6 ]  */
        unsigned int    cnfg_reg_psc_feedthrough       : 1   ; /* [8 ]      */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    creg_2d_hout_width             : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hphase_incr_0          : 13  ; /* [12..0 ]  */
        unsigned int    creg_2d_hphase_incr_1          : 2   ; /* [14..13]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    creg_2d_hphase_init_c0_int     : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hphase_init_c0_frac    : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    creg_2d_hphase_init_c1_int     : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hphase_init_c1_frac    : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    creg_2d_vout_height            : 13  ; /* [28..16]  */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vphase_incr_0          : 13  ; /* [12..0 ]  */
        unsigned int    creg_2d_vphase_incr_1          : 2   ; /* [14..13]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    creg_2d_vphase_init_c0_0       : 13  ; /* [28..16]  */
        unsigned int    creg_2d_vphase_init_c0_1       : 2   ; /* [30..29]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vphase_init_c1_0       : 13  ; /* [12..0 ]  */
        unsigned int    creg_2d_vphase_init_c1_1       : 2   ; /* [14..13]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    creg_2d_bayer_pattern          : 2   ; /* [17..16]  */
        unsigned int    reserved1                      : 14  ; /* [31..18]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_r_a012_0               : 4   ; /* [3 ..0 ]  */
        unsigned int    creg_2d_r_a012_1               : 5   ; /* [8 ..4 ]  */
        unsigned int    creg_2d_r_a012_2               : 7   ; /* [15..9 ]  */
        unsigned int    creg_2d_r_a3                   : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_r_a4                   : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    creg_2d_r_a5                   : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_r_a6                   : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_r_a7                   : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_r_b0                   : 4   ; /* [19..16]  */
        unsigned int    creg_2d_r_b1                   : 6   ; /* [25..20]  */
        unsigned int    creg_2d_r_b2                   : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_r_b3                   : 6   ; /* [5 ..0 ]  */
        unsigned int    creg_2d_r_b4                   : 6   ; /* [11..6 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    creg_2d_r_b5                   : 7   ; /* [22..16]  */
        unsigned int    creg_2d_r_b6                   : 9   ; /* [31..23]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_r_c0                   : 5   ; /* [4 ..0 ]  */
        unsigned int    creg_2d_r_c1                   : 7   ; /* [11..5 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    creg_2d_r_c2                   : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_r_c3                   : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    creg_2d_r_c4                   : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X0B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_r_c5                   : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    creg_2d_r_c6                   : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X0C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_g_a0                   : 4   ; /* [3 ..0 ]  */
        unsigned int    creg_2d_g_a1                   : 5   ; /* [8 ..4 ]  */
        unsigned int    creg_2d_g_a2                   : 7   ; /* [15..9 ]  */
        unsigned int    creg_2d_g_a3                   : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X0D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_g_a4                   : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    creg_2d_g_a5                   : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X0E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_g_a6                   : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_g_a7                   : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_g_b0                   : 4   ; /* [19..16]  */
        unsigned int    creg_2d_g_b1                   : 6   ; /* [25..20]  */
        unsigned int    creg_2d_g_b2                   : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X0F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_g_b3                   : 6   ; /* [5 ..0 ]  */
        unsigned int    creg_2d_g_b4                   : 6   ; /* [11..6 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    creg_2d_g_b5                   : 7   ; /* [22..16]  */
        unsigned int    creg_2d_g_b6                   : 9   ; /* [31..23]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_g_c0                   : 5   ; /* [4 ..0 ]  */
        unsigned int    creg_2d_g_c1                   : 7   ; /* [11..5 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    creg_2d_g_c2                   : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X11;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_g_c3                   : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    creg_2d_g_c4                   : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X12;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_g_c5                   : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    creg_2d_g_c6                   : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X13;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_b_a0                   : 4   ; /* [3 ..0 ]  */
        unsigned int    creg_2d_b_a1                   : 5   ; /* [8 ..4 ]  */
        unsigned int    creg_2d_b_a2                   : 7   ; /* [15..9 ]  */
        unsigned int    creg_2d_b_a3                   : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X14;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_b_a4                   : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    creg_2d_b_a5                   : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X15;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_b_a6                   : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_b_a7                   : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_b_b0                   : 4   ; /* [19..16]  */
        unsigned int    creg_2d_b_b1                   : 6   ; /* [25..20]  */
        unsigned int    creg_2d_b_b2                   : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X16;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_b_b3                   : 6   ; /* [5 ..0 ]  */
        unsigned int    creg_2d_b_b4                   : 6   ; /* [11..6 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    creg_2d_b_b5                   : 7   ; /* [22..16]  */
        unsigned int    creg_2d_b_b6                   : 9   ; /* [31..23]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X17;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_b_c0                   : 5   ; /* [4 ..0 ]  */
        unsigned int    creg_2d_b_c1                   : 7   ; /* [11..5 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    creg_2d_b_c2                   : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X18;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_b_c3                   : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    creg_2d_b_c4                   : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X19;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_b_c5                   : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    creg_2d_b_c6                   : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X1A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_lossy_compression_mode : 2   ; /* [1 ..0 ]  */
        unsigned int    creg_2d_lossy_compression_mantissa_bits : 2   ; /* [3 ..2 ]  */
        unsigned int    creg_2d_lossy_compression_block_size : 1   ; /* [4 ]      */
        unsigned int    reserved0                      : 27  ; /* [31..5 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X1B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sreg_data_lsb                  : 16  ; /* [15..0 ]  */
        unsigned int    sreg_data_msb                  : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X1C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    prescale_status                : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    prescale_dbg_vld               : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X1D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    prescale_state                 : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 23  ; /* [31..9 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X1E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sum_cfa                        : 16  ; /* [15..0 ]  */
        unsigned int    sum_mv                         : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X1F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_0               : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_1               : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_2               : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_3               : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X20;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_4               : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_5               : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X21;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_6               : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_7               : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_8               : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_9               : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X22;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_10              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_11              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X23;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_12              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_13              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_14              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_15              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X24;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_16              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_17              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X25;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_18              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_19              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_20              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_21              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X26;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_22              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_23              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X27;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_24              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_25              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_26              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_27              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X28;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_28              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_29              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X29;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_30              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_31              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_32              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_33              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X2A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_34              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_35              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X2B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_36              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_37              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_38              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_39              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X2C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_40              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_41              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X2D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_42              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_43              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_44              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_45              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X2E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_46              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_47              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X2F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_48              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_49              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_50              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_51              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X30;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_52              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_53              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X31;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_54              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_55              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_56              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_57              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X32;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_58              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_59              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X33;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_60              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_61              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_62              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_63              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X34;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_64              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_65              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X35;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_66              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_67              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_68              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_69              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X36;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_70              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_71              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X37;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_72              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_73              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_74              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_75              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X38;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_76              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_77              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X39;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_78              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_79              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_80              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_81              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X3A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_82              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_83              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X3B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_84              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_85              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_86              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_87              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X3C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_88              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_89              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X3D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_90              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_91              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_hcoeff_92              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_hcoeff_93              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X3E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_hcoeff_94              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_hcoeff_95              : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X3F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_0               : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_1               : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_2               : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_3               : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X40;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_4               : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_5               : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_6               : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_7               : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X41;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_8               : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_9               : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_10              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_11              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X42;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_12              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_13              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_14              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_15              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X43;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_16              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_17              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_18              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_19              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X44;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_20              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_21              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_22              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_23              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X45;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_24              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_25              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_26              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_27              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X46;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_28              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_29              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_30              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_31              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X47;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_32              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_33              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_34              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_35              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X48;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_36              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_37              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_38              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_39              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X49;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_40              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_41              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_42              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_43              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X4A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_44              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_45              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_46              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_47              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X4B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_48              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_49              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_50              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_51              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X4C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_52              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_53              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_54              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_55              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X4D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_56              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_57              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_58              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_59              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X4E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_2d_vcoeff_60              : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_2d_vcoeff_61              : 8   ; /* [15..8 ]  */
        unsigned int    creg_2d_vcoeff_62              : 8   ; /* [23..16]  */
        unsigned int    creg_2d_vcoeff_63              : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_PSC0X4F;

typedef struct
{
    volatile U_ISP_PSC0X00                      ISP_PSC0x00;
    volatile U_ISP_PSC0X01                      ISP_PSC0x01;
    volatile U_ISP_PSC0X02                      ISP_PSC0x02;
    volatile U_ISP_PSC0X03                      ISP_PSC0x03;
    volatile U_ISP_PSC0X04                      ISP_PSC0x04;
    volatile U_ISP_PSC0X05                      ISP_PSC0x05;
    volatile U_ISP_PSC0X06                      ISP_PSC0x06;
    volatile U_ISP_PSC0X07                      ISP_PSC0x07;
    volatile U_ISP_PSC0X08                      ISP_PSC0x08;
    volatile U_ISP_PSC0X09                      ISP_PSC0x09;
    volatile U_ISP_PSC0X0A                      ISP_PSC0x0a;
    volatile U_ISP_PSC0X0B                      ISP_PSC0x0b;
    volatile U_ISP_PSC0X0C                      ISP_PSC0x0c;
    volatile U_ISP_PSC0X0D                      ISP_PSC0x0d;
    volatile U_ISP_PSC0X0E                      ISP_PSC0x0e;
    volatile U_ISP_PSC0X0F                      ISP_PSC0x0f;
    volatile U_ISP_PSC0X10                      ISP_PSC0x10;
    volatile U_ISP_PSC0X11                      ISP_PSC0x11;
    volatile U_ISP_PSC0X12                      ISP_PSC0x12;
    volatile U_ISP_PSC0X13                      ISP_PSC0x13;
    volatile U_ISP_PSC0X14                      ISP_PSC0x14;
    volatile U_ISP_PSC0X15                      ISP_PSC0x15;
    volatile U_ISP_PSC0X16                      ISP_PSC0x16;
    volatile U_ISP_PSC0X17                      ISP_PSC0x17;
    volatile U_ISP_PSC0X18                      ISP_PSC0x18;
    volatile U_ISP_PSC0X19                      ISP_PSC0x19;
    volatile U_ISP_PSC0X1A                      ISP_PSC0x1a;
    volatile U_ISP_PSC0X1B                      ISP_PSC0x1b;
    volatile U_ISP_PSC0X1C                      ISP_PSC0x1c;
    volatile U_ISP_PSC0X1D                      ISP_PSC0x1d;
    volatile U_ISP_PSC0X1E                      ISP_PSC0x1e;
    volatile U_ISP_PSC0X1F                      ISP_PSC0x1f;
    volatile U_ISP_PSC0X20                      ISP_PSC0x20;
    volatile U_ISP_PSC0X21                      ISP_PSC0x21;
    volatile U_ISP_PSC0X22                      ISP_PSC0x22;
    volatile U_ISP_PSC0X23                      ISP_PSC0x23;
    volatile U_ISP_PSC0X24                      ISP_PSC0x24;
    volatile U_ISP_PSC0X25                      ISP_PSC0x25;
    volatile U_ISP_PSC0X26                      ISP_PSC0x26;
    volatile U_ISP_PSC0X27                      ISP_PSC0x27;
    volatile U_ISP_PSC0X28                      ISP_PSC0x28;
    volatile U_ISP_PSC0X29                      ISP_PSC0x29;
    volatile U_ISP_PSC0X2A                      ISP_PSC0x2a;
    volatile U_ISP_PSC0X2B                      ISP_PSC0x2b;
    volatile U_ISP_PSC0X2C                      ISP_PSC0x2c;
    volatile U_ISP_PSC0X2D                      ISP_PSC0x2d;
    volatile U_ISP_PSC0X2E                      ISP_PSC0x2e;
    volatile U_ISP_PSC0X2F                      ISP_PSC0x2f;
    volatile U_ISP_PSC0X30                      ISP_PSC0x30;
    volatile U_ISP_PSC0X31                      ISP_PSC0x31;
    volatile U_ISP_PSC0X32                      ISP_PSC0x32;
    volatile U_ISP_PSC0X33                      ISP_PSC0x33;
    volatile U_ISP_PSC0X34                      ISP_PSC0x34;
    volatile U_ISP_PSC0X35                      ISP_PSC0x35;
    volatile U_ISP_PSC0X36                      ISP_PSC0x36;
    volatile U_ISP_PSC0X37                      ISP_PSC0x37;
    volatile U_ISP_PSC0X38                      ISP_PSC0x38;
    volatile U_ISP_PSC0X39                      ISP_PSC0x39;
    volatile U_ISP_PSC0X3A                      ISP_PSC0x3a;
    volatile U_ISP_PSC0X3B                      ISP_PSC0x3b;
    volatile U_ISP_PSC0X3C                      ISP_PSC0x3c;
    volatile U_ISP_PSC0X3D                      ISP_PSC0x3d;
    volatile U_ISP_PSC0X3E                      ISP_PSC0x3e;
    volatile U_ISP_PSC0X3F                      ISP_PSC0x3f;
    volatile U_ISP_PSC0X40                      ISP_PSC0x40;
    volatile U_ISP_PSC0X41                      ISP_PSC0x41;
    volatile U_ISP_PSC0X42                      ISP_PSC0x42;
    volatile U_ISP_PSC0X43                      ISP_PSC0x43;
    volatile U_ISP_PSC0X44                      ISP_PSC0x44;
    volatile U_ISP_PSC0X45                      ISP_PSC0x45;
    volatile U_ISP_PSC0X46                      ISP_PSC0x46;
    volatile U_ISP_PSC0X47                      ISP_PSC0x47;
    volatile U_ISP_PSC0X48                      ISP_PSC0x48;
    volatile U_ISP_PSC0X49                      ISP_PSC0x49;
    volatile U_ISP_PSC0X4A                      ISP_PSC0x4a;
    volatile U_ISP_PSC0X4B                      ISP_PSC0x4b;
    volatile U_ISP_PSC0X4C                      ISP_PSC0x4c;
    volatile U_ISP_PSC0X4D                      ISP_PSC0x4d;
    volatile U_ISP_PSC0X4E                      ISP_PSC0x4e;
    volatile U_ISP_PSC0X4F                      ISP_PSC0x4f;
} S_ISP_PSC_REGS_TYPE;



#endif 

