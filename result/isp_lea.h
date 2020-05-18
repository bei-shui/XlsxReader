//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_lea.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_LEA_H__
#define __ISP_LEA_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_enable      : 1   ; /* [0 ]      */
        unsigned int    reg_lea_expand_enable          : 1   ; /* [1 ]      */
        unsigned int    reg_lea_horexp_enable          : 1   ; /* [2 ]      */
        unsigned int    reg_expand_range               : 4   ; /* [6 ..3 ]  */
        unsigned int    reserved0                      : 1   ; /* [7 ]      */
        unsigned int    reg_corrosion_range            : 4   ; /* [11..8 ]  */
        unsigned int    reserved1                      : 4   ; /* [15..12]  */
        unsigned int    reg_bayer_pattern              : 2   ; /* [17..16]  */
        unsigned int    reserved2                      : 14  ; /* [31..18]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_luma_sum_shift : 5   ; /* [4 ..0 ]  */
        unsigned int    reserved0                      : 11  ; /* [15..5 ]  */
        unsigned int    reg_local_exposure_luma_weight_red : 5   ; /* [20..16]  */
        unsigned int    reserved1                      : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_luma_weight_green : 5   ; /* [4 ..0 ]  */
        unsigned int    reserved0                      : 11  ; /* [15..5 ]  */
        unsigned int    reg_local_exposure_luma_weight_blue : 5   ; /* [20..16]  */
        unsigned int    reserved1                      : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_radius      : 3   ; /* [2 ..0 ]  */
        unsigned int    reg_lea_cor_th                 : 9   ; /* [11..3 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    reg_local_exposure_pfpmode     : 1   ; /* [16]      */
        unsigned int    reg_lea_horexp_range           : 6   ; /* [22..17]  */
        unsigned int    reserved1                      : 1   ; /* [23]      */
        unsigned int    reg_lea_horexp_range_limit     : 6   ; /* [29..24]  */
        unsigned int    reserved2                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_a_red_0_7_4_ : 4   ; /* [3 ..0 ]  */
        unsigned int    reg_local_exposure_lbuf_a_red_1_9_5_ : 5   ; /* [8 ..4 ]  */
        unsigned int    reg_local_exposure_lbuf_a_red_2_11_5_ : 7   ; /* [15..9 ]  */
        unsigned int    reg_local_exposure_lbuf_a_red_3_12_5_ : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_a_red_4_13_5_ : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    reg_local_exposure_lbuf_a_red_5_14_5_ : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_a_red_6_15_6_ : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    reg_local_exposure_lbuf_a_red_7_15_6_ : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_b_red_0_7_4_ : 4   ; /* [3 ..0 ]  */
        unsigned int    reg_local_exposure_lbuf_b_red_1_9_4_ : 6   ; /* [9 ..4 ]  */
        unsigned int    reg_local_exposure_lbuf_b_red_2_9_4_ : 6   ; /* [15..10]  */
        unsigned int    reg_local_exposure_lbuf_b_red_3_9_4_ : 6   ; /* [21..16]  */
        unsigned int    reg_local_exposure_lbuf_b_red_4_9_4_ : 6   ; /* [27..22]  */
        unsigned int    reserved0                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_b_red_5_9_3_ : 7   ; /* [6 ..0 ]  */
        unsigned int    reg_local_exposure_lbuf_b_red_6_9_1_ : 9   ; /* [15..7 ]  */
        unsigned int    reg_local_exposure_lbuf_c_red_0_9_4_ : 5   ; /* [20..16]  */
        unsigned int    reg_local_exposure_lbuf_c_red_1_11_5_ : 7   ; /* [27..21]  */
        unsigned int    reserved0                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_c_red_2_12_5_ : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    reg_local_exposure_lbuf_c_red_3_13_5_ : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_c_red_4_14_5_ : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_local_exposure_lbuf_c_red_5_15_6_ : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_c_red_6_16_6_ : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    reg_local_exposure_lbuf_a_green_0_7_4_ : 4   ; /* [19..16]  */
        unsigned int    reg_local_exposure_lbuf_a_green_1_9_5_ : 5   ; /* [24..20]  */
        unsigned int    reg_local_exposure_lbuf_a_green_2_11_5_ : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X0B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_a_green_3_12_5_ : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    reg_local_exposure_lbuf_a_green_4_13_5_ : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X0C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_a_green_5_14_5_ : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_local_exposure_lbuf_a_green_6_15_6_ : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X0D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_a_green_7_15_6_ : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    reg_local_exposure_lbuf_b_green_0_7_4_ : 4   ; /* [19..16]  */
        unsigned int    reg_local_exposure_lbuf_b_green_1_9_4_ : 6   ; /* [25..20]  */
        unsigned int    reg_local_exposure_lbuf_b_green_2_9_4_ : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X0E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_b_green_3_9_4_ : 6   ; /* [5 ..0 ]  */
        unsigned int    reg_local_exposure_lbuf_b_green_4_9_4_ : 6   ; /* [11..6 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    reg_local_exposure_lbuf_b_green_5_9_3_ : 7   ; /* [22..16]  */
        unsigned int    reg_local_exposure_lbuf_b_green_6_9_1_ : 9   ; /* [31..23]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X0F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_c_green_0_9_4_ : 5   ; /* [4 ..0 ]  */
        unsigned int    reg_local_exposure_lbuf_c_green_1_11_5_ : 7   ; /* [11..5 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    reg_local_exposure_lbuf_c_green_2_12_5_ : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_c_green_3_13_5_ : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    reg_local_exposure_lbuf_c_green_4_14_5_ : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X11;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_c_green_5_15_6_ : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_local_exposure_lbuf_c_green_6_16_6_ : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X12;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_a_blue_0_7_4_ : 4   ; /* [3 ..0 ]  */
        unsigned int    reg_local_exposure_lbuf_a_blue_1_9_5_ : 5   ; /* [8 ..4 ]  */
        unsigned int    reg_local_exposure_lbuf_a_blue_2_11_5_ : 7   ; /* [15..9 ]  */
        unsigned int    reg_local_exposure_lbuf_a_blue_3_12_5_ : 8   ; /* [23..16]  */
        unsigned int    reserved0                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X13;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_a_blue_4_13_5_ : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    reg_local_exposure_lbuf_a_blue_5_14_5_ : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X14;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_a_blue_6_15_6_ : 9   ; /* [8 ..0 ]  */
        unsigned int    reserved0                      : 7   ; /* [15..9 ]  */
        unsigned int    reg_local_exposure_lbuf_a_blue_7_15_6_ : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X15;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_b_blue_0_7_4_ : 4   ; /* [3 ..0 ]  */
        unsigned int    reg_local_exposure_lbuf_b_blue_1_9_4_ : 6   ; /* [9 ..4 ]  */
        unsigned int    reg_local_exposure_lbuf_b_blue_2_9_4_ : 6   ; /* [15..10]  */
        unsigned int    reg_local_exposure_lbuf_b_blue_3_9_4_ : 6   ; /* [21..16]  */
        unsigned int    reg_local_exposure_lbuf_b_blue_4_9_4_ : 6   ; /* [27..22]  */
        unsigned int    reserved0                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X16;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_b_blue_5_9_3_ : 7   ; /* [6 ..0 ]  */
        unsigned int    reg_local_exposure_lbuf_b_blue_6_9_1_ : 9   ; /* [15..7 ]  */
        unsigned int    reg_local_exposure_lbuf_c_blue_0_9_4_ : 5   ; /* [20..16]  */
        unsigned int    reg_local_exposure_lbuf_c_blue_1_11_5_ : 7   ; /* [27..21]  */
        unsigned int    reserved0                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X17;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_c_blue_2_12_5_ : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    reg_local_exposure_lbuf_c_blue_3_13_5_ : 9   ; /* [24..16]  */
        unsigned int    reserved1                      : 7   ; /* [31..25]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X18;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_c_blue_4_14_5_ : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_local_exposure_lbuf_c_blue_5_15_6_ : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X19;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_local_exposure_lbuf_c_blue_6_16_6_ : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 21  ; /* [31..11]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X1A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    idsp_lea_reg_offset            : 16  ; /* [15..0 ]  */
        unsigned int    idsp_lea_reg_luma_offset       : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X1B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    idsp_lea_reg_blk_offset_r      : 15  ; /* [14..0 ]  */
        unsigned int    reserved0                      : 1   ; /* [15]      */
        unsigned int    idsp_lea_reg_blk_offset_g      : 15  ; /* [30..16]  */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X1C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    idsp_lea_reg_blk_offset_b      : 15  ; /* [14..0 ]  */
        unsigned int    reserved0                      : 17  ; /* [31..15]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X1D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    idsp_lea_debug                 : 16  ; /* [15..0 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X1E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    lea_sum                        : 16  ; /* [15..0 ]  */
        unsigned int    sum_uv                         : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_LEA0X1F;

