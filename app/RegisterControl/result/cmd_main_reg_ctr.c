//******************************************************************************
// Copyright     :  Copyright (C) 2020, goke Technologies Co., Ltd.
// File name     :  ../result/cmd_main_reg_ctr.c
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

#include "cmd_main.h"
#include "../result/cmd_main_reg_ctr.h"

GK_VOID CMD_MAIN_DRV_SET_UpdateEn(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_CMD_MAIN0X00 stData;
    stData.u32 = pstRegs->CMD_MAIN0x00.u32;
    stData.bits.update_en = uData;
    pstRegs->CMD_MAIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_UpdateEn: 0x%08x", stData.u32);
    #endif

}


GK_U8 CMD_MAIN_DRV_GET_UpdateEn(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X00 stData;
    stData.u32 = pstRegs->CMD_MAIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_UpdateEn: 0x%08x", stData.u32);
    #endif
    return stData.bits.update_en;
}


GK_VOID CMD_MAIN_DRV_SET_UpdateFlag(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_CMD_MAIN0X00 stData;
    stData.u32 = pstRegs->CMD_MAIN0x00.u32;
    stData.bits.update_flag = uData;
    pstRegs->CMD_MAIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_UpdateFlag: 0x%08x", stData.u32);
    #endif

}


GK_U8 CMD_MAIN_DRV_GET_UpdateFlag(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X00 stData;
    stData.u32 = pstRegs->CMD_MAIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_UpdateFlag: 0x%08x", stData.u32);
    #endif
    return stData.bits.update_flag;
}


GK_VOID CMD_MAIN_DRV_SET_VerticalFlip(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_CMD_MAIN0X00 stData;
    stData.u32 = pstRegs->CMD_MAIN0x00.u32;
    stData.bits.vertical_flip = uData;
    pstRegs->CMD_MAIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_VerticalFlip: 0x%08x", stData.u32);
    #endif

}


GK_U8 CMD_MAIN_DRV_GET_VerticalFlip(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X00 stData;
    stData.u32 = pstRegs->CMD_MAIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_VerticalFlip: 0x%08x", stData.u32);
    #endif
    return stData.bits.vertical_flip;
}


GK_VOID CMD_MAIN_DRV_SET_MainSel(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U8 uData)
{
    U_CMD_MAIN0X00 stData;
    stData.u32 = pstRegs->CMD_MAIN0x00.u32;
    stData.bits.main_sel = uData;
    pstRegs->CMD_MAIN0x00.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_MainSel: 0x%08x", stData.u32);
    #endif

}


GK_U8 CMD_MAIN_DRV_GET_MainSel(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X00 stData;
    stData.u32 = pstRegs->CMD_MAIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_MainSel: 0x%08x", stData.u32);
    #endif
    return stData.bits.main_sel;
}


GK_VOID CMD_MAIN_DRV_SET_StrideLrs(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_CMD_MAIN0X01 stData;
    stData.u32 = pstRegs->CMD_MAIN0x01.u32;
    stData.bits.stride_lrs = uData;
    pstRegs->CMD_MAIN0x01.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_StrideLrs: 0x%08x", stData.u32);
    #endif

}


GK_U16 CMD_MAIN_DRV_GET_StrideLrs(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X01 stData;
    stData.u32 = pstRegs->CMD_MAIN0x01.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_StrideLrs: 0x%08x", stData.u32);
    #endif
    return stData.bits.stride_lrs;
}


GK_VOID CMD_MAIN_DRV_SET_StrideCrs(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_CMD_MAIN0X01 stData;
    stData.u32 = pstRegs->CMD_MAIN0x01.u32;
    stData.bits.stride_crs = uData;
    pstRegs->CMD_MAIN0x01.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_StrideCrs: 0x%08x", stData.u32);
    #endif

}


GK_U16 CMD_MAIN_DRV_GET_StrideCrs(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X01 stData;
    stData.u32 = pstRegs->CMD_MAIN0x01.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_StrideCrs: 0x%08x", stData.u32);
    #endif
    return stData.bits.stride_crs;
}


GK_VOID CMD_MAIN_DRV_SET_StrideVdp(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_CMD_MAIN0X02 stData;
    stData.u32 = pstRegs->CMD_MAIN0x02.u32;
    stData.bits.stride_vdp = uData;
    pstRegs->CMD_MAIN0x02.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_StrideVdp: 0x%08x", stData.u32);
    #endif

}


