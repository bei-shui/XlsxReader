#ifndef __CMD_VIN1_H__
#define __CMD_VIN1_H__

#include 


typedef struct
{

    /*0x00*/
    GK_U32    CMD_UPDATE_EN                  : 1   ; /* [0 ]      */
    GK_U32    CMD_VIN_EXT_DATA               : 1   ; /* [1 ]      */
    GK_U32    CMD_YUVMODE                    : 3   ; /* [4 ..2 ]  */
    GK_U32    CMD_VIN_W_BOUND_EN             : 1   ; /* [5 ]      */
    GK_U32    CMD_LINESYNC_TH                : 7   ; /* [12..6 ]  */
    GK_U32    CMD_STRIDE                     : 13  ; /* [25..13]  */
    GK_U32                                   : 6   ; /* [31..26]  */

    /*0x01*/
    GK_U32    CMD_PIC_W                      : 13  ; /* [12..0 ]  */
    GK_U32    CMD_PIC_H                      : 13  ; /* [25..13]  */
    GK_U32    CMD_PIXWIDTH                   : 2   ; /* [27..26]  */
    GK_U32    CMD_DWIDTH                     : 2   ; /* [29..28]  */
    GK_U32    CMD_VERFLIP                    : 1   ; /* [30]      */
    GK_U32                                   : 1   ; /* [31]      */

    /*0x02*/
    GK_U32    CMD_VIN_W_ST                   : 13  ; /* [12..0 ]  */
    GK_U32    CMD_VIN_BOUND                  : 13  ; /* [25..13]  */
    GK_U32                                   : 6   ; /* [31..26]  */

    /*0x03*/
    GK_U32    CMD_CNFG_REG_NUM               : 16  ; /* [15..0 ]  */
    GK_U32                                   : 16  ; /* [31..16]  */

    /*0x04*/
    GK_U32    CMD_CNFG_REG_ADDR              : 32  ; /* [31..0 ]  */

    /*0x05*/
    GK_U32    CMD_EXT_Y_ADDR                 : 32  ; /* [31..0 ]  */

    /*0x06*/
    GK_U32    CMD_EXT_C_ADDR                 : 32  ; /* [31..0 ]  */
    GK_U32    CMD_PIC_SIZE_W                 : 26  ; /* [25..0 ]  */
    GK_U32                                   : 6   ; /* [31..26]  */
} S_CMD_VIN1_REGS_TYPE;



#endif 

