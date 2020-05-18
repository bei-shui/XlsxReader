//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_lsh.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_LSH_H__
#define __ISP_LSH_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_enable                : 1   ; /* [0 ]      */
        unsigned int    cnfg_reg_act_enable            : 1   ; /* [1 ]      */
        unsigned int    cnfg_reg_aaa_enable            : 1   ; /* [2 ]      */
        unsigned int    cnfg_reg_fir1_enable           : 2   ; /* [4 ..3 ]  */
        unsigned int    cnfg_reg_fir2_enable           : 1   ; /* [5 ]      */
        unsigned int    cnfg_reg_coring_ctrl           : 2   ; /* [7 ..6 ]  */
        unsigned int    cnfg_reg_add_in_low_pass       : 1   ; /* [8 ]      */
        unsigned int    _cnfg_reg_yuv                  : 2   ; /* [10..9 ]  */
        unsigned int    _cnfg_reg_blend_edge_enable    : 3   ; /* [13..11]  */
        unsigned int    cnfg_reg_fir1_s_enable         : 1   ; /* [14]      */
        unsigned int    cnfg_reg_fir1_w_enable         : 1   ; /* [15]      */
        unsigned int    cnfg_reg_fir3_enable           : 1   ; /* [16]      */
        unsigned int    cnfg_reg_edge_disp_enable      : 1   ; /* [17]      */
        unsigned int    cnfg_reg_edge_dir_sel          : 4   ; /* [21..18]  */
        unsigned int    cnfg_reg_edge_dir_shift        : 3   ; /* [24..22]  */
        unsigned int    cnfg_reg_edge_dir_info         : 1   ; /* [25]      */
        unsigned int    cnfg_reg_mv_enable             : 1   ; /* [26]      */
        unsigned int    reserved0                      : 1   ; /* [27]      */
        unsigned int    cnfg_reg_ram_gt                : 1   ; /* [28]      */
        unsigned int    reserved1                      : 2   ; /* [30..29]  */
        unsigned int    cnfg_reg_cfgclk_clsd           : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_grad_th0              : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_fir3_clip_low         : 13  ; /* [20..8 ]  */
        unsigned int    reserved0                      : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_grad_th1              : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_fir3_clip_high        : 13  ; /* [20..8 ]  */
        unsigned int    reserved0                      : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_grad_slope            : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 22  ; /* [31..10]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_edge_shft             : 2   ; /* [1 ..0 ]  */
        unsigned int    reserved0                      : 30  ; /* [31..2 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_smooth_shft           : 2   ; /* [1 ..0 ]  */
        unsigned int    reserved0                      : 30  ; /* [31..2 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_edge_th               : 11  ; /* [10..0 ]  */
        unsigned int    cnfg_reg_edge_mul              : 8   ; /* [18..11]  */
        unsigned int    cnfg_reg_wide_weight           : 4   ; /* [22..19]  */
        unsigned int    cnfg_reg_narrow_weight         : 4   ; /* [26..23]  */
        unsigned int    reserved0                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_max_change_down       : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_max_change_up         : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_abs                   : 1   ; /* [16]      */
        unsigned int    cnfg_reg_max_change_sel        : 1   ; /* [17]      */
        unsigned int    reserved0                      : 14  ; /* [31..18]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_clip_low              : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [14..8 ]  */
        unsigned int    cnfg_reg_clip_high             : 1   ; /* [15]      */
        unsigned int    cnfg_reg_max_change_down_for_fir1w : 8   ; /* [23..16]  */
        unsigned int    cnfg_reg_max_change_up_for_fir1w : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_fir1_clip_low         : 14  ; /* [13..0 ]  */
        unsigned int    reserved0                      : 2   ; /* [15..14]  */
        unsigned int    cnfg_reg_fir1_clip_high        : 14  ; /* [29..16]  */
        unsigned int    reserved1                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_fir2_clip_low         : 13  ; /* [12..0 ]  */
        unsigned int    cnfg_reg_fir2_clip_high        : 13  ; /* [25..13]  */
        unsigned int    reserved0                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blend_edge_th0        : 11  ; /* [10..0 ]  */
        unsigned int    cnfg_reg_blend_edge_th1        : 11  ; /* [21..11]  */
        unsigned int    reserved0                      : 10  ; /* [31..22]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X0B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blend_edge_thresh_mul : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [14..8 ]  */
        unsigned int    cnfg_reg_blend_iso_mul         : 1   ; /* [15]      */
        unsigned int    reserved1                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X0C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blend_edge_thresh_inv_man : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_blend_dir_inv_man     : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_blend_iso_inv_man     : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X0D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blend_edge_thresh_inv_shift : 5   ; /* [4 ..0 ]  */
        unsigned int    cnfg_reg_blend_dir_inv_shift   : 5   ; /* [9 ..5 ]  */
        unsigned int    cnfg_reg_blend_iso_inv_shift   : 5   ; /* [14..10]  */
        unsigned int    reserved0                      : 17  ; /* [31..15]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X0E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blend_thresh_dir0     : 11  ; /* [10..0 ]  */
        unsigned int    cnfg_reg_blend_thresh_dir1     : 11  ; /* [21..11]  */
        unsigned int    reserved0                      : 10  ; /* [31..22]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X0F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blend_thresh_iso0     : 11  ; /* [10..0 ]  */
        unsigned int    cnfg_reg_blend_thresh_iso1     : 11  ; /* [21..11]  */
        unsigned int    reserved0                      : 10  ; /* [31..22]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_edge_blend_iso_alpha_lvl_ctrl_area : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_edge_blend_dir_alpha_lvl_ctrl_area : 3   ; /* [5 ..3 ]  */
        unsigned int    cnfg_reg_fir1_out_lvl_ctrl_area : 3   ; /* [8 ..6 ]  */
        unsigned int    cnfg_reg_fir2_out_lvl_ctrl_area : 3   ; /* [11..9 ]  */
        unsigned int    cnfg_reg_alpha_mul_lvl_ctrl_area : 3   ; /* [14..12]  */
        unsigned int    cnfg_reg_alpha_min_lvl_ctrl_area : 3   ; /* [17..15]  */
        unsigned int    cnfg_reg_alpha_max_lvl_ctrl_area : 3   ; /* [20..18]  */
        unsigned int    cnfg_reg_coring1_mul_lvl_ctrl_area : 3   ; /* [23..21]  */
        unsigned int    cnfg_reg_coring1_min_lvl_ctrl_area : 3   ; /* [26..24]  */
        unsigned int    cnfg_reg_coring1_max_lvl_ctrl_area : 3   ; /* [29..27]  */
        unsigned int    reserved0                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X11;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_index_mul_lvl_ctrl_area : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_sec_input_enable      : 1   ; /* [3 ]      */
        unsigned int    cnfg_reg_sec_input_signed      : 1   ; /* [4 ]      */
        unsigned int    cnfg_reg_output_signed         : 1   ; /* [5 ]      */
        unsigned int    cnfg_reg_sec_input_shift       : 3   ; /* [8 ..6 ]  */
        unsigned int    cnfg_reg_output_shift          : 3   ; /* [11..9 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_max_change_down_for_mv : 8   ; /* [23..16]  */
        unsigned int    cnfg_reg_max_change_up_for_mv  : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X12;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_edge_blend_iso_alpha_lvl_ctrl_low : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [14..8 ]  */
        unsigned int    cnfg_reg_edge_blend_iso_alpha_lvl_ctrl_high : 1   ; /* [15]      */
        unsigned int    cnfg_reg_max_change_down_for_fir1s : 8   ; /* [23..16]  */
        unsigned int    cnfg_reg_max_change_up_for_fir1s : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X13;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_edge_blend_iso_alpha_lvl_ctrl_low0 : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_edge_blend_iso_alpha_lvl_ctrl_high0 : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X14;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_edge_blend_iso_alpha_lvl_ctrl_delta_low : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_edge_blend_iso_alpha_lvl_ctrl_delta_high : 3   ; /* [5 ..3 ]  */
        unsigned int    reserved0                      : 26  ; /* [31..6 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X15;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_edge_blend_iso_alpha_lvl_ctrl_mul_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_edge_blend_iso_alpha_lvl_ctrl_mul_high : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_edge_blend_iso_alpha_lvl_ctrl_mul_base : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X16;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_edge_blend_dir_alpha_lvl_ctrl_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_edge_blend_dir_alpha_lvl_ctrl_high : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X17;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_edge_blend_dir_alpha_lvl_ctrl_low0 : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_edge_blend_dir_alpha_lvl_ctrl_high0 : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X18;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_edge_blend_dir_alpha_lvl_ctrl_delta_low : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_edge_blend_dir_alpha_lvl_ctrl_delta_high : 3   ; /* [5 ..3 ]  */
        unsigned int    reserved0                      : 26  ; /* [31..6 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X19;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_edge_blend_dir_alpha_lvl_ctrl_mul_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_edge_blend_dir_alpha_lvl_ctrl_mul_high : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_edge_blend_dir_alpha_lvl_ctrl_mul_base : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X1A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_fir1_out_lvl_ctrl_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_fir1_out_lvl_ctrl_high : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X1B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_fir1_out_lvl_ctrl_low0 : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_fir1_out_lvl_ctrl_high0 : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X1C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_fir1_out_lvl_ctrl_delta_low : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_fir1_out_lvl_ctrl_delta_high : 3   ; /* [5 ..3 ]  */
        unsigned int    cnfg_reg_lvl_ctrl1_clip_low    : 13  ; /* [18..6 ]  */
        unsigned int    cnfg_reg_lvl_ctrl1_clip_high   : 13  ; /* [31..19]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X1D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_fir1_out_lvl_ctrl_mul_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_fir1_out_lvl_ctrl_mul_high : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_fir1_out_lvl_ctrl_mul_base : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X1E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_fir2_out_lvl_ctrl_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_fir2_out_lvl_ctrl_high : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X1F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_fir2_out_lvl_ctrl_low0 : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_fir2_out_lvl_ctrl_high0 : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X20;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_fir2_out_lvl_ctrl_delta_low : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_fir2_out_lvl_ctrl_delta_high : 3   ; /* [5 ..3 ]  */
        unsigned int    cnfg_reg_lvl_ctrl2_clip_low    : 13  ; /* [18..6 ]  */
        unsigned int    cnfg_reg_lvl_ctrl2_clip_high   : 13  ; /* [31..19]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X21;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_fir2_out_lvl_ctrl_mul_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_fir2_out_lvl_ctrl_mul_high : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_fir2_out_lvl_ctrl_mul_base : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X22;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_alpha_mul_lvl_ctrl_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_alpha_mul_lvl_ctrl_high : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X23;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_alpha_mul_lvl_ctrl_low0 : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_alpha_mul_lvl_ctrl_high0 : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X24;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_alpha_mul_lvl_ctrl_delta_low : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_alpha_mul_lvl_ctrl_delta_high : 3   ; /* [5 ..3 ]  */
        unsigned int    reserved0                      : 26  ; /* [31..6 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X25;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_alpha_mul_lvl_ctrl_mul_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_alpha_mul_lvl_ctrl_mul_high : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_alpha_mul_lvl_ctrl_mul_base : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X26;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_alpha_min_lvl_ctrl_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_alpha_min_lvl_ctrl_high : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X27;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_alpha_min_lvl_ctrl_low0 : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_alpha_min_lvl_ctrl_high0 : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X28;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_alpha_min_lvl_ctrl_delta_low : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_alpha_min_lvl_ctrl_delta_high : 3   ; /* [5 ..3 ]  */
        unsigned int    reserved0                      : 26  ; /* [31..6 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X29;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_alpha_min_lvl_ctrl_mul_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_alpha_min_lvl_ctrl_mul_high : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_alpha_min_lvl_ctrl_mul_base : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X2A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_alpha_max_lvl_ctrl_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_alpha_max_lvl_ctrl_high : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X2B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_alpha_max_lvl_ctrl_low0 : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_alpha_max_lvl_ctrl_high0 : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X2C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_alpha_max_lvl_ctrl_delta_low : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_alpha_max_lvl_ctrl_delta_high : 3   ; /* [5 ..3 ]  */
        unsigned int    reserved0                      : 26  ; /* [31..6 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X2D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_alpha_max_lvl_ctrl_mul_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_alpha_max_lvl_ctrl_mul_high : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_alpha_max_lvl_ctrl_mul_base : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X2E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_mul_lvl_ctrl_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_coring1_mul_lvl_ctrl_high : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X2F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_mul_lvl_ctrl_low0 : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_coring1_mul_lvl_ctrl_high : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X30;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_mul_lvl_ctrl_delta_low : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_coring1_mul_lvl_ctrl_delta_high : 3   ; /* [5 ..3 ]  */
        unsigned int    reserved0                      : 26  ; /* [31..6 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X31;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_mul_lvl_ctrl_mul_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_coring1_mul_lvl_ctrl_mul_high : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_coring1_mul_lvl_ctrl_mul_base : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X32;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_min_lvl_ctrl_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_coring1_min_lvl_ctrl_high : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X33;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_min_lvl_ctrl_low0 : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_coring1_min_lvl_ctrl_high0 : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X34;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_min_lvl_ctrl_delta_low : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_coring1_min_lvl_ctrl_delta_high : 3   ; /* [5 ..3 ]  */
        unsigned int    reserved0                      : 26  ; /* [31..6 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X35;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_min_lvl_ctrl_mul_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_coring1_min_lvl_ctrl_mul_high : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_coring1_min_lvl_ctrl_mul_base : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X36;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_max_lvl_ctrl_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_coring1_max_lvl_ctrl_high : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X37;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_max_lvl_ctrl_low0 : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_coring1_max_lvl_ctrl_high0 : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X38;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_max_lvl_ctrl_delta_low : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_coring1_max_lvl_ctrl_delta_high : 3   ; /* [5 ..3 ]  */
        unsigned int    reserved0                      : 26  ; /* [31..6 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X39;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_max_lvl_ctrl_mul_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_coring1_max_lvl_ctrl_mul_high : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_coring1_max_lvl_ctrl_mul_base : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X3A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_index_mul_lvl_ctrl_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_coring1_index_mul_lvl_ctrl_high : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X3B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_index_mul_lvl_ctrl_low0 : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_coring1_index_mul_lvl_ctrl_high0 : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X3C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_index_mul_lvl_ctrl_delta_low : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_coring1_index_mul_lvl_ctrl_delta_high : 3   ; /* [5 ..3 ]  */
        unsigned int    reserved0                      : 26  ; /* [31..6 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X3D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_coring1_index_mul_lvl_ctrl_mul_low : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_coring1_index_mul_lvl_ctrl_mul_high : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_coring1_index_mul_lvl_ctrl_mul_base : 8   ; /* [23..16]  */
        unsigned int    cnfg_reg_coring1_strength      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X3E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_gradient_th1          : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_gradient_th2          : 9   ; /* [16..8 ]  */
        unsigned int    cnfg_reg_gradient_fir3_th      : 8   ; /* [24..17]  */
        unsigned int    reserved0                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LSH0X3F;