typedef struct
{
    volatile U_ISP_LEA0X00                      ISP_LEA0x00;
    volatile U_ISP_LEA0X01                      ISP_LEA0x01;
    volatile U_ISP_LEA0X02                      ISP_LEA0x02;
    volatile U_ISP_LEA0X03                      ISP_LEA0x03;
    volatile U_ISP_LEA0X04                      ISP_LEA0x04;
    volatile U_ISP_LEA0X05                      ISP_LEA0x05;
    volatile U_ISP_LEA0X06                      ISP_LEA0x06;
    volatile U_ISP_LEA0X07                      ISP_LEA0x07;
    volatile U_ISP_LEA0X08                      ISP_LEA0x08;
    volatile U_ISP_LEA0X09                      ISP_LEA0x09;
    volatile U_ISP_LEA0X0A                      ISP_LEA0x0a;
    volatile U_ISP_LEA0X0B                      ISP_LEA0x0b;
    volatile U_ISP_LEA0X0C                      ISP_LEA0x0c;
    volatile U_ISP_LEA0X0D                      ISP_LEA0x0d;
    volatile U_ISP_LEA0X0E                      ISP_LEA0x0e;
    volatile U_ISP_LEA0X0F                      ISP_LEA0x0f;
    volatile U_ISP_LEA0X10                      ISP_LEA0x10;
    volatile U_ISP_LEA0X11                      ISP_LEA0x11;
    volatile U_ISP_LEA0X12                      ISP_LEA0x12;
    volatile U_ISP_LEA0X13                      ISP_LEA0x13;
    volatile U_ISP_LEA0X14                      ISP_LEA0x14;
    volatile U_ISP_LEA0X15                      ISP_LEA0x15;
    volatile U_ISP_LEA0X16                      ISP_LEA0x16;
    volatile U_ISP_LEA0X17                      ISP_LEA0x17;
    volatile U_ISP_LEA0X18                      ISP_LEA0x18;
    volatile U_ISP_LEA0X19                      ISP_LEA0x19;
    volatile U_ISP_LEA0X1A                      ISP_LEA0x1a;
    volatile U_ISP_LEA0X1B                      ISP_LEA0x1b;
    volatile U_ISP_LEA0X1C                      ISP_LEA0x1c;
    volatile U_ISP_LEA0X1D                      ISP_LEA0x1d;
    volatile U_ISP_LEA0X1E                      ISP_LEA0x1e;
    volatile U_ISP_LEA0X1F                      ISP_LEA0x1f;
} S_ISP_LEA_REGS_TYPE;



#endif 

