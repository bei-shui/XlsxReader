//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_dms.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_DMS_H__
#define __ISP_DMS_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dms_en                         : 1   ; /* [0 ]      */
        unsigned int    reserved0                      : 3   ; /* [3 ..1 ]  */
        unsigned int    limit_change                   : 1   ; /* [4 ]      */
        unsigned int    reserved1                      : 3   ; /* [7 ..5 ]  */
        unsigned int    mv_en                          : 1   ; /* [8 ]      */
        unsigned int    reserved2                      : 3   ; /* [11..9 ]  */
        unsigned int    max_change_sel                 : 1   ; /* [12]      */
        unsigned int    reserved3                      : 2   ; /* [14..13]  */
        unsigned int    lsh_en                         : 1   ; /* [15]      */
        unsigned int    bayer                          : 2   ; /* [17..16]  */
        unsigned int    reserved4                      : 14  ; /* [31..18]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    rgb_change_coefs               : 5   ; /* [4 ..0 ]  */
        unsigned int    reserved0                      : 15  ; /* [19..5 ]  */
        unsigned int    gradcoef0                      : 3   ; /* [22..20]  */
        unsigned int    reserved1                      : 1   ; /* [23]      */
        unsigned int    gradcoef1                      : 3   ; /* [26..24]  */
        unsigned int    reserved2                      : 1   ; /* [27]      */
        unsigned int    gradcoef2                      : 3   ; /* [30..28]  */
        unsigned int    reserved3                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_m2_coef8                   : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    fir_m2_coef9                   : 15  ; /* [30..16]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    max_change_down                : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    max_change_up                  : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    max_change_down_m              : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    max_change_up_m                : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cfg_grad_cof                   : 8   ; /* [7 ..0 ]  */
        unsigned int    defalsecolorstrenth            : 8   ; /* [15..8 ]  */
        unsigned int    diffcolorgradcoef_rb           : 11  ; /* [26..16]  */
        unsigned int    reserved0                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    a0_compress                    : 4   ; /* [3 ..0 ]  */
        unsigned int    a1_compress                    : 5   ; /* [8 ..4 ]  */
        unsigned int    reserved0                      : 3   ; /* [11..9 ]  */
        unsigned int    a2_compress                    : 7   ; /* [18..12]  */
        unsigned int    reserved1                      : 1   ; /* [19]      */
        unsigned int    a3_compress                    : 8   ; /* [27..20]  */
        unsigned int    reserved2                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    a4_compress                    : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [11..9 ]  */
        unsigned int    a5_compress                    : 10  ; /* [21..12]  */
        unsigned int    a6_compress                    : 9   ; /* [30..22]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    a7_compress                    : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    diffcolorgradcoef_g2           : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    b0_compress                    : 4   ; /* [3 ..0 ]  */
        unsigned int    b1_compress                    : 6   ; /* [9 ..4 ]  */
        unsigned int    reserved0                      : 2   ; /* [11..10]  */
        unsigned int    b2_compress                    : 6   ; /* [17..12]  */
        unsigned int    reserved1                      : 2   ; /* [19..18]  */
        unsigned int    b3_compress                    : 6   ; /* [25..20]  */
        unsigned int    reserved2                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    b4_compress                    : 6   ; /* [5 ..0 ]  */
        unsigned int    reserved0                      : 2   ; /* [7 ..6 ]  */
        unsigned int    b5_compress                    : 7   ; /* [14..8 ]  */
        unsigned int    reserved1                      : 1   ; /* [15]      */
        unsigned int    b6_compress                    : 9   ; /* [24..16]  */
        unsigned int    reserved2                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0XA;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    c0_compress                    : 5   ; /* [4 ..0 ]  */
        unsigned int    reserved0                      : 1   ; /* [5 ]      */
        unsigned int    c1_compress                    : 7   ; /* [12..6 ]  */
        unsigned int    reserved1                      : 1   ; /* [13]      */
        unsigned int    c2_compress                    : 8   ; /* [21..14]  */
        unsigned int    c3_compress                    : 9   ; /* [30..22]  */
        unsigned int    reserved2                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0XB;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    c4_compress                    : 10  ; /* [9 ..0 ]  */
        unsigned int    c5_compress                    : 10  ; /* [19..10]  */
        unsigned int    c6_compress                    : 11  ; /* [30..20]  */
        unsigned int    reserved0                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0XC;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    diffcolorgradcoef_g0           : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 15  ; /* [25..11]  */
        unsigned int    diffcolorgradcoef_g1           : 1   ; /* [26]      */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0XD;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    shift0                         : 4   ; /* [3 ..0 ]  */
        unsigned int    shift1                         : 4   ; /* [7 ..4 ]  */
        unsigned int    shift2                         : 4   ; /* [11..8 ]  */
        unsigned int    shift_m0                       : 4   ; /* [15..12]  */
        unsigned int    shift_m1                       : 4   ; /* [19..16]  */
        unsigned int    shift_m2                       : 4   ; /* [23..20]  */
        unsigned int    edge_thresh                    : 4   ; /* [27..24]  */
        unsigned int    reserved0                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0XE;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    gradth0                        : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 1   ; /* [9 ]      */
        unsigned int    gradth1                        : 9   ; /* [18..10]  */
        unsigned int    reserved1                      : 13  ; /* [31..19]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0XF;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir0_coef0                     : 10  ; /* [9 ..0 ]  */
        unsigned int    fir0_coef1                     : 10  ; /* [19..10]  */
        unsigned int    fir0_coef2                     : 10  ; /* [29..20]  */
        unsigned int    reserved0                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir0_coef3                     : 10  ; /* [9 ..0 ]  */
        unsigned int    fir0_coef4                     : 11  ; /* [20..10]  */
        unsigned int    fir0_coef5                     : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X11;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir0_coef6                     : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    fir0_coef7                     : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X12;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir0_coef8                     : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    fir0_coef9                     : 15  ; /* [30..16]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X13;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir1_coef0                     : 10  ; /* [9 ..0 ]  */
        unsigned int    fir1_coef1                     : 10  ; /* [19..10]  */
        unsigned int    fir1_coef2                     : 10  ; /* [29..20]  */
        unsigned int    reserved0                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X14;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir1_coef3                     : 10  ; /* [9 ..0 ]  */
        unsigned int    fir1_coef4                     : 11  ; /* [20..10]  */
        unsigned int    fir1_coef5                     : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X15;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir1_coef6                     : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    fir1_coef7                     : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X16;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir1_coef8                     : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    fir1_coef9                     : 15  ; /* [30..16]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X17;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir2_coef0                     : 10  ; /* [9 ..0 ]  */
        unsigned int    fir2_coef1                     : 10  ; /* [19..10]  */
        unsigned int    fir2_coef2                     : 10  ; /* [29..20]  */
        unsigned int    reserved0                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X18;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir2_coef3                     : 10  ; /* [9 ..0 ]  */
        unsigned int    fir2_coef4                     : 11  ; /* [20..10]  */
        unsigned int    fir2_coef5                     : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X19;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir2_coef6                     : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    fir2_coef7                     : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X1A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir2_coef8                     : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    fir2_coef9                     : 15  ; /* [30..16]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X1B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_m0_coef0                   : 10  ; /* [9 ..0 ]  */
        unsigned int    fir_m0_coef1                   : 10  ; /* [19..10]  */
        unsigned int    fir_m0_coef2                   : 10  ; /* [29..20]  */
        unsigned int    reserved0                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X1C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_m0_coef3                   : 10  ; /* [9 ..0 ]  */
        unsigned int    fir_m0_coef4                   : 11  ; /* [20..10]  */
        unsigned int    fir_m0_coef5                   : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X1D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_m0_coef6                   : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    fir_m0_coef7                   : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X1E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_m0_coef8                   : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    fir_m0_coef9                   : 15  ; /* [30..16]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X1F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_m1_coef0                   : 10  ; /* [9 ..0 ]  */
        unsigned int    fir_m1_coef1                   : 10  ; /* [19..10]  */
        unsigned int    fir_m1_coef2                   : 10  ; /* [29..20]  */
        unsigned int    reserved0                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X20;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_m1_coef3                   : 10  ; /* [9 ..0 ]  */
        unsigned int    fir_m1_coef4                   : 11  ; /* [20..10]  */
        unsigned int    fir_m1_coef5                   : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X21;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_m1_coef6                   : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    fir_m1_coef7                   : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X22;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_m1_coef8                   : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    fir_m1_coef9                   : 15  ; /* [30..16]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X23;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_m2_coef0                   : 10  ; /* [9 ..0 ]  */
        unsigned int    fir_m2_coef1                   : 10  ; /* [19..10]  */
        unsigned int    fir_m2_coef2                   : 10  ; /* [29..20]  */
        unsigned int    reserved0                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X24;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_m2_coef3                   : 10  ; /* [9 ..0 ]  */
        unsigned int    fir_m2_coef4                   : 11  ; /* [20..10]  */
        unsigned int    fir_m2_coef5                   : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X25;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fir_m2_coef6                   : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    fir_m2_coef7                   : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DMS0X26;