typedef struct
{
    volatile U_ISP_LSH0X00                      ISP_LSH0x00;
    volatile U_ISP_LSH0X01                      ISP_LSH0x01;
    volatile U_ISP_LSH0X02                      ISP_LSH0x02;
    volatile U_ISP_LSH0X03                      ISP_LSH0x03;
    volatile U_ISP_LSH0X04                      ISP_LSH0x04;
    volatile U_ISP_LSH0X05                      ISP_LSH0x05;
    volatile U_ISP_LSH0X06                      ISP_LSH0x06;
    volatile U_ISP_LSH0X07                      ISP_LSH0x07;
    volatile U_ISP_LSH0X08                      ISP_LSH0x08;
    volatile U_ISP_LSH0X09                      ISP_LSH0x09;
    volatile U_ISP_LSH0X0A                      ISP_LSH0x0A;
    volatile U_ISP_LSH0X0B                      ISP_LSH0x0B;
    volatile U_ISP_LSH0X0C                      ISP_LSH0x0C;
    volatile U_ISP_LSH0X0D                      ISP_LSH0x0D;
    volatile U_ISP_LSH0X0E                      ISP_LSH0x0E;
    volatile U_ISP_LSH0X0F                      ISP_LSH0x0F;
    volatile U_ISP_LSH0X10                      ISP_LSH0x10;
    volatile U_ISP_LSH0X11                      ISP_LSH0x11;
    volatile U_ISP_LSH0X12                      ISP_LSH0x12;
    volatile U_ISP_LSH0X13                      ISP_LSH0x13;
    volatile U_ISP_LSH0X14                      ISP_LSH0x14;
    volatile U_ISP_LSH0X15                      ISP_LSH0x15;
    volatile U_ISP_LSH0X16                      ISP_LSH0x16;
    volatile U_ISP_LSH0X17                      ISP_LSH0x17;
    volatile U_ISP_LSH0X18                      ISP_LSH0x18;
    volatile U_ISP_LSH0X19                      ISP_LSH0x19;
    volatile U_ISP_LSH0X1A                      ISP_LSH0x1A;
    volatile U_ISP_LSH0X1B                      ISP_LSH0x1B;
    volatile U_ISP_LSH0X1C                      ISP_LSH0x1C;
    volatile U_ISP_LSH0X1D                      ISP_LSH0x1D;
    volatile U_ISP_LSH0X1E                      ISP_LSH0x1E;
    volatile U_ISP_LSH0X1F                      ISP_LSH0x1F;
    volatile U_ISP_LSH0X20                      ISP_LSH0x20;
    volatile U_ISP_LSH0X21                      ISP_LSH0x21;
    volatile U_ISP_LSH0X22                      ISP_LSH0x22;
    volatile U_ISP_LSH0X23                      ISP_LSH0x23;
    volatile U_ISP_LSH0X24                      ISP_LSH0x24;
    volatile U_ISP_LSH0X25                      ISP_LSH0x25;
    volatile U_ISP_LSH0X26                      ISP_LSH0x26;
    volatile U_ISP_LSH0X27                      ISP_LSH0x27;
    volatile U_ISP_LSH0X28                      ISP_LSH0x28;
    volatile U_ISP_LSH0X29                      ISP_LSH0x29;
    volatile U_ISP_LSH0X2A                      ISP_LSH0x2A;
    volatile U_ISP_LSH0X2B                      ISP_LSH0x2B;
    volatile U_ISP_LSH0X2C                      ISP_LSH0x2C;
    volatile U_ISP_LSH0X2D                      ISP_LSH0x2D;
    volatile U_ISP_LSH0X2E                      ISP_LSH0x2E;
    volatile U_ISP_LSH0X2F                      ISP_LSH0x2F;
    volatile U_ISP_LSH0X30                      ISP_LSH0x30;
    volatile U_ISP_LSH0X31                      ISP_LSH0x31;
    volatile U_ISP_LSH0X32                      ISP_LSH0x32;
    volatile U_ISP_LSH0X33                      ISP_LSH0x33;
    volatile U_ISP_LSH0X34                      ISP_LSH0x34;
    volatile U_ISP_LSH0X35                      ISP_LSH0x35;
    volatile U_ISP_LSH0X36                      ISP_LSH0x36;
    volatile U_ISP_LSH0X37                      ISP_LSH0x37;
    volatile U_ISP_LSH0X38                      ISP_LSH0x38;
    volatile U_ISP_LSH0X39                      ISP_LSH0x39;
    volatile U_ISP_LSH0X3A                      ISP_LSH0x3A;
    volatile U_ISP_LSH0X3B                      ISP_LSH0x3B;
    volatile U_ISP_LSH0X3C                      ISP_LSH0x3C;
    volatile U_ISP_LSH0X3D                      ISP_LSH0x3D;
    volatile U_ISP_LSH0X3E                      ISP_LSH0x3E;
    volatile U_ISP_LSH0X3F                      ISP_LSH0x3F;
} S_ISP_LSH_REGS_TYPE;



#endif 

