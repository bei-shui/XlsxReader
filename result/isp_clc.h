//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_clc.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_CLC_H__
#define __ISP_CLC_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_color_cor_enable           : 1   ; /* [0 ]      */
        unsigned int    reg_color_cor_out_lookup_bypass : 1   ; /* [1 ]      */
        unsigned int    reg_color_cor_no_interpolation : 1   ; /* [2 ]      */
        unsigned int    reg_color_cor_uv_centered      : 1   ; /* [3 ]      */
        unsigned int    reg_color_cor_yuv_mode         : 1   ; /* [4 ]      */
        unsigned int    reg_color_cor_yuv422           : 1   ; /* [5 ]      */
        unsigned int    reserved0                      : 26  ; /* [31..6 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CLC0X0;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_color_cor_premul_red       : 17  ; /* [16..0 ]  */
        unsigned int    reserved0                      : 15  ; /* [31..17]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CLC0X1;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_color_cor_premul_green     : 17  ; /* [16..0 ]  */
        unsigned int    reserved0                      : 15  ; /* [31..17]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CLC0X2;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_color_cor_premul_blue      : 17  ; /* [16..0 ]  */
        unsigned int    reserved0                      : 15  ; /* [31..17]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CLC0X3;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    sum_out                        : 16  ; /* [15..0 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CLC0X6;

typedef struct
{
    volatile U_ISP_CLC0X0                       ISP_CLC0x0;
    volatile U_ISP_CLC0X1                       ISP_CLC0x1;
    volatile U_ISP_CLC0X2                       ISP_CLC0x2;
    volatile U_ISP_CLC0X3                       ISP_CLC0x3;
    volatile unsigned int                     reserved0[2];
    volatile U_ISP_CLC0X6                       ISP_CLC0x6;
} S_ISP_CLC_REGS_TYPE;



#endif 

