#ifndef __SEC3_VIN_H__
#define __SEC3_VIN_H__

#include 


typedef struct
{

    /*0x00*/
    GK_U32    cnfg_reg_swreset               : 1   ; /* [0 ]      */
    GK_U32    cnfg_reg_enable                : 1   ; /* [1 ]      */
    GK_U32    cnfg_reg_win_en                : 1   ; /* [2 ]      */
    GK_U32    cnfg_reg_data_edge             : 1   ; /* [3 ]      */
    GK_U32    cnfg_reg_ext_sync_en           : 1   ; /* [4 ]      */
    GK_U32    cnfg_reg_int_sync_en           : 1   ; /* [5 ]      */
    GK_U32    cnfg_reg_emb                   : 1   ; /* [6 ]      */
    GK_U32    cnfg_reg_emb_mode              : 1   ; /* [7 ]      */
    GK_U32    cnfg_reg_emb_loc               : 2   ; /* [9 ..8 ]  */
    GK_U32    cnfg_reg_vs_pol                : 1   ; /* [10]      */
    GK_U32    cnfg_reg_hs_pol                : 1   ; /* [11]      */
    GK_U32    cnfg_reg_field_pol             : 1   ; /* [12]      */
    GK_U32    cnfg_reg_sony_field_mode       : 1   ; /* [13]      */
    GK_U32    cnfg_reg_emb_ecc               : 1   ; /* [14]      */
    GK_U32    cnfg_reg_hsync_mask            : 1   ; /* [15]      */
    GK_U32    cnfg_reg_input_mode            : 2   ; /* [17..16]  */
    GK_U32    cnfg_reg_input_width           : 1   ; /* [18]      */
    GK_U32    cnfg_reg_input_src             : 1   ; /* [19]      */
    GK_U32    cnfg_reg_input_type            : 1   ; /* [20]      */
    GK_U32    cnfg_reg_input_pxl_width       : 2   ; /* [22..21]  */
    GK_U32    cnfg_reg_input_yuv_mode        : 2   ; /* [24..23]  */
    GK_U32                                   : 4   ; /* [28..25]  */
    GK_U32    cnfg_reg_use_slvs_clock        : 1   ; /* [29]      */
    GK_U32                                   : 1   ; /* [30]      */
    GK_U32    cnfg_reg_bit_swap_en           : 1   ; /* [31]      */

    /*0x01*/
    GK_U32    cnfg_reg_status                : 16  ; /* [15..0 ]  */
    GK_U32    cnfg_reg_v_width               : 14  ; /* [29..16]  */
    GK_U32                                   : 1   ; /* [30]      */
    GK_U32    cnfg_reg_bit_swap_val          : 1   ; /* [31]      */

    /*0x02*/
    GK_U32    cnfg_reg_h_width               : 14  ; /* [13..0 ]  */
    GK_U32                                   : 2   ; /* [15..14]  */
    GK_U32    cnfg_reg_bit_swap_1            : 16  ; /* [31..16]  */

    /*0x03*/
    GK_U32    cnfg_reg_bit_swap_2            : 16  ; /* [15..0 ]  */
    GK_U32    cnfg_reg_v                     : 14  ; /* [29..16]  */
    GK_U32                                   : 2   ; /* [31..30]  */

    /*0x04*/
    GK_U32    cnfg_reg_h                     : 14  ; /* [13..0 ]  */
    GK_U32                                   : 2   ; /* [15..14]  */
    GK_U32    cnfg_reg_min_v                 : 14  ; /* [29..16]  */
    GK_U32                                   : 2   ; /* [31..30]  */

    /*0x05*/
    GK_U32    cnfg_reg_min_h                 : 14  ; /* [13..0 ]  */
    GK_U32                                   : 1   ; /* [14]      */
    GK_U32    cnfg_reg_trig0_en              : 1   ; /* [15]      */
    GK_U32    cnfg_reg_trig0_start           : 14  ; /* [29..16]  */
    GK_U32    cnfg_reg_trig0_pol             : 1   ; /* [30]      */
    GK_U32                                   : 1   ; /* [31]      */

    /*0x06*/
    GK_U32    cnfg_reg_trig0_end             : 14  ; /* [13..0 ]  */
    GK_U32                                   : 1   ; /* [14]      */
    GK_U32    cnfg_reg_trig1_en              : 1   ; /* [15]      */
    GK_U32    cnfg_reg_trig1_start           : 14  ; /* [29..16]  */
    GK_U32    cnfg_reg_trig1_pol             : 1   ; /* [30]      */
    GK_U32                                   : 1   ; /* [31]      */

    /*0x07*/
    GK_U32    cnfg_reg_trig1_end             : 14  ; /* [13..0 ]  */
    GK_U32                                   : 2   ; /* [15..14]  */
    GK_U32    cnfg_reg_vout0_start           : 14  ; /* [29..16]  */
    GK_U32                                   : 1   ; /* [30]      */
    GK_U32    cnfg_reg_vout0_fen_1           : 1   ; /* [31]      */

    /*0x08*/
    GK_U32    cnfg_reg_vout1_start           : 14  ; /* [13..0 ]  */
    GK_U32                                   : 1   ; /* [14]      */
    GK_U32    cnfg_reg_vout1_fen_1           : 1   ; /* [15]      */
    GK_U32    cnfg_reg_win_sv                : 14  ; /* [29..16]  */
    GK_U32                                   : 2   ; /* [31..30]  */

    /*0x09*/
    GK_U32    cnfg_reg_win_sh                : 14  ; /* [13..0 ]  */
    GK_U32                                   : 2   ; /* [15..14]  */
    GK_U32    cnfg_reg_win_ev                : 14  ; /* [29..16]  */
    GK_U32                                   : 2   ; /* [31..30]  */

    /*0x0a*/
    GK_U32    cnfg_reg_win_eh                : 14  ; /* [13..0 ]  */
    GK_U32                                   : 2   ; /* [15..14]  */
    GK_U32    cnfg_reg_blank_length_h        : 14  ; /* [29..16]  */
    GK_U32                                   : 2   ; /* [31..30]  */

    /*0x0b*/
    GK_U32    cnfg_reg_timeout_vl            : 16  ; /* [15..0 ]  */
    GK_U32    cnfg_reg_timeout_vh            : 16  ; /* [31..16]  */

    /*0x0c*/
    GK_U32    cnfg_reg_timeouth_hl           : 16  ; /* [15..0 ]  */
    GK_U32    cnfg_reg_timeout_hh            : 16  ; /* [31..16]  */

    /*0xd*/
    GK_U32                           reserved0[1];


    /*0x0e*/
    GK_U32    cnfg_reg_bit_swap_3            : 16  ; /* [15..0 ]  */
    GK_U32    cnfg_reg_bit_swap_4            : 16  ; /* [31..16]  */

    /*0xf*/
    GK_U32                           reserved1[1];


    /*0x10*/
    GK_U32    cnfg_tpg_en                    : 1   ; /* [0 ]      */
    GK_U32    cnfg_tpg_srst                  : 1   ; /* [1 ]      */
    GK_U32    cnfg_tpg_start                 : 1   ; /* [2 ]      */
    GK_U32                                   : 13  ; /* [15..3 ]  */
    GK_U32    cnfg_tpg_pat_num               : 4   ; /* [19..16]  */
    GK_U32    cnfg_tpg_img_num               : 4   ; /* [23..20]  */
    GK_U32    cnfg_tpg_cfa_pat               : 2   ; /* [25..24]  */
    GK_U32    cnfg_tpg_pix_wid               : 2   ; /* [27..26]  */
    GK_U32    cnfg_tpg_def_sync              : 1   ; /* [28]      */
    GK_U32    cnfg_tpg_max_sync              : 1   ; /* [29]      */
    GK_U32                                   : 2   ; /* [31..30]  */

    /*0x11*/
    GK_U32    cnfg_tpg_vs_width              : 12  ; /* [11..0 ]  */
    GK_U32                                   : 4   ; /* [15..12]  */
    GK_U32    cnfg_tpg_hs_width              : 12  ; /* [27..16]  */
    GK_U32                                   : 4   ; /* [31..28]  */

    /*0x12*/
    GK_U32    cnfg_tpg_vtotal                : 12  ; /* [11..0 ]  */
    GK_U32                                   : 4   ; /* [15..12]  */
    GK_U32    cnfg_tpg_htotal                : 12  ; /* [27..16]  */
    GK_U32                                   : 4   ; /* [31..28]  */

    /*0x13*/
    GK_U32    cnfg_tpg_v_act                 : 12  ; /* [11..0 ]  */
    GK_U32                                   : 4   ; /* [15..12]  */
    GK_U32    cnfg_tpg_h_act                 : 12  ; /* [27..16]  */
    GK_U32                                   : 4   ; /* [31..28]  */

    /*0x14*/
    GK_U32    cnfg_tpg_fp_v                  : 12  ; /* [11..0 ]  */
    GK_U32                                   : 4   ; /* [15..12]  */
    GK_U32    cnfg_tpg_bp_v                  : 12  ; /* [27..16]  */
    GK_U32                                   : 4   ; /* [31..28]  */

    /*0x15*/
    GK_U32    cnfg_tpg_fp_h                  : 12  ; /* [11..0 ]  */
    GK_U32                                   : 4   ; /* [15..12]  */
    GK_U32    cnfg_tpg_bp_h                  : 12  ; /* [27..16]  */
    GK_U32                                   : 4   ; /* [31..28]  */

    /*0x16*/
    GK_U32    cnfg_tpg_init_vs_cnt           : 16  ; /* [15..0 ]  */
    GK_U32                                   : 16  ; /* [31..16]  */

    /*0x17*/
    GK_U32    sensor_vs_cnt                  : 16  ; /* [15..0 ]  */
    GK_U32    vin_vs_cnt                     : 16  ; /* [31..16]  */
} S_SEC3_VIN_REGS_TYPE;



#endif 

