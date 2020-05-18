//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  isp_cmf.h
// Version       :  1.0
// Date          :  2020-4-23
// Description   :  
// History       :  2020-4-23 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __ISP_CMF_H__
#define __ISP_CMF_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    reserved0                      : 3   ; /* [2 ..0 ]  */
        unsigned int    cnfg_reg_cmf_enable            : 1   ; /* [3 ]      */
        unsigned int    cnfg_reg_cmf_strength          : 8   ; /* [11..4 ]  */
        unsigned int    reserved1                      : 20  ; /* [31..12]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMF0X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    fpga_sum_y                     : 16  ; /* [15..0 ]  */
        unsigned int    reserved0                      : 16  ; /* [31..16]  */
    } bits;    /* Define an unsigned member */

    unsigned int    u32;
} U_ISP_CMF0X01;

typedef struct
{
    volatile U_ISP_CMF0X00                      ISP_CMF0x00;
    volatile U_ISP_CMF0X01                      ISP_CMF0x01;
} S_ISP_CMF_REGS_TYPE;



#endif 

