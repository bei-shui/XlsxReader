#ifndef __SEC1_VIN_H__
#define __SEC1_VIN_H__

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
    GK_U32    cnfg_reg_input_mipi            : 1   ; /* [30]      */
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
    GK_U32                                   : 16  ; /* [31..16]  */

    /*0x0f*/
    GK_U32    cnfg_ipi_den_shield_cnt        : 16  ; /* [15..0 ]  */
    GK_U32    cnfg_ipi_vsync_shield_cnt      : 16  ; /* [31..16]  */

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

    /*0x18 ~ 0x19*/
    GK_U32                           reserved1[2];


    /*0x1a*/
    GK_U32    IRQ_MASK                       : 32  ; /* [31..0 ]  */

    /*0x1b*/
    GK_U32    IRQ_CLEAR                      : 32  ; /* [31..0 ]  */

    /*0x1c*/
    GK_U32    IRQ                            : 32  ; /* [31..0 ]  */

    /*0x1d ~ 0x1f*/
    GK_U32                           reserved2[3];


    /*0x20*/
    GK_U32    ipi_mode_qst                   : 25  ; /* [24..0 ]  */
    GK_U32                                   : 7   ; /* [31..25]  */

    /*0x21*/
    GK_U32    ipi_vcid_qst                   : 2   ; /* [1 ..0 ]  */
    GK_U32                                   : 14  ; /* [15..2 ]  */
    GK_U32    ipi_data_type_qst              : 9   ; /* [24..16]  */
    GK_U32                                   : 7   ; /* [31..25]  */

    /*0x22*/
    GK_U32    ipi_hsa_time_qst               : 12  ; /* [11..0 ]  */
    GK_U32                                   : 4   ; /* [15..12]  */
    GK_U32    ipi_hbp_time_qst               : 12  ; /* [27..16]  */
    GK_U32                                   : 4   ; /* [31..28]  */

    /*0x23*/
    GK_U32    ipi_hsd_time_qst               : 12  ; /* [11..0 ]  */
    GK_U32                                   : 4   ; /* [15..12]  */
    GK_U32    ipi_hline_time_qst             : 15  ; /* [30..16]  */
    GK_U32                                   : 1   ; /* [31]      */

    /*0x24*/
    GK_U32    ipi_adv_features_qst           : 25  ; /* [24..0 ]  */
    GK_U32                                   : 7   ; /* [31..25]  */

    /*0x25*/
    GK_U32    ipi_vsa_lines_qst              : 10  ; /* [9 ..0 ]  */
    GK_U32                                   : 6   ; /* [15..10]  */
    GK_U32    ipi_vbp_lines_qst              : 10  ; /* [25..16]  */
    GK_U32                                   : 6   ; /* [31..26]  */

    /*0x26*/
    GK_U32    ipi_vfp_lines_qst              : 10  ; /* [9 ..0 ]  */
    GK_U32                                   : 22  ; /* [31..10]  */

    /*0x27*/
    GK_U32    ipi_vactive_lines_qst          : 14  ; /* [13..0 ]  */
    GK_U32                                   : 18  ; /* [31..14]  */

    /*0x28*/
    GK_U32    ipi_mem_flush_qst              : 9   ; /* [8 ..0 ]  */
    GK_U32                                   : 23  ; /* [31..9 ]  */

    /*0x29*/
    GK_U32    ipi2_mode_qst                  : 25  ; /* [24..0 ]  */
    GK_U32                                   : 7   ; /* [31..25]  */

    /*0x2a*/
    GK_U32    ipi2_vcid_qst                  : 2   ; /* [1 ..0 ]  */
    GK_U32                                   : 14  ; /* [15..2 ]  */
    GK_U32    ipi2_data_type_qst             : 9   ; /* [24..16]  */
    GK_U32                                   : 7   ; /* [31..25]  */

    /*0x2b*/
    GK_U32    ipi2_hsa_time_qst              : 12  ; /* [11..0 ]  */
    GK_U32                                   : 4   ; /* [15..12]  */
    GK_U32    ipi2_hbp_time_qst              : 12  ; /* [27..16]  */
    GK_U32                                   : 4   ; /* [31..28]  */

    /*0x2c*/
    GK_U32    ipi2_hsd_time_qst              : 12  ; /* [11..0 ]  */
    GK_U32                                   : 4   ; /* [15..12]  */
    GK_U32    ipi2_hline_time_qst            : 15  ; /* [30..16]  */
    GK_U32                                   : 1   ; /* [31]      */

    /*0x2d*/
    GK_U32    ipi2_adv_features_qst          : 25  ; /* [24..0 ]  */
    GK_U32                                   : 7   ; /* [31..25]  */

    /*0x2e*/
    GK_U32    ipi2_vsa_lines_qst             : 10  ; /* [9 ..0 ]  */
    GK_U32                                   : 6   ; /* [15..10]  */
    GK_U32    ipi2_vbp_lines_qst             : 10  ; /* [25..16]  */
    GK_U32                                   : 6   ; /* [31..26]  */

    /*0x2f*/
    GK_U32    ipi2_vfp_lines_qst             : 10  ; /* [9 ..0 ]  */
    GK_U32                                   : 22  ; /* [31..10]  */

    /*0x30*/
    GK_U32    ipi2_vactive_lines_qst         : 14  ; /* [13..0 ]  */
    GK_U32                                   : 18  ; /* [31..14]  */

    /*0x31*/
    GK_U32    ipi2_mem_flush_qst             : 9   ; /* [8 ..0 ]  */
    GK_U32                                   : 23  ; /* [31..9 ]  */

    /*0x32*/
    GK_U32    ipi2_start_line                : 13  ; /* [12..0 ]  */
    GK_U32                                   : 19  ; /* [31..13]  */
} S_SEC1_VIN_REGS_TYPE;



#endif 

