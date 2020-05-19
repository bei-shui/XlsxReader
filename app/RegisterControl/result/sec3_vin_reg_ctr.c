//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  ../result/sec3_vin_reg_ctr.c
// Version       :  1.0
// Date          :  2020-5-19
// Description   :  
// History       :  2020-5-19 Create file
// Author        :  beishui
//******************************************************************************

#include "gk_type.h"
#ifndef GK_INLINE
#define GK_INLINE 1
#endif
#if GK_INLINE==0

#include "sec3_vin.h"
#include "../result/sec3_vin_reg_ctr.h"

GK_VOID SEC3_VIN_DRV_SET_CnfgRegSwreset(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_swreset = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegSwreset: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegSwreset(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegSwreset: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_swreset;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegEnable(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_enable = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegEnable: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegEnable(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegEnable: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_enable;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegWinEn(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_win_en = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegWinEn: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegWinEn(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegWinEn: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_win_en;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegDataEdge(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_data_edge = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegDataEdge: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegDataEdge(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegDataEdge: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_data_edge;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegExtSyncEn(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_ext_sync_en = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegExtSyncEn: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegExtSyncEn(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegExtSyncEn: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_ext_sync_en;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegIntSyncEn(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_int_sync_en = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegIntSyncEn: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegIntSyncEn(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegIntSyncEn: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_int_sync_en;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegEmb(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_emb = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegEmb: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegEmb(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegEmb: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_emb;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegEmbMode(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_emb_mode = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegEmbMode: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegEmbMode(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegEmbMode: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_emb_mode;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegEmbLoc(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_emb_loc = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegEmbLoc: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegEmbLoc(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegEmbLoc: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_emb_loc;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegVsPol(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_vs_pol = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegVsPol: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegVsPol(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegVsPol: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_vs_pol;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegHsPol(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_hs_pol = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegHsPol: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegHsPol(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegHsPol: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_hs_pol;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegFieldPol(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_field_pol = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegFieldPol: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegFieldPol(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegFieldPol: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_field_pol;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegSonyFieldMode(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_sony_field_mode = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegSonyFieldMode: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegSonyFieldMode(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegSonyFieldMode: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_sony_field_mode;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegEmbEcc(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_emb_ecc = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegEmbEcc: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegEmbEcc(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegEmbEcc: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_emb_ecc;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegHsyncMask(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_hsync_mask = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegHsyncMask: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegHsyncMask(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegHsyncMask: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_hsync_mask;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegInputMode(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_input_mode = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegInputMode: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegInputMode(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegInputMode: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_input_mode;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegInputWidth(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_input_width = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegInputWidth: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegInputWidth(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegInputWidth: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_input_width;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegInputSrc(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_input_src = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegInputSrc: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegInputSrc(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegInputSrc: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_input_src;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegInputType(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_input_type = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegInputType: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegInputType(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegInputType: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_input_type;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegInputPxlWidth(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_input_pxl_width = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegInputPxlWidth: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegInputPxlWidth(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegInputPxlWidth: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_input_pxl_width;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegInputYuvMode(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_input_yuv_mode = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegInputYuvMode: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegInputYuvMode(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegInputYuvMode: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_input_yuv_mode;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegUseSlvsClock(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_use_slvs_clock = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegUseSlvsClock: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegUseSlvsClock(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegUseSlvsClock: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_use_slvs_clock;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegBitSwapEn(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;
    stData.bits.cnfg_reg_bit_swap_en = uData;
    pstRegs->SEC3_VIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegBitSwapEn: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegBitSwapEn(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegBitSwapEn: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_bit_swap_en;
}


GK_U32 SEC3_VIN_DRV_GET_CnfgRegStatus(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X01 stData;
    stData.u32 = pstRegs->SEC3_VIN0x01.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegStatus: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_status;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegVWidth(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X01 stData;
    stData.u32 = pstRegs->SEC3_VIN0x01.u32;
    stData.bits.cnfg_reg_v_width = uData;
    pstRegs->SEC3_VIN0x01.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegVWidth: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegVWidth(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X01 stData;
    stData.u32 = pstRegs->SEC3_VIN0x01.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegVWidth: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_v_width;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegBitSwapVal(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X01 stData;
    stData.u32 = pstRegs->SEC3_VIN0x01.u32;
    stData.bits.cnfg_reg_bit_swap_val = uData;
    pstRegs->SEC3_VIN0x01.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegBitSwapVal: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegBitSwapVal(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X01 stData;
    stData.u32 = pstRegs->SEC3_VIN0x01.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegBitSwapVal: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_bit_swap_val;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegHWidth(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X02 stData;
    stData.u32 = pstRegs->SEC3_VIN0x02.u32;
    stData.bits.cnfg_reg_h_width = uData;
    pstRegs->SEC3_VIN0x02.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegHWidth: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegHWidth(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X02 stData;
    stData.u32 = pstRegs->SEC3_VIN0x02.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegHWidth: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_h_width;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegBitSwap1(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_SEC3_VIN0X02 stData;
    stData.u32 = pstRegs->SEC3_VIN0x02.u32;
    stData.bits.cnfg_reg_bit_swap_1 = uData;
    pstRegs->SEC3_VIN0x02.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegBitSwap1: 0x%08x", stData.u32);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_CnfgRegBitSwap1(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X02 stData;
    stData.u32 = pstRegs->SEC3_VIN0x02.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegBitSwap1: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_bit_swap_1;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegBitSwap2(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_SEC3_VIN0X03 stData;
    stData.u32 = pstRegs->SEC3_VIN0x03.u32;
    stData.bits.cnfg_reg_bit_swap_2 = uData;
    pstRegs->SEC3_VIN0x03.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegBitSwap2: 0x%08x", stData.u32);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_CnfgRegBitSwap2(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X03 stData;
    stData.u32 = pstRegs->SEC3_VIN0x03.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegBitSwap2: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_bit_swap_2;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegV(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X03 stData;
    stData.u32 = pstRegs->SEC3_VIN0x03.u32;
    stData.bits.cnfg_reg_v = uData;
    pstRegs->SEC3_VIN0x03.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegV: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegV(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X03 stData;
    stData.u32 = pstRegs->SEC3_VIN0x03.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegV: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_v;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegH(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X04 stData;
    stData.u32 = pstRegs->SEC3_VIN0x04.u32;
    stData.bits.cnfg_reg_h = uData;
    pstRegs->SEC3_VIN0x04.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegH: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegH(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X04 stData;
    stData.u32 = pstRegs->SEC3_VIN0x04.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegH: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_h;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegMinV(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X04 stData;
    stData.u32 = pstRegs->SEC3_VIN0x04.u32;
    stData.bits.cnfg_reg_min_v = uData;
    pstRegs->SEC3_VIN0x04.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegMinV: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegMinV(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X04 stData;
    stData.u32 = pstRegs->SEC3_VIN0x04.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegMinV: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_min_v;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegMinH(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X05 stData;
    stData.u32 = pstRegs->SEC3_VIN0x05.u32;
    stData.bits.cnfg_reg_min_h = uData;
    pstRegs->SEC3_VIN0x05.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegMinH: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegMinH(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X05 stData;
    stData.u32 = pstRegs->SEC3_VIN0x05.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegMinH: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_min_h;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegTrig0En(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X05 stData;
    stData.u32 = pstRegs->SEC3_VIN0x05.u32;
    stData.bits.cnfg_reg_trig0_en = uData;
    pstRegs->SEC3_VIN0x05.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegTrig0En: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegTrig0En(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X05 stData;
    stData.u32 = pstRegs->SEC3_VIN0x05.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegTrig0En: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_trig0_en;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegTrig0Start(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X05 stData;
    stData.u32 = pstRegs->SEC3_VIN0x05.u32;
    stData.bits.cnfg_reg_trig0_start = uData;
    pstRegs->SEC3_VIN0x05.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegTrig0Start: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegTrig0Start(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X05 stData;
    stData.u32 = pstRegs->SEC3_VIN0x05.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegTrig0Start: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_trig0_start;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegTrig0Pol(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X05 stData;
    stData.u32 = pstRegs->SEC3_VIN0x05.u32;
    stData.bits.cnfg_reg_trig0_pol = uData;
    pstRegs->SEC3_VIN0x05.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegTrig0Pol: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegTrig0Pol(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X05 stData;
    stData.u32 = pstRegs->SEC3_VIN0x05.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegTrig0Pol: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_trig0_pol;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegTrig0End(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X06 stData;
    stData.u32 = pstRegs->SEC3_VIN0x06.u32;
    stData.bits.cnfg_reg_trig0_end = uData;
    pstRegs->SEC3_VIN0x06.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegTrig0End: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegTrig0End(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X06 stData;
    stData.u32 = pstRegs->SEC3_VIN0x06.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegTrig0End: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_trig0_end;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegTrig1En(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X06 stData;
    stData.u32 = pstRegs->SEC3_VIN0x06.u32;
    stData.bits.cnfg_reg_trig1_en = uData;
    pstRegs->SEC3_VIN0x06.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegTrig1En: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegTrig1En(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X06 stData;
    stData.u32 = pstRegs->SEC3_VIN0x06.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegTrig1En: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_trig1_en;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegTrig1Start(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X06 stData;
    stData.u32 = pstRegs->SEC3_VIN0x06.u32;
    stData.bits.cnfg_reg_trig1_start = uData;
    pstRegs->SEC3_VIN0x06.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegTrig1Start: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegTrig1Start(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X06 stData;
    stData.u32 = pstRegs->SEC3_VIN0x06.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegTrig1Start: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_trig1_start;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegTrig1Pol(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X06 stData;
    stData.u32 = pstRegs->SEC3_VIN0x06.u32;
    stData.bits.cnfg_reg_trig1_pol = uData;
    pstRegs->SEC3_VIN0x06.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegTrig1Pol: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegTrig1Pol(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X06 stData;
    stData.u32 = pstRegs->SEC3_VIN0x06.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegTrig1Pol: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_trig1_pol;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegTrig1End(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X07 stData;
    stData.u32 = pstRegs->SEC3_VIN0x07.u32;
    stData.bits.cnfg_reg_trig1_end = uData;
    pstRegs->SEC3_VIN0x07.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegTrig1End: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegTrig1End(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X07 stData;
    stData.u32 = pstRegs->SEC3_VIN0x07.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegTrig1End: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_trig1_end;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegVout0Start(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X07 stData;
    stData.u32 = pstRegs->SEC3_VIN0x07.u32;
    stData.bits.cnfg_reg_vout0_start = uData;
    pstRegs->SEC3_VIN0x07.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegVout0Start: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegVout0Start(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X07 stData;
    stData.u32 = pstRegs->SEC3_VIN0x07.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegVout0Start: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_vout0_start;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegVout0Fen1(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X07 stData;
    stData.u32 = pstRegs->SEC3_VIN0x07.u32;
    stData.bits.cnfg_reg_vout0_fen_1 = uData;
    pstRegs->SEC3_VIN0x07.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegVout0Fen1: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegVout0Fen1(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X07 stData;
    stData.u32 = pstRegs->SEC3_VIN0x07.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegVout0Fen1: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_vout0_fen_1;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegVout1Start(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X08 stData;
    stData.u32 = pstRegs->SEC3_VIN0x08.u32;
    stData.bits.cnfg_reg_vout1_start = uData;
    pstRegs->SEC3_VIN0x08.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegVout1Start: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegVout1Start(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X08 stData;
    stData.u32 = pstRegs->SEC3_VIN0x08.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegVout1Start: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_vout1_start;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegVout1Fen1(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X08 stData;
    stData.u32 = pstRegs->SEC3_VIN0x08.u32;
    stData.bits.cnfg_reg_vout1_fen_1 = uData;
    pstRegs->SEC3_VIN0x08.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegVout1Fen1: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgRegVout1Fen1(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X08 stData;
    stData.u32 = pstRegs->SEC3_VIN0x08.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegVout1Fen1: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_vout1_fen_1;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegWinSv(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X08 stData;
    stData.u32 = pstRegs->SEC3_VIN0x08.u32;
    stData.bits.cnfg_reg_win_sv = uData;
    pstRegs->SEC3_VIN0x08.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegWinSv: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegWinSv(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X08 stData;
    stData.u32 = pstRegs->SEC3_VIN0x08.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegWinSv: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_win_sv;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegWinSh(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X09 stData;
    stData.u32 = pstRegs->SEC3_VIN0x09.u32;
    stData.bits.cnfg_reg_win_sh = uData;
    pstRegs->SEC3_VIN0x09.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegWinSh: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegWinSh(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X09 stData;
    stData.u32 = pstRegs->SEC3_VIN0x09.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegWinSh: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_win_sh;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegWinEv(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X09 stData;
    stData.u32 = pstRegs->SEC3_VIN0x09.u32;
    stData.bits.cnfg_reg_win_ev = uData;
    pstRegs->SEC3_VIN0x09.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegWinEv: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegWinEv(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X09 stData;
    stData.u32 = pstRegs->SEC3_VIN0x09.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegWinEv: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_win_ev;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegWinEh(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X0A stData;
    stData.u32 = pstRegs->SEC3_VIN0x0a.u32;
    stData.bits.cnfg_reg_win_eh = uData;
    pstRegs->SEC3_VIN0x0a.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegWinEh: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegWinEh(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X0A stData;
    stData.u32 = pstRegs->SEC3_VIN0x0a.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegWinEh: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_win_eh;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegBlankLengthH(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X0A stData;
    stData.u32 = pstRegs->SEC3_VIN0x0a.u32;
    stData.bits.cnfg_reg_blank_length_h = uData;
    pstRegs->SEC3_VIN0x0a.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegBlankLengthH: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgRegBlankLengthH(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X0A stData;
    stData.u32 = pstRegs->SEC3_VIN0x0a.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegBlankLengthH: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_blank_length_h;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegTimeoutVl(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_SEC3_VIN0X0B stData;
    stData.u32 = pstRegs->SEC3_VIN0x0b.u32;
    stData.bits.cnfg_reg_timeout_vl = uData;
    pstRegs->SEC3_VIN0x0b.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegTimeoutVl: 0x%08x", stData.u32);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_CnfgRegTimeoutVl(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X0B stData;
    stData.u32 = pstRegs->SEC3_VIN0x0b.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegTimeoutVl: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_timeout_vl;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegTimeoutVh(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_SEC3_VIN0X0B stData;
    stData.u32 = pstRegs->SEC3_VIN0x0b.u32;
    stData.bits.cnfg_reg_timeout_vh = uData;
    pstRegs->SEC3_VIN0x0b.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegTimeoutVh: 0x%08x", stData.u32);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_CnfgRegTimeoutVh(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X0B stData;
    stData.u32 = pstRegs->SEC3_VIN0x0b.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegTimeoutVh: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_timeout_vh;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegTimeouthHl(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_SEC3_VIN0X0C stData;
    stData.u32 = pstRegs->SEC3_VIN0x0c.u32;
    stData.bits.cnfg_reg_timeouth_hl = uData;
    pstRegs->SEC3_VIN0x0c.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegTimeouthHl: 0x%08x", stData.u32);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_CnfgRegTimeouthHl(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X0C stData;
    stData.u32 = pstRegs->SEC3_VIN0x0c.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegTimeouthHl: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_timeouth_hl;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegTimeoutHh(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_SEC3_VIN0X0C stData;
    stData.u32 = pstRegs->SEC3_VIN0x0c.u32;
    stData.bits.cnfg_reg_timeout_hh = uData;
    pstRegs->SEC3_VIN0x0c.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegTimeoutHh: 0x%08x", stData.u32);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_CnfgRegTimeoutHh(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X0C stData;
    stData.u32 = pstRegs->SEC3_VIN0x0c.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegTimeoutHh: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_timeout_hh;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegBitSwap3(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_SEC3_VIN0X0E stData;
    stData.u32 = pstRegs->SEC3_VIN0x0e.u32;
    stData.bits.cnfg_reg_bit_swap_3 = uData;
    pstRegs->SEC3_VIN0x0e.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegBitSwap3: 0x%08x", stData.u32);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_CnfgRegBitSwap3(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X0E stData;
    stData.u32 = pstRegs->SEC3_VIN0x0e.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegBitSwap3: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_bit_swap_3;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgRegBitSwap4(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_SEC3_VIN0X0E stData;
    stData.u32 = pstRegs->SEC3_VIN0x0e.u32;
    stData.bits.cnfg_reg_bit_swap_4 = uData;
    pstRegs->SEC3_VIN0x0e.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgRegBitSwap4: 0x%08x", stData.u32);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_CnfgRegBitSwap4(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X0E stData;
    stData.u32 = pstRegs->SEC3_VIN0x0e.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgRegBitSwap4: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_reg_bit_swap_4;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgEn(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;
    stData.bits.cnfg_tpg_en = uData;
    pstRegs->SEC3_VIN0x10.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgEn: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgTpgEn(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgEn: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_en;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgSrst(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;
    stData.bits.cnfg_tpg_srst = uData;
    pstRegs->SEC3_VIN0x10.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgSrst: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgTpgSrst(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgSrst: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_srst;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgStart(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;
    stData.bits.cnfg_tpg_start = uData;
    pstRegs->SEC3_VIN0x10.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgStart: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgTpgStart(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgStart: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_start;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgPatNum(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;
    stData.bits.cnfg_tpg_pat_num = uData;
    pstRegs->SEC3_VIN0x10.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgPatNum: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgTpgPatNum(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgPatNum: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_pat_num;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgImgNum(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;
    stData.bits.cnfg_tpg_img_num = uData;
    pstRegs->SEC3_VIN0x10.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgImgNum: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgTpgImgNum(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgImgNum: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_img_num;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgCfaPat(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;
    stData.bits.cnfg_tpg_cfa_pat = uData;
    pstRegs->SEC3_VIN0x10.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgCfaPat: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgTpgCfaPat(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgCfaPat: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_cfa_pat;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgPixWid(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;
    stData.bits.cnfg_tpg_pix_wid = uData;
    pstRegs->SEC3_VIN0x10.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgPixWid: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgTpgPixWid(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgPixWid: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_pix_wid;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgDefSync(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;
    stData.bits.cnfg_tpg_def_sync = uData;
    pstRegs->SEC3_VIN0x10.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgDefSync: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgTpgDefSync(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgDefSync: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_def_sync;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgMaxSync(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;
    stData.bits.cnfg_tpg_max_sync = uData;
    pstRegs->SEC3_VIN0x10.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgMaxSync: 0x%08x", stData.u32);
    #endif

}


GK_U8 SEC3_VIN_DRV_GET_CnfgTpgMaxSync(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgMaxSync: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_max_sync;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgVsWidth(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X11 stData;
    stData.u32 = pstRegs->SEC3_VIN0x11.u32;
    stData.bits.cnfg_tpg_vs_width = uData;
    pstRegs->SEC3_VIN0x11.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgVsWidth: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgTpgVsWidth(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X11 stData;
    stData.u32 = pstRegs->SEC3_VIN0x11.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgVsWidth: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_vs_width;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgHsWidth(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X11 stData;
    stData.u32 = pstRegs->SEC3_VIN0x11.u32;
    stData.bits.cnfg_tpg_hs_width = uData;
    pstRegs->SEC3_VIN0x11.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgHsWidth: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgTpgHsWidth(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X11 stData;
    stData.u32 = pstRegs->SEC3_VIN0x11.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgHsWidth: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_hs_width;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgVtotal(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X12 stData;
    stData.u32 = pstRegs->SEC3_VIN0x12.u32;
    stData.bits.cnfg_tpg_vtotal = uData;
    pstRegs->SEC3_VIN0x12.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgVtotal: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgTpgVtotal(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X12 stData;
    stData.u32 = pstRegs->SEC3_VIN0x12.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgVtotal: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_vtotal;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgHtotal(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X12 stData;
    stData.u32 = pstRegs->SEC3_VIN0x12.u32;
    stData.bits.cnfg_tpg_htotal = uData;
    pstRegs->SEC3_VIN0x12.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgHtotal: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgTpgHtotal(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X12 stData;
    stData.u32 = pstRegs->SEC3_VIN0x12.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgHtotal: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_htotal;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgVAct(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X13 stData;
    stData.u32 = pstRegs->SEC3_VIN0x13.u32;
    stData.bits.cnfg_tpg_v_act = uData;
    pstRegs->SEC3_VIN0x13.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgVAct: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgTpgVAct(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X13 stData;
    stData.u32 = pstRegs->SEC3_VIN0x13.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgVAct: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_v_act;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgHAct(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X13 stData;
    stData.u32 = pstRegs->SEC3_VIN0x13.u32;
    stData.bits.cnfg_tpg_h_act = uData;
    pstRegs->SEC3_VIN0x13.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgHAct: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgTpgHAct(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X13 stData;
    stData.u32 = pstRegs->SEC3_VIN0x13.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgHAct: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_h_act;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgFpV(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X14 stData;
    stData.u32 = pstRegs->SEC3_VIN0x14.u32;
    stData.bits.cnfg_tpg_fp_v = uData;
    pstRegs->SEC3_VIN0x14.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgFpV: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgTpgFpV(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X14 stData;
    stData.u32 = pstRegs->SEC3_VIN0x14.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgFpV: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_fp_v;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgBpV(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X14 stData;
    stData.u32 = pstRegs->SEC3_VIN0x14.u32;
    stData.bits.cnfg_tpg_bp_v = uData;
    pstRegs->SEC3_VIN0x14.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgBpV: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgTpgBpV(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X14 stData;
    stData.u32 = pstRegs->SEC3_VIN0x14.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgBpV: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_bp_v;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgFpH(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X15 stData;
    stData.u32 = pstRegs->SEC3_VIN0x15.u32;
    stData.bits.cnfg_tpg_fp_h = uData;
    pstRegs->SEC3_VIN0x15.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgFpH: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgTpgFpH(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X15 stData;
    stData.u32 = pstRegs->SEC3_VIN0x15.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgFpH: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_fp_h;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgBpH(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_SEC3_VIN0X15 stData;
    stData.u32 = pstRegs->SEC3_VIN0x15.u32;
    stData.bits.cnfg_tpg_bp_h = uData;
    pstRegs->SEC3_VIN0x15.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgBpH: 0x%08x", stData.u32);
    #endif

}


GK_U16 SEC3_VIN_DRV_GET_CnfgTpgBpH(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X15 stData;
    stData.u32 = pstRegs->SEC3_VIN0x15.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgBpH: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_bp_h;
}


GK_VOID SEC3_VIN_DRV_SET_CnfgTpgInitVsCnt(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_SEC3_VIN0X16 stData;
    stData.u32 = pstRegs->SEC3_VIN0x16.u32;
    stData.bits.cnfg_tpg_init_vs_cnt = uData;
    pstRegs->SEC3_VIN0x16.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_CnfgTpgInitVsCnt: 0x%08x", stData.u32);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_CnfgTpgInitVsCnt(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X16 stData;
    stData.u32 = pstRegs->SEC3_VIN0x16.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_CnfgTpgInitVsCnt: 0x%08x", stData.u32);
    #endif
    return stData.bits.cnfg_tpg_init_vs_cnt;
}


GK_U32 SEC3_VIN_DRV_GET_SensorVsCnt(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X17 stData;
    stData.u32 = pstRegs->SEC3_VIN0x17.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_SensorVsCnt: 0x%08x", stData.u32);
    #endif
    return stData.bits.sensor_vs_cnt;
}


GK_U32 SEC3_VIN_DRV_GET_VinVsCnt(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X17 stData;
    stData.u32 = pstRegs->SEC3_VIN0x17.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_VinVsCnt: 0x%08x", stData.u32);
    #endif
    return stData.bits.vin_vs_cnt;
}


GK_VOID SEC3_VIN_DRV_SET_IrqMask(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_SEC3_VIN0X1A stData;
    stData.u32 = pstRegs->SEC3_VIN0x1a.u32;
    stData.bits.irq_mask = uData;
    pstRegs->SEC3_VIN0x1a.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_IrqMask: 0x%08x", stData.u32);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_IrqMask(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X1A stData;
    stData.u32 = pstRegs->SEC3_VIN0x1a.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_IrqMask: 0x%08x", stData.u32);
    #endif
    return stData.bits.irq_mask;
}


GK_VOID SEC3_VIN_DRV_SET_IrqClear(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_SEC3_VIN0X1B stData;
    stData.u32 = pstRegs->SEC3_VIN0x1b.u32;
    stData.bits.irq_clear = uData;
    pstRegs->SEC3_VIN0x1b.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_IrqClear: 0x%08x", stData.u32);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_IrqClear(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X1B stData;
    stData.u32 = pstRegs->SEC3_VIN0x1b.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_IrqClear: 0x%08x", stData.u32);
    #endif
    return stData.bits.irq_clear;
}


GK_U32 SEC3_VIN_DRV_GET_Irq(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X1C stData;
    stData.u32 = pstRegs->SEC3_VIN0x1c.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Irq: 0x%08x", stData.u32);
    #endif
    return stData.bits.irq;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X00(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x00.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X00: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X00(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X00 stData;
    stData.u32 = pstRegs->SEC3_VIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X00: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X01(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X01 stData;
    stData.u32 = pstRegs->SEC3_VIN0x01.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X01: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X02(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x02.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X02: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X02(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X02 stData;
    stData.u32 = pstRegs->SEC3_VIN0x02.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X02: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X03(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x03.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X03: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X03(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X03 stData;
    stData.u32 = pstRegs->SEC3_VIN0x03.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X03: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X04(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x04.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X04: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X04(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X04 stData;
    stData.u32 = pstRegs->SEC3_VIN0x04.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X04: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X05(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x05.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X05: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X05(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X05 stData;
    stData.u32 = pstRegs->SEC3_VIN0x05.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X05: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X06(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x06.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X06: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X06(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X06 stData;
    stData.u32 = pstRegs->SEC3_VIN0x06.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X06: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X07(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x07.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X07: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X07(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X07 stData;
    stData.u32 = pstRegs->SEC3_VIN0x07.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X07: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X08(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x08.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X08: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X08(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X08 stData;
    stData.u32 = pstRegs->SEC3_VIN0x08.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X08: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X09(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x09.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X09: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X09(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X09 stData;
    stData.u32 = pstRegs->SEC3_VIN0x09.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X09: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X0A(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x0a.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X0A: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X0A(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X0A stData;
    stData.u32 = pstRegs->SEC3_VIN0x0a.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X0A: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X0B(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x0b.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X0B: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X0B(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X0B stData;
    stData.u32 = pstRegs->SEC3_VIN0x0b.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X0B: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X0C(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x0c.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X0C: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X0C(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X0C stData;
    stData.u32 = pstRegs->SEC3_VIN0x0c.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X0C: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X0E(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x0e.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X0E: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X0E(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X0E stData;
    stData.u32 = pstRegs->SEC3_VIN0x0e.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X0E: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X10(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x10.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X10: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X10(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X10 stData;
    stData.u32 = pstRegs->SEC3_VIN0x10.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X10: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X11(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x11.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X11: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X11(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X11 stData;
    stData.u32 = pstRegs->SEC3_VIN0x11.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X11: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X12(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x12.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X12: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X12(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X12 stData;
    stData.u32 = pstRegs->SEC3_VIN0x12.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X12: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X13(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x13.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X13: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X13(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X13 stData;
    stData.u32 = pstRegs->SEC3_VIN0x13.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X13: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X14(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x14.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X14: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X14(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X14 stData;
    stData.u32 = pstRegs->SEC3_VIN0x14.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X14: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X15(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x15.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X15: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X15(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X15 stData;
    stData.u32 = pstRegs->SEC3_VIN0x15.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X15: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X16(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x16.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X16: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X16(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X16 stData;
    stData.u32 = pstRegs->SEC3_VIN0x16.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X16: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X17(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X17 stData;
    stData.u32 = pstRegs->SEC3_VIN0x17.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X17: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X1A(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x1a.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X1A: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X1A(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X1A stData;
    stData.u32 = pstRegs->SEC3_VIN0x1a.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X1A: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID SEC3_VIN_DRV_SET_ALL_Vin0X1B(S_SEC3_VIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->SEC3_VIN0x1b.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Vin0X1B: 0x%08x", uData);
    #endif

}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X1B(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X1B stData;
    stData.u32 = pstRegs->SEC3_VIN0x1b.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X1B: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_U32 SEC3_VIN_DRV_GET_ALL_Vin0X1C(S_SEC3_VIN_REGS_TYPE *pstRegs)
{
    U_SEC3_VIN0X1C stData;
    stData.u32 = pstRegs->SEC3_VIN0x1c.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Vin0X1C: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


#endif
