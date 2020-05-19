//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  cmd_sec2.h
// Version       :  1.0
// Date          :  2020-5-19
// Description   :  
// History       :  2020-5-19 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __CMD_SEC2_H__
#define __CMD_SEC2_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    update_en                      : 1   ; /*read and write  [0 ]      */
        unsigned int    rawin_en                       : 2   ; /*read and write  [2 ..1 ]  */
        unsigned int    hdpout_en                      : 1   ; /*read and write  [3 ]      */
        unsigned int    reserved0                      : 1   ; /*read and write  [4 ]      */
        unsigned int    yuvmode                        : 3   ; /*read and write  [7 ..5 ]  */
        unsigned int    vin2_2bfn_en                   : 1   ; /*read and write  [8 ]      */
        unsigned int    aaa_en                         : 1   ; /*read and write  [9 ]      */
        unsigned int    aac_en                         : 3   ; /*read and write  [12..10]  */
        unsigned int    ref_frame_work                 : 1   ; /*read and write  [13]      */
        unsigned int    vertical_flip                  : 1   ; /*read and write  [14]      */
        unsigned int    reserved1                      : 17  ; /*read and write  [31..15]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    filter_flag                    : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stride_rawin0                  : 13  ; /*read and write  [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /*read and write  [15..13]  */
        unsigned int    stride_rawin1                  : 13  ; /*read and write  [28..16]  */
        unsigned int    reserved1                      : 3   ; /*read and write  [31..29]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stride_gmd                     : 13  ; /*read and write  [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /*read and write  [15..13]  */
        unsigned int    stride_gmf                     : 13  ; /*read and write  [28..16]  */
        unsigned int    reserved1                      : 3   ; /*read and write  [31..29]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stride_aaa                     : 13  ; /*read and write  [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /*read and write  [15..13]  */
        unsigned int    stride_aac0                    : 13  ; /*read and write  [28..16]  */
        unsigned int    reserved1                      : 3   ; /*read and write  [31..29]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    stride_aac1                    : 13  ; /*read and write  [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /*read and write  [15..13]  */
        unsigned int    stride_aac2                    : 13  ; /*read and write  [28..16]  */
        unsigned int    reserved1                      : 3   ; /*read and write  [31..29]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pic_w_aaa                      : 13  ; /*read and write  [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /*read and write  [15..13]  */
        unsigned int    pic_h_aaa                      : 13  ; /*read and write  [28..16]  */
        unsigned int    reserved1                      : 3   ; /*read and write  [31..29]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pic_w_aac0                     : 13  ; /*read and write  [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /*read and write  [15..13]  */
        unsigned int    pic_h_aac0                     : 13  ; /*read and write  [28..16]  */
        unsigned int    reserved1                      : 3   ; /*read and write  [31..29]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pic_w_aac1                     : 13  ; /*read and write  [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /*read and write  [15..13]  */
        unsigned int    pic_h_aac1                     : 13  ; /*read and write  [28..16]  */
        unsigned int    reserved1                      : 3   ; /*read and write  [31..29]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pic_w_aac2                     : 13  ; /*read and write  [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /*read and write  [15..13]  */
        unsigned int    pic_h_aac2                     : 13  ; /*read and write  [28..16]  */
        unsigned int    reserved1                      : 3   ; /*read and write  [31..29]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pic_w_rawin0                   : 13  ; /*read and write  [12..0 ]  */
        unsigned int    pic_h_rawin0                   : 13  ; /*read and write  [25..13]  */
        unsigned int    pixwidth_rawin0                : 2   ; /*read and write  [27..26]  */
        unsigned int    dwidth_rawin0                  : 2   ; /*read and write  [29..28]  */
        unsigned int    reserved0                      : 2   ; /*read and write  [31..30]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pic_w_rawin1                   : 13  ; /*read and write  [12..0 ]  */
        unsigned int    pic_h_rawin1                   : 13  ; /*read and write  [25..13]  */
        unsigned int    pixwidth_rawin1                : 2   ; /*read and write  [27..26]  */
        unsigned int    dwidth_rawin1                  : 2   ; /*read and write  [29..28]  */
        unsigned int    reserved0                      : 2   ; /*read and write  [31..30]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X0B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pic_w_gmd                      : 13  ; /*read and write  [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /*read and write  [15..13]  */
        unsigned int    pic_h_gmd                      : 13  ; /*read and write  [28..16]  */
        unsigned int    reserved1                      : 3   ; /*read and write  [31..29]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X0C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    pic_w_gmf                      : 13  ; /*read and write  [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /*read and write  [15..13]  */
        unsigned int    pic_h_gmf                      : 13  ; /*read and write  [28..16]  */
        unsigned int    reserved1                      : 3   ; /*read and write  [31..29]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X0D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    line_dly0                      : 12  ; /*read and write  [11..0 ]  */
        unsigned int    pix_dly0                       : 4   ; /*read and write  [15..12]  */
        unsigned int    line_dly1                      : 12  ; /*read and write  [27..16]  */
        unsigned int    pix_dly1                       : 4   ; /*read and write  [31..28]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20XE;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    bypass                         : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20XF;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_rawin0_r                  : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_rawin1_r                  : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X11;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_cnfg_r                    : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X12;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_gmd_r                     : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X13;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_gmf_y_r                   : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X14;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_gmf_c_r                   : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X15;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_gmd_w                     : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X16;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_gmf_y_w                   : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X17;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_gmf_c_w                   : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X18;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_aac0_w                    : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X19;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_aac1_w                    : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X1A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_aac2_w                    : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X1B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_aaa_w                     : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X1C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_hdp_y                     : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X1D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_hdp_c                     : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X1E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    base_hdp_mv                    : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X1F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_00                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X20;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_01                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X21;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_02                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X22;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_03                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X23;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_04                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X24;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_05                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X25;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_06                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X26;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_07                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X27;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_08                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X28;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_09                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X29;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_10                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X2A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_11                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X2B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_12                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X2C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_13                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X2D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_14                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X2E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_15                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X2F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_16                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X30;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_17                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X31;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_18                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X32;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_19                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X33;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_20                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X34;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_21                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X35;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_22                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X36;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_23                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X37;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_24                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X38;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_25                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X39;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    info_26                        : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_SEC20X3A;

typedef struct
{
    volatile U_CMD_SEC20X00                     CMD_SEC20x00; /*read and write*/
    volatile U_CMD_SEC20X01                     CMD_SEC20x01; /*read and write*/
    volatile U_CMD_SEC20X02                     CMD_SEC20x02; /*read and write*/
    volatile U_CMD_SEC20X03                     CMD_SEC20x03; /*read and write*/
    volatile U_CMD_SEC20X04                     CMD_SEC20x04; /*read and write*/
    volatile U_CMD_SEC20X05                     CMD_SEC20x05; /*read and write*/
    volatile U_CMD_SEC20X06                     CMD_SEC20x06; /*read and write*/
    volatile U_CMD_SEC20X07                     CMD_SEC20x07; /*read and write*/
    volatile U_CMD_SEC20X08                     CMD_SEC20x08; /*read and write*/
    volatile U_CMD_SEC20X09                     CMD_SEC20x09; /*read and write*/
    volatile U_CMD_SEC20X0A                     CMD_SEC20x0a; /*read and write*/
    volatile U_CMD_SEC20X0B                     CMD_SEC20x0b; /*read and write*/
    volatile U_CMD_SEC20X0C                     CMD_SEC20x0c; /*read and write*/
    volatile U_CMD_SEC20X0D                     CMD_SEC20x0d; /*read and write*/
    volatile U_CMD_SEC20XE                      CMD_SEC20xe; /*read and write*/
    volatile U_CMD_SEC20XF                      CMD_SEC20xf; /*read and write*/
    volatile U_CMD_SEC20X10                     CMD_SEC20x10; /*read and write*/
    volatile U_CMD_SEC20X11                     CMD_SEC20x11; /*read and write*/
    volatile U_CMD_SEC20X12                     CMD_SEC20x12; /*read and write*/
    volatile U_CMD_SEC20X13                     CMD_SEC20x13; /*read and write*/
    volatile U_CMD_SEC20X14                     CMD_SEC20x14; /*read and write*/
    volatile U_CMD_SEC20X15                     CMD_SEC20x15; /*read and write*/
    volatile U_CMD_SEC20X16                     CMD_SEC20x16; /*read and write*/
    volatile U_CMD_SEC20X17                     CMD_SEC20x17; /*read and write*/
    volatile U_CMD_SEC20X18                     CMD_SEC20x18; /*read and write*/
    volatile U_CMD_SEC20X19                     CMD_SEC20x19; /*read and write*/
    volatile U_CMD_SEC20X1A                     CMD_SEC20x1a; /*read and write*/
    volatile U_CMD_SEC20X1B                     CMD_SEC20x1b; /*read and write*/
    volatile U_CMD_SEC20X1C                     CMD_SEC20x1c; /*read and write*/
    volatile U_CMD_SEC20X1D                     CMD_SEC20x1d; /*read and write*/
    volatile U_CMD_SEC20X1E                     CMD_SEC20x1e; /*read and write*/
    volatile U_CMD_SEC20X1F                     CMD_SEC20x1f; /*read and write*/
    volatile U_CMD_SEC20X20                     CMD_SEC20x20; /*read and write*/
    volatile U_CMD_SEC20X21                     CMD_SEC20x21; /*read and write*/
    volatile U_CMD_SEC20X22                     CMD_SEC20x22; /*read and write*/
    volatile U_CMD_SEC20X23                     CMD_SEC20x23; /*read and write*/
    volatile U_CMD_SEC20X24                     CMD_SEC20x24; /*read and write*/
    volatile U_CMD_SEC20X25                     CMD_SEC20x25; /*read and write*/
    volatile U_CMD_SEC20X26                     CMD_SEC20x26; /*read and write*/
    volatile U_CMD_SEC20X27                     CMD_SEC20x27; /*read and write*/
    volatile U_CMD_SEC20X28                     CMD_SEC20x28; /*read and write*/
    volatile U_CMD_SEC20X29                     CMD_SEC20x29; /*read and write*/
    volatile U_CMD_SEC20X2A                     CMD_SEC20x2a; /*read and write*/
    volatile U_CMD_SEC20X2B                     CMD_SEC20x2b; /*read and write*/
    volatile U_CMD_SEC20X2C                     CMD_SEC20x2c; /*read and write*/
    volatile U_CMD_SEC20X2D                     CMD_SEC20x2d; /*read and write*/
    volatile U_CMD_SEC20X2E                     CMD_SEC20x2e; /*read and write*/
    volatile U_CMD_SEC20X2F                     CMD_SEC20x2f; /*read and write*/
    volatile U_CMD_SEC20X30                     CMD_SEC20x30; /*read and write*/
    volatile U_CMD_SEC20X31                     CMD_SEC20x31; /*read and write*/
    volatile U_CMD_SEC20X32                     CMD_SEC20x32; /*read and write*/
    volatile U_CMD_SEC20X33                     CMD_SEC20x33; /*read and write*/
    volatile U_CMD_SEC20X34                     CMD_SEC20x34; /*read and write*/
    volatile U_CMD_SEC20X35                     CMD_SEC20x35; /*read and write*/
    volatile U_CMD_SEC20X36                     CMD_SEC20x36; /*read and write*/
    volatile U_CMD_SEC20X37                     CMD_SEC20x37; /*read and write*/
    volatile U_CMD_SEC20X38                     CMD_SEC20x38; /*read and write*/
    volatile U_CMD_SEC20X39                     CMD_SEC20x39; /*read and write*/
    volatile U_CMD_SEC20X3A                     CMD_SEC20x3a; /*read and write*/
} S_CMD_SEC2_REGS_TYPE;



#endif 

