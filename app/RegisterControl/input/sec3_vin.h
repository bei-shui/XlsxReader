//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  sec3_vin.h
// Version       :  1.0
// Date          :  2020-5-19
// Description   :
// History       :  2020-5-19 Create file
// Author        :  beishui
//******************************************************************************

#ifndef __SEC3_VIN_H__
#define __SEC3_VIN_H__

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_swreset : 1;         /*read and write  [0 ]      */
    unsigned int cnfg_reg_enable : 1;          /*read and write  [1 ]      */
    unsigned int cnfg_reg_win_en : 1;          /*read and write  [2 ]      */
    unsigned int cnfg_reg_data_edge : 1;       /*read and write  [3 ]      */
    unsigned int cnfg_reg_ext_sync_en : 1;     /*read and write  [4 ]      */
    unsigned int cnfg_reg_int_sync_en : 1;     /*read and write  [5 ]      */
    unsigned int cnfg_reg_emb : 1;             /*read and write  [6 ]      */
    unsigned int cnfg_reg_emb_mode : 1;        /*read and write  [7 ]      */
    unsigned int cnfg_reg_emb_loc : 2;         /*read and write  [9 ..8 ]  */
    unsigned int cnfg_reg_vs_pol : 1;          /*read and write  [10]      */
    unsigned int cnfg_reg_hs_pol : 1;          /*read and write  [11]      */
    unsigned int cnfg_reg_field_pol : 1;       /*read and write  [12]      */
    unsigned int cnfg_reg_sony_field_mode : 1; /*read and write  [13]      */
    unsigned int cnfg_reg_emb_ecc : 1;         /*read and write  [14]      */
    unsigned int cnfg_reg_hsync_mask : 1;      /*read and write  [15]      */
    unsigned int cnfg_reg_input_mode : 2;      /*read and write  [17..16]  */
    unsigned int cnfg_reg_input_width : 1;     /*read and write  [18]      */
    unsigned int cnfg_reg_input_src : 1;       /*read and write  [19]      */
    unsigned int cnfg_reg_input_type : 1;      /*read and write  [20]      */
    unsigned int cnfg_reg_input_pxl_width : 2; /*read and write  [22..21]  */
    unsigned int cnfg_reg_input_yuv_mode : 2;  /*read and write  [24..23]  */
    unsigned int reserved0 : 4;                /*read and write  [28..25]  */
    unsigned int cnfg_reg_use_slvs_clock : 1;  /*read and write  [29]      */
    unsigned int reserved1 : 1;                /*read and write  [30]      */
    unsigned int cnfg_reg_bit_swap_en : 1;     /*read and write  [31]      */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X00;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_status : 16;      /*read only       [15..0 ]  */
    unsigned int cnfg_reg_v_width : 14;     /*read and write  [29..16]  */
    unsigned int reserved0 : 1;             /*read and write  [30]      */
    unsigned int cnfg_reg_bit_swap_val : 1; /*read and write  [31]      */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X01;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_h_width : 14;    /*read and write  [13..0 ]  */
    unsigned int reserved0 : 2;            /*read and write  [15..14]  */
    unsigned int cnfg_reg_bit_swap_1 : 16; /*read and write  [31..16]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X02;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_bit_swap_2 : 16; /*read and write  [15..0 ]  */
    unsigned int cnfg_reg_v : 14;          /*read and write  [29..16]  */
    unsigned int reserved0 : 2;            /*read and write  [31..30]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X03;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_h : 14;     /*read and write  [13..0 ]  */
    unsigned int reserved0 : 2;       /*read and write  [15..14]  */
    unsigned int cnfg_reg_min_v : 14; /*read and write  [29..16]  */
    unsigned int reserved1 : 2;       /*read and write  [31..30]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X04;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_min_h : 14;       /*read and write  [13..0 ]  */
    unsigned int reserved0 : 1;             /*read and write  [14]      */
    unsigned int cnfg_reg_trig0_en : 1;     /*read and write  [15]      */
    unsigned int cnfg_reg_trig0_start : 14; /*read and write  [29..16]  */
    unsigned int cnfg_reg_trig0_pol : 1;    /*read and write  [30]      */
    unsigned int reserved1 : 1;             /*read and write  [31]      */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X05;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_trig0_end : 14;   /*read and write  [13..0 ]  */
    unsigned int reserved0 : 1;             /*read and write  [14]      */
    unsigned int cnfg_reg_trig1_en : 1;     /*read and write  [15]      */
    unsigned int cnfg_reg_trig1_start : 14; /*read and write  [29..16]  */
    unsigned int cnfg_reg_trig1_pol : 1;    /*read and write  [30]      */
    unsigned int reserved1 : 1;             /*read and write  [31]      */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X06;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_trig1_end : 14;   /*read and write  [13..0 ]  */
    unsigned int reserved0 : 2;             /*read and write  [15..14]  */
    unsigned int cnfg_reg_vout0_start : 14; /*read and write  [29..16]  */
    unsigned int reserved1 : 1;             /*read and write  [30]      */
    unsigned int cnfg_reg_vout0_fen_1 : 1;  /*read and write  [31]      */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X07;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_vout1_start : 14; /*read and write  [13..0 ]  */
    unsigned int reserved0 : 1;             /*read and write  [14]      */
    unsigned int cnfg_reg_vout1_fen_1 : 1;  /*read and write  [15]      */
    unsigned int cnfg_reg_win_sv : 14;      /*read and write  [29..16]  */
    unsigned int reserved1 : 2;             /*read and write  [31..30]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X08;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_win_sh : 14; /*read and write  [13..0 ]  */
    unsigned int reserved0 : 2;        /*read and write  [15..14]  */
    unsigned int cnfg_reg_win_ev : 14; /*read and write  [29..16]  */
    unsigned int reserved1 : 2;        /*read and write  [31..30]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X09;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_win_eh : 14;         /*read and write  [13..0 ]  */
    unsigned int reserved0 : 2;                /*read and write  [15..14]  */
    unsigned int cnfg_reg_blank_length_h : 14; /*read and write  [29..16]  */
    unsigned int reserved1 : 2;                /*read and write  [31..30]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X0A;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_timeout_vl : 16; /*read and write  [15..0 ]  */
    unsigned int cnfg_reg_timeout_vh : 16; /*read and write  [31..16]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X0B;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_timeouth_hl : 16; /*read and write  [15..0 ]  */
    unsigned int cnfg_reg_timeout_hh : 16;  /*read and write  [31..16]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X0C;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_reg_bit_swap_3 : 16; /*read and write  [15..0 ]  */
    unsigned int cnfg_reg_bit_swap_4 : 16; /*read and write  [31..16]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X0E;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_tpg_en : 1;       /*read and write  [0 ]      */
    unsigned int cnfg_tpg_srst : 1;     /*read and write  [1 ]      */
    unsigned int cnfg_tpg_start : 1;    /*read and write  [2 ]      */
    unsigned int reserved0 : 13;        /*read and write  [15..3 ]  */
    unsigned int cnfg_tpg_pat_num : 4;  /*read and write  [19..16]  */
    unsigned int cnfg_tpg_img_num : 4;  /*read and write  [23..20]  */
    unsigned int cnfg_tpg_cfa_pat : 2;  /*read and write  [25..24]  */
    unsigned int cnfg_tpg_pix_wid : 2;  /*read and write  [27..26]  */
    unsigned int cnfg_tpg_def_sync : 1; /*read and write  [28]      */
    unsigned int cnfg_tpg_max_sync : 1; /*read and write  [29]      */
    unsigned int reserved1 : 2;         /*read and write  [31..30]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X10;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_tpg_vs_width : 12; /*read and write  [11..0 ]  */
    unsigned int reserved0 : 4;          /*read and write  [15..12]  */
    unsigned int cnfg_tpg_hs_width : 12; /*read and write  [27..16]  */
    unsigned int reserved1 : 4;          /*read and write  [31..28]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X11;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_tpg_vtotal : 12; /*read and write  [11..0 ]  */
    unsigned int reserved0 : 4;        /*read and write  [15..12]  */
    unsigned int cnfg_tpg_htotal : 12; /*read and write  [27..16]  */
    unsigned int reserved1 : 4;        /*read and write  [31..28]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X12;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_tpg_v_act : 12; /*read and write  [11..0 ]  */
    unsigned int reserved0 : 4;       /*read and write  [15..12]  */
    unsigned int cnfg_tpg_h_act : 12; /*read and write  [27..16]  */
    unsigned int reserved1 : 4;       /*read and write  [31..28]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X13;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_tpg_fp_v : 12; /*read and write  [11..0 ]  */
    unsigned int reserved0 : 4;      /*read and write  [15..12]  */
    unsigned int cnfg_tpg_bp_v : 12; /*read and write  [27..16]  */
    unsigned int reserved1 : 4;      /*read and write  [31..28]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X14;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_tpg_fp_h : 12; /*read and write  [11..0 ]  */
    unsigned int reserved0 : 4;      /*read and write  [15..12]  */
    unsigned int cnfg_tpg_bp_h : 12; /*read and write  [27..16]  */
    unsigned int reserved1 : 4;      /*read and write  [31..28]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X15;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int cnfg_tpg_init_vs_cnt : 16; /*read and write  [15..0 ]  */
    unsigned int reserved0 : 16;            /*read and write  [31..16]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X16;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int sensor_vs_cnt : 16; /*read only       [15..0 ]  */
    unsigned int vin_vs_cnt : 16;    /*read only       [31..16]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X17;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int irq_mask : 32; /*read and write  [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X1A;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int irq_clear : 32; /*read and write  [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X1B;

typedef union
{
  /* Define the struct bits */
  struct
  {
    unsigned int irq : 32; /*read only       [31..0 ]  */
  } bits;
  /* Define an unsigned member */
  unsigned int u32;
} U_SEC3_VIN0X1C;

