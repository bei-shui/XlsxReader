//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  cmd_vin1.h
// Version       :  1.0
// Date          :  2020-5-19
// Description   :  
// History       :  2020-5-19 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __CMD_VIN1_H__
#define __CMD_VIN1_H__




typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cmd_update_en                  : 1   ; /*read and write  [0 ]      */
        unsigned int    cmd_vin_ext_data               : 1   ; /*read and write  [1 ]      */
        unsigned int    cmd_yuvmode                    : 3   ; /*read and write  [4 ..2 ]  */
        unsigned int    cmd_vin_w_bound_en             : 1   ; /*read and write  [5 ]      */
        unsigned int    cmd_linesync_th                : 7   ; /*read and write  [12..6 ]  */
        unsigned int    cmd_stride                     : 13  ; /*read and write  [25..13]  */
        unsigned int    reserved0                      : 6   ; /*read and write  [31..26]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_VIN10X00;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cmd_pic_w                      : 13  ; /*read and write  [12..0 ]  */
        unsigned int    cmd_pic_h                      : 13  ; /*read and write  [25..13]  */
        unsigned int    cmd_pixwidth                   : 2   ; /*read and write  [27..26]  */
        unsigned int    cmd_dwidth                     : 2   ; /*read and write  [29..28]  */
        unsigned int    cmd_verflip                    : 1   ; /*read and write  [30]      */
        unsigned int    reserved0                      : 1   ; /*read and write  [31]      */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_VIN10X01;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cmd_vin_w_st                   : 13  ; /*read and write  [12..0 ]  */
        unsigned int    cmd_vin_bound                  : 13  ; /*read and write  [25..13]  */
        unsigned int    reserved0                      : 6   ; /*read and write  [31..26]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_VIN10X02;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cmd_cnfg_reg_num               : 16  ; /*read and write  [15..0 ]  */
        unsigned int    reserved0                      : 16  ; /*read and write  [31..16]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_VIN10X03;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cmd_cnfg_reg_addr              : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_VIN10X04;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cmd_ext_y_addr                 : 32  ; /*read and write  [31..0 ]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_VIN10X05;

typedef union
{
    /* Define the struct bits */
    struct
    {
        unsigned int    cmd_ext_c_addr                 : 32  ; /*read and write  [31..0 ]  */
        unsigned int    cmd_pic_size_w                 : 26  ; /*read and write  [25..0 ]  */
        unsigned int    reserved0                      : 6   ; /*read and write  [31..26]  */
    } bits;
    /* Define an unsigned member */
    unsigned int    u32;
} U_CMD_VIN10X06;

typedef struct
{
    volatile U_CMD_VIN10X00                     CMD_VIN10x00; /*read and write*/
    volatile U_CMD_VIN10X01                     CMD_VIN10x01; /*read and write*/
    volatile U_CMD_VIN10X02                     CMD_VIN10x02; /*read and write*/
    volatile U_CMD_VIN10X03                     CMD_VIN10x03; /*read and write*/
    volatile U_CMD_VIN10X04                     CMD_VIN10x04; /*read and write*/
    volatile U_CMD_VIN10X05                     CMD_VIN10x05; /*read and write*/
    volatile U_CMD_VIN10X06                     CMD_VIN10x06; /*read and write*/
} S_CMD_VIN1_REGS_TYPE;



#endif 

