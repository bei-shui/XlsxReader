//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  cmd_main.h
// Version       :  1.0
// Date          :  2020-5-19
// Description   :
// History       :  2020-5-19 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __CMD_MAIN_H__
#define __CMD_MAIN_H__

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int update_en : 1;     /*read and write  [0 ]      */
    unsigned int update_flag : 3;   /*read and write  [3 ..1 ]  */
    unsigned int vertical_flip : 1; /*read and write  [4 ]      */
    unsigned int main_sel : 2;      /*read and write  [6 ..5 ]  */
    unsigned int reserved0 : 25;    /*read and write  [31..7 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X00;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int stride_lrs : 13; /*read and write  [12..0 ]  */
    unsigned int reserved0 : 3;   /*read and write  [15..13]  */
    unsigned int stride_crs : 13; /*read and write  [28..16]  */
    unsigned int reserved1 : 3;   /*read and write  [31..29]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X01;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int stride_vdp : 13; /*read and write  [12..0 ]  */
    unsigned int reserved0 : 19;  /*read and write  [31..13]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X02;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int pic_w_lrs : 13; /*read and write  [12..0 ]  */
    unsigned int reserved0 : 3;  /*read and write  [15..13]  */
    unsigned int pic_h_lrs : 13; /*read and write  [28..16]  */
    unsigned int reserved1 : 3;  /*read and write  [31..29]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X03;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int pic_w_crs : 13; /*read and write  [12..0 ]  */
    unsigned int reserved0 : 3;  /*read and write  [15..13]  */
    unsigned int pic_h_crs : 13; /*read and write  [28..16]  */
    unsigned int reserved1 : 3;  /*read and write  [31..29]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X04;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int pic_w_vdp : 13; /*read and write  [12..0 ]  */
    unsigned int reserved0 : 3;  /*read and write  [15..13]  */
    unsigned int pic_h_vdp : 13; /*read and write  [28..16]  */
    unsigned int reserved1 : 3;  /*read and write  [31..29]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X05;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int base_cnfg : 32; /*read and write  [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X06;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int base_lrs : 32; /*read and write  [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X07;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int base_crs : 32; /*read and write  [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X08;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int base_vdp_y : 32; /*read and write  [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X09;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int base_vdp_c : 32; /*read and write  [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X0A;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int base_vdp_mv_r : 32; /*read and write  [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X0B;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int base_vdp_mv_w : 32; /*read and write  [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X0C;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int info_00 : 32; /*read and write  [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X0D;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int info_01 : 32; /*read and write  [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X0E;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int info_02 : 32; /*read and write  [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_CMD_MAIN0X0F;

typedef struct
{
  volatile U_CMD_MAIN0X00 CMD_MAIN0x00; /*read and write*/
  volatile U_CMD_MAIN0X01 CMD_MAIN0x01; /*read and write*/
  volatile U_CMD_MAIN0X02 CMD_MAIN0x02; /*read and write*/
  volatile U_CMD_MAIN0X03 CMD_MAIN0x03; /*read and write*/
  volatile U_CMD_MAIN0X04 CMD_MAIN0x04; /*read and write*/
  volatile U_CMD_MAIN0X05 CMD_MAIN0x05; /*read and write*/
  volatile U_CMD_MAIN0X06 CMD_MAIN0x06; /*read and write*/
  volatile U_CMD_MAIN0X07 CMD_MAIN0x07; /*read and write*/
  volatile U_CMD_MAIN0X08 CMD_MAIN0x08; /*read and write*/
  volatile U_CMD_MAIN0X09 CMD_MAIN0x09; /*read and write*/
  volatile U_CMD_MAIN0X0A CMD_MAIN0x0a; /*read and write*/
  volatile U_CMD_MAIN0X0B CMD_MAIN0x0b; /*read and write*/
  volatile U_CMD_MAIN0X0C CMD_MAIN0x0c; /*read and write*/
  volatile U_CMD_MAIN0X0D CMD_MAIN0x0d; /*read and write*/
  volatile U_CMD_MAIN0X0E CMD_MAIN0x0e; /*read and write*/
  volatile U_CMD_MAIN0X0F CMD_MAIN0x0f; /*read and write*/
} S_CMD_MAIN_REGS_TYPE;

#endif
