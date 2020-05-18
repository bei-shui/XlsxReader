//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_dpf_yuv.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_DPF_YUV_H__
#define __ISP_DPF_YUV_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_dpf_yuv_en                : 1   ; /* [0 ]      */
        unsigned int    reserved0                      : 15  ; /* [15..1 ]  */
        unsigned int    cnfg_dpf_yuv_grad_threshold    : 11  ; /* [26..16]  */
        unsigned int    reserved1                      : 5   ; /* [31..27]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DPF_YUV0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_dpf_yuv_luma_diff_threshold : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_dpf_yuv_strength          : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DPF_YUV0X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_dpf_yuv_ucoeff            : 8   ; /* [7 ..0 ]  */
        unsigned int    reserved0                      : 8   ; /* [15..8 ]  */
        unsigned int    cnfg_dpf_yuv_vcoeff            : 8   ; /* [23..16]  */
        unsigned int    reserved1                      : 8   ; /* [31..24]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DPF_YUV0X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_dpf_yuv_lineroffset       : 17  ; /* [16..0 ]  */
        unsigned int    reserved0                      : 15  ; /* [31..17]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DPF_YUV0X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_dpf_yuv_decoloroffset     : 16  ; /* [15..0 ]  */
        unsigned int    cnfg_dpf_yuv_enhance_enable    : 1   ; /* [16]      */
        unsigned int    reserved0                      : 15  ; /* [31..17]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DPF_YUV0X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cnfg_dpf_yuv_grad_min_shift    : 4   ; /* [3 ..0 ]  */
        unsigned int    reserved0                      : 12  ; /* [15..4 ]  */
        unsigned int    cnfg_dpf_yuv_luma_min_shift    : 4   ; /* [19..16]  */
        unsigned int    reserved1                      : 12  ; /* [31..20]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_DPF_YUV0X05;

typedef struct
{
    volatile U_ISP_DPF_YUV0X00                  ISP_DPF_YUV0x00;
    volatile U_ISP_DPF_YUV0X01                  ISP_DPF_YUV0x01;
    volatile U_ISP_DPF_YUV0X02                  ISP_DPF_YUV0x02;
    volatile U_ISP_DPF_YUV0X03                  ISP_DPF_YUV0x03;
    volatile U_ISP_DPF_YUV0X04                  ISP_DPF_YUV0x04;
    volatile U_ISP_DPF_YUV0X05                  ISP_DPF_YUV0x05;
} S_ISP_DPF_YUV_REGS_TYPE;



#endif 