GK_U16 CMD_MAIN_DRV_GET_StrideVdp(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X02 stData;
    stData.u32 = pstRegs->CMD_MAIN0x02.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_StrideVdp: 0x%08x", stData.u32);
    #endif
    return stData.bits.stride_vdp;
}


GK_VOID CMD_MAIN_DRV_SET_PicWLrs(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_CMD_MAIN0X03 stData;
    stData.u32 = pstRegs->CMD_MAIN0x03.u32;
    stData.bits.pic_w_lrs = uData;
    pstRegs->CMD_MAIN0x03.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_PicWLrs: 0x%08x", stData.u32);
    #endif

}


GK_U16 CMD_MAIN_DRV_GET_PicWLrs(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X03 stData;
    stData.u32 = pstRegs->CMD_MAIN0x03.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_PicWLrs: 0x%08x", stData.u32);
    #endif
    return stData.bits.pic_w_lrs;
}


GK_VOID CMD_MAIN_DRV_SET_PicHLrs(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_CMD_MAIN0X03 stData;
    stData.u32 = pstRegs->CMD_MAIN0x03.u32;
    stData.bits.pic_h_lrs = uData;
    pstRegs->CMD_MAIN0x03.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_PicHLrs: 0x%08x", stData.u32);
    #endif

}


GK_U16 CMD_MAIN_DRV_GET_PicHLrs(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X03 stData;
    stData.u32 = pstRegs->CMD_MAIN0x03.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_PicHLrs: 0x%08x", stData.u32);
    #endif
    return stData.bits.pic_h_lrs;
}


GK_VOID CMD_MAIN_DRV_SET_PicWCrs(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_CMD_MAIN0X04 stData;
    stData.u32 = pstRegs->CMD_MAIN0x04.u32;
    stData.bits.pic_w_crs = uData;
    pstRegs->CMD_MAIN0x04.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_PicWCrs: 0x%08x", stData.u32);
    #endif

}


GK_U16 CMD_MAIN_DRV_GET_PicWCrs(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X04 stData;
    stData.u32 = pstRegs->CMD_MAIN0x04.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_PicWCrs: 0x%08x", stData.u32);
    #endif
    return stData.bits.pic_w_crs;
}


GK_VOID CMD_MAIN_DRV_SET_PicHCrs(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_CMD_MAIN0X04 stData;
    stData.u32 = pstRegs->CMD_MAIN0x04.u32;
    stData.bits.pic_h_crs = uData;
    pstRegs->CMD_MAIN0x04.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_PicHCrs: 0x%08x", stData.u32);
    #endif

}


GK_U16 CMD_MAIN_DRV_GET_PicHCrs(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X04 stData;
    stData.u32 = pstRegs->CMD_MAIN0x04.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_PicHCrs: 0x%08x", stData.u32);
    #endif
    return stData.bits.pic_h_crs;
}


GK_VOID CMD_MAIN_DRV_SET_PicWVdp(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_CMD_MAIN0X05 stData;
    stData.u32 = pstRegs->CMD_MAIN0x05.u32;
    stData.bits.pic_w_vdp = uData;
    pstRegs->CMD_MAIN0x05.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_PicWVdp: 0x%08x", stData.u32);
    #endif

}


GK_U16 CMD_MAIN_DRV_GET_PicWVdp(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X05 stData;
    stData.u32 = pstRegs->CMD_MAIN0x05.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_PicWVdp: 0x%08x", stData.u32);
    #endif
    return stData.bits.pic_w_vdp;
}


GK_VOID CMD_MAIN_DRV_SET_PicHVdp(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U16 uData)
{
    U_CMD_MAIN0X05 stData;
    stData.u32 = pstRegs->CMD_MAIN0x05.u32;
    stData.bits.pic_h_vdp = uData;
    pstRegs->CMD_MAIN0x05.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_PicHVdp: 0x%08x", stData.u32);
    #endif

}


GK_U16 CMD_MAIN_DRV_GET_PicHVdp(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X05 stData;
    stData.u32 = pstRegs->CMD_MAIN0x05.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_PicHVdp: 0x%08x", stData.u32);
    #endif
    return stData.bits.pic_h_vdp;
}


