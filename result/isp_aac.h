//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_aac.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_AAC_H__
#define __ISP_AAC_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_awb_en            : 1   ; /* [0 ]      */
        unsigned int    cnfg_reg_aaa_awb_tile_num_cols : 6   ; /* [6 ..1 ]  */
        unsigned int    cnfg_reg_aaa_awb_tile_num_rows : 6   ; /* [12..7 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    cnfg_reg_aaa_awb_tile_col_start : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_awb_tile_row_start : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_aaa_awb_tile_width    : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_awb_tile_height   : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    cnfg_reg_aaa_awb_tile_active_width : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_awb_tile_avtive_height : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    cnfg_reg_aaa_awb_tile_min_thresh : 14  ; /* [29..16]  */
        unsigned int    reserved1                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_awb_tile_max_thresh : 14  ; /* [13..0 ]  */
        unsigned int    reserved0                      : 2   ; /* [15..14]  */
        unsigned int    cnfg_reg_aaa_awb_tile_rgb_shift : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_aaa_awb_tile_min_max_shift : 5   ; /* [25..21]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_ae_tile_col_start : 12  ; /* [27..16]  */
        unsigned int    cnfg_reg_aaa_ae_tile_num_rows  : 4   ; /* [9 ..6 ]  */
        unsigned int    cnfg_reg_aaa_ae_tile_num_cols  : 5   ; /* [5 ..1 ]  */
        unsigned int    cnfg_reg_aaa_ae_en             : 1   ; /* [0 ]      */
        unsigned int    reserved0                      : 31  ; /* [31..1 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X05;

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
} U_ISP_AAC0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_ae_tile_height    : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    cnfg_reg_aaa_ae_tile_lin_y_shift : 5   ; /* [20..16]  */
        unsigned int    cnfg_reg_aaa_ae_tile_min_max_shift : 5   ; /* [25..21]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_tile_col_start : 12  ; /* [27..16]  */
        unsigned int    cnfg_reg_aaa_af_tile_num_rows  : 4   ; /* [8 ..5 ]  */
        unsigned int    cnfg_reg_aaa_af_tile_num_cols  : 4   ; /* [4 ..1 ]  */
        unsigned int    cnfg_reg_aaa_af_en             : 1   ; /* [0 ]      */
        unsigned int    reserved0                      : 31  ; /* [31..1 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X08;

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
} U_ISP_AAC0X09;

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
} U_ISP_AAC0X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_tile_avtive_height : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_mode : 1   ; /* [16]      */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_stg1_en : 1   ; /* [17]      */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_stg2_en : 1   ; /* [18]      */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_stg3_en : 1   ; /* [19]      */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_mode : 1   ; /* [20]      */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_stg1_en : 1   ; /* [21]      */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_stg2_en : 1   ; /* [22]      */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_stg3_en : 1   ; /* [23]      */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X0B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_gain0 : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_gain1 : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X0C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_gain2 : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_gain3 : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X0D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_gain4 : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_gain5 : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X0E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_shift3 : 4   ; /* [31..28]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_shift2 : 4   ; /* [27..24]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_shift1 : 4   ; /* [23..20]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_shift0 : 4   ; /* [19..16]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_gain6 : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 22  ; /* [31..10]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X0F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_bias_offset : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil1_thresh : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_gain0 : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_gain1 : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X11;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_gain2 : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_gain3 : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X12;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_gain4 : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_gain5 : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X13;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_shift3 : 4   ; /* [31..28]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_shift2 : 4   ; /* [27..24]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_shift1 : 4   ; /* [23..20]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_shift0 : 4   ; /* [19..16]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_gain6 : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 22  ; /* [31..10]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X14;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_bias_offset : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_aaa_af_cfa_hor_fil2_thresh : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X15;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_ae_af_pseudo_y_sum_shift : 2   ; /* [29..28]  */
        unsigned int    cnfg_reg_aaa_ae_af_pseudo_y_pix_weight3 : 2   ; /* [27..26]  */
        unsigned int    cnfg_reg_aaa_ae_af_pseudo_y_pix_weight2 : 2   ; /* [25..24]  */
        unsigned int    cnfg_reg_aaa_ae_af_pseudo_y_pix_weight1 : 2   ; /* [23..22]  */
        unsigned int    cnfg_reg_aaa_ae_af_pseudo_y_pix_weight0 : 2   ; /* [21..20]  */
        unsigned int    cnfg_reg_aaa_ae_pseudo_y_mode  : 2   ; /* [19..18]  */
        unsigned int    cnfg_reg_aaa_af_pseudo_y_mode  : 2   ; /* [17..16]  */
        unsigned int    cnfg_reg_aaa_af_cfa_y_tile_y_shift : 5   ; /* [14..10]  */
        unsigned int    cnfg_reg_aaa_af_cfa_tile_fv2_hor_shift : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_aaa_af_cfa_tile_fv1_hor_shift : 5   ; /* [4 ..0 ]  */
        unsigned int    reserved0                      : 27  ; /* [31..5 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X16;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_bayer_pattern         : 2   ; /* [1 ..0 ]  */
        unsigned int    reserved0                      : 14  ; /* [15..2 ]  */
        unsigned int    cnfg_reg_aaa_histogram_mode    : 2   ; /* [17..16]  */
        unsigned int    reserved1                      : 14  ; /* [31..18]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X17;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask0 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X18;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask1 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X19;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask2 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X1A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask3 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X1B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_mul_green_odd     : 8   ; /* [31..24]  */
        unsigned int    cnfg_reg_aaa_mul_green_even    : 8   ; /* [23..16]  */
        unsigned int    cnfg_reg_aaa_mul_blue          : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_aaa_mul_red           : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 24  ; /* [31..8 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X1C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_wb_mul_blue       : 8   ; /* [31..24]  */
        unsigned int    cnfg_reg_aaa_wb_mul_red        : 8   ; /* [23..16]  */
        unsigned int    cnfg_reg_aaa_shift_blue        : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_aaa_shift_green_odd   : 4   ; /* [11..8 ]  */
        unsigned int    cnfg_reg_aaa_shift_green_even  : 4   ; /* [7 ..4 ]  */
        unsigned int    cnfg_reg_aaa_shift_red         : 4   ; /* [3 ..0 ]  */
        unsigned int    reserved0                      : 28  ; /* [31..4 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X1D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_wb_shift_blue     : 4   ; /* [31..28]  */
        unsigned int    cnfg_reg_aaa_wb_shift_green_odd : 4   ; /* [27..24]  */
        unsigned int    cnfg_reg_aaa_wb_shift_green_even : 4   ; /* [23..20]  */
        unsigned int    cnfg_reg_aaa_wb_shift_red      : 4   ; /* [19..16]  */
        unsigned int    cnfg_reg_aaa_wb_mul_green_odd  : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_aaa_wb_mul_green_even : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 24  ; /* [31..8 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X1E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_ae_tile_min_thresh : 14  ; /* [29..16]  */
        unsigned int    cnfg_reg_aaa_ae_tile_max_thresh : 14  ; /* [13..0 ]  */
        unsigned int    reserved0                      : 18  ; /* [31..14]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X1F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_wb_hist_en        : 1   ; /* [2 ]      */
        unsigned int    cnfg_reg_aaa_wb_ae_en          : 1   ; /* [1 ]      */
        unsigned int    cnfg_reg_aaa_wb_af_en          : 1   ; /* [0 ]      */
        unsigned int    reserved0                      : 31  ; /* [31..1 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X20;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask4 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X21;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask5 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X22;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask6 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X23;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask7 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X24;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask8 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X25;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask9 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X26;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask10 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X27;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask11 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X28;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask12 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X29;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask13 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X2A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask14 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X2B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_aaa_histogram_ae_tile_mask15 : 24  ; /* [23..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X2C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    af_status                      : 5   ; /* [14..10]  */
        unsigned int    ae_status                      : 5   ; /* [9 ..5 ]  */
        unsigned int    awb_status                     : 5   ; /* [4 ..0 ]  */
        unsigned int    reserved0                      : 12  ; /* [16..5 ]  */
        unsigned int    aaa_ctrl_status_0              : 13  ; /* [29..17]  */
        unsigned int    aaa_ctrl_status_1              : 1   ; /* [16]      */
        unsigned int    reserved1                      : 15  ; /* [31..17]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X2D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    aaa_hist_sttaus_rgb            : 4   ; /* [10..7 ]  */
        unsigned int    aaa_hist_sttaus_y              : 7   ; /* [6 ..0 ]  */
        unsigned int    reserved0                      : 9   ; /* [15..7 ]  */
        unsigned int    aaa_dbg_vld                    : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X2E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_af_cfa_tone_curve_0       : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_1       : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_2       : 8   ; /* [23..16]  */
        unsigned int    cnfg_af_cfa_tone_curve_3       : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X38;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_af_cfa_tone_curve_4       : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_5       : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_6       : 8   ; /* [23..16]  */
        unsigned int    cnfg_af_cfa_tone_curve_7       : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X39;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_af_cfa_tone_curve_8       : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_9       : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_10      : 8   ; /* [23..16]  */
        unsigned int    cnfg_af_cfa_tone_curve_11      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X3A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_af_cfa_tone_curve_12      : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_13      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_14      : 8   ; /* [23..16]  */
        unsigned int    cnfg_af_cfa_tone_curve_15      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X3B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_af_cfa_tone_curve_16      : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_17      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_18      : 8   ; /* [23..16]  */
        unsigned int    cnfg_af_cfa_tone_curve_19      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X3C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_af_cfa_tone_curve_20      : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_21      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_22      : 8   ; /* [23..16]  */
        unsigned int    cnfg_af_cfa_tone_curve_23      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X3D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_af_cfa_tone_curve_24      : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_25      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_26      : 8   ; /* [23..16]  */
        unsigned int    cnfg_af_cfa_tone_curve_27      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X3E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_af_cfa_tone_curve_28      : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_29      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_af_cfa_tone_curve_30      : 8   ; /* [23..16]  */
        unsigned int    cnfg_af_cfa_tone_curve_31      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_AAC0X3F;

