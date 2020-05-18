//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_blf.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_BLF_H__
#define __ISP_BLF_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_y_enable          : 1   ; /* [0 ]      */
        unsigned int    cnfg_reg_blf_c_enable          : 1   ; /* [1 ]      */
        unsigned int    cnfg_reg_blf_use_mv            : 1   ; /* [2 ]      */
        unsigned int    cnfg_reg_cmf_enable            : 1   ; /* [3 ]      */
        unsigned int    cnfg_reg_cmf_strength          : 8   ; /* [11..4 ]  */
        unsigned int    default                        : 4   ; /* [15..12]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_sims_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_sims_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_sims_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_sims_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_sims_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_sims_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X0A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X0B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X0C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X0D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X0E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_w            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X0F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X11;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X12;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X13;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X14;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X15;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X16;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X17;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X18;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X19;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X1A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_reg_blf_simr_s            : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X1B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    chk_sum_y                      : 16  ; /* [15..0 ]  */
        unsigned int    chk_sum_uv                     : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_BLF0X1C;

typedef struct
{
    volatile U_ISP_BLF0X00                      ISP_BLF0x00;
    volatile U_ISP_BLF0X01                      ISP_BLF0x01;
    volatile U_ISP_BLF0X02                      ISP_BLF0x02;
    volatile U_ISP_BLF0X03                      ISP_BLF0x03;
    volatile U_ISP_BLF0X04                      ISP_BLF0x04;
    volatile U_ISP_BLF0X05                      ISP_BLF0x05;
    volatile U_ISP_BLF0X06                      ISP_BLF0x06;
    volatile U_ISP_BLF0X07                      ISP_BLF0x07;
    volatile U_ISP_BLF0X08                      ISP_BLF0x08;
    volatile U_ISP_BLF0X09                      ISP_BLF0x09;
    volatile U_ISP_BLF0X0A                      ISP_BLF0x0a;
    volatile U_ISP_BLF0X0B                      ISP_BLF0x0b;
    volatile U_ISP_BLF0X0C                      ISP_BLF0x0c;
    volatile U_ISP_BLF0X0D                      ISP_BLF0x0d;
    volatile U_ISP_BLF0X0E                      ISP_BLF0x0e;
    volatile U_ISP_BLF0X0F                      ISP_BLF0x0f;
    volatile U_ISP_BLF0X10                      ISP_BLF0x10;
    volatile U_ISP_BLF0X11                      ISP_BLF0x11;
    volatile U_ISP_BLF0X12                      ISP_BLF0x12;
    volatile U_ISP_BLF0X13                      ISP_BLF0x13;
    volatile U_ISP_BLF0X14                      ISP_BLF0x14;
    volatile U_ISP_BLF0X15                      ISP_BLF0x15;
    volatile U_ISP_BLF0X16                      ISP_BLF0x16;
    volatile U_ISP_BLF0X17                      ISP_BLF0x17;
    volatile U_ISP_BLF0X18                      ISP_BLF0x18;
    volatile U_ISP_BLF0X19                      ISP_BLF0x19;
    volatile U_ISP_BLF0X1A                      ISP_BLF0x1a;
    volatile U_ISP_BLF0X1B                      ISP_BLF0x1b;
    volatile U_ISP_BLF0X1C                      ISP_BLF0x1c;
} S_ISP_BLF_REGS_TYPE;



#endif 