GK_VOID CMD_MAIN_DRV_SET_BaseCnfg(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_CMD_MAIN0X06 stData;
    stData.u32 = pstRegs->CMD_MAIN0x06.u32;
    stData.bits.base_cnfg = uData;
    pstRegs->CMD_MAIN0x06.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_BaseCnfg: 0x%08x", stData.u32);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_BaseCnfg(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X06 stData;
    stData.u32 = pstRegs->CMD_MAIN0x06.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_BaseCnfg: 0x%08x", stData.u32);
    #endif
    return stData.bits.base_cnfg;
}


GK_VOID CMD_MAIN_DRV_SET_BaseLrs(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_CMD_MAIN0X07 stData;
    stData.u32 = pstRegs->CMD_MAIN0x07.u32;
    stData.bits.base_lrs = uData;
    pstRegs->CMD_MAIN0x07.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_BaseLrs: 0x%08x", stData.u32);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_BaseLrs(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X07 stData;
    stData.u32 = pstRegs->CMD_MAIN0x07.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_BaseLrs: 0x%08x", stData.u32);
    #endif
    return stData.bits.base_lrs;
}


GK_VOID CMD_MAIN_DRV_SET_BaseCrs(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_CMD_MAIN0X08 stData;
    stData.u32 = pstRegs->CMD_MAIN0x08.u32;
    stData.bits.base_crs = uData;
    pstRegs->CMD_MAIN0x08.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_BaseCrs: 0x%08x", stData.u32);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_BaseCrs(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X08 stData;
    stData.u32 = pstRegs->CMD_MAIN0x08.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_BaseCrs: 0x%08x", stData.u32);
    #endif
    return stData.bits.base_crs;
}


GK_VOID CMD_MAIN_DRV_SET_BaseVdpY(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_CMD_MAIN0X09 stData;
    stData.u32 = pstRegs->CMD_MAIN0x09.u32;
    stData.bits.base_vdp_y = uData;
    pstRegs->CMD_MAIN0x09.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_BaseVdpY: 0x%08x", stData.u32);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_BaseVdpY(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X09 stData;
    stData.u32 = pstRegs->CMD_MAIN0x09.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_BaseVdpY: 0x%08x", stData.u32);
    #endif
    return stData.bits.base_vdp_y;
}


GK_VOID CMD_MAIN_DRV_SET_BaseVdpC(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_CMD_MAIN0X0A stData;
    stData.u32 = pstRegs->CMD_MAIN0x0a.u32;
    stData.bits.base_vdp_c = uData;
    pstRegs->CMD_MAIN0x0a.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_BaseVdpC: 0x%08x", stData.u32);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_BaseVdpC(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X0A stData;
    stData.u32 = pstRegs->CMD_MAIN0x0a.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_BaseVdpC: 0x%08x", stData.u32);
    #endif
    return stData.bits.base_vdp_c;
}


GK_VOID CMD_MAIN_DRV_SET_BaseVdpMvR(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_CMD_MAIN0X0B stData;
    stData.u32 = pstRegs->CMD_MAIN0x0b.u32;
    stData.bits.base_vdp_mv_r = uData;
    pstRegs->CMD_MAIN0x0b.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_BaseVdpMvR: 0x%08x", stData.u32);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_BaseVdpMvR(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X0B stData;
    stData.u32 = pstRegs->CMD_MAIN0x0b.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_BaseVdpMvR: 0x%08x", stData.u32);
    #endif
    return stData.bits.base_vdp_mv_r;
}


GK_VOID CMD_MAIN_DRV_SET_BaseVdpMvW(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_CMD_MAIN0X0C stData;
    stData.u32 = pstRegs->CMD_MAIN0x0c.u32;
    stData.bits.base_vdp_mv_w = uData;
    pstRegs->CMD_MAIN0x0c.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_BaseVdpMvW: 0x%08x", stData.u32);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_BaseVdpMvW(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X0C stData;
    stData.u32 = pstRegs->CMD_MAIN0x0c.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_BaseVdpMvW: 0x%08x", stData.u32);
    #endif
    return stData.bits.base_vdp_mv_w;
}


