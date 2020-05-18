//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_lce.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_LCE_H__
#define __ISP_LCE_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_lce_enable            : 2   ; /* [1 ..0 ]  */
        unsigned int    cnfg_reg_pre_lut_en            : 1   ; /* [2 ]      */
        unsigned int    cnfg_reg_pm_en                 : 1   ; /* [3 ]      */
        unsigned int    cnfg_reg_mv_scan_en            : 1   ; /* [4 ]      */
        unsigned int    cnfg_reg_disp_mv_en            : 1   ; /* [5 ]      */
        unsigned int    cnfg_reg_padding_num           : 8   ; /* [13..6 ]  */
        unsigned int    cnfg_reg_dual_vin_en           : 1   ; /* [14]      */
        unsigned int    cnfg_reg_stream_split_en       : 1   ; /* [15]      */
        unsigned int    cnfg_reg_pre_hist_scan_en      : 1   ; /* [16]      */
        unsigned int    cnfg_reg_pre_hist_scan_frame   : 1   ; /* [17]      */
        unsigned int    cnfg_reg_pre_hist_scan_id      : 4   ; /* [21..18]  */
        unsigned int    cnfg_reg_post_hist_scan_en     : 1   ; /* [22]      */
        unsigned int    cnfg_reg_post_hist_scan_frame  : 1   ; /* [23]      */
        unsigned int    cnfg_reg_post_hist_scan_id     : 4   ; /* [27..24]  */
        unsigned int    cnfg_reg_hist_scan_sft         : 1   ; /* [28]      */
        unsigned int    cnfg_reg_sensor_id             : 1   ; /* [29]      */
        unsigned int    cnfg_reg_stream_split_num      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_res_width             : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_res_height            : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_lce_range             : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_lce_guard             : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_lce_range_th1         : 6   ; /* [21..16]  */
        unsigned int    reserved0                      : 2   ; /* [23..22]  */
        unsigned int    cnfg_reg_lce_range_th2         : 6   ; /* [29..24]  */
        unsigned int    reserved1                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_lce_min_th            : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_lce_max_th            : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_lce_minb_range        : 8   ; /* [23..16]  */
        unsigned int    cnfg_reg_lce_maxb_range        : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_lce_delta_th          : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_reg_lce_contrast          : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_reg_lce_cutlimit          : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_lce_alpha             : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_lce_sud_th            : 5   ; /* [20..16]  */
        unsigned int    reserved0                      : 3   ; /* [23..21]  */
        unsigned int    cnfg_reg_lce_sud_sum_th        : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_lce_delta_disable     : 1   ; /* [0 ]      */
        unsigned int    cnfg_reg_lce_index             : 4   ; /* [4 ..1 ]  */
        unsigned int    cnfg_reg_lce_search_th         : 5   ; /* [9 ..5 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_reg_pm_y_gain             : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 4   ; /* [27..24]  */
        unsigned int    cnfg_reg_pm_y_shift            : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_pm_u_gain             : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [11..8 ]  */
        unsigned int    cnfg_reg_pm_u_shift            : 4   ; /* [15..12]  */
        unsigned int    cnfg_reg_pm_v_gain             : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 4   ; /* [27..24]  */
        unsigned int    cnfg_reg_pm_v_shift            : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_pm_y_offset           : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    cnfg_reg_pm_u_offset           : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_pm_v_offset           : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    cnfg_mv_statis_th              : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_mk_map0_15_0_              : 16  ; /* [15..0 ]  */
        unsigned int    dbg_mk_map0_31_16_             : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X00A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_mk_map1_15_0_              : 16  ; /* [15..0 ]  */
        unsigned int    dbg_mk_map1_31_16_             : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X00B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_mk_map2_15_0_              : 16  ; /* [15..0 ]  */
        unsigned int    dbg_mk_map2_31_16_             : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X00C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_mk_map3_15_0_              : 16  ; /* [15..0 ]  */
        unsigned int    dbg_mk_map3_31_16_             : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X00D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_mk_map4_15_0_              : 16  ; /* [15..0 ]  */
        unsigned int    dbg_mk_map4_31_16_             : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X00E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_mk_map5_15_0_              : 16  ; /* [15..0 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X00F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_mk_lut0                    : 16  ; /* [15..0 ]  */
        unsigned int    dbg_mk_lut1                    : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X010;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_mk_hist0                   : 16  ; /* [15..0 ]  */
        unsigned int    dbg_mk_hist1                   : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X011;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_pm                         : 16  ; /* [15..0 ]  */
        unsigned int    dbg_lce_pipe                   : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X012;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    chk_sum_y                      : 16  ; /* [15..0 ]  */
        unsigned int    chk_sum_uv                     : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LCE0X013;

typedef struct
{
    volatile U_ISP_LCE0X00                      ISP_LCE0x00;
    volatile U_ISP_LCE0X01                      ISP_LCE0x01;
    volatile U_ISP_LCE0X02                      ISP_LCE0x02;
    volatile U_ISP_LCE0X03                      ISP_LCE0x03;
    volatile U_ISP_LCE0X04                      ISP_LCE0x04;
    volatile U_ISP_LCE0X05                      ISP_LCE0x05;
    volatile U_ISP_LCE0X06                      ISP_LCE0x06;
    volatile U_ISP_LCE0X07                      ISP_LCE0x07;
    volatile U_ISP_LCE0X08                      ISP_LCE0x08;
    volatile U_ISP_LCE0X09                      ISP_LCE0x09;
    volatile U_ISP_LCE0X00A                     ISP_LCE0x00a;
    volatile U_ISP_LCE0X00B                     ISP_LCE0x00b;
    volatile U_ISP_LCE0X00C                     ISP_LCE0x00c;
    volatile U_ISP_LCE0X00D                     ISP_LCE0x00d;
    volatile U_ISP_LCE0X00E                     ISP_LCE0x00e;
    volatile U_ISP_LCE0X00F                     ISP_LCE0x00f;
    volatile U_ISP_LCE0X010                     ISP_LCE0x010;
    volatile U_ISP_LCE0X011                     ISP_LCE0x011;
    volatile U_ISP_LCE0X012                     ISP_LCE0x012;
    volatile U_ISP_LCE0X013                     ISP_LCE0x013;
} S_ISP_LCE_REGS_TYPE;



#endif 

