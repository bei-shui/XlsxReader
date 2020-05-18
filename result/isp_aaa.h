//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_aaa.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_AAA_H__
#define __ISP_AAA_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_ae_en             : 1   ; /* [0 ]      */
        unsigned int    cnfg_reg_aaa_ae_tile_num_cols  : 4   ; /* [4 ..1 ]  */
        unsigned int    cnfg_reg_aaa_ae_tile_num_rows  : 3   ; /* [7 ..5 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_aaa_ae_tile_col_start : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_ae_tile_row_start : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_aaa_ae_tile_width     : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_ae_tile_height    : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    cnfg_reg_aaa_ae_tile_y_shift   : 5   ; /* [20..16]  */
        unsigned int    reserved1                      : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_en             : 1   ; /* [0 ]      */
        unsigned int    cnfg_reg_aaa_af_tile_num_cols  : 3   ; /* [3 ..1 ]  */
        unsigned int    cnfg_reg_aaa_af_tile_num_rows  : 3   ; /* [6 ..4 ]  */
        unsigned int    reserved0                      : 9   ; /* [15..7 ]  */
        unsigned int    cnfg_reg_aaa_af_tile_col_start : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_tile_row_start : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_aaa_af_tile_width     : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_tile_height    : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_reg_aaa_af_tile_active_width : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_tile_avtive_height : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_mode : 1   ; /* [16]      */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_stg1_en : 1   ; /* [17]      */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_stg2_en : 1   ; /* [18]      */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_stg3_en : 1   ; /* [19]      */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_mode : 1   ; /* [20]      */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_stg1_en : 1   ; /* [21]      */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_stg2_en : 1   ; /* [22]      */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_stg3_en : 1   ; /* [23]      */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_gain0 : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_gain1 : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_gain2 : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_gain3 : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_gain4 : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_gain5 : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_gain6 : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_shift0 : 4   ; /* [19..16]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_shift1 : 4   ; /* [23..20]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_shift2 : 4   ; /* [27..24]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_shift3 : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_bias_offset : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil1_thresh : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X0B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_ver_fil1_thresh : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    cnfg_reg_aaa_af_y_tile_fv1_hor_shift : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_aaa_af_y_tile_fv1_hor_weight : 8   ; /* [28..21]  */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X0C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_tile_fv1_ver_shift : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_aaa_af_y_tile_fv1_ver_weight : 8   ; /* [12..5 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_gain0 : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X0D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_gain1 : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_gain2 : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X0E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_gain3 : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_gain4 : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X0F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_gain5 : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_gain6 : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_shift0 : 4   ; /* [3 ..0 ]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_shift1 : 4   ; /* [7 ..4 ]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_shift2 : 4   ; /* [11..8 ]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_shift3 : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_bias_offset : 12  ; /* [27..16]  */
        unsigned int    reserved0                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X11;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_hor_fil2_thresh : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    cnfg_reg_aaa_af_y_ver_fil2_thresh : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X12;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_tile_fv2_hor_shift : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_aaa_af_y_tile_fv2_hor_weight : 8   ; /* [12..5 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    cnfg_reg_aaa_af_y_tile_fv2_ver_shift : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_aaa_af_y_tile_fv2_ver_weight : 8   ; /* [28..21]  */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X13;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_y_tile_y_shift : 5   ; /* [4 ..0 ]  */
        unsigned int    reserved0                      : 11  ; /* [15..5 ]  */
        unsigned int    cnfg_reg_aaa_histogram_mode    : 2   ; /* [17..16]  */
        unsigned int    reserved1                      : 14  ; /* [31..18]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X14;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask0 : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask1 : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X15;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask2 : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask3 : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X16;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask4 : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask5 : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X17;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask6 : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask7 : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X18;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    aaa_status_no_used             : 4   ; /* [3 ..0 ]  */
        unsigned int    ae_status                      : 5   ; /* [8 ..4 ]  */
        unsigned int    af_status                      : 6   ; /* [14..9 ]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    aaa_ctrl_status_1              : 13  ; /* [28..16]  */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X19;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    aaa_ctrl_status_2              : 5   ; /* [4 ..0 ]  */
        unsigned int    reserved0                      : 11  ; /* [15..5 ]  */
        unsigned int    aaa_hist_status_b              : 4   ; /* [19..16]  */
        unsigned int    aaa_hist_status_g              : 4   ; /* [23..20]  */
        unsigned int    aaa_hist_status_r              : 4   ; /* [27..24]  */
        unsigned int    aaa_hist_status_y              : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X1A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    aaa_dbg_vld                    : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 20  ; /* [31..12]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAA0X1B;

typedef struct
{
    volatile U_ISP_AAA0X00                      ISP_AAA0x00;
    volatile U_ISP_AAA0X01                      ISP_AAA0x01;
    volatile U_ISP_AAA0X02                      ISP_AAA0x02;
    volatile U_ISP_AAA0X03                      ISP_AAA0x03;
    volatile U_ISP_AAA0X04                      ISP_AAA0x04;
    volatile U_ISP_AAA0X05                      ISP_AAA0x05;
    volatile U_ISP_AAA0X06                      ISP_AAA0x06;
    volatile U_ISP_AAA0X07                      ISP_AAA0x07;
    volatile U_ISP_AAA0X08                      ISP_AAA0x08;
    volatile U_ISP_AAA0X09                      ISP_AAA0x09;
    volatile U_ISP_AAA0X0A                      ISP_AAA0x0a;
    volatile U_ISP_AAA0X0B                      ISP_AAA0x0b;
    volatile U_ISP_AAA0X0C                      ISP_AAA0x0c;
    volatile U_ISP_AAA0X0D                      ISP_AAA0x0d;
    volatile U_ISP_AAA0X0E                      ISP_AAA0x0e;
    volatile U_ISP_AAA0X0F                      ISP_AAA0x0f;
    volatile U_ISP_AAA0X10                      ISP_AAA0x10;
    volatile U_ISP_AAA0X11                      ISP_AAA0x11;
    volatile U_ISP_AAA0X12                      ISP_AAA0x12;
    volatile U_ISP_AAA0X13                      ISP_AAA0x13;
    volatile U_ISP_AAA0X14                      ISP_AAA0x14;
    volatile U_ISP_AAA0X15                      ISP_AAA0x15;
    volatile U_ISP_AAA0X16                      ISP_AAA0x16;
    volatile U_ISP_AAA0X17                      ISP_AAA0x17;
    volatile U_ISP_AAA0X18                      ISP_AAA0x18;
    volatile U_ISP_AAA0X19                      ISP_AAA0x19;
    volatile U_ISP_AAA0X1A                      ISP_AAA0x1a;
    volatile U_ISP_AAA0X1B                      ISP_AAA0x1b;
} S_ISP_AAA_REGS_TYPE;



#endif 