GK_VOID CMD_MAIN_DRV_SET_Info00(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_CMD_MAIN0X0D stData;
    stData.u32 = pstRegs->CMD_MAIN0x0d.u32;
    stData.bits.info_00 = uData;
    pstRegs->CMD_MAIN0x0d.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Info00: 0x%08x", stData.u32);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_Info00(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X0D stData;
    stData.u32 = pstRegs->CMD_MAIN0x0d.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Info00: 0x%08x", stData.u32);
    #endif
    return stData.bits.info_00;
}


GK_VOID CMD_MAIN_DRV_SET_Info01(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_CMD_MAIN0X0E stData;
    stData.u32 = pstRegs->CMD_MAIN0x0e.u32;
    stData.bits.info_01 = uData;
    pstRegs->CMD_MAIN0x0e.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Info01: 0x%08x", stData.u32);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_Info01(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X0E stData;
    stData.u32 = pstRegs->CMD_MAIN0x0e.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Info01: 0x%08x", stData.u32);
    #endif
    return stData.bits.info_01;
}


GK_VOID CMD_MAIN_DRV_SET_Info02(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    U_CMD_MAIN0X0F stData;
    stData.u32 = pstRegs->CMD_MAIN0x0f.u32;
    stData.bits.info_02 = uData;
    pstRegs->CMD_MAIN0x0f.u32 = stData.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Info02: 0x%08x", stData.u32);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_Info02(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X0F stData;
    stData.u32 = pstRegs->CMD_MAIN0x0f.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Info02: 0x%08x", stData.u32);
    #endif
    return stData.bits.info_02;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X00(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x00.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X00: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X00(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X00 stData;
    stData.u32 = pstRegs->CMD_MAIN0x00.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X00: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X01(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x01.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X01: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X01(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X01 stData;
    stData.u32 = pstRegs->CMD_MAIN0x01.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X01: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X02(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x02.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X02: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X02(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X02 stData;
    stData.u32 = pstRegs->CMD_MAIN0x02.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X02: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X03(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x03.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X03: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X03(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X03 stData;
    stData.u32 = pstRegs->CMD_MAIN0x03.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X03: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X04(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x04.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X04: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X04(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X04 stData;
    stData.u32 = pstRegs->CMD_MAIN0x04.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X04: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X05(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x05.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X05: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X05(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X05 stData;
    stData.u32 = pstRegs->CMD_MAIN0x05.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X05: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X06(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x06.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X06: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X06(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X06 stData;
    stData.u32 = pstRegs->CMD_MAIN0x06.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X06: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X07(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x07.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X07: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X07(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X07 stData;
    stData.u32 = pstRegs->CMD_MAIN0x07.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X07: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X08(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x08.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X08: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X08(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X08 stData;
    stData.u32 = pstRegs->CMD_MAIN0x08.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X08: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X09(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x09.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X09: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X09(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X09 stData;
    stData.u32 = pstRegs->CMD_MAIN0x09.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X09: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X0A(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x0a.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X0A: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X0A(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X0A stData;
    stData.u32 = pstRegs->CMD_MAIN0x0a.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X0A: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X0B(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x0b.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X0B: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X0B(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X0B stData;
    stData.u32 = pstRegs->CMD_MAIN0x0b.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X0B: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X0C(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x0c.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X0C: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X0C(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X0C stData;
    stData.u32 = pstRegs->CMD_MAIN0x0c.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X0C: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X0D(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x0d.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X0D: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X0D(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X0D stData;
    stData.u32 = pstRegs->CMD_MAIN0x0d.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X0D: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X0E(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x0e.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X0E: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X0E(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X0E stData;
    stData.u32 = pstRegs->CMD_MAIN0x0e.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X0E: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


GK_VOID CMD_MAIN_DRV_SET_ALL_Main0X0F(S_CMD_MAIN_REGS_TYPE *pstRegs, GK_U32 uData)
{
    pstRegs->CMD_MAIN0x0f.u32 = uData;
    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_SET_Main0X0F: 0x%08x", uData);
    #endif

}


GK_U32 CMD_MAIN_DRV_GET_ALL_Main0X0F(S_CMD_MAIN_REGS_TYPE *pstRegs)
{
    U_CMD_MAIN0X0F stData;
    stData.u32 = pstRegs->CMD_MAIN0x0f.u32;

    #if GK_VI_DEBUG_OPEN
        GK_VI_PRINTF_FUNC("ISP_DRV_GET_Main0X0F: 0x%08x", stData.u32);
    #endif
    return stData.u32;
}


#endif
