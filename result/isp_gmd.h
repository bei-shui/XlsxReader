//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_gmd.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_GMD_H__
#define __ISP_GMD_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_gamma_en               : 1   ; /* [0 ]      */
        unsigned int    reg_gmd_threshold_scale_en     : 1   ; /* [1 ]      */
        unsigned int    reg_gmd_mv_mean_en             : 1   ; /* [2 ]      */
        unsigned int    reg_gmf_cfa_enable             : 1   ; /* [3 ]      */
        unsigned int    reg_gmf_cfa_weight_correct_enable : 1   ; /* [4 ]      */
        unsigned int    reg_gmd_ref_frame_work         : 1   ; /* [5 ]      */
        unsigned int    reg_gmd_nlm_enable             : 1   ; /* [6 ]      */
        unsigned int    reserved0                      : 25  ; /* [31..7 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_black_level_offset     : 16  ; /* [15..0 ]  */
        unsigned int    reg_gmd_digital_gain_multiplier : 8   ; /* [23..16]  */
        unsigned int    reg_gmd_digital_gain_shift     : 5   ; /* [28..24]  */
        unsigned int    reserved0                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_weight_num_2x2_0    : 4   ; /* [3 ..0 ]  */
        unsigned int    reg_gmd_mv_weight_num_2x2_1    : 4   ; /* [7 ..4 ]  */
        unsigned int    reg_gmd_mv_weight_num_2x2_2    : 4   ; /* [11..8 ]  */
        unsigned int    reg_gmd_mv_weight_num_2x2_3    : 4   ; /* [15..12]  */
        unsigned int    reg_gmd_mv_weight_num_4x4_0    : 4   ; /* [19..16]  */
        unsigned int    reg_gmd_mv_weight_num_4x4_1    : 4   ; /* [23..20]  */
        unsigned int    reg_gmd_mv_weight_num_4x4_2    : 4   ; /* [27..24]  */
        unsigned int    reg_gmd_mv_weight_num_4x4_3    : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_weight_num_8x8_0    : 4   ; /* [3 ..0 ]  */
        unsigned int    reg_gmd_mv_weight_num_8x8_1    : 4   ; /* [7 ..4 ]  */
        unsigned int    reg_gmd_mv_weight_num_8x8_2    : 4   ; /* [11..8 ]  */
        unsigned int    reg_gmd_mv_weight_num_8x8_3    : 4   ; /* [15..12]  */
        unsigned int    reg_gmd_mv_nlm_mv2s_weight     : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_threshold_2x2_0     : 16  ; /* [15..0 ]  */
        unsigned int    reg_gmd_mv_threshold_2x2_1     : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_threshold_2x2_2     : 16  ; /* [15..0 ]  */
        unsigned int    reg_gmd_mv_threshold_2x2_3     : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_threshold_4x4_0     : 16  ; /* [15..0 ]  */
        unsigned int    reg_gmd_mv_threshold_4x4_1     : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_threshold_4x4_2     : 16  ; /* [15..0 ]  */
        unsigned int    reg_gmd_mv_threshold_4x4_3     : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_threshold_8x8_0     : 16  ; /* [15..0 ]  */
        unsigned int    reg_gmd_mv_threshold_8x8_1     : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_threshold_8x8_2     : 16  ; /* [15..0 ]  */
        unsigned int    reg_gmd_mv_threshold_8x8_3     : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_4x4_weight_table_0  : 6   ; /* [5 ..0 ]  */
        unsigned int    reg_gmd_mv_4x4_weight_table_1  : 6   ; /* [11..6 ]  */
        unsigned int    reg_gmd_mv_4x4_weight_table_2  : 6   ; /* [17..12]  */
        unsigned int    reg_gmd_mv_4x4_weight_table_3  : 6   ; /* [23..18]  */
        unsigned int    reg_gmd_mv_4x4_shift           : 5   ; /* [28..24]  */
        unsigned int    reserved0                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_8x8_weight_table_0  : 6   ; /* [5 ..0 ]  */
        unsigned int    reg_gmd_mv_8x8_weight_table_1  : 6   ; /* [11..6 ]  */
        unsigned int    reg_gmd_mv_8x8_weight_table_2  : 6   ; /* [17..12]  */
        unsigned int    reg_gmd_mv_8x8_weight_table_3  : 6   ; /* [23..18]  */
        unsigned int    reg_gmd_mv_8x8_shift           : 5   ; /* [28..24]  */
        unsigned int    reserved0                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X0B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_mean_strength       : 8   ; /* [7 ..0 ]  */
        unsigned int    reg_gmd_mv_clip_low            : 10  ; /* [17..8 ]  */
        unsigned int    reg_gmd_mv_clip_high           : 10  ; /* [27..18]  */
        unsigned int    reserved0                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X0C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_nlm_diff_weight        : 7   ; /* [6 ..0 ]  */
        unsigned int    reg_gmd_nlm_luma_max_strength_location : 14  ; /* [13..0 ]  */
        unsigned int    reserved0                      : 2   ; /* [15..14]  */
        unsigned int    reg_gmd_mv_alpha_up_limit      : 8   ; /* [23..16]  */
        unsigned int    reg_gmd_mv_alpha_up_limitvalue : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X0D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_aplha_down_limit    : 8   ; /* [7 ..0 ]  */
        unsigned int    reg_gmd_mv_aplha_down_limitvalue : 8   ; /* [15..8 ]  */
        unsigned int    reg_gmd_mvs2_alpha_0           : 8   ; /* [23..16]  */
        unsigned int    reg_gmd_mvs2_alpha_1           : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X0E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_mv_th                  : 8   ; /* [7 ..0 ]  */
        unsigned int    reg_gmd_mv_horexpand           : 6   ; /* [13..8 ]  */
        unsigned int    reg_gmd_mv_clip_div_factor     : 18  ; /* [31..14]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X0F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_nlm_weight_th          : 10  ; /* [9 ..0 ]  */
        unsigned int    reg_gmd_nlm_weight_th_ref      : 10  ; /* [19..10]  */
        unsigned int    reg_gmd_nlm_lut_index_shift    : 4   ; /* [23..20]  */
        unsigned int    reg_gmd_nlm_ref_weight         : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_nlm_max_change         : 14  ; /* [13..0 ]  */
        unsigned int    reg_gmd_gmf_max_change         : 14  ; /* [27..14]  */
        unsigned int    reserved0                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X11;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_gmf_nlm_up             : 8   ; /* [7 ..0 ]  */
        unsigned int    reg_gmd_gmf_nlm_down           : 8   ; /* [15..8 ]  */
        unsigned int    reg_gmd_gmf_div_factor         : 10  ; /* [25..16]  */
        unsigned int    reserved0                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X12;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_nlm_luma_strength_1    : 10  ; /* [9 ..0 ]  */
        unsigned int    reg_gmd_nlm_luma_strength_2    : 8   ; /* [17..10]  */
        unsigned int    reserved0                      : 14  ; /* [31..18]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X13;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_gmd_nlm_index_scale_red    : 9   ; /* [8 ..0 ]  */
        unsigned int    reg_gmd_nlm_index_scale_blue   : 9   ; /* [17..9 ]  */
        unsigned int    reg_gmd_nlm_index_scale_green  : 9   ; /* [26..18]  */
        unsigned int    reg_gmd_nlm_bayer_pattern      : 2   ; /* [28..27]  */
        unsigned int    reserved0                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X14;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fpga_sum_cfa                   : 16  ; /* [15..0 ]  */
        unsigned int    fpga_sum_mv                    : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMD0X15;

