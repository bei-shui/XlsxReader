//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_bfn.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_BFN_H__
#define __ISP_BFN_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_black_level_options        : 3   ; /* [2 ..0 ]  */
        unsigned int    reserved0                      : 13  ; /* [15..3 ]  */
        unsigned int    reg_black_level_global_offset_ee : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BFN0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_black_level_global_offset_eo : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    reg_black_level_global_offset_oe : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BFN0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_black_level_global_offset_oo : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    reg_black_level_active_vrt_start : 13  ; /* [28..16]  */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BFN0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_black_level_active_vrt_end : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    reg_black_level_active_hrz_start : 13  ; /* [28..16]  */
        unsigned int    reg_black_level_active_hrz_end : 13  ; /* [12..0 ]  */
        unsigned int    reserved1                      : 3   ; /* [15..13]  */
        unsigned int    reg_black_level_active_col_count : 12  ; /* [27..16]  */
        unsigned int    reserved2                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BFN0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_black_level_top_dummy_rows : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    reg_black_level_left_dummy_cols : 12  ; /* [27..16]  */
        unsigned int    reg_black_level_right_dummy_cols : 12  ; /* [11..0 ]  */
        unsigned int    reserved1                      : 4   ; /* [15..12]  */
        unsigned int    reg_black_level_ld_reg_0_hit   : 5   ; /* [20..16]  */
        unsigned int    reserved2                      : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BFN0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_black_level_ld_reg_1_hit   : 16  ; /* [15..0 ]  */
        unsigned int    reg_black_level_ld_reg_2_hit   : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BFN0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_debug0_hit                 : 16  ; /* [15..0 ]  */
        unsigned int    reg_debug1_hit                 : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BFN0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_debug2_hit                 : 16  ; /* [15..0 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BFN0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_sum_hit                    : 16  ; /* [15..0 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BFN0X0A;

typedef struct
{
    volatile U_ISP_BFN0X00                      ISP_BFN0x00;
    volatile U_ISP_BFN0X01                      ISP_BFN0x01;
    volatile U_ISP_BFN0X02                      ISP_BFN0x02;
    volatile U_ISP_BFN0X03                      ISP_BFN0x03;
    volatile unsigned int                     reserved0[1];
    volatile U_ISP_BFN0X05                      ISP_BFN0x05;
    volatile unsigned int                     reserved1[1];
    volatile U_ISP_BFN0X07                      ISP_BFN0x07;
    volatile U_ISP_BFN0X08                      ISP_BFN0x08;
    volatile U_ISP_BFN0X09                      ISP_BFN0x09;
    volatile U_ISP_BFN0X0A                      ISP_BFN0x0a;
} S_ISP_BFN_REGS_TYPE;



#endif 