typedef struct
{
  volatile U_SEC3_VIN0X00 SEC3_VIN0x00; /*read and write*/
  volatile U_SEC3_VIN0X01 SEC3_VIN0x01; /*read only     */
  volatile U_SEC3_VIN0X02 SEC3_VIN0x02; /*read and write*/
  volatile U_SEC3_VIN0X03 SEC3_VIN0x03; /*read and write*/
  volatile U_SEC3_VIN0X04 SEC3_VIN0x04; /*read and write*/
  volatile U_SEC3_VIN0X05 SEC3_VIN0x05; /*read and write*/
  volatile U_SEC3_VIN0X06 SEC3_VIN0x06; /*read and write*/
  volatile U_SEC3_VIN0X07 SEC3_VIN0x07; /*read and write*/
  volatile U_SEC3_VIN0X08 SEC3_VIN0x08; /*read and write*/
  volatile U_SEC3_VIN0X09 SEC3_VIN0x09; /*read and write*/
  volatile U_SEC3_VIN0X0A SEC3_VIN0x0a; /*read and write*/
  volatile U_SEC3_VIN0X0B SEC3_VIN0x0b; /*read and write*/
  volatile U_SEC3_VIN0X0C SEC3_VIN0x0c; /*read and write*/
  volatile unsigned int reserved0[1];
  volatile U_SEC3_VIN0X0E SEC3_VIN0x0e; /*read and write*/
  volatile unsigned int reserved1[1];
  volatile U_SEC3_VIN0X10 SEC3_VIN0x10; /*read and write*/
  volatile U_SEC3_VIN0X11 SEC3_VIN0x11; /*read and write*/
  volatile U_SEC3_VIN0X12 SEC3_VIN0x12; /*read and write*/
  volatile U_SEC3_VIN0X13 SEC3_VIN0x13; /*read and write*/
  volatile U_SEC3_VIN0X14 SEC3_VIN0x14; /*read and write*/
  volatile U_SEC3_VIN0X15 SEC3_VIN0x15; /*read and write*/
  volatile U_SEC3_VIN0X16 SEC3_VIN0x16; /*read and write*/
  volatile U_SEC3_VIN0X17 SEC3_VIN0x17; /*read only     */
  volatile unsigned int reserved2[2];
  volatile U_SEC3_VIN0X1A SEC3_VIN0x1a; /*read and write*/
  volatile U_SEC3_VIN0X1B SEC3_VIN0x1b; /*read and write*/
  volatile U_SEC3_VIN0X1C SEC3_VIN0x1c; /*read only     */
} S_SEC3_VIN_REGS_TYPE;

#endif
