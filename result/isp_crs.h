//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_crs.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_CRS_H__
#define __ISP_CRS_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_chroma_polyphase_ctrl_0   : 1   ; /* [0 ]      */
        unsigned int    cnfg_chroma_polyphase_ctrl_1   : 1   ; /* [1 ]      */
        unsigned int    cnfg_chroma_polyphase_ctrl_2   : 1   ; /* [2 ]      */
        unsigned int    cnfg_chroma_polyphase_ctrl_3   : 1   ; /* [3 ]      */
        unsigned int    cnfg_chroma_polyphase_ctrl_4   : 1   ; /* [4 ]      */
        unsigned int    cnfg_chroma_polyphase_ctrl_5   : 1   ; /* [5 ]      */
        unsigned int    cnfg_chroma_polyphase_ctrl_6   : 2   ; /* [7 ..6 ]  */
        unsigned int    cnfg_chroma_polyphase_ctrl_7   : 2   ; /* [9 ..8 ]  */
        unsigned int    reserved0                      : 6   ; /* [15..10]  */
        unsigned int    cnfg_chroma_polyphase_horizontal_output_width : 12  ; /* [27..16]  */
        unsigned int    reserved1                      : 4   ; /* [31..28]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_chroma_polyphase_horizontal_phase_inc_int : 3   ; /* [2 ..0 ]  */
        unsigned int    reserved0                      : 13  ; /* [15..3 ]  */
        unsigned int    cnfg_chroma_polyphase_horizontal_phase_inc_frac : 13  ; /* [28..16]  */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_chroma_polyphase_horizontal_init_int : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    cnfg_chroma_polyphase_horizontal_init_frac : 13  ; /* [28..16]  */
        unsigned int    reserved1                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_chroma_polyphase_vertical_output_height : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    cnfg_chroma_polyphase_vertical_phase_inc_int : 3   ; /* [18..16]  */
        unsigned int    reserved1                      : 13  ; /* [31..19]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_chroma_polyphase_vertical_phase_inc_frac : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    cnfg_chroma_polyphase_vertical_init_int : 14  ; /* [29..16]  */
        unsigned int    reserved1                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_chroma_polyphase_vertical_init_frac : 13  ; /* [12..0 ]  */
        unsigned int    reserved0                      : 3   ; /* [15..13]  */
        unsigned int    cnfg_chroma_polyphase_horizontal_phase_init_skew : 14  ; /* [29..16]  */
        unsigned int    reserved1                      : 2   ; /* [31..30]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_chroma_polyphase_horizontal_phase_inc_skew_low : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_chroma_polyphase_horizontal_phase_inc_skew_high : 7   ; /* [22..16]  */
        unsigned int    reserved0                      : 9   ; /* [31..23]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X06;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_chroma_polyphase_vertical_phase_inc_skew_low : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_chroma_polyphase_vertical_phase_inc_skew_high : 7   ; /* [22..16]  */
        unsigned int    reserved0                      : 9   ; /* [31..23]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X07;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_chroma_horizontal_warp_grid_width : 5   ; /* [4 ..0 ]  */
        unsigned int    reserved0                      : 11  ; /* [15..5 ]  */
        unsigned int    cnfg_chroma_horizontal_warp_grid_height : 6   ; /* [21..16]  */
        unsigned int    reserved1                      : 10  ; /* [31..22]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X08;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_chroma_horizontal_warp_grid_spacing : 6   ; /* [5 ..0 ]  */
        unsigned int    reserved0                      : 10  ; /* [15..6 ]  */
        unsigned int    cnfg_chroma_horizontal_warp_vector_format : 2   ; /* [17..16]  */
        unsigned int    reserved1                      : 14  ; /* [31..18]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X09;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    register_read_0                : 16  ; /* [15..0 ]  */
        unsigned int    register_read_1                : 13  ; /* [28..16]  */
        unsigned int    reserved0                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X10;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    register_read_2                : 12  ; /* [11..0 ]  */
        unsigned int    reserved0                      : 14  ; /* [25..12]  */
        unsigned int    register_read_3                : 1   ; /* [26]      */
        unsigned int    register_read_4                : 1   ; /* [25]      */
        unsigned int    register_read_5                : 1   ; /* [24]      */
        unsigned int    register_read_6                : 2   ; /* [17..16]  */
        unsigned int    reserved1                      : 14  ; /* [31..18]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X11;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    register_read_7                : 16  ; /* [15..0 ]  */
        unsigned int    register_read_8                : 13  ; /* [28..16]  */
        unsigned int    reserved0                      : 3   ; /* [31..29]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X12;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    register_read_9                : 14  ; /* [13..0 ]  */
        unsigned int    reserved0                      : 12  ; /* [25..14]  */
        unsigned int    register_read_10               : 1   ; /* [26]      */
        unsigned int    register_read_11               : 1   ; /* [25]      */
        unsigned int    register_read_12               : 1   ; /* [24]      */
        unsigned int    register_read_13               : 4   ; /* [19..16]  */
        unsigned int    reserved1                      : 12  ; /* [31..20]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X13;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    register_read_14               : 16  ; /* [15..0 ]  */
        unsigned int    register_read_15               : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X14;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    md5_dbg_register_0             : 32  ; /* [31..0 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X15;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    md5_dbg_register_1             : 32  ; /* [31..0 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X16;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    md5_dbg_register_2             : 32  ; /* [31..0 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X17;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    md5_dbg_register_3             : 32  ; /* [31..0 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X18;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_0       : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_1       : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_2       : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_3       : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X20;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_4       : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_5       : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X21;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_6       : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_7       : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_8       : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_9       : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X22;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_10      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_11      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X23;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_12      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_13      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_14      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_15      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X24;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_16      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_17      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X25;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_18      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_19      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_20      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_21      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X26;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_22      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_23      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X27;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_24      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_25      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_26      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_27      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X28;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_28      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_29      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X29;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_30      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_31      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_32      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_33      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X2A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_34      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_35      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X2B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_36      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_37      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_38      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_39      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X2C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_40      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_41      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X2D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_42      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_43      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_44      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_45      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X2E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_46      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_47      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X2F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_48      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_49      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_50      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_51      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X30;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_52      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_53      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X31;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_54      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_55      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_56      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_57      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X32;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_58      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_59      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X33;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_60      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_61      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_62      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_63      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X34;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_64      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_65      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X35;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_66      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_67      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_68      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_69      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X36;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_70      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_71      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X37;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_72      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_73      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_74      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_75      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X38;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_76      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_77      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X39;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_78      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_79      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_80      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_81      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X3A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_82      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_83      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X3B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_84      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_85      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_86      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_87      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X3C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_88      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_89      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X3D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_90      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_91      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_hcoeff_92      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_hcoeff_93      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X3E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_hcoeff_94      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_hcoeff_95      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X3F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_0       : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_1       : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_2       : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_3       : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X40;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_4       : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_5       : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X41;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_6       : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_7       : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_8       : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_9       : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X42;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_10      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_11      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X43;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_12      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_13      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_14      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_15      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X44;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_16      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_17      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X45;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_18      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_19      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_20      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_21      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X46;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_22      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_23      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X47;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_24      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_25      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_26      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_27      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X48;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_28      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_29      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X49;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_30      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_31      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_32      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_33      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X4A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_34      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_35      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X4B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_36      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_37      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_38      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_39      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X4C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_40      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_41      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X4D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_42      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_43      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_44      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_45      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X4E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_46      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_47      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X4F;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_48      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_49      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_50      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_51      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X50;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_52      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_53      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X51;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_54      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_55      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_56      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_57      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X52;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_58      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_59      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X53;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_60      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_61      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_62      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_63      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X54;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_64      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_65      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X55;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_66      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_67      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_68      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_69      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X56;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_70      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_71      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X57;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_72      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_73      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_74      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_75      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X58;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_76      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_77      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X59;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_78      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_79      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_80      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_81      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X5A;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_82      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_83      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X5B;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_84      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_85      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_86      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_87      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X5C;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_88      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_89      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X5D;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_90      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_91      : 8   ; /* [15..8 ]  */
        unsigned int    creg_resampling_vcoeff_92      : 8   ; /* [23..16]  */
        unsigned int    creg_resampling_vcoeff_93      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X5E;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    creg_resampling_vcoeff_94      : 8   ; /* [7 ..0 ]  */
        unsigned int    creg_resampling_vcoeff_95      : 8   ; /* [15..8 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CRS0X5F;

typedef struct
{
    volatile U_ISP_CRS0X00                      ISP_CRS0x00;
    volatile U_ISP_CRS0X01                      ISP_CRS0x01;
    volatile U_ISP_CRS0X02                      ISP_CRS0x02;
    volatile U_ISP_CRS0X03                      ISP_CRS0x03;
    volatile U_ISP_CRS0X04                      ISP_CRS0x04;
    volatile U_ISP_CRS0X05                      ISP_CRS0x05;
    volatile U_ISP_CRS0X06                      ISP_CRS0x06;
    volatile U_ISP_CRS0X07                      ISP_CRS0x07;
    volatile U_ISP_CRS0X08                      ISP_CRS0x08;
    volatile U_ISP_CRS0X09                      ISP_CRS0x09;
    volatile unsigned int                     reserved0[6];
    volatile U_ISP_CRS0X10                      ISP_CRS0x10;
    volatile U_ISP_CRS0X11                      ISP_CRS0x11;
    volatile U_ISP_CRS0X12                      ISP_CRS0x12;
    volatile U_ISP_CRS0X13                      ISP_CRS0x13;
    volatile U_ISP_CRS0X14                      ISP_CRS0x14;
    volatile U_ISP_CRS0X15                      ISP_CRS0x15;
    volatile U_ISP_CRS0X16                      ISP_CRS0x16;
    volatile U_ISP_CRS0X17                      ISP_CRS0x17;
    volatile U_ISP_CRS0X18                      ISP_CRS0x18;
    volatile unsigned int                     reserved1[7];
    volatile U_ISP_CRS0X20                      ISP_CRS0x20;
    volatile U_ISP_CRS0X21                      ISP_CRS0x21;
    volatile U_ISP_CRS0X22                      ISP_CRS0x22;
    volatile U_ISP_CRS0X23                      ISP_CRS0x23;
    volatile U_ISP_CRS0X24                      ISP_CRS0x24;
    volatile U_ISP_CRS0X25                      ISP_CRS0x25;
    volatile U_ISP_CRS0X26                      ISP_CRS0x26;
    volatile U_ISP_CRS0X27                      ISP_CRS0x27;
    volatile U_ISP_CRS0X28                      ISP_CRS0x28;
    volatile U_ISP_CRS0X29                      ISP_CRS0x29;
    volatile U_ISP_CRS0X2A                      ISP_CRS0x2a;
    volatile U_ISP_CRS0X2B                      ISP_CRS0x2b;
    volatile U_ISP_CRS0X2C                      ISP_CRS0x2c;
    volatile U_ISP_CRS0X2D                      ISP_CRS0x2d;
    volatile U_ISP_CRS0X2E                      ISP_CRS0x2e;
    volatile U_ISP_CRS0X2F                      ISP_CRS0x2f;
    volatile U_ISP_CRS0X30                      ISP_CRS0x30;
    volatile U_ISP_CRS0X31                      ISP_CRS0x31;
    volatile U_ISP_CRS0X32                      ISP_CRS0x32;
    volatile U_ISP_CRS0X33                      ISP_CRS0x33;
    volatile U_ISP_CRS0X34                      ISP_CRS0x34;
    volatile U_ISP_CRS0X35                      ISP_CRS0x35;
    volatile U_ISP_CRS0X36                      ISP_CRS0x36;
    volatile U_ISP_CRS0X37                      ISP_CRS0x37;
    volatile U_ISP_CRS0X38                      ISP_CRS0x38;
    volatile U_ISP_CRS0X39                      ISP_CRS0x39;
    volatile U_ISP_CRS0X3A                      ISP_CRS0x3a;
    volatile U_ISP_CRS0X3B                      ISP_CRS0x3b;
    volatile U_ISP_CRS0X3C                      ISP_CRS0x3c;
    volatile U_ISP_CRS0X3D                      ISP_CRS0x3d;
    volatile U_ISP_CRS0X3E                      ISP_CRS0x3e;
    volatile U_ISP_CRS0X3F                      ISP_CRS0x3f;
    volatile U_ISP_CRS0X40                      ISP_CRS0x40;
    volatile U_ISP_CRS0X41                      ISP_CRS0x41;
    volatile U_ISP_CRS0X42                      ISP_CRS0x42;
    volatile U_ISP_CRS0X43                      ISP_CRS0x43;
    volatile U_ISP_CRS0X44                      ISP_CRS0x44;
    volatile U_ISP_CRS0X45                      ISP_CRS0x45;
    volatile U_ISP_CRS0X46                      ISP_CRS0x46;
    volatile U_ISP_CRS0X47                      ISP_CRS0x47;
    volatile U_ISP_CRS0X48                      ISP_CRS0x48;
    volatile U_ISP_CRS0X49                      ISP_CRS0x49;
    volatile U_ISP_CRS0X4A                      ISP_CRS0x4a;
    volatile U_ISP_CRS0X4B                      ISP_CRS0x4b;
    volatile U_ISP_CRS0X4C                      ISP_CRS0x4c;
    volatile U_ISP_CRS0X4D                      ISP_CRS0x4d;
    volatile U_ISP_CRS0X4E                      ISP_CRS0x4e;
    volatile U_ISP_CRS0X4F                      ISP_CRS0x4f;
    volatile U_ISP_CRS0X50                      ISP_CRS0x50;
    volatile U_ISP_CRS0X51                      ISP_CRS0x51;
    volatile U_ISP_CRS0X52                      ISP_CRS0x52;
    volatile U_ISP_CRS0X53                      ISP_CRS0x53;
    volatile U_ISP_CRS0X54                      ISP_CRS0x54;
    volatile U_ISP_CRS0X55                      ISP_CRS0x55;
    volatile U_ISP_CRS0X56                      ISP_CRS0x56;
    volatile U_ISP_CRS0X57                      ISP_CRS0x57;
    volatile U_ISP_CRS0X58                      ISP_CRS0x58;
    volatile U_ISP_CRS0X59                      ISP_CRS0x59;
    volatile U_ISP_CRS0X5A                      ISP_CRS0x5a;
    volatile U_ISP_CRS0X5B                      ISP_CRS0x5b;
    volatile U_ISP_CRS0X5C                      ISP_CRS0x5c;
    volatile U_ISP_CRS0X5D                      ISP_CRS0x5d;
    volatile U_ISP_CRS0X5E                      ISP_CRS0x5e;
    volatile U_ISP_CRS0X5F                      ISP_CRS0x5f;
} S_ISP_CRS_REGS_TYPE;



#endif 

