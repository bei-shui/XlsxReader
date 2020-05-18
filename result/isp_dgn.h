//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_dgn.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_DGN_H__
#define __ISP_DGN_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved0                      : 1   ; /* [0 ]      */
        unsigned int    cnfg_reg_bayer_pattern         : 1   ; /* [1 ]      */
        unsigned int    reserved1                      : 21  ; /* [22..2 ]  */
        unsigned int    cnfg_reg_digital_gain_mul_red  : 1   ; /* [23]      */
        unsigned int    reserved2                      : 7   ; /* [30..24]  */
        unsigned int    cnfg_reg_digital_gain_mul_blue : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DGN0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_digital_gain_mul_green_even : 1   ; /* [7 ]      */
        unsigned int    reserved0                      : 7   ; /* [14..8 ]  */
        unsigned int    cnfg_reg_digital_gain_mul_green_odd : 1   ; /* [15]      */
        unsigned int    reserved1                      : 3   ; /* [18..16]  */
        unsigned int    cnfg_reg_digital_gain_shift_red : 1   ; /* [19]      */
        unsigned int    reserved2                      : 3   ; /* [22..20]  */
        unsigned int    cnfg_reg_digital_gain_shift_green_even : 1   ; /* [23]      */
        unsigned int    reserved3                      : 3   ; /* [26..24]  */
        unsigned int    cnfg_reg_digital_gain_shift_green_odd : 1   ; /* [27]      */
        unsigned int    cnfg_reg_digital_gain_shift_blue : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DGN0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_digital_gain_saturation_red : 1   ; /* [14]      */
        unsigned int    reserved0                      : 15  ; /* [29..15]  */
        unsigned int    cnfg_reg_digital_gain_saturation_green_even : 1   ; /* [30]      */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DGN0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_digital_gain_saturation_green_odd : 1   ; /* [14]      */
        unsigned int    reserved0                      : 15  ; /* [29..15]  */
        unsigned int    cnfg_reg_digital_gain_saturation_blue : 1   ; /* [30]      */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DGN0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_digital_gain_vig_com_en : 1   ; /* [0 ]      */
        unsigned int    reserved0                      : 1   ; /* [1 ]      */
        unsigned int    cnfg_reg_digital_gain_vig_com_shift : 1   ; /* [2 ]      */
        unsigned int    reserved1                      : 17  ; /* [19..3 ]  */
        unsigned int    cnfg_reg_digital_gain_hphase_init_int : 1   ; /* [20]      */
        unsigned int    reserved2                      : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DGN0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_digital_gain_hphase_init_frac : 1   ; /* [12]      */
        unsigned int    reserved0                      : 7   ; /* [19..13]  */
        unsigned int    cnfg_reg_digital_gain_vphase_init_int : 1   ; /* [20]      */
        unsigned int    reserved1                      : 11  ; /* [31..21]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DGN0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_digital_gain_vphase_init_frac : 1   ; /* [12]      */
        unsigned int    reserved0                      : 15  ; /* [27..13]  */
        unsigned int    cnfg_reg_digital_gain_hphase_incr : 1   ; /* [28]      */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DGN0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_digital_gain_vphase_incr : 1   ; /* [12]      */
        unsigned int    reserved0                      : 17  ; /* [29..13]  */
        unsigned int    cnfg_reg_digital_gain_black_level_offset_red : 1   ; /* [30]      */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DGN0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_reg_digital_gain_black_level_offset_green : 1   ; /* [14]      */
        unsigned int    reserved0                      : 15  ; /* [29..15]  */
        unsigned int    cnfg_reg_digital_gain_black_level_offset_blue : 1   ; /* [30]      */
        unsigned int    reserved1                      : 1   ; /* [31]      */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DGN0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    digital_gain_dbg_data          : 16  ; /* [15..0 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DGN0XA;

typedef struct
{
    volatile U_ISP_DGN0X00                      ISP_DGN0x00;
    volatile U_ISP_DGN0X01                      ISP_DGN0x01;
    volatile U_ISP_DGN0X02                      ISP_DGN0x02;
    volatile U_ISP_DGN0X03                      ISP_DGN0x03;
    volatile U_ISP_DGN0X04                      ISP_DGN0x04;
    volatile U_ISP_DGN0X05                      ISP_DGN0x05;
    volatile U_ISP_DGN0X06                      ISP_DGN0x06;
    volatile U_ISP_DGN0X07                      ISP_DGN0x07;
    volatile U_ISP_DGN0X08                      ISP_DGN0x08;
    volatile unsigned int                     reserved0[1];
    volatile U_ISP_DGN0XA                       ISP_DGN0xa;
} S_ISP_DGN_REGS_TYPE;



#endif 

