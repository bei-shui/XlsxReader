#ifndef __CMD_MAIN_H__
#define __CMD_MAIN_H__

#include 


typedef struct
{

    /*0x00*/
    GK_U32    UPDATE_EN                      : 1   ; /* [0 ]      */
    GK_U32    UPDATE_FLAG                    : 3   ; /* [3 ..1 ]  */
    GK_U32    VERTICAL_FLIP                  : 1   ; /* [4 ]      */
    GK_U32    MAIN_SEL                       : 2   ; /* [6 ..5 ]  */
    GK_U32                                   : 25  ; /* [31..7 ]  */

    /*0x01*/
    GK_U32    STRIDE_LRS                     : 13  ; /* [12..0 ]  */
    GK_U32                                   : 3   ; /* [15..13]  */
    GK_U32    STRIDE_CRS                     : 13  ; /* [28..16]  */
    GK_U32                                   : 3   ; /* [31..29]  */

    /*0x02*/
    GK_U32    STRIDE_VDP                     : 13  ; /* [12..0 ]  */
    GK_U32                                   : 19  ; /* [31..13]  */

    /*0x03*/
    GK_U32    PIC_W_LRS                      : 13  ; /* [12..0 ]  */
    GK_U32                                   : 3   ; /* [15..13]  */
    GK_U32    PIC_H_LRS                      : 13  ; /* [28..16]  */
    GK_U32                                   : 3   ; /* [31..29]  */

    /*0x04*/
    GK_U32    PIC_W_CRS                      : 13  ; /* [12..0 ]  */
    GK_U32                                   : 3   ; /* [15..13]  */
    GK_U32    PIC_H_CRS                      : 13  ; /* [28..16]  */
    GK_U32                                   : 3   ; /* [31..29]  */

    /*0x05*/
    GK_U32    PIC_W_VDP                      : 13  ; /* [12..0 ]  */
    GK_U32                                   : 3   ; /* [15..13]  */
    GK_U32    PIC_H_VDP                      : 13  ; /* [28..16]  */
    GK_U32                                   : 3   ; /* [31..29]  */

    /*0x06*/
    GK_U32    BASE_CNFG                      : 32  ; /* [31..0 ]  */

    /*0x07*/
    GK_U32    BASE_LRS                       : 32  ; /* [31..0 ]  */

    /*0x08*/
    GK_U32    BASE_CRS                       : 32  ; /* [31..0 ]  */

    /*0x09*/
    GK_U32    BASE_VDP_Y                     : 32  ; /* [31..0 ]  */

    /*0x0a*/
    GK_U32    BASE_VDP_C                     : 32  ; /* [31..0 ]  */

    /*0x0b*/
    GK_U32    BASE_VDP_MV_R                  : 32  ; /* [31..0 ]  */

    /*0x0c*/
    GK_U32    BASE_VDP_MV_W                  : 32  ; /* [31..0 ]  */

    /*0x0d*/
    GK_U32    INFO_00                        : 32  ; /* [31..0 ]  */

    /*0x0e*/
    GK_U32    INFO_01                        : 32  ; /* [31..0 ]  */

    /*0x0f*/
    GK_U32    INFO_02                        : 32  ; /* [31..0 ]  */
} S_CMD_MAIN_REGS_TYPE;



#endif 