typedef struct
{
    volatile U_ISP_GMD0X00                      ISP_GMD0x00;
    volatile U_ISP_GMD0X01                      ISP_GMD0x01;
    volatile U_ISP_GMD0X02                      ISP_GMD0x02;
    volatile U_ISP_GMD0X03                      ISP_GMD0x03;
    volatile U_ISP_GMD0X04                      ISP_GMD0x04;
    volatile U_ISP_GMD0X05                      ISP_GMD0x05;
    volatile U_ISP_GMD0X06                      ISP_GMD0x06;
    volatile U_ISP_GMD0X07                      ISP_GMD0x07;
    volatile U_ISP_GMD0X08                      ISP_GMD0x08;
    volatile U_ISP_GMD0X09                      ISP_GMD0x09;
    volatile U_ISP_GMD0X0A                      ISP_GMD0x0a;
    volatile U_ISP_GMD0X0B                      ISP_GMD0x0b;
    volatile U_ISP_GMD0X0C                      ISP_GMD0x0c;
    volatile U_ISP_GMD0X0D                      ISP_GMD0x0d;
    volatile U_ISP_GMD0X0E                      ISP_GMD0x0e;
    volatile U_ISP_GMD0X0F                      ISP_GMD0x0f;
    volatile U_ISP_GMD0X10                      ISP_GMD0x10;
    volatile U_ISP_GMD0X11                      ISP_GMD0x11;
    volatile U_ISP_GMD0X12                      ISP_GMD0x12;
    volatile U_ISP_GMD0X13                      ISP_GMD0x13;
    volatile U_ISP_GMD0X14                      ISP_GMD0x14;
    volatile U_ISP_GMD0X15                      ISP_GMD0x15;
} S_ISP_GMD_REGS_TYPE;



#endif 

