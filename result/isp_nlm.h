//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_nlm.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_NLM_H__
#define __ISP_NLM_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_maxchange              : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 4   ; /* [15..12]  */
        unsigned int    reg_nlm_weight_th              : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 2   ; /* [27..26]  */
        unsigned int    reg_nlm_en                     : 1   ; /* [28]      */
        unsigned int    reserved2                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut0                   : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut1                   : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut2                   : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut3                   : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut4                   : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut5                   : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut6                   : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut7                   : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut8                   : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut9                   : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut10                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut11                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut12                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut13                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut14                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut15                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut16                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut17                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut18                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut19                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut20                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut21                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X0B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut22                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut23                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X0C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut24                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut25                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X0D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut26                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut27                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X0E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut28                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut29                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X0F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut30                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut31                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut32                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut33                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X11;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut34                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut35                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X12;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut36                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut37                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X13;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut38                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut39                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X14;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut40                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut41                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X15;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut42                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut43                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X16;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut44                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut45                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X17;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut46                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut47                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X18;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut48                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut49                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X19;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut50                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut51                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X1A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut52                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut53                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X1B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut54                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut55                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X1C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut56                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut57                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X1D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut58                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut59                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X1E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut60                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut61                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X1F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_lut62                  : 10  ; /* [9 ..0 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    reg_nlm_lut63                  : 10  ; /* [25..16]  */
        unsigned int    reserved1                      : 6   ; /* [31..26]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X20;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reg_nlm_pix_lenghth            : 11  ; /* [10..0 ]  */
        unsigned int    reserved0                      : 5   ; /* [15..11]  */
        unsigned int    reg_nlm_tbale_index_shift      : 4   ; /* [19..16]  */
        unsigned int    reserved1                      : 12  ; /* [31..20]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_NLM0X21;

typedef struct
{
    volatile U_ISP_NLM0X00                      ISP_NLM0x00;
    volatile U_ISP_NLM0X01                      ISP_NLM0x01;
    volatile U_ISP_NLM0X02                      ISP_NLM0x02;
    volatile U_ISP_NLM0X03                      ISP_NLM0x03;
    volatile U_ISP_NLM0X04                      ISP_NLM0x04;
    volatile U_ISP_NLM0X05                      ISP_NLM0x05;
    volatile U_ISP_NLM0X06                      ISP_NLM0x06;
    volatile U_ISP_NLM0X07                      ISP_NLM0x07;
    volatile U_ISP_NLM0X08                      ISP_NLM0x08;
    volatile U_ISP_NLM0X09                      ISP_NLM0x09;
    volatile U_ISP_NLM0X0A                      ISP_NLM0x0a;
    volatile U_ISP_NLM0X0B                      ISP_NLM0x0b;
    volatile U_ISP_NLM0X0C                      ISP_NLM0x0c;
    volatile U_ISP_NLM0X0D                      ISP_NLM0x0d;
    volatile U_ISP_NLM0X0E                      ISP_NLM0x0e;
    volatile U_ISP_NLM0X0F                      ISP_NLM0x0f;
    volatile U_ISP_NLM0X10                      ISP_NLM0x10;
    volatile U_ISP_NLM0X11                      ISP_NLM0x11;
    volatile U_ISP_NLM0X12                      ISP_NLM0x12;
    volatile U_ISP_NLM0X13                      ISP_NLM0x13;
    volatile U_ISP_NLM0X14                      ISP_NLM0x14;
    volatile U_ISP_NLM0X15                      ISP_NLM0x15;
    volatile U_ISP_NLM0X16                      ISP_NLM0x16;
    volatile U_ISP_NLM0X17                      ISP_NLM0x17;
    volatile U_ISP_NLM0X18                      ISP_NLM0x18;
    volatile U_ISP_NLM0X19                      ISP_NLM0x19;
    volatile U_ISP_NLM0X1A                      ISP_NLM0x1a;
    volatile U_ISP_NLM0X1B                      ISP_NLM0x1b;
    volatile U_ISP_NLM0X1C                      ISP_NLM0x1c;
    volatile U_ISP_NLM0X1D                      ISP_NLM0x1d;
    volatile U_ISP_NLM0X1E                      ISP_NLM0x1e;
    volatile U_ISP_NLM0X1F                      ISP_NLM0x1f;
    volatile U_ISP_NLM0X20                      ISP_NLM0x20;
    volatile U_ISP_NLM0X21                      ISP_NLM0x21;
} S_ISP_NLM_REGS_TYPE;



#endif 