typedef struct
{
    volatile U_ISP_DMS0X00                      ISP_DMS0x00;
    volatile U_ISP_DMS0X01                      ISP_DMS0x01;
    volatile U_ISP_DMS0X02                      ISP_DMS0x02;
    volatile U_ISP_DMS0X03                      ISP_DMS0x03;
    volatile U_ISP_DMS0X04                      ISP_DMS0x04;
    volatile U_ISP_DMS0X05                      ISP_DMS0x05;
    volatile U_ISP_DMS0X06                      ISP_DMS0x06;
    volatile U_ISP_DMS0X07                      ISP_DMS0x07;
    volatile U_ISP_DMS0X08                      ISP_DMS0x08;
    volatile U_ISP_DMS0X09                      ISP_DMS0x09;
    volatile U_ISP_DMS0XA                       ISP_DMS0xA;
    volatile U_ISP_DMS0XB                       ISP_DMS0xB;
    volatile U_ISP_DMS0XC                       ISP_DMS0xC;
    volatile U_ISP_DMS0XD                       ISP_DMS0xD;
    volatile U_ISP_DMS0XE                       ISP_DMS0xE;
    volatile U_ISP_DMS0XF                       ISP_DMS0xF;
    volatile U_ISP_DMS0X10                      ISP_DMS0x10;
    volatile U_ISP_DMS0X11                      ISP_DMS0x11;
    volatile U_ISP_DMS0X12                      ISP_DMS0x12;
    volatile U_ISP_DMS0X13                      ISP_DMS0x13;
    volatile U_ISP_DMS0X14                      ISP_DMS0x14;
    volatile U_ISP_DMS0X15                      ISP_DMS0x15;
    volatile U_ISP_DMS0X16                      ISP_DMS0x16;
    volatile U_ISP_DMS0X17                      ISP_DMS0x17;
    volatile U_ISP_DMS0X18                      ISP_DMS0x18;
    volatile U_ISP_DMS0X19                      ISP_DMS0x19;
    volatile U_ISP_DMS0X1A                      ISP_DMS0x1A;
    volatile U_ISP_DMS0X1B                      ISP_DMS0x1B;
    volatile U_ISP_DMS0X1C                      ISP_DMS0x1C;
    volatile U_ISP_DMS0X1D                      ISP_DMS0x1D;
    volatile U_ISP_DMS0X1E                      ISP_DMS0x1E;
    volatile U_ISP_DMS0X1F                      ISP_DMS0x1F;
    volatile U_ISP_DMS0X20                      ISP_DMS0x20;
    volatile U_ISP_DMS0X21                      ISP_DMS0x21;
    volatile U_ISP_DMS0X22                      ISP_DMS0x22;
    volatile U_ISP_DMS0X23                      ISP_DMS0x23;
    volatile U_ISP_DMS0X24                      ISP_DMS0x24;
    volatile U_ISP_DMS0X25                      ISP_DMS0x25;
    volatile U_ISP_DMS0X26                      ISP_DMS0x26;
} S_ISP_DMS_REGS_TYPE;



#endif 