typedef struct
{
    volatile U_ISP_AAC0X00                      ISP_AAC0x00;
    volatile U_ISP_AAC0X01                      ISP_AAC0x01;
    volatile U_ISP_AAC0X02                      ISP_AAC0x02;
    volatile U_ISP_AAC0X03                      ISP_AAC0x03;
    volatile U_ISP_AAC0X04                      ISP_AAC0x04;
    volatile U_ISP_AAC0X05                      ISP_AAC0x05;
    volatile U_ISP_AAC0X06                      ISP_AAC0x06;
    volatile U_ISP_AAC0X07                      ISP_AAC0x07;
    volatile U_ISP_AAC0X08                      ISP_AAC0x08;
    volatile U_ISP_AAC0X09                      ISP_AAC0x09;
    volatile U_ISP_AAC0X0A                      ISP_AAC0x0A;
    volatile U_ISP_AAC0X0B                      ISP_AAC0x0B;
    volatile U_ISP_AAC0X0C                      ISP_AAC0x0C;
    volatile U_ISP_AAC0X0D                      ISP_AAC0x0D;
    volatile U_ISP_AAC0X0E                      ISP_AAC0x0E;
    volatile U_ISP_AAC0X0F                      ISP_AAC0x0F;
    volatile U_ISP_AAC0X10                      ISP_AAC0x10;
    volatile U_ISP_AAC0X11                      ISP_AAC0x11;
    volatile U_ISP_AAC0X12                      ISP_AAC0x12;
    volatile U_ISP_AAC0X13                      ISP_AAC0x13;
    volatile U_ISP_AAC0X14                      ISP_AAC0x14;
    volatile U_ISP_AAC0X15                      ISP_AAC0x15;
    volatile U_ISP_AAC0X16                      ISP_AAC0x16;
    volatile U_ISP_AAC0X17                      ISP_AAC0x17;
    volatile U_ISP_AAC0X18                      ISP_AAC0x18;
    volatile U_ISP_AAC0X19                      ISP_AAC0x19;
    volatile U_ISP_AAC0X1A                      ISP_AAC0x1A;
    volatile U_ISP_AAC0X1B                      ISP_AAC0x1B;
    volatile U_ISP_AAC0X1C                      ISP_AAC0x1C;
    volatile U_ISP_AAC0X1D                      ISP_AAC0x1D;
    volatile U_ISP_AAC0X1E                      ISP_AAC0x1E;
    volatile U_ISP_AAC0X1F                      ISP_AAC0x1F;
    volatile U_ISP_AAC0X20                      ISP_AAC0x20;
    volatile U_ISP_AAC0X21                      ISP_AAC0x21;
    volatile U_ISP_AAC0X22                      ISP_AAC0x22;
    volatile U_ISP_AAC0X23                      ISP_AAC0x23;
    volatile U_ISP_AAC0X24                      ISP_AAC0x24;
    volatile U_ISP_AAC0X25                      ISP_AAC0x25;
    volatile U_ISP_AAC0X26                      ISP_AAC0x26;
    volatile U_ISP_AAC0X27                      ISP_AAC0x27;
    volatile U_ISP_AAC0X28                      ISP_AAC0x28;
    volatile U_ISP_AAC0X29                      ISP_AAC0x29;
    volatile U_ISP_AAC0X2A                      ISP_AAC0x2a;
    volatile U_ISP_AAC0X2B                      ISP_AAC0x2b;
    volatile U_ISP_AAC0X2C                      ISP_AAC0x2c;
    volatile U_ISP_AAC0X2D                      ISP_AAC0x2d;
    volatile U_ISP_AAC0X2E                      ISP_AAC0x2e;
    volatile unsigned int                     reserved0[9];
    volatile U_ISP_AAC0X38                      ISP_AAC0x38;
    volatile U_ISP_AAC0X39                      ISP_AAC0x39;
    volatile U_ISP_AAC0X3A                      ISP_AAC0x3a;
    volatile U_ISP_AAC0X3B                      ISP_AAC0x3b;
    volatile U_ISP_AAC0X3C                      ISP_AAC0x3c;
    volatile U_ISP_AAC0X3D                      ISP_AAC0x3d;
    volatile U_ISP_AAC0X3E                      ISP_AAC0x3e;
    volatile U_ISP_AAC0X3F                      ISP_AAC0x3f;
} S_ISP_AAC_REGS_TYPE;



#endif 

