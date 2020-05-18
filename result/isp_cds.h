//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_cds.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_CDS_H__
#define __ISP_CDS_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved0                      : 1   ; /* [0 ]      */
        unsigned int    cfg_h_dns_enable               : 1   ; /* [1 ]      */
        unsigned int    cfg_v_dns_enable               : 1   ; /* [0 ]      */
        unsigned int    reserved1                      : 31  ; /* [31..1 ]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CDS0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    dbg_sum_uv                     : 16  ; /* [15..0 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CDS0X01;

typedef struct
{
    volatile U_ISP_CDS0X00                      ISP_CDS0x00;
    volatile U_ISP_CDS0X01                      ISP_CDS0x01;
} S_ISP_CDS_REGS_TYPE;



#endif 

