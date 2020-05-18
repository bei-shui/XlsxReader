//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_gmf.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_GMF_H__
#define __ISP_GMF_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_y_enable          : 1   ; /* [0 ]      */
        unsigned int    cnfg_gmf_yuv_uv_enable         : 1   ; /* [1 ]      */
        unsigned int    reserved0                      : 30  ; /* [31..2 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_lpf_enable_y      : 1   ; /* [0 ]      */
        unsigned int    reserved0                      : 8   ; /* [8 ..1 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_enable_uv     : 1   ; /* [9 ]      */
        unsigned int    cnfg_gmf_yuv_lpf_strength_y    : 8   ; /* [8 ..1 ]  */
        unsigned int    reserved1                      : 1   ; /* [9 ]      */
        unsigned int    cnfg_gmf_yuv_lpf_strength_uv   : 8   ; /* [17..10]  */
        unsigned int    reserved2                      : 14  ; /* [31..18]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_lpf_table_y00     : 4   ; /* [3 ..0 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y01     : 4   ; /* [7 ..4 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y02     : 4   ; /* [11..8 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y03     : 4   ; /* [15..12]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y04     : 4   ; /* [19..16]  */
        unsigned int    reserved0                      : 12  ; /* [31..20]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_lpf_table_y10     : 4   ; /* [3 ..0 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y11     : 4   ; /* [7 ..4 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y12     : 4   ; /* [11..8 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y13     : 4   ; /* [15..12]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y14     : 4   ; /* [19..16]  */
        unsigned int    reserved0                      : 12  ; /* [31..20]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_lpf_table_y20     : 4   ; /* [3 ..0 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y21     : 4   ; /* [7 ..4 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y22     : 4   ; /* [11..8 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y23     : 4   ; /* [15..12]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y24     : 4   ; /* [19..16]  */
        unsigned int    reserved0                      : 12  ; /* [31..20]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_lpf_table_y30     : 4   ; /* [3 ..0 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y31     : 4   ; /* [7 ..4 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y32     : 4   ; /* [11..8 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y33     : 4   ; /* [15..12]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_y34     : 4   ; /* [19..16]  */
        unsigned int    reserved0                      : 12  ; /* [31..20]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_lpf_table_shift_y : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_shift_uv : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_lpf_table_uv00    : 4   ; /* [3 ..0 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv01    : 4   ; /* [7 ..4 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv02    : 4   ; /* [11..8 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv03    : 4   ; /* [15..12]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv04    : 4   ; /* [19..16]  */
        unsigned int    reserved0                      : 12  ; /* [31..20]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_lpf_table_uv10    : 4   ; /* [3 ..0 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv11    : 4   ; /* [7 ..4 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv12    : 4   ; /* [11..8 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv13    : 4   ; /* [15..12]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv14    : 4   ; /* [19..16]  */
        unsigned int    reserved0                      : 12  ; /* [31..20]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_lpf_table_uv20    : 4   ; /* [3 ..0 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv21    : 4   ; /* [7 ..4 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv22    : 4   ; /* [11..8 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv23    : 4   ; /* [15..12]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv24    : 4   ; /* [19..16]  */
        unsigned int    reserved0                      : 12  ; /* [31..20]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_lpf_table_uv30    : 4   ; /* [3 ..0 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv31    : 4   ; /* [7 ..4 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv32    : 4   ; /* [11..8 ]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv33    : 4   ; /* [15..12]  */
        unsigned int    cnfg_gmf_yuv_lpf_table_uv34    : 4   ; /* [19..16]  */
        unsigned int    reserved0                      : 12  ; /* [31..20]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    apb_debug_data0                : 16  ; /* [15..0 ]  */
        unsigned int    apb_debug_data1                : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X0B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_maxminstrength_y  : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_gmf_yuv_maxminstrength_uv : 8   ; /* [23..16]  */
        unsigned int    cnfg_gmf_yuv_diffmodestrength_y : 8   ; /* [15..8 ]  */
        unsigned int    reserved1                      : 8   ; /* [23..16]  */
        unsigned int    cnfg_gmf_yuv_diffmodestrength_uv : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X0C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_diffthreshold_y   : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_gmf_yuv_diffdivfactor_y   : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X0D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_diffthreshold_uv  : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_gmf_yuv_diffdivfactor_uv  : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X0E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_mvselect          : 2   ; /* [1 ..0 ]  */
        unsigned int    reserved0                      : 1   ; /* [2 ]      */
        unsigned int    cnfg_gmf_yuv_mvchromaselect    : 0   ; /* [2 ..3 ]  */
        unsigned int    reserved1                      : 1   ; /* [3 ]      */
        unsigned int    cnfg_gmf_yuv_mvscalebylumaenable : 1   ; /* [4 ]      */
        unsigned int    cnfg_gmf_yuv_mvbinaryzationthreshold : 8   ; /* [12..5 ]  */
        unsigned int    reserved2                      : 19  ; /* [31..13]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X0F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_gmf_yuv_weightuplimit     : 8   ; /* [7 ..0 ]  */
        unsigned int    cnfg_gmf_yuv_weightuplimitvalue : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_gmf_yuv_weightdownlimit   : 8   ; /* [23..16]  */
        unsigned int    cnfg_gmf_yuv_weightdownlimitvalue : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_GMF0X40;

typedef struct
{
    volatile U_ISP_GMF0X00                      ISP_GMF0x00;
    volatile U_ISP_GMF0X01                      ISP_GMF0x01;
    volatile U_ISP_GMF0X02                      ISP_GMF0x02;
    volatile U_ISP_GMF0X03                      ISP_GMF0x03;
    volatile U_ISP_GMF0X04                      ISP_GMF0x04;
    volatile U_ISP_GMF0X05                      ISP_GMF0x05;
    volatile U_ISP_GMF0X06                      ISP_GMF0x06;
    volatile U_ISP_GMF0X07                      ISP_GMF0x07;
    volatile U_ISP_GMF0X08                      ISP_GMF0x08;
    volatile U_ISP_GMF0X09                      ISP_GMF0x09;
    volatile U_ISP_GMF0X0A                      ISP_GMF0x0a;
    volatile U_ISP_GMF0X0B                      ISP_GMF0x0b;
    volatile U_ISP_GMF0X0C                      ISP_GMF0x0c;
    volatile U_ISP_GMF0X0D                      ISP_GMF0x0d;
    volatile U_ISP_GMF0X0E                      ISP_GMF0x0e;
    volatile U_ISP_GMF0X0F                      ISP_GMF0x0f;
    volatile unsigned int                     reserved0[48];
    volatile U_ISP_GMF0X40                      ISP_GMF0x40;
} S_ISP_GMF_REGS_TYPE;



#endif 

