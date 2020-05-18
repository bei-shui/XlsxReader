//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_bpc.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_BPC_H__
#define __ISP_BPC_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved0                      : 1   ; /* [0 ]      */
        unsigned int    cnfg_reg_cfa_bad_pixel_correction_mode : 2   ; /* [2 ..1 ]  */
        unsigned int    cnfg_reg_cfa_leakage_filter_enable : 1   ; /* [3 ]      */
        unsigned int    cnfg_reg_cfa_bad_noise_filter_enable : 1   ; /* [4 ]      */
        unsigned int    cnfg_reg_cfa_bad_pixel_dynamic_detection_enable : 3   ; /* [7 ..5 ]  */
        unsigned int    cnfg_reg_bpc_cor_enable        : 1   ; /* [8 ]      */
        unsigned int    cnfg_reg_bpc_cor_range         : 2   ; /* [10..9 ]  */
        unsigned int    cnfg_reg_bpc_cor_thresh        : 5   ; /* [15..11]  */
        unsigned int    cnfg_reg_cfa_bayer_pattern     : 2   ; /* [17..16]  */
        unsigned int    reserved1                      : 14  ; /* [31..18]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_leakage_filter_thresh : 14  ; /* [13..0 ]  */
        unsigned int    reserved0                      : 2   ; /* [15..14]  */
        unsigned int    cnfg_reg_cfa_leakage_filter_shift : 3   ; /* [18..16]  */
        unsigned int    reserved1                      : 13  ; /* [31..19]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_leakage_filter_alpha_rr : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_cfa_leakage_filter_alpha_rb : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_leakage_filter_alpha_bb : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_cfa_leakage_filter_alpha_br : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_leakage_filter_sturation_level : 14  ; /* [13..0 ]  */
        unsigned int    reserved0                      : 2   ; /* [15..14]  */
        unsigned int    cnfg_reg_cfa_noise_filter_dir_center_weight_red : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_noise_filter_dir_center_weight_green : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_cfa_noise_filter_dir_center_weight_blue : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_noise_filter_dir_thresh_k0_red : 14  ; /* [13..0 ]  */
        unsigned int    reserved0                      : 2   ; /* [15..14]  */
        unsigned int    cnfg_reg_cfa_noise_filter_dir_thresh_k1_red : 6   ; /* [21..16]  */
        unsigned int    reserved1                      : 10  ; /* [31..22]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_noise_filter_dir_thresh_k0_green : 14  ; /* [13..0 ]  */
        unsigned int    reserved0                      : 2   ; /* [15..14]  */
        unsigned int    cnfg_reg_cfa_noise_filter_dir_thresh_k1_green : 6   ; /* [21..16]  */
        unsigned int    reserved1                      : 10  ; /* [31..22]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_noise_filter_dir_thresh_k0_blue : 14  ; /* [13..0 ]  */
        unsigned int    reserved0                      : 2   ; /* [15..14]  */
        unsigned int    cnfg_reg_cfa_noise_filter_dir_thresh_k1_blue : 6   ; /* [21..16]  */
        unsigned int    reserved1                      : 10  ; /* [31..22]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_noise_filter_thresh_close : 14  ; /* [13..0 ]  */
        unsigned int    reserved0                      : 2   ; /* [15..14]  */
        unsigned int    cnfg_reg_cfa_noise_filter_dir_thresh_grad : 14  ; /* [29..16]  */
        unsigned int    reserved1                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_noise_filter_iso_center_weight_red : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_cfa_noise_filter_iso_center_weight_green : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_noise_filter_iso_center_weight_blue : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_cfa_noise_filter_iso_thresh_k0_red : 14  ; /* [29..16]  */
        unsigned int    reserved1                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X0B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_noise_filter_iso_thresh_k1_red : 6   ; /* [5 ..0 ]  */
        unsigned int    reserved0                      : 10  ; /* [15..6 ]  */
        unsigned int    cnfg_reg_cfa_noise_filter_iso_thresh_k0_green : 14  ; /* [29..16]  */
        unsigned int    reserved1                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X0C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_noise_filter_iso_thresh_k1_green : 6   ; /* [5 ..0 ]  */
        unsigned int    reserved0                      : 10  ; /* [15..6 ]  */
        unsigned int    cnfg_reg_cfa_noise_filter_iso_thresh_k0_blue : 14  ; /* [29..16]  */
        unsigned int    reserved1                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X0D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_noise_filter_iso_thresh_k1_blue : 6   ; /* [5 ..0 ]  */
        unsigned int    reserved0                      : 10  ; /* [15..6 ]  */
        unsigned int    cnfg_reg_cfa_lossy_compression_mode : 2   ; /* [17..16]  */
        unsigned int    cnfg_reg_cfa_lossy_compression_mantissa_bits : 2   ; /* [19..18]  */
        unsigned int    cnfg_reg_cfa_lossy_compression_block_size : 1   ; /* [20]      */
        unsigned int    reserved1                      : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X0E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_cfa_bad_pixel_dynamic_dection_shift0 : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_cfa_bad_pixel_dynamic_dection_shift1 : 3   ; /* [5 ..3 ]  */
        unsigned int    cnfg_reg_cfa_bad_pixel_dynamic_dection_shift2 : 3   ; /* [8 ..6 ]  */
        unsigned int    cnfg_reg_cfa_bad_pixel_dynamic_dection_shift3 : 3   ; /* [11..9 ]  */
        unsigned int    cnfg_reg_cfa_bad_pixel_dynamic_dection_shift4 : 3   ; /* [14..12]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    cnfg_reg_cfa_bad_pixel_dynamic_dection_shift5 : 3   ; /* [18..16]  */
        unsigned int    reserved1                      : 13  ; /* [31..19]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X0F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    debug_status                   : 16  ; /* [15..0 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fpga_sum                       : 16  ; /* [15..0 ]  */
        unsigned int    fpga_sum                       : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BPC0X11;

typedef struct
{
    volatile U_ISP_BPC0X00                      ISP_BPC0x00;
    volatile U_ISP_BPC0X01                      ISP_BPC0x01;
    volatile U_ISP_BPC0X02                      ISP_BPC0x02;
    volatile U_ISP_BPC0X03                      ISP_BPC0x03;
    volatile U_ISP_BPC0X04                      ISP_BPC0x04;
    volatile U_ISP_BPC0X05                      ISP_BPC0x05;
    volatile U_ISP_BPC0X06                      ISP_BPC0x06;
    volatile U_ISP_BPC0X07                      ISP_BPC0x07;
    volatile U_ISP_BPC0X08                      ISP_BPC0x08;
    volatile U_ISP_BPC0X09                      ISP_BPC0x09;
    volatile U_ISP_BPC0X0A                      ISP_BPC0x0a;
    volatile U_ISP_BPC0X0B                      ISP_BPC0x0b;
    volatile U_ISP_BPC0X0C                      ISP_BPC0x0c;
    volatile U_ISP_BPC0X0D                      ISP_BPC0x0d;
    volatile U_ISP_BPC0X0E                      ISP_BPC0x0e;
    volatile U_ISP_BPC0X0F                      ISP_BPC0x0f;
    volatile U_ISP_BPC0X10                      ISP_BPC0x10;
    volatile U_ISP_BPC0X11                      ISP_BPC0x11;
} S_ISP_BPC_REGS_TYPE;



#endif 

