// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon_pipeline.h"

VL_ATTR_COLD void Vcommon_pipeline___initial__TOP__pipeline__1(Vcommon_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_pipeline___initial__TOP__pipeline__1\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h7315c05b__0;
    IData/*31:0*/ __Vilp;
    // Body
    __Vtemp_h7315c05b__0[0U] = 0x2e6d656dU;
    __Vtemp_h7315c05b__0[1U] = 0x5f6d656dU;
    __Vtemp_h7315c05b__0[2U] = 0x74696f6eU;
    __Vtemp_h7315c05b__0[3U] = 0x74727563U;
    __Vtemp_h7315c05b__0[4U] = 0x696e73U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h7315c05b__0)
                 ,  &(vlSelf->__PVT__inst_imem__DOT__ram)
                 , 0, ~0ULL);
    __Vilp = 0U;
    while ((__Vilp <= 0xffU)) {
        vlSelf->__PVT__inst_dmem__DOT__ram[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
}

VL_ATTR_COLD void Vcommon_pipeline___settle__TOP__pipeline__3(Vcommon_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_pipeline___settle__TOP__pipeline__3\n"); );
    // Init
    CData/*5:0*/ __PVT__inst_ir__DOT__inst_fl__DOT__read_0;
    CData/*5:0*/ __PVT__inst_ir__DOT__inst_fl__DOT__read_1;
    // Body
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul 
        = (1U & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                 [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id][2U] 
                 >> 0xcU));
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu 
        = (1U & (~ ((((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                       [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                       >> 0x10U) | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                                    [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                                    >> 0xfU)) | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                                                 [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                                                 >> 0x11U)) 
                    | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                       [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                       >> 0xcU))));
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju 
        = (1U & (((vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                   [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                   >> 0x10U) | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                                [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                                >> 0xfU)) | (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                                             [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                                             >> 0x11U)));
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul 
        = (1U & (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
                 [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id][2U] 
                 >> 0xcU));
    vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head_next 
        = (0x3fU & ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))
                     ? ((IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head) 
                        + (((IData)(vlSelf->__PVT__walk0_valid) 
                            & (IData)(vlSelf->__PVT__walk1_valid))
                            ? 2U : (((IData)(vlSelf->__PVT__walk0_valid) 
                                     | (IData)(vlSelf->__PVT__walk1_valid))
                                     ? 1U : 0U))) : 
                    ((((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0) 
                       & (IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_1)) 
                      & (IData)(vlSelf->__PVT__inst_ir__DOT__fl_can_alloc))
                      ? ((IData)(2U) + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))
                      : ((((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0) 
                           & (~ (IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_1))) 
                          & (IData)(vlSelf->__PVT__inst_ir__DOT__fl_can_alloc))
                          ? ((IData)(1U) + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))
                          : ((((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_1) 
                               & (~ (IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0))) 
                              & (IData)(vlSelf->__PVT__inst_ir__DOT__fl_can_alloc))
                              ? ((IData)(1U) + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))
                              : (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))))));
    __PVT__inst_ir__DOT__inst_fl__DOT__read_1 = 0U;
    if ((2U != (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))) {
        if ((((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0) 
              & (IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_1)) 
             & (IData)(vlSelf->__PVT__inst_ir__DOT__fl_can_alloc))) {
            __PVT__inst_ir__DOT__inst_fl__DOT__read_1 
                = vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__fl
                [(0x1fU & ((IData)(1U) + (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head)))];
            __PVT__inst_ir__DOT__inst_fl__DOT__read_0 = 0U;
            __PVT__inst_ir__DOT__inst_fl__DOT__read_0 
                = vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__fl
                [(0x1fU & (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))];
        } else {
            if ((1U & (~ (((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0) 
                           & (~ (IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_1))) 
                          & (IData)(vlSelf->__PVT__inst_ir__DOT__fl_can_alloc))))) {
                __PVT__inst_ir__DOT__inst_fl__DOT__read_1 
                    = ((((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_1) 
                         & (~ (IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0))) 
                        & (IData)(vlSelf->__PVT__inst_ir__DOT__fl_can_alloc))
                        ? vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__fl
                       [(0x1fU & (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))]
                        : 0U);
            }
            __PVT__inst_ir__DOT__inst_fl__DOT__read_0 = 0U;
            if ((((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0) 
                  & (~ (IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_1))) 
                 & (IData)(vlSelf->__PVT__inst_ir__DOT__fl_can_alloc))) {
                __PVT__inst_ir__DOT__inst_fl__DOT__read_0 
                    = vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__fl
                    [(0x1fU & (IData)(vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head))];
            } else if ((1U & (~ (((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_1) 
                                  & (~ (IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0))) 
                                 & (IData)(vlSelf->__PVT__inst_ir__DOT__fl_can_alloc))))) {
                __PVT__inst_ir__DOT__inst_fl__DOT__read_0 = 0U;
            }
        }
    } else {
        __PVT__inst_ir__DOT__inst_fl__DOT__read_0 = 0U;
    }
    vlSelf->__PVT__ex_slot1_valid = 0U;
    if ((1U & (~ (IData)(vlSelf->__PVT__flush_valid)))) {
        if ((3U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__ready_vec))) {
            if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                 & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul))) {
                vlSelf->__PVT__ex_slot1_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_alu))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_alu))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_alu) 
                        & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
                vlSelf->__PVT__ex_slot0_valid = 0U;
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else {
                vlSelf->__PVT__ex_slot0_valid = 0U;
            }
            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
            if ((1U & (~ ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                          & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul))))) {
                if ((1U & (~ ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                              & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu))))) {
                    if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                         & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_alu))) {
                        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                            = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                            = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                            = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
                    } else if ((1U & (~ ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) 
                                         & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju))))) {
                        if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul) 
                             & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju))) {
                            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
                        } else if ((1U & (~ ((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju) 
                                             & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju))))) {
                            if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju) 
                                 & (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu))) {
                                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
                            } else {
                                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                            }
                        } else {
                            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                        }
                    } else {
                        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                            = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                    }
                } else {
                    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                }
            } else {
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__ready_vec))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul)))) {
                if (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju) {
                    vlSelf->__PVT__ex_slot1_valid = 1U;
                }
            }
            vlSelf->__PVT__ex_slot0_valid = 0U;
            if (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul) {
                vlSelf->__PVT__ex_slot0_valid = 1U;
            } else if ((1U & (~ (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju)))) {
                vlSelf->__PVT__ex_slot0_valid = 1U;
            }
            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
            if ((1U & (~ (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul)))) {
                if (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju) {
                    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
                } else {
                    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                }
            } else {
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
            }
        } else if ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__ready_vec))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul)))) {
                vlSelf->__PVT__ex_slot1_valid = 1U;
            }
            vlSelf->__PVT__ex_slot0_valid = 0U;
            if (vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul) {
                vlSelf->__PVT__ex_slot0_valid = 1U;
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
            } else {
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
                vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                    = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
            }
        } else {
            vlSelf->__PVT__ex_slot1_valid = 0U;
            vlSelf->__PVT__ex_slot0_valid = 0U;
            vlSelf->__PVT__ex_slot0_valid = 0U;
            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
            vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
                = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
        }
    } else {
        vlSelf->__PVT__ex_slot0_valid = 0U;
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id 
            = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id;
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id 
            = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id;
    }
    vlSelf->__PVT__inst_ir__DOT__rename_1 = ((0x3ffffffc0ULL 
                                              & vlSelf->__PVT__inst_ir__DOT__rename_1) 
                                             | (IData)((IData)(__PVT__inst_ir__DOT__inst_fl__DOT__read_1)));
    vlSelf->__PVT__inst_ir__DOT__rename_0 = ((0x3ffffffc0ULL 
                                              & vlSelf->__PVT__inst_ir__DOT__rename_0) 
                                             | (IData)((IData)(__PVT__inst_ir__DOT__inst_fl__DOT__read_0)));
    vlSelf->__PVT__inst_buffer__DOT__slot_valid_in[1U] 
        = vlSelf->__PVT__ex_slot1_valid;
    vlSelf->__PVT__inst_buffer__DOT__slot_valid_in[0U] 
        = vlSelf->__PVT__ex_slot0_valid;
    vlSelf->__PVT__inst_buffer__DOT__slot_pc_in[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id];
    vlSelf->__PVT__inst_buffer__DOT__slot_T_in[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_T
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id];
    vlSelf->__PVT__inst_buffer__DOT__slot_robid_in[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[1U][0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id][0U];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[1U][1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id][1U];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[1U][2U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id][2U];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[1U][3U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id][3U];
    vlSelf->__PVT__inst_buffer__DOT__slot_rs1_in[1U] 
        = vlSelf->__PVT__inst_phyreg__DOT__prf_file
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id]];
    vlSelf->__PVT__inst_buffer__DOT__slot_rs2_in[1U] 
        = vlSelf->__PVT__inst_phyreg__DOT__prf_file
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id]];
    vlSelf->__PVT__inst_buffer__DOT__slot_pc_in[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id];
    vlSelf->__PVT__inst_buffer__DOT__slot_T_in[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_T
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id];
    vlSelf->__PVT__inst_buffer__DOT__slot_robid_in[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[0U][0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id][0U];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[0U][1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id][1U];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[0U][2U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id][2U];
    vlSelf->__PVT__inst_buffer__DOT__slot_control_in[0U][3U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id][3U];
    vlSelf->__PVT__inst_buffer__DOT__slot_rs1_in[0U] 
        = vlSelf->__PVT__inst_phyreg__DOT__prf_file
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id]];
    vlSelf->__PVT__inst_buffer__DOT__slot_rs2_in[0U] 
        = vlSelf->__PVT__inst_phyreg__DOT__prf_file
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id
        [vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id]];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[7U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [7U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[6U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [6U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[5U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [5U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[4U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [4U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[3U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [3U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[2U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [2U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[1U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [1U];
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[0U] 
        = vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
        [0U];
    if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_intisq) 
         & (IData)(vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_intisq))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[0U] 
            = ((0U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((0U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [0U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [0U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [0U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[1U] 
            = ((1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [1U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [1U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [1U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[2U] 
            = ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [2U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [2U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [2U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[3U] 
            = ((3U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((3U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [3U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [3U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [3U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[4U] 
            = ((4U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((4U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [4U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [4U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [4U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[5U] 
            = ((5U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((5U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [5U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [5U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [5U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[6U] 
            = ((6U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((6U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [6U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [6U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [6U])))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[7U] 
            = ((7U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 1U : ((7U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                         ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                          [7U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                         [7U] : ((IData)(2U) 
                                                 + 
                                                 vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                                 [7U])))));
    } else if (((~ (IData)(vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_intisq)) 
                & (IData)(vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_intisq))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[0U] 
            = ((0U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [0U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [0U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [0U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[1U] 
            = ((1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [1U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [1U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [1U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[2U] 
            = ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [2U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [2U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [2U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[3U] 
            = ((3U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [3U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [3U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [3U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[4U] 
            = ((4U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [4U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [4U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [4U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[5U] 
            = ((5U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [5U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [5U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [5U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[6U] 
            = ((6U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [6U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [6U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [6U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[7U] 
            = ((7U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [7U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [7U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [7U]))));
    } else if (((IData)(vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_intisq) 
                & (~ (IData)(vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_intisq)))) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[0U] 
            = ((0U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [0U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [0U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [0U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[1U] 
            = ((1U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [1U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [1U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [1U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[2U] 
            = ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [2U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [2U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [2U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[3U] 
            = ((3U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [3U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [3U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [3U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[4U] 
            = ((4U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [4U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [4U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [4U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[5U] 
            = ((5U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [5U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [5U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [5U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[6U] 
            = ((6U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [6U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [6U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [6U]))));
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[7U] 
            = ((7U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1))
                ? 0U : (0xfU & ((0xfU == vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                 [7U]) ? vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                [7U] : ((IData)(1U) 
                                        + vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age
                                        [7U]))));
    }
    if (vlSelf->__PVT__ex_slot0_valid) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id] = 0U;
    }
    if (vlSelf->__PVT__ex_slot1_valid) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id] = 0U;
    }
    vlSelf->__PVT__ir_is_reg1_next[4U] = ((0x1fU & 
                                           vlSelf->__PVT__ir_is_reg1_next[4U]) 
                                          | (0x7e0U 
                                             & ((IData)(vlSelf->__PVT__inst_ir__DOT__rename_1) 
                                                << 5U)));
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x1fU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x1fU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x1eU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x1eU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x1dU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x1dU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x1cU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x1cU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x1bU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x1bU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x1aU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x1aU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x19U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x19U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x18U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x18U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x17U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x17U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x16U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x16U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x15U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x15U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x14U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x14U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x13U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x13U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x12U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x12U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x11U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x11U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0x10U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0x10U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0xfU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0xfU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0xeU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0xeU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0xdU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0xdU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0xcU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0xcU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0xbU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0xbU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0xaU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0xaU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[9U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [9U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[8U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [8U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[7U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [7U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[6U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [6U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[5U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [5U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[4U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [4U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[3U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [3U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[2U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [2U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[1U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [1U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[0U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT
        [0U];
    if ((IData)((0x3000ULL == (0x3000ULL & vlSelf->__PVT__inst_ir__DOT__rename_0)))) {
        vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[(0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                                         >> 0xeU)))] 
            = (0x3fU & (IData)((vlSelf->__PVT__inst_ir__DOT__rename_0 
                                >> 6U)));
    }
    if ((IData)((0x3000ULL == (0x3000ULL & vlSelf->__PVT__inst_ir__DOT__rename_1)))) {
        vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[(0x1fU 
                                                              & (IData)(
                                                                        (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                         >> 0xeU)))] 
            = (0x3fU & (IData)((vlSelf->__PVT__inst_ir__DOT__rename_1 
                                >> 6U)));
    }
    vlSelf->__PVT__ir_is_reg0_next[4U] = ((0x1fU & 
                                           vlSelf->__PVT__ir_is_reg0_next[4U]) 
                                          | (0x7e0U 
                                             & ((IData)(vlSelf->__PVT__inst_ir__DOT__rename_0) 
                                                << 5U)));
    vlSelf->__PVT__ir_is_reg0_next[3U] = ((0x8007ffffU 
                                           & vlSelf->__PVT__ir_is_reg0_next[3U]) 
                                          | (0xfff80000U 
                                             & ((vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                                 [(0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                              >> 0x1dU)))] 
                                                 << 0x19U) 
                                                | (vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                                   [
                                                   (0x1fU 
                                                    & (IData)(
                                                              (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                               >> 0x18U)))] 
                                                   << 0x13U))));
    vlSelf->__PVT__ir_is_reg0_next[3U] = ((0x7fffffffU 
                                           & vlSelf->__PVT__ir_is_reg0_next[3U]) 
                                          | (vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                             [(0x1fU 
                                               & (IData)(
                                                         (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                          >> 0x13U)))] 
                                             << 0x1fU));
    vlSelf->__PVT__ir_is_reg0_next[4U] = ((0x7e0U & 
                                           vlSelf->__PVT__ir_is_reg0_next[4U]) 
                                          | (0x7ffU 
                                             & (vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                                [(0x1fU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                             >> 0x13U)))] 
                                                >> 1U)));
    vlSelf->__PVT__ir_is_reg1_next[3U] = ((0x8007ffffU 
                                           & vlSelf->__PVT__ir_is_reg1_next[3U]) 
                                          | (0xfff80000U 
                                             & ((0x7e000000U 
                                                 & ((((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0) 
                                                      & ((0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                     >> 0x1dU))) 
                                                         == 
                                                         (0x1fU 
                                                          & (IData)(
                                                                    (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                                     >> 0x13U)))))
                                                      ? (IData)(vlSelf->__PVT__inst_ir__DOT__rename_0)
                                                      : 
                                                     vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                                     [
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                 >> 0x1dU)))]) 
                                                    << 0x19U)) 
                                                | (0x1f80000U 
                                                   & ((((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0) 
                                                        & ((0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                       >> 0x18U))) 
                                                           == 
                                                           (0x1fU 
                                                            & (IData)(
                                                                      (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                                       >> 0x13U)))))
                                                        ? (IData)(vlSelf->__PVT__inst_ir__DOT__rename_0)
                                                        : 
                                                       vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                                       [
                                                       (0x1fU 
                                                        & (IData)(
                                                                  (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                   >> 0x18U)))]) 
                                                      << 0x13U)))));
    vlSelf->__PVT__ir_is_reg1_next[3U] = ((0x7fffffffU 
                                           & vlSelf->__PVT__ir_is_reg1_next[3U]) 
                                          | (((((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0) 
                                                & (IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_1)) 
                                               & ((0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                              >> 0x13U))) 
                                                  == 
                                                  (0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                              >> 0x13U)))))
                                               ? (IData)(vlSelf->__PVT__inst_ir__DOT__rename_0)
                                               : vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                              [(0x1fU 
                                                & (IData)(
                                                          (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                           >> 0x13U)))]) 
                                             << 0x1fU));
    vlSelf->__PVT__ir_is_reg1_next[4U] = ((0x7e0U & 
                                           vlSelf->__PVT__ir_is_reg1_next[4U]) 
                                          | (0x1fU 
                                             & (((((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0) 
                                                   & (IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_1)) 
                                                  & ((0x1fU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                                 >> 0x13U))) 
                                                     == 
                                                     (0x1fU 
                                                      & (IData)(
                                                                (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                 >> 0x13U)))))
                                                  ? (IData)(vlSelf->__PVT__inst_ir__DOT__rename_0)
                                                  : 
                                                 vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
                                                 [(0x1fU 
                                                   & (IData)(
                                                             (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                              >> 0x13U)))]) 
                                                >> 1U)));
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x1fU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x1fU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x1eU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x1eU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x1dU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x1dU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x1cU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x1cU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x1bU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x1bU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x1aU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x1aU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x19U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x19U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x18U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x18U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x17U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x17U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x16U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x16U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x15U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x15U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x14U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x14U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x13U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x13U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x12U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x12U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x11U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x11U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0x10U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0x10U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0xfU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0xfU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0xeU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0xeU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0xdU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0xdU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0xcU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0xcU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0xbU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0xbU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0xaU] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0xaU];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[9U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [9U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[8U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [8U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[7U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [7U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[6U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [6U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[5U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [5U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[4U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [4U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[3U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [3U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[2U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [2U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[1U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [1U];
    vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[0U] 
        = vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT
        [0U];
    if ((2U == (IData)(vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state))) {
        if (((IData)(vlSelf->__PVT__walk0_valid) & 
             (~ ((IData)(vlSelf->__PVT__walk1_valid) 
                 & ((IData)(vlSelf->__PVT__walk0_arf_id) 
                    == (IData)(vlSelf->__PVT__walk1_arf_id)))))) {
            vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[vlSelf->__PVT__walk0_arf_id] 
                = vlSelf->__PVT__walk0_T;
        }
        if (vlSelf->__PVT__walk1_valid) {
            vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[vlSelf->__PVT__walk1_arf_id] 
                = vlSelf->__PVT__walk1_T;
        }
    } else {
        if (((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_0) 
             & (~ ((IData)(vlSelf->__PVT__inst_ir__DOT__fl_req_1) 
                   & ((0x1fU & (IData)((vlSelf->__PVT__inst_ir__DOT__rename_0 
                                        >> 0x13U))) 
                      == (0x1fU & (IData)((vlSelf->__PVT__inst_ir__DOT__rename_1 
                                           >> 0x13U)))))))) {
            vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[(0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__inst_ir__DOT__rename_0 
                                                                            >> 0x13U)))] 
                = (0x3fU & (IData)(vlSelf->__PVT__inst_ir__DOT__rename_0));
        }
        if (vlSelf->__PVT__inst_ir__DOT__fl_req_1) {
            vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[(0x1fU 
                                                                 & (IData)(
                                                                           (vlSelf->__PVT__inst_ir__DOT__rename_1 
                                                                            >> 0x13U)))] 
                = (0x3fU & (IData)(vlSelf->__PVT__inst_ir__DOT__rename_1));
        }
    }
}

VL_ATTR_COLD void Vcommon_pipeline___ctor_var_reset(Vcommon_pipeline* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vcommon_pipeline___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->imem_en = VL_RAND_RESET_I(1);
    vlSelf->imem_data_in = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->ram_debug[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->prf_debug[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->RRAT_debug[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__ID_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IF_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__IR_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__PC_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_slot0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_slot1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_robid = VL_RAND_RESET_I(7);
    vlSelf->__PVT__flush_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__int1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__lsuint2sq_instr0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_issue_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__retire0_is_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__retire0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__retire1_fl_Told = VL_RAND_RESET_I(6);
    vlSelf->__PVT__retire1_is_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__retire1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__retire_sq2mem_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sq_left = VL_RAND_RESET_I(2);
    vlSelf->__PVT__walk0_T = VL_RAND_RESET_I(6);
    vlSelf->__PVT__walk0_arf_id = VL_RAND_RESET_I(5);
    vlSelf->__PVT__walk0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__walk1_T = VL_RAND_RESET_I(6);
    vlSelf->__PVT__walk1_arf_id = VL_RAND_RESET_I(5);
    vlSelf->__PVT__walk1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback1_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback2_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__writeback3_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_data0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__read_data1 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(109, vlSelf->__PVT__if_id_reg0);
    VL_RAND_RESET_W(109, vlSelf->__PVT__if_id_reg1);
    VL_RAND_RESET_W(77, vlSelf->__PVT__ex_branch_in);
    VL_RAND_RESET_W(115, vlSelf->__PVT__id_ir_reg0);
    VL_RAND_RESET_W(115, vlSelf->__PVT__id_ir_reg1);
    vlSelf->__PVT__id_ir_reg0_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_ir_reg0_instr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_ir_reg1_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_ir_reg1_instr = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(115, vlSelf->__PVT__dec_instr0);
    VL_RAND_RESET_W(115, vlSelf->__PVT__dec_instr1);
    VL_RAND_RESET_W(139, vlSelf->__PVT__ir_is_reg0);
    VL_RAND_RESET_W(139, vlSelf->__PVT__ir_is_reg0_next);
    VL_RAND_RESET_W(139, vlSelf->__PVT__ir_is_reg1);
    VL_RAND_RESET_W(139, vlSelf->__PVT__ir_is_reg1_next);
    vlSelf->__PVT__ir_is_reg0_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ir_is_reg0_instr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ir_is_reg1_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ir_is_reg1_instr = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__inst_ir__fl_write_en_1 = VL_RAND_RESET_I(1);
    vlSelf->__Vcellinp__inst_ir__fl_write_en_0 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__Vcellout__inst_ir__RRAT_debug[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->__Vcellout__inst_phyreg__prf_debug[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->__Vcellout__inst_dmem__ram_debug[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->__PVT__inst_imem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__PVT__inst_ir__DOT__fl_can_alloc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_ir__DOT__fl_req_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_ir__DOT__fl_req_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_ir__DOT__rename_0 = VL_RAND_RESET_Q(34);
    vlSelf->__PVT__inst_ir__DOT__rename_1 = VL_RAND_RESET_Q(34);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->inst_ir__DOT____Vcellout__inst_mt__RRAT_debug[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__fl[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__head_next = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_ir__DOT__inst_fl__DOT__tail_next = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RAT_NEXT[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->__PVT__inst_ir__DOT__inst_mt__DOT__RRAT_NEXT[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_intisq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_memisq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__instr0_valid_rob = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_intisq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_memisq = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__instr1_valid_rob = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__memisq_left = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__instr0_rs1_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__instr1_rs1_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__instr0_rs2_busy = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__instr1_rs2_busy = VL_RAND_RESET_I(1);
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__mem_alu_wb_en = VL_RAND_RESET_I(1);
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int1_alu_wb_en = VL_RAND_RESET_I(1);
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_alu_wb_en = VL_RAND_RESET_I(1);
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__int0_mul_wb_en = VL_RAND_RESET_I(1);
    vlSelf->inst_is_stage__DOT____Vcellinp__inst_bt__instr0_disp2bt_rd_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__mem_instr_num = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__int_instr_num = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__mem_instr_vec = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__inst_dispatch__DOT__int_instr_vec = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        VL_RAND_RESET_W(84, vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__reg_rob[__Vi0]);
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_head = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rob_tail = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__walk_head = VL_RAND_RESET_I(7);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__rollback_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__flush_robid_latch = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__retire_num = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__current_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__inst_rob__DOT__next_state = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id0_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__empty_id1_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_order_reverse[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_age_next[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_T[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(115, vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_control[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_entry_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_entry_ready_order_reverse[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_id = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_id = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__ready_vec = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot1_entry_id = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__slot0_entry_id = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_bju = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old0_is_alu = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_bju = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__old1_is_alu = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__intisq_empty[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_emptyfinder__in_alloc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_emptyfinder__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__flush_valid_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT____Vcellinp__inst_oldest_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_id_1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l1_out_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_id_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_id_1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT__l2_out_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_alloc_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l3_finder_4__in_id_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_alloc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__0__KET____DOT__l2_finder_2__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_alloc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__2__KET____DOT__l2_finder_2__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_alloc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__4__KET____DOT__l2_finder_2__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_alloc_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l1_finder__BRA__6__KET____DOT__l2_finder_2__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_alloc_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__0__KET____DOT__l2_finder_4__in_id_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_1[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_alloc_valid_0[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_1[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_emptyfinder__DOT____Vcellinp__l2_finder__BRA__2__KET____DOT__l2_finder_4__in_id_0[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_big_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l1_small_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_big_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l2_small_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_small_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__l3_picker__in_big_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__0__KET____DOT__l1_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__2__KET____DOT__l1_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__4__KET____DOT__l1_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l1__BRA__6__KET____DOT__l1_picker__in_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_small_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__in_big_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_small_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_age[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT____Vcellinp__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__in_big_id[__Vi0] = VL_RAND_RESET_I(3);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__big_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__l3_picker__DOT__small_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__big_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__0__KET____DOT__l2_picker__DOT__small_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__big_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_intisq__DOT__inst_oldest_picker__DOT__gen_Picker_l2__BRA__2__KET____DOT__l2_picker__DOT__small_cmp[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_state[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_state[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_id[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_id[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_T[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(115, vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_control[__Vi0]);
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_head = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_tail = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__memisq_entry_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__deq_valid = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_is_stage__DOT__inst_memisq__DOT__flush_valid_vector[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->__PVT__inst_phyreg__DOT__prf_file[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_pc[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_rs1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_rs2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_robid[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_reg_T[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(115, vlSelf->__PVT__inst_buffer__DOT__slot_reg_control[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_need_to_flush[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_need_to_stall[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_pc_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_robid_in[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_T_in[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_rs1_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__PVT__inst_buffer__DOT__slot_rs2_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(115, vlSelf->__PVT__inst_buffer__DOT__slot_control_in[__Vi0]);
    }
    vlSelf->inst_buffer__DOT____Vlvbound_hcf70db14__1 = VL_RAND_RESET_I(1);
    vlSelf->inst_buffer__DOT____Vlvbound_h5df65fe2__0 = VL_RAND_RESET_I(6);
    vlSelf->inst_buffer__DOT____Vlvbound_h1655a754__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(115, vlSelf->inst_buffer__DOT____Vlvbound_hc9f25bea__0);
    vlSelf->inst_buffer__DOT____Vlvbound_h5911c180__0 = VL_RAND_RESET_I(32);
    vlSelf->inst_buffer__DOT____Vlvbound_ha2614b0e__0 = VL_RAND_RESET_I(32);
    vlSelf->inst_buffer__DOT____Vlvbound_hfbfc84f6__0 = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_int0__DOT__wb0_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__wb0_reg_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__wb0_reg_prd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_int0__DOT__wb0_reg_robid = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_int0__DOT__wb0_reg_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_int0__DOT__wb0_need_to_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__wb1_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__wb1_reg_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__wb1_reg_prd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_int0__DOT__wb1_reg_robid = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_int0__DOT__wb1_reg_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_int0__DOT__wb1_need_to_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__alu_result = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(320, vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_mcands);
    VL_RAND_RESET_W(320, vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_mpliers);
    VL_RAND_RESET_W(320, vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_products);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_dones = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_robid[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_T[__Vi0] = VL_RAND_RESET_I(6);
    }
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__internal_valid = VL_RAND_RESET_I(5);
    vlSelf->inst_int0__DOT__inst_mult__DOT____Vcellout__mstage__BRA__0__KET____DOT__ms__mcand_out = VL_RAND_RESET_Q(64);
    vlSelf->inst_int0__DOT__inst_mult__DOT____Vcellout__mstage__BRA__0__KET____DOT__ms__mplier_out = VL_RAND_RESET_Q(64);
    vlSelf->inst_int0__DOT__inst_mult__DOT____Vcellout__mstage__BRA__1__KET____DOT__ms__mcand_out = VL_RAND_RESET_Q(64);
    vlSelf->inst_int0__DOT__inst_mult__DOT____Vcellout__mstage__BRA__1__KET____DOT__ms__mplier_out = VL_RAND_RESET_Q(64);
    vlSelf->inst_int0__DOT__inst_mult__DOT____Vcellout__mstage__BRA__2__KET____DOT__ms__mcand_out = VL_RAND_RESET_Q(64);
    vlSelf->inst_int0__DOT__inst_mult__DOT____Vcellout__mstage__BRA__2__KET____DOT__ms__mplier_out = VL_RAND_RESET_Q(64);
    vlSelf->inst_int0__DOT__inst_mult__DOT____Vcellout__mstage__BRA__3__KET____DOT__ms__mcand_out = VL_RAND_RESET_Q(64);
    vlSelf->inst_int0__DOT__inst_mult__DOT____Vcellout__mstage__BRA__3__KET____DOT__ms__mplier_out = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__0__KET____DOT__ms__DOT__prod_in_reg = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__0__KET____DOT__ms__DOT__partial_prod = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__0__KET____DOT__ms__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__0__KET____DOT__ms__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__0__KET____DOT__ms__DOT__need_to_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__0__KET____DOT__ms__DOT__reg_robid = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__0__KET____DOT__ms__DOT__reg_prf_id = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__1__KET____DOT__ms__DOT__prod_in_reg = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__1__KET____DOT__ms__DOT__partial_prod = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__1__KET____DOT__ms__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__1__KET____DOT__ms__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__1__KET____DOT__ms__DOT__need_to_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__1__KET____DOT__ms__DOT__reg_robid = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__1__KET____DOT__ms__DOT__reg_prf_id = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__2__KET____DOT__ms__DOT__prod_in_reg = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__2__KET____DOT__ms__DOT__partial_prod = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__2__KET____DOT__ms__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__2__KET____DOT__ms__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__2__KET____DOT__ms__DOT__need_to_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__2__KET____DOT__ms__DOT__reg_robid = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__2__KET____DOT__ms__DOT__reg_prf_id = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__3__KET____DOT__ms__DOT__prod_in_reg = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__3__KET____DOT__ms__DOT__partial_prod = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__3__KET____DOT__ms__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__3__KET____DOT__ms__DOT__done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__3__KET____DOT__ms__DOT__need_to_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__3__KET____DOT__ms__DOT__reg_robid = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_int0__DOT__inst_mult__DOT__mstage__BRA__3__KET____DOT__ms__DOT__reg_prf_id = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_int1__DOT__bju_branch_taken = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int1__DOT__bju_branch_target_pc = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_int1__DOT__alu_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_int1__DOT__wb_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int1__DOT__wb_reg_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int1__DOT__wb_reg_prd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_int1__DOT__wb_reg_robid = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_int1__DOT__wb_reg_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_int1__DOT__wb_need_to_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int1__DOT__branch_taken_latch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int1__DOT__branch_valid_latch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int1__DOT__branch_target_pc_latch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_int1__DOT__branch_pc_latch = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_int1__DOT__branch_update_GHSR_latch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int1__DOT__GHSR_restore_latch = VL_RAND_RESET_I(10);
    vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_rs1_eq_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_rs1_lt_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_sign_rs1_lt_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_bj = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__is_branch_taken_diff = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int1__DOT__inst_bju__DOT__GHSR_checkpoint = VL_RAND_RESET_I(11);
    vlSelf->__PVT__inst_int2__DOT__agu_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_int2__DOT__reg_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_int2__DOT__reg_store_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_int2__DOT__reg_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int2__DOT__reg_is_store = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int2__DOT__reg_robid = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_int2__DOT__reg_T = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_int2__DOT__reg_funct3 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__inst_int2__DOT__need_to_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int2__DOT__wb_need_to_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int2__DOT__wb_reg_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int2__DOT__wb_reg_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_int2__DOT__wb_reg_prd = VL_RAND_RESET_I(6);
    vlSelf->__PVT__inst_int2__DOT__wb_reg_robid = VL_RAND_RESET_I(7);
    vlSelf->__PVT__inst_int2__DOT__wb_reg_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_int2__DOT__load_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_int2__DOT__load_byte = VL_RAND_RESET_I(8);
    vlSelf->__PVT__inst_int2__DOT__load_hword = VL_RAND_RESET_I(16);
    vlSelf->__PVT__inst_sq__DOT__sq_head = VL_RAND_RESET_I(2);
    vlSelf->__PVT__inst_sq__DOT__sq_tail = VL_RAND_RESET_I(2);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_sq__DOT__sq_reg_robid[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_sq__DOT__sq_reg_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_sq__DOT__sq_reg_addr[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_sq__DOT__sq_reg_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_sq__DOT__sq_reg_ready[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_sq__DOT__load_addr_hit[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->inst_sq__DOT____Vcellinp__inst_load_picker__match[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__id[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l1_hit[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l1_hit_index[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l2_hit[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<1; ++__Vi0) {
        vlSelf->__PVT__inst_sq__DOT__inst_load_picker__DOT__l2_hit_index[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__index[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__0__KET____DOT__picker__match[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__index[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l1__BRA__2__KET____DOT__picker__match[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__index[__Vi0] = VL_RAND_RESET_I(2);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->inst_sq__DOT__inst_load_picker__DOT____Vcellinp__gen_matcher_l2__BRA__0__KET____DOT__picker__match[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->__PVT__inst_dmem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(109, vlSelf->__Vdly__if_id_reg0);
    vlSelf->__Vdly__ir_is_reg0_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ir_is_reg0_instr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ir_is_reg1_instr = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__ir_is_reg1_pc = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__inst_imem__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__inst_imem__DOT__ram__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_imem__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_fl__DOT__fl__v0 = 0;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_fl__DOT__fl__v1 = 0;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_fl__DOT__fl__v2 = 0;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_fl__DOT__fl__v3 = 0;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_mt__DOT__RAT__v0 = 0;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_mt__DOT__RAT__v32 = 0;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_mt__DOT__RRAT__v0 = 0;
    vlSelf->__Vdlyvset__inst_ir__DOT__inst_mt__DOT__RRAT__v32 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v4 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v5 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v6 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v7 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v8 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v9 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v10 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v11 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v12 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v13 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v14 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v15 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v16 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v17 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v18 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v19 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v20 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v21 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v22 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v23 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v24 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v25 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v26 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v27 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v28 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v29 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v30 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v31 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v32 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v33 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v34 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v35 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v36 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v37 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v38 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v39 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v40 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v41 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v42 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v43 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v44 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v45 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v46 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v47 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v48 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v49 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v50 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v51 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v52 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v53 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v54 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v55 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v56 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v57 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v58 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v59 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v60 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v61 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v62 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v63 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v64 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v65 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v66 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v67 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v68 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v70 = 0;
    vlSelf->__Vdly__inst_is_stage__DOT__inst_rob__DOT__rob_tail = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v134 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v140 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v146 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v152 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v410 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v411 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v412 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v413 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v414 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v415 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v416 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v417 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v418 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v419 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v420 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v421 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v422 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v423 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v424 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v425 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v426 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v427 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v428 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v429 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v430 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v431 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v432 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v433 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v434 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v435 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v436 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v437 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v438 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v439 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v440 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v441 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v442 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v443 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v444 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v445 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v446 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v447 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v448 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v449 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v450 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v451 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v452 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v453 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v454 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v455 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v456 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v457 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v458 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v459 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v460 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v461 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v462 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v463 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v464 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v465 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v466 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v467 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v468 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v469 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v470 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v471 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v472 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v473 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v474 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v475 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v476 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v477 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v478 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v479 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_rob__DOT__reg_rob__v481 = 0;
    vlSelf->__Vdly__inst_is_stage__DOT__inst_rob__DOT__walk_head = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v4 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v5 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v6 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v7 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v8 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v9 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v10 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v11 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v12 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_valid__v13 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_T__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_T__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_T__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_T__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_id__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_id__v3 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v0 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v0 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v1 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v1 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v2 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_pc__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_robid__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_control__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v4 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v5 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v6 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v7 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v8 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v9 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v10 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src2_state__v11 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v4 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v5 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v6 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v7 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v8 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v9 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v10 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_intisq__DOT__intisq_src1_state__v11 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v64 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v65 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v66 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v67 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v68 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v69 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v70 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_bt__DOT__reg_busy_table__v71 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid__v4 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid__v5 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid__v6 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid__v7 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_valid__v8 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_T__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_T__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_T__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_T__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_id__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_id__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_id__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_id__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_id__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_id__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_id__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_id__v3 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v0 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v0 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v1 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v1 = 0;
    vlSelf->__Vdlyvdim0__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v2 = 0;
    vlSelf->__Vdlyvval__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_pc__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_robid__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_control__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_control__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_control__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_control__v3 = 0;
    vlSelf->__Vdly__inst_is_stage__DOT__inst_memisq__DOT__memisq_tail = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_state__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_state__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_state__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_state__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_state__v4 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_state__v5 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_state__v6 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src1_state__v7 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_state__v0 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_state__v1 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_state__v2 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_state__v3 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_state__v4 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_state__v5 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_state__v6 = 0;
    vlSelf->__Vdlyvset__inst_is_stage__DOT__inst_memisq__DOT__memisq_src2_state__v7 = 0;
    vlSelf->__Vdlyvset__inst_phyreg__DOT__prf_file__v0 = 0;
    vlSelf->__Vdlyvset__inst_phyreg__DOT__prf_file__v64 = 0;
    vlSelf->__Vdlyvset__inst_phyreg__DOT__prf_file__v65 = 0;
    vlSelf->__Vdlyvset__inst_phyreg__DOT__prf_file__v66 = 0;
    vlSelf->__Vdlyvset__inst_phyreg__DOT__prf_file__v67 = 0;
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_valid__v0 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_valid__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_valid__v1 = 0;
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_valid__v2 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_valid__v3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_valid__v3 = 0;
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_valid__v4 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_valid__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_valid__v5 = 0;
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_valid__v6 = 0;
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_rs1__v0 = 0;
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_rs1__v1 = 0;
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_rs1__v2 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_pc__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_pc__v0 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_pc__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_pc__v1 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_pc__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_pc__v2 = 0;
    VL_RAND_RESET_W(115, vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v0);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_control__v0 = 0;
    VL_RAND_RESET_W(115, vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v1);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_control__v1 = 0;
    VL_RAND_RESET_W(115, vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_control__v2);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_control__v2 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_robid__v0 = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_robid__v0 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_robid__v1 = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_robid__v1 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_robid__v2 = VL_RAND_RESET_I(7);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_robid__v2 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_T__v0 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_T__v0 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_T__v1 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_T__v1 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_T__v2 = VL_RAND_RESET_I(6);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_T__v2 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_rs2__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_rs2__v0 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_rs2__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_rs2__v1 = 0;
    vlSelf->__Vdlyvval__inst_buffer__DOT__slot_reg_rs2__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__inst_buffer__DOT__slot_reg_rs2__v2 = 0;
    vlSelf->__Vdly__flush_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__inst_int1__DOT__inst_bju__DOT__GHSR_checkpoint = VL_RAND_RESET_I(11);
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_valid__v0 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_valid__v1 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_valid__v2 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_valid__v3 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_valid__v4 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_valid__v5 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_valid__v6 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_addr__v0 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_addr__v1 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_robid__v0 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_robid__v1 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_data__v0 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_data__v1 = 0;
    vlSelf->__Vdly__inst_sq__DOT__sq_tail = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v0 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v1 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v2 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v3 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v4 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v5 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v6 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v7 = 0;
    vlSelf->__Vdlyvset__inst_sq__DOT__sq_reg_ready__v8 = 0;
    vlSelf->__Vdlyvset__inst_dmem__DOT__ram__v0 = 0;
}
