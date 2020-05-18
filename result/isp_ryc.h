//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_ryc.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_RYC_H__
#define __ISP_RYC_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_m11                   : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    cnfg_reg_m12                   : 13  ; /* [28..16]  */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_RYC0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_m13                   : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    cnfg_reg_m21                   : 13  ; /* [28..16]  */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_RYC0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_m22                   : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    cnfg_reg_m23                   : 13  ; /* [28..16]  */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_RYC0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_m31                   : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    cnfg_reg_m32                   : 13  ; /* [28..16]  */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_RYC0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_m33                   : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    cnfg_reg_offsety               : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_RYC0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_offsetu               : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    cnfg_reg_offsetv               : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_RYC0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_wu_r                  : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    cnfg_reg_wu_g                  : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_RYC0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_wu_b                  : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    cnfg_reg_wv_r                  : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_RYC0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_wv_g                  : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    cnfg_reg_wv_b                  : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_RYC0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    chroma_prescale_en             : 1   ; /* [0 ]      */
        unsigned int    make_legal_en                  : 1   ; /* [1 ]      */
        unsigned int    yuv_mode                       : 1   ; /* [2 ]      */
        unsigned int    reserved0                      : 29  ; /* [31..3 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_RYC0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    in_valid                       : 2   ; /* [1 ..0 ]  */
        unsigned int    in_valid_d1                    : 2   ; /* [3 ..2 ]  */
        unsigned int    in_valid_d2                    : 2   ; /* [5 ..4 ]  */
        unsigned int    in_valid_d3                    : 2   ; /* [7 ..6 ]  */
        unsigned int    in_valid_d4                    : 2   ; /* [9 ..8 ]  */
        unsigned int    in_valid_d5                    : 2   ; /* [11..10]  */
        unsigned int    in_valid_d6                    : 2   ; /* [13..12]  */
        unsigned int    in_valid_d7                    : 2   ; /* [15..14]  */
        unsigned int    in_valid_d8                    : 2   ; /* [17..16]  */
        unsigned int    in_valid_d9                    : 2   ; /* [19..18]  */
        unsigned int    in_valid_d10                   : 2   ; /* [21..20]  */
        unsigned int    in_valid_d11                   : 2   ; /* [23..22]  */
        unsigned int    in_valid_d12                   : 2   ; /* [25..24]  */
        unsigned int    in_valid_d13                   : 2   ; /* [27..26]  */
        unsigned int    reserved0                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_RYC0X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_sum_y                      : 16  ; /* [15..0 ]  */
        unsigned int    dbg_sum_uv                     : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_RYC0X0B;

typedef struct
{
    volatile U_ISP_RYC0X00                      ISP_RYC0x00;
    volatile U_ISP_RYC0X01                      ISP_RYC0x01;
    volatile U_ISP_RYC0X02                      ISP_RYC0x02;
    volatile U_ISP_RYC0X03                      ISP_RYC0x03;
    volatile U_ISP_RYC0X04                      ISP_RYC0x04;
    volatile U_ISP_RYC0X05                      ISP_RYC0x05;
    volatile U_ISP_RYC0X06                      ISP_RYC0x06;
    volatile U_ISP_RYC0X07                      ISP_RYC0x07;
    volatile U_ISP_RYC0X08                      ISP_RYC0x08;
    volatile U_ISP_RYC0X09                      ISP_RYC0x09;
    volatile U_ISP_RYC0X0A                      ISP_RYC0x0a;
    volatile U_ISP_RYC0X0B                      ISP_RYC0x0b;
} S_ISP_RYC_REGS_TYPE;



#endif 

