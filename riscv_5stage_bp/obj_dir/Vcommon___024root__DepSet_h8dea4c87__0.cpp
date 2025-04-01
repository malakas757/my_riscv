// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___sequent__TOP__4(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___sequent__TOP__4\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h5d39d546__0;
    // Body
    vlSelf->__Vdly__cpu__DOT__if_id_reg[0U] = vlSelf->cpu__DOT__if_id_reg[0U];
    vlSelf->__Vdly__cpu__DOT__if_id_reg[1U] = vlSelf->cpu__DOT__if_id_reg[1U];
    vlSelf->__Vdly__cpu__DOT__if_id_reg[2U] = vlSelf->cpu__DOT__if_id_reg[2U];
    vlSelf->__Vdly__cpu__DOT__if_id_reg[3U] = vlSelf->cpu__DOT__if_id_reg[3U];
    vlSelf->__Vdlyvset__cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0 = 0U;
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v1 = 0U;
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0 = 0U;
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v1 = 0U;
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v0 = 0U;
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v1 = 0U;
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v33 = 0U;
    vlSelf->__Vdlyvset__cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers__v0 = 0U;
    if ((1U & (~ (IData)(vlSelf->reset_n)))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[1U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[2U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[3U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[4U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[5U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[6U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[7U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[8U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[9U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0xaU] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0xbU] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0xcU] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0xdU] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0xeU] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0xfU] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x10U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x11U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x12U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x13U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x14U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x15U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x16U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x17U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x18U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x19U] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x1aU] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x1bU] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x1cU] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x1dU] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x1eU] = 0U;
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[0x1fU] = 0U;
    }
    VL_EXTEND_WI(76,32, __Vtemp_h5d39d546__0, vlSelf->cpu__DOT__inst_mem__DOT__ram
                 [(0xffU & (vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg 
                            >> 2U))]);
    if ((1U & ((IData)(vlSelf->cpu__DOT__if_id_flush) 
               | (~ (IData)(vlSelf->reset_n))))) {
        vlSelf->__Vdly__cpu__DOT__if_id_reg[0U] = 0x13U;
        vlSelf->__Vdly__cpu__DOT__if_id_reg[1U] = 0U;
        vlSelf->__Vdly__cpu__DOT__if_id_reg[2U] = 0U;
        vlSelf->__Vdly__cpu__DOT__if_id_reg[3U] = 0U;
    } else if (vlSelf->cpu__DOT__if_id_stall) {
        vlSelf->__Vdly__cpu__DOT__if_id_reg[0U] = vlSelf->cpu__DOT__if_id_reg[0U];
        vlSelf->__Vdly__cpu__DOT__if_id_reg[1U] = vlSelf->cpu__DOT__if_id_reg[1U];
        vlSelf->__Vdly__cpu__DOT__if_id_reg[2U] = vlSelf->cpu__DOT__if_id_reg[2U];
        vlSelf->__Vdly__cpu__DOT__if_id_reg[3U] = vlSelf->cpu__DOT__if_id_reg[3U];
    } else {
        vlSelf->__Vdly__cpu__DOT__if_id_reg[0U] = __Vtemp_h5d39d546__0[0U];
        vlSelf->__Vdly__cpu__DOT__if_id_reg[1U] = __Vtemp_h5d39d546__0[1U];
        vlSelf->__Vdly__cpu__DOT__if_id_reg[2U] = (
                                                   (vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg 
                                                    << 0xcU) 
                                                   | __Vtemp_h5d39d546__0[2U]);
        vlSelf->__Vdly__cpu__DOT__if_id_reg[3U] = (vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg 
                                                   >> 0x14U);
    }
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR 
        = ((IData)(vlSelf->reset_n) ? (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                                        & (IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__update_GHSR))
                                        ? ((0x3feU 
                                            & ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__GHSR_restore) 
                                               << 1U)) 
                                           | (IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken))
                                        : (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR_next))
            : 0U);
    if ((0x80U & vlSelf->cpu__DOT__ex_mem_reg[2U])) {
        vlSelf->__Vdlyvval__cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram__v0 
            = vlSelf->cpu__DOT__ex_mem_reg[0U];
        vlSelf->__Vdlyvset__cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram__v0 
            = (0xffU & (vlSelf->cpu__DOT__ex_mem_reg[1U] 
                        >> 2U));
    }
    if (vlSelf->reset_n) {
        vlSelf->cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__GHSR_checkpoint = 0U;
        if (vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__update_BTB) {
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0 
                = (0x1ffffffU & ((vlSelf->cpu__DOT__id_ex_reg[6U] 
                                  << 0xfU) | (vlSelf->cpu__DOT__id_ex_reg[5U] 
                                              >> 0x11U)));
            vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0 = 1U;
            vlSelf->__Vdlyvdim0__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0 
                = (0x1fU & (vlSelf->cpu__DOT__id_ex_reg[5U] 
                            >> 0xcU));
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0 
                = (vlSelf->cpu__DOT__branch_target_pc 
                   >> 2U);
            vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0 = 1U;
            vlSelf->__Vdlyvdim0__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0 
                = (0x1fU & (vlSelf->cpu__DOT__id_ex_reg[5U] 
                            >> 0xcU));
            vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v0 = 1U;
            vlSelf->__Vdlyvdim0__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v0 
                = (0x1fU & (vlSelf->cpu__DOT__id_ex_reg[5U] 
                            >> 0xcU));
        } else {
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v1 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0U];
            vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v1 = 1U;
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v2 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [1U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v3 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [2U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v4 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [3U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v5 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [4U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v6 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [5U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v7 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [6U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v8 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [7U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v9 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [8U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v10 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [9U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v11 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0xaU];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v12 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0xbU];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v13 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0xcU];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v14 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0xdU];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v15 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0xeU];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v16 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0xfU];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v17 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x10U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v18 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x11U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v19 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x12U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v20 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x13U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v21 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x14U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v22 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x15U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v23 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x16U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v24 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x17U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v25 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x18U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v26 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x19U];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v27 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x1aU];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v28 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x1bU];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v29 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x1cU];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v30 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x1dU];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v31 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x1eU];
            vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v32 
                = vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
                [0x1fU];
        }
        if ((0x40U & vlSelf->cpu__DOT__mem_wb_reg[0U])) {
            vlSelf->__Vdlyvval__cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers__v0 
                = ((0U != (0x1fU & ((vlSelf->cpu__DOT__mem_wb_reg[3U] 
                                     << 2U) | (vlSelf->cpu__DOT__mem_wb_reg[2U] 
                                               >> 0x1eU))))
                    ? vlSelf->cpu__DOT__wb_result : 0U);
            vlSelf->__Vdlyvset__cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers__v0 = 1U;
            vlSelf->__Vdlyvdim0__cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers__v0 
                = (0x1fU & ((vlSelf->cpu__DOT__mem_wb_reg[3U] 
                             << 2U) | (vlSelf->cpu__DOT__mem_wb_reg[2U] 
                                       >> 0x1eU)));
        }
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v0 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                              [0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                               [0U])
                                               ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                              [1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                               [1U])
                                               ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [1U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v2 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                              [2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                               [2U])
                                               ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [2U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v3 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                              [3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                               [3U])
                                               ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [3U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v4 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                              [4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                               [4U])
                                               ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [4U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v5 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                              [5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                               [5U])
                                               ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [5U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v6 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                              [6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                               [6U])
                                               ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [6U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v7 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                              [7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                               [7U])
                                               ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [7U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v8 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                              [8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                               [8U])
                                               ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [8U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v9 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                              [9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                        ? 3U : 2U) : 
                             ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                               ? 3U : 1U)) : ((1U & 
                                               vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                               [9U])
                                               ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 2U
                                                   : 0U)
                                               : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? 1U
                                                   : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [9U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v10 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xaU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xaU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                [0xaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                            ? 3U : 2U)
                                : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                                    [0xaU])
                                                    ? 
                                                   ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                     ? 1U
                                                     : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xaU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v11 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xbU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xbU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                [0xbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                            ? 3U : 2U)
                                : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                                    [0xbU])
                                                    ? 
                                                   ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                     ? 1U
                                                     : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xbU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v12 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xcU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xcU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                [0xcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                            ? 3U : 2U)
                                : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                                    [0xcU])
                                                    ? 
                                                   ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                     ? 1U
                                                     : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xcU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v13 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xdU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xdU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                [0xdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                            ? 3U : 2U)
                                : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                                    [0xdU])
                                                    ? 
                                                   ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                     ? 1U
                                                     : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xdU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v14 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xeU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xeU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                [0xeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                            ? 3U : 2U)
                                : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                                    [0xeU])
                                                    ? 
                                                   ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                     ? 1U
                                                     : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xeU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v15 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xfU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xfU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                [0xfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                            ? 3U : 2U)
                                : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                    ? 3U : 1U)) : (
                                                   (1U 
                                                    & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                                    [0xfU])
                                                    ? 
                                                   ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                     ? 2U
                                                     : 0U)
                                                    : 
                                                   ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                     ? 1U
                                                     : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xfU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v16 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x10U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x10U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x10U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x10U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x10U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v17 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x11U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x11U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x11U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x11U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x11U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v18 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x12U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x12U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x12U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x12U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x12U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v19 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x13U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x13U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x13U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x13U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x13U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v20 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x14U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x14U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x14U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x14U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x14U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v21 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x15U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x15U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x15U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x15U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x15U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v22 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x16U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x16U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x16U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x16U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x16U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v23 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x17U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x17U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x17U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x17U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x17U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v24 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x18U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x18U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x18U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x18U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x18U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v25 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x19U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x19U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x19U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x19U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x19U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v26 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x1aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v27 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x1bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v28 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x1cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v29 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x1dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v30 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x1eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v31 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x1fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v32 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x20U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x20U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x20U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x20U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x20U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v33 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x21U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x21U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x21U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x21U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x21U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v34 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x22U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x22U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x22U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x22U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x22U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v35 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x23U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x23U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x23U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x23U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x23U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v36 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x24U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x24U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x24U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x24U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x24U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v37 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x25U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x25U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x25U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x25U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x25U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v38 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x26U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x26U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x26U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x26U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x26U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v39 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x27U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x27U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x27U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x27U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x27U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v40 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x28U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x28U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x28U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x28U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x28U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v41 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x29U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x29U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x29U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x29U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x29U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v42 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x2aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x2aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v43 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x2bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x2bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v44 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x2cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x2cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v45 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x2dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x2dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v46 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x2eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x2eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v47 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x2fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x2fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x2fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x2fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x2fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v48 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x30U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x30U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x30U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x30U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x30U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v49 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x31U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x31U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x31U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x31U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x31U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v50 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x32U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x32U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x32U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x32U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x32U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v51 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x33U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x33U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x33U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x33U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x33U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v52 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x34U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x34U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x34U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x34U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x34U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v53 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x35U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x35U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v54 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x36U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x36U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v55 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x37U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x37U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v56 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x38U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x38U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v57 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x39U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x39U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v58 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x3aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v59 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x3bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v60 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x3cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v61 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x3dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v62 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x3eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v63 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x3fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v64 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x40U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x40U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x40U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x40U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x40U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v65 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x41U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x41U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x41U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x41U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x41U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v66 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x42U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x42U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x42U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x42U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x42U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v67 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x43U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x43U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x43U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x43U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x43U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v68 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x44U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x44U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x44U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x44U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x44U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v69 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x45U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x45U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x45U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x45U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x45U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v70 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x46U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x46U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x46U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x46U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x46U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v71 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x47U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x47U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x47U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x47U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x47U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v72 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x48U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x48U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x48U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x48U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x48U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v73 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x49U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x49U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x49U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x49U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x49U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v74 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x4aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x4aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x4aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x4aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x4aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v75 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x4bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x4bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x4bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x4bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x4bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v76 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x4cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x4cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x4cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x4cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x4cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v77 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x4dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x4dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x4dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x4dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x4dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v78 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x4eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x4eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x4eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x4eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x4eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v79 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x4fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x4fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x4fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x4fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x4fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v80 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x50U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x50U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x50U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x50U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x50U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v81 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x51U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x51U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x51U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x51U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x51U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v82 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x52U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x52U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x52U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x52U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x52U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v83 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x53U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x53U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x53U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x53U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x53U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v84 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x54U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x54U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x54U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x54U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x54U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v85 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x55U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x55U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x55U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x55U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x55U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v86 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x56U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x56U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x56U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x56U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x56U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v87 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x57U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x57U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x57U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x57U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x57U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v88 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x58U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x58U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x58U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x58U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x58U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v89 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x59U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x59U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x59U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x59U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x59U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v90 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x5aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x5aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x5aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x5aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x5aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v91 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x5bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x5bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x5bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x5bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x5bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v92 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x5cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x5cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x5cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x5cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x5cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v93 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x5dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x5dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x5dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x5dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x5dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v94 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x5eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x5eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x5eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x5eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x5eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v95 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x5fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x5fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x5fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x5fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x5fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v96 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x60U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x60U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x60U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x60U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x60U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v97 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x61U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x61U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x61U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x61U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x61U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v98 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x62U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x62U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x62U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x62U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x62U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v99 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x63U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x63U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x63U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x63U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x63U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v100 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x64U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x64U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x64U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x64U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x64U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v101 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x65U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x65U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x65U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x65U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x65U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v102 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x66U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x66U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x66U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x66U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x66U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v103 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x67U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x67U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x67U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x67U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x67U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v104 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x68U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x68U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x68U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x68U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x68U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v105 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x69U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x69U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x69U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x69U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x69U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v106 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x6aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x6aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x6aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x6aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x6aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v107 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x6bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x6bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x6bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x6bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x6bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v108 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x6cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x6cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x6cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x6cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x6cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v109 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x6dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x6dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x6dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x6dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x6dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v110 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x6eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x6eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x6eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x6eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x6eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v111 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x6fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x6fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x6fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x6fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x6fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v112 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x70U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x70U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x70U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x70U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x70U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v113 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x71U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x71U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x71U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x71U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x71U]);
    } else {
        vlSelf->cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__GHSR_checkpoint 
            = (((~ ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__GHSR_checkpoint) 
                    >> 0xaU)) & (IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__update_GHSR))
                ? (0x400U | ((0x3feU & vlSelf->cpu__DOT__id_ex_reg[1U]) 
                             | (IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)))
                : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__update_GHSR)
                    ? (0x400U | ((0x3feU & ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__GHSR_checkpoint) 
                                            << 1U)) 
                                 | (IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)))
                    : (IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__GHSR_checkpoint)));
        vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v1 = 1U;
        vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v1 = 1U;
        vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v33 = 1U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v0 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v2 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v3 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v4 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v5 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v6 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v7 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v8 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v9 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v10 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v11 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v12 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v13 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v14 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v15 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v16 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v17 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v18 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v19 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v20 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v21 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v22 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v23 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v24 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v25 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v26 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v27 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v28 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v29 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v30 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v31 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v32 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v33 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v34 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v35 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v36 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v37 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v38 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v39 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v40 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v41 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v42 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v43 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v44 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v45 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v46 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v47 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v48 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v49 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v50 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v51 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v52 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v53 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v54 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v55 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v56 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v57 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v58 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v59 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v60 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v61 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v62 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v63 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v64 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v65 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v66 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v67 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v68 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v69 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v70 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v71 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v72 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v73 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v74 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v75 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v76 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v77 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v78 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v79 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v80 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v81 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v82 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v83 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v84 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v85 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v86 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v87 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v88 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v89 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v90 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v91 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v92 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v93 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v94 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v95 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v96 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v97 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v98 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v99 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v100 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v101 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v102 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v103 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v104 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v105 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v106 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v107 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v108 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v109 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v110 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v111 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v112 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v113 = 2U;
    }
}

VL_INLINE_OPT void Vcommon___024root___sequent__TOP__5(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___sequent__TOP__5\n"); );
    // Body
    if (vlSelf->reset_n) {
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v114 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x72U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x72U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x72U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x72U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x72U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v115 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x73U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x73U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x73U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x73U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x73U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v116 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x74U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x74U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x74U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x74U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x74U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v117 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x75U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x75U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x75U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x75U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x75U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v118 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x76U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x76U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x76U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x76U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x76U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v119 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x77U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x77U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x77U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x77U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x77U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v120 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x78U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x78U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x78U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x78U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x78U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v121 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x79U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x79U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x79U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x79U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x79U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v122 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x7aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x7aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x7aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x7aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x7aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v123 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x7bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x7bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x7bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x7bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x7bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v124 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x7cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x7cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x7cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x7cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x7cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v125 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x7dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x7dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x7dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x7dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x7dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v126 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x7eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x7eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x7eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x7eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x7eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v127 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x7fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x7fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x7fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x7fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x7fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v128 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x80U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x80U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x80U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x80U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x80U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v129 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x81U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x81U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x81U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x81U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x81U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v130 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x82U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x82U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x82U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x82U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x82U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v131 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x83U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x83U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x83U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x83U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x83U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v132 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x84U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x84U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x84U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x84U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x84U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v133 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x85U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x85U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x85U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x85U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x85U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v134 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x86U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x86U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x86U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x86U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x86U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v135 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x87U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x87U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x87U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x87U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x87U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v136 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x88U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x88U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x88U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x88U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x88U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v137 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x89U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x89U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x89U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x89U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x89U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v138 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x8aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x8aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x8aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x8aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x8aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v139 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x8bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x8bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x8bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x8bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x8bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v140 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x8cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x8cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x8cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x8cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x8cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v141 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x8dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x8dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x8dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x8dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x8dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v142 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x8eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x8eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x8eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x8eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x8eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v143 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x8fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x8fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x8fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x8fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x8fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v144 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x90U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x90U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x90U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x90U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x90U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v145 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x91U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x91U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x91U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x91U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x91U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v146 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x92U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x92U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x92U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x92U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x92U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v147 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x93U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x93U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x93U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x93U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x93U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v148 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x94U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x94U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x94U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x94U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x94U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v149 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x95U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x95U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x95U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x95U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x95U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v150 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x96U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x96U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x96U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x96U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x96U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v151 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x97U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x97U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x97U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x97U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x97U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v152 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x98U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x98U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x98U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x98U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x98U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v153 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x99U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x99U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x99U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x99U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x99U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v154 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x9aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x9aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x9aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x9aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x9aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v155 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x9bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x9bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x9bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x9bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x9bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v156 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x9cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x9cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x9cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x9cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x9cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v157 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x9dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x9dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x9dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x9dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x9dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v158 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x9eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x9eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x9eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x9eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x9eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v159 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x9fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x9fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0x9fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x9fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x9fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v160 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xa0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xa0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xa0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xa0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xa0U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v161 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xa1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xa1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xa1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xa1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xa1U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v162 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xa2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xa2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xa2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xa2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xa2U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v163 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xa3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xa3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xa3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xa3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xa3U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v164 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xa4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xa4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xa4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xa4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xa4U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v165 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xa5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xa5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xa5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xa5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xa5U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v166 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xa6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xa6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xa6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xa6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xa6U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v167 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xa7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xa7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xa7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xa7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xa7U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v168 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xa8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xa8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xa8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xa8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xa8U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v169 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xa9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xa9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xa9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xa9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xa9U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v170 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xaaU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xaaU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xaaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xaaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xaaU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v171 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xabU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xabU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xabU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xabU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xabU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v172 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xacU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xacU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xacU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xacU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xacU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v173 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xadU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xadU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xadU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xadU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xadU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v174 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xaeU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xaeU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xaeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xaeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xaeU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v175 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xafU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xafU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xafU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xafU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xafU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v176 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xb0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xb0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xb0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xb0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xb0U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v177 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xb1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xb1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xb1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xb1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xb1U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v178 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xb2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xb2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xb2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xb2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xb2U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v179 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xb3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xb3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xb3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xb3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xb3U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v180 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xb4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xb4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xb4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xb4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xb4U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v181 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xb5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xb5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xb5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xb5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xb5U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v182 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xb6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xb6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xb6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xb6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xb6U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v183 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xb7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xb7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xb7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xb7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xb7U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v184 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xb8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xb8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xb8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xb8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xb8U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v185 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xb9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xb9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xb9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xb9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xb9U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v186 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xbaU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xbaU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xbaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xbaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xbaU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v187 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xbbU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xbbU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xbbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xbbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xbbU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v188 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xbcU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xbcU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xbcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xbcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xbcU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v189 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xbdU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xbdU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xbdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xbdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xbdU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v190 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xbeU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xbeU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xbeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xbeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xbeU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v191 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xbfU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xbfU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xbfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xbfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xbfU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v192 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xc0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xc0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xc0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xc0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xc0U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v193 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xc1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xc1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xc1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xc1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xc1U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v194 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xc2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xc2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xc2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xc2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xc2U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v195 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xc3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xc3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xc3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xc3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xc3U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v196 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xc4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xc4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xc4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xc4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xc4U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v197 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xc5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xc5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xc5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xc5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xc5U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v198 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xc6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xc6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xc6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xc6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xc6U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v199 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xc7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xc7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xc7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xc7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xc7U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v200 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xc8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xc8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xc8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xc8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xc8U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v201 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xc9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xc9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xc9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xc9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xc9U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v202 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xcaU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xcaU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xcaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xcaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xcaU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v203 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xcbU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xcbU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xcbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xcbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xcbU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v204 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xccU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xccU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xccU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xccU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xccU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v205 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xcdU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xcdU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xcdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xcdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xcdU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v206 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xceU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xceU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xceU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xceU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xceU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v207 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xcfU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xcfU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xcfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xcfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xcfU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v208 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xd0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xd0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xd0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xd0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xd0U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v209 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xd1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xd1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xd1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xd1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xd1U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v210 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xd2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xd2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xd2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xd2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xd2U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v211 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xd3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xd3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xd3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xd3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xd3U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v212 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xd4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xd4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xd4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xd4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xd4U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v213 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xd5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xd5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xd5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xd5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xd5U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v214 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xd6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xd6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xd6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xd6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xd6U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v215 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xd7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xd7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xd7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xd7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xd7U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v216 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xd8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xd8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xd8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xd8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xd8U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v217 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xd9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xd9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xd9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xd9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xd9U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v218 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xdaU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xdaU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xdaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xdaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xdaU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v219 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xdbU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xdbU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xdbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xdbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xdbU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v220 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xdcU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xdcU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xdcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xdcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xdcU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v221 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xddU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xddU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xddU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xddU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xddU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v222 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xdeU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xdeU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xdeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xdeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xdeU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v223 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xdfU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xdfU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xdfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xdfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xdfU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v224 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xe0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xe0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xe0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xe0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xe0U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v225 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xe1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xe1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xe1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xe1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xe1U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v226 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xe2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xe2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xe2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xe2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xe2U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v227 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xe3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xe3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xe3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xe3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xe3U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v228 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xe4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xe4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xe4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xe4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xe4U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v229 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xe5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xe5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xe5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xe5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xe5U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v230 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xe6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xe6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xe6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xe6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xe6U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v231 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xe7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xe7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xe7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xe7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xe7U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v232 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xe8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xe8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xe8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xe8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xe8U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v233 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xe9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xe9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xe9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xe9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xe9U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v234 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xeaU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xeaU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xeaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xeaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xeaU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v235 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xebU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xebU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xebU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xebU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xebU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v236 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xecU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xecU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xecU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xecU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xecU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v237 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xedU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xedU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xedU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xedU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xedU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v238 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xeeU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xeeU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xeeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xeeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xeeU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v239 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xefU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xefU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xefU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xefU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xefU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v240 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xf0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xf0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xf0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xf0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xf0U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v241 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xf1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xf1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xf1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xf1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xf1U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v242 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xf2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xf2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xf2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xf2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xf2U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v243 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xf3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xf3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xf3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xf3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xf3U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v244 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xf4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xf4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xf4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xf4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xf4U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v245 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xf5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xf5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xf5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xf5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xf5U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v246 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xf6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xf6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xf6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xf6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xf6U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v247 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xf7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xf7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xf7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xf7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xf7U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v248 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xf8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xf8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xf8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xf8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xf8U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v249 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xf9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xf9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xf9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xf9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xf9U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v250 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xfaU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xfaU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xfaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xfaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xfaU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v251 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xfbU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xfbU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xfbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xfbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xfbU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v252 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xfcU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xfcU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xfcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xfcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xfcU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v253 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xfdU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xfdU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xfdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xfdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xfdU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v254 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xfeU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xfeU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xfeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xfeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xfeU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v255 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0xffU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0xffU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                 [0xffU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                              ? 3U : 2U)
                                 : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                     ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0xffU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                  ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                 ? 1U
                                                 : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0xffU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v256 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x100U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x100U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x100U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x100U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x100U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v257 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x101U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x101U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x101U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x101U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x101U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v258 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x102U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x102U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x102U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x102U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x102U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v259 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x103U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x103U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x103U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x103U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x103U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v260 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x104U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x104U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x104U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x104U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x104U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v261 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x105U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x105U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x105U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x105U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x105U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v262 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x106U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x106U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x106U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x106U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x106U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v263 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x107U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x107U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x107U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x107U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x107U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v264 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x108U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x108U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x108U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x108U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x108U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v265 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x109U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x109U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x109U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x109U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x109U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v266 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x10aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x10aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x10aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x10aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x10aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v267 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x10bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x10bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x10bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x10bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x10bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v268 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x10cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x10cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x10cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x10cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x10cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v269 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x10dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x10dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x10dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x10dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x10dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v270 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x10eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x10eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x10eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x10eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x10eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v271 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x10fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x10fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x10fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x10fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x10fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v272 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x110U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x110U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x110U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x110U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x110U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v273 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x111U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x111U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x111U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x111U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x111U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v274 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x112U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x112U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x112U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x112U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x112U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v275 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x113U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x113U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x113U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x113U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x113U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v276 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x114U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x114U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x114U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x114U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x114U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v277 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x115U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x115U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x115U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x115U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x115U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v278 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x116U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x116U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x116U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x116U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x116U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v279 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x117U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x117U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x117U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x117U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x117U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v280 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x118U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x118U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x118U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x118U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x118U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v281 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x119U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x119U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x119U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x119U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x119U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v282 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x11aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x11aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x11aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x11aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x11aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v283 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x11bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x11bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x11bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x11bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x11bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v284 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x11cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x11cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x11cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x11cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x11cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v285 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x11dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x11dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x11dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x11dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x11dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v286 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x11eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x11eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x11eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x11eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x11eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v287 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x11fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x11fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x11fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x11fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x11fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v288 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x120U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x120U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x120U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x120U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x120U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v289 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x121U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x121U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x121U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x121U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x121U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v290 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x122U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x122U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x122U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x122U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x122U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v291 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x123U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x123U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x123U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x123U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x123U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v292 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x124U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x124U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x124U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x124U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x124U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v293 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x125U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x125U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x125U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x125U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x125U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v294 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x126U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x126U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x126U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x126U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x126U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v295 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x127U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x127U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x127U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x127U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x127U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v296 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x128U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x128U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x128U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x128U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x128U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v297 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x129U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x129U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x129U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x129U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x129U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v298 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x12aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x12aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x12aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x12aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x12aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v299 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x12bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x12bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x12bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x12bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x12bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v300 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x12cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x12cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x12cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x12cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x12cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v301 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x12dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x12dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x12dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x12dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x12dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v302 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x12eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x12eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x12eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x12eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x12eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v303 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x12fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x12fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x12fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x12fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x12fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v304 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x130U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x130U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x130U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x130U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x130U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v305 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x131U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x131U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x131U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x131U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x131U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v306 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x132U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x132U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x132U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x132U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x132U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v307 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x133U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x133U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x133U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x133U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x133U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v308 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x134U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x134U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x134U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x134U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x134U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v309 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x135U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x135U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x135U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x135U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x135U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v310 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x136U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x136U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x136U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x136U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x136U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v311 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x137U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x137U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x137U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x137U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x137U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v312 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x138U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x138U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x138U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x138U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x138U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v313 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x139U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x139U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x139U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x139U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x139U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v314 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x13aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x13aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x13aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x13aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x13aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v315 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x13bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x13bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x13bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x13bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x13bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v316 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x13cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x13cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x13cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x13cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x13cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v317 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x13dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x13dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x13dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x13dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x13dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v318 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x13eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x13eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x13eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x13eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x13eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v319 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x13fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x13fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x13fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x13fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x13fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v320 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x140U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x140U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x140U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x140U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x140U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v321 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x141U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x141U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x141U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x141U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x141U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v322 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x142U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x142U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x142U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x142U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x142U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v323 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x143U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x143U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x143U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x143U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x143U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v324 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x144U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x144U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x144U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x144U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x144U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v325 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x145U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x145U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x145U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x145U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x145U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v326 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x146U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x146U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x146U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x146U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x146U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v327 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x147U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x147U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x147U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x147U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x147U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v328 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x148U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x148U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x148U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x148U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x148U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v329 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x149U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x149U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x149U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x149U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x149U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v330 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x14aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x14aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x14aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x14aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x14aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v331 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x14bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x14bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x14bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x14bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x14bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v332 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x14cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x14cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x14cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x14cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x14cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v333 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x14dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x14dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x14dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x14dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x14dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v334 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x14eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x14eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x14eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x14eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x14eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v335 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x14fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x14fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x14fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x14fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x14fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v336 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x150U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x150U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x150U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x150U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x150U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v337 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x151U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x151U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x151U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x151U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x151U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v338 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x152U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x152U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x152U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x152U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x152U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v339 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x153U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x153U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x153U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x153U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x153U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v340 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x154U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x154U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x154U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x154U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x154U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v341 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x155U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x155U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x155U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x155U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x155U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v342 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x156U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x156U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x156U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x156U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x156U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v343 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x157U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x157U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x157U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x157U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x157U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v344 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x158U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x158U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x158U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x158U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x158U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v345 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x159U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x159U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x159U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x159U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x159U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v346 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x15aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x15aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x15aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x15aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x15aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v347 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x15bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x15bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x15bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x15bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x15bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v348 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x15cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x15cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x15cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x15cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x15cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v349 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x15dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x15dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x15dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x15dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x15dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v350 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x15eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x15eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x15eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x15eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x15eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v351 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x15fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x15fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x15fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x15fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x15fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v352 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x160U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x160U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x160U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x160U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x160U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v353 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x161U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x161U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x161U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x161U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x161U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v354 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x162U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x162U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x162U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x162U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x162U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v355 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x163U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x163U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x163U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x163U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x163U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v356 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x164U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x164U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x164U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x164U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x164U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v357 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x165U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x165U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x165U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x165U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x165U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v358 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x166U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x166U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x166U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x166U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x166U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v359 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x167U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x167U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x167U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x167U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x167U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v360 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x168U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x168U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x168U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x168U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x168U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v361 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x169U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x169U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x169U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x169U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x169U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v362 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x16aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x16aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x16aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x16aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x16aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v363 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x16bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x16bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x16bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x16bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x16bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v364 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x16cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x16cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x16cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x16cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x16cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v365 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x16dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x16dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x16dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x16dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x16dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v366 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x16eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x16eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x16eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x16eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x16eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v367 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x16fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x16fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x16fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x16fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x16fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v368 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x170U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x170U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x170U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x170U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x170U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v369 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x171U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x171U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x171U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x171U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x171U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v370 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x172U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x172U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x172U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x172U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x172U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v371 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x173U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x173U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x173U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x173U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x173U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v372 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x174U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x174U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x174U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x174U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x174U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v373 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x175U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x175U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x175U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x175U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x175U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v374 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x176U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x176U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x176U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x176U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x176U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v375 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x177U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x177U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x177U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x177U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x177U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v376 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x178U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x178U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x178U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x178U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x178U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v377 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x179U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x179U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x179U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x179U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x179U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v378 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x17aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x17aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x17aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x17aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x17aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v379 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x17bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x17bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x17bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x17bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x17bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v380 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x17cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x17cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x17cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x17cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x17cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v381 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x17dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x17dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x17dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x17dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x17dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v382 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x17eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x17eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x17eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x17eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x17eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v383 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x17fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x17fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x17fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x17fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x17fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v384 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x180U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x180U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x180U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x180U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x180U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v385 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x181U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x181U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x181U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x181U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x181U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v386 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x182U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x182U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x182U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x182U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x182U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v387 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x183U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x183U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x183U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x183U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x183U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v388 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x184U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x184U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x184U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x184U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x184U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v389 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x185U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x185U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x185U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x185U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x185U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v390 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x186U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x186U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x186U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x186U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x186U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v391 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x187U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x187U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x187U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x187U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x187U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v392 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x188U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x188U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x188U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x188U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x188U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v393 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x189U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x189U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x189U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x189U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x189U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v394 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x18aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x18aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x18aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x18aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x18aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v395 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x18bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x18bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x18bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x18bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x18bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v396 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x18cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x18cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x18cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x18cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x18cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v397 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x18dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x18dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x18dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x18dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x18dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v398 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x18eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x18eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x18eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x18eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x18eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v399 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x18fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x18fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x18fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x18fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x18fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v400 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x190U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x190U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x190U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x190U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x190U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v401 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x191U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x191U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x191U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x191U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x191U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v402 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x192U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x192U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x192U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x192U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x192U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v403 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x193U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x193U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x193U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x193U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x193U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v404 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x194U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x194U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x194U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x194U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x194U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v405 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x195U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x195U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x195U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x195U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x195U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v406 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x196U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x196U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x196U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x196U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x196U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v407 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x197U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x197U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x197U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x197U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x197U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v408 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x198U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x198U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x198U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x198U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x198U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v409 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x199U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x199U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x199U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x199U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x199U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v410 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x19aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x19aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x19aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x19aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x19aU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v411 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x19bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x19bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x19bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x19bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x19bU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v412 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x19cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x19cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x19cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x19cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x19cU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v413 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x19dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x19dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x19dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x19dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x19dU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v414 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x19eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x19eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x19eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x19eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x19eU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v415 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x19fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x19fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x19fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x19fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x19fU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v416 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1a0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1a0U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v417 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1a1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1a1U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v418 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1a2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1a2U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v419 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1a3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1a3U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v420 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1a4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1a4U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v421 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1a5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1a5U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v422 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1a6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1a6U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v423 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1a7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1a7U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v424 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1a8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1a8U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v425 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1a9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1a9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1a9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1a9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1a9U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v426 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1aaU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1aaU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1aaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1aaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1aaU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v427 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1abU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1abU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1abU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1abU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1abU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v428 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1acU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1acU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1acU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1acU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1acU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v429 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1adU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1adU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1adU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1adU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1adU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v430 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1aeU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1aeU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1aeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1aeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1aeU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v431 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1afU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1afU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1afU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1afU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1afU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v432 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1b0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1b0U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v433 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1b1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1b1U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v434 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1b2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1b2U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v435 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1b3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1b3U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v436 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1b4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1b4U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v437 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1b5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1b5U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v438 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1b6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1b6U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v439 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1b7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1b7U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v440 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1b8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1b8U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v441 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1b9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1b9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1b9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1b9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1b9U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v442 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1baU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1baU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1baU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1baU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1baU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v443 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1bbU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1bbU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1bbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1bbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1bbU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v444 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1bcU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1bcU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1bcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1bcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1bcU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v445 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1bdU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1bdU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1bdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1bdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1bdU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v446 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1beU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1beU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1beU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1beU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1beU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v447 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1bfU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1bfU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1bfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1bfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1bfU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v448 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1c0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1c0U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v449 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1c1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1c1U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v450 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1c2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1c2U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v451 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1c3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1c3U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v452 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1c4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1c4U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v453 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1c5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1c5U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v454 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1c6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1c6U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v455 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1c7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1c7U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v456 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1c8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1c8U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v457 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1c9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1c9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1c9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1c9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1c9U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v458 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1caU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1caU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1caU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1caU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1caU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v459 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1cbU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1cbU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1cbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1cbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1cbU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v460 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1ccU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1ccU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1ccU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1ccU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1ccU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v461 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1cdU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1cdU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1cdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1cdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1cdU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v462 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1ceU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1ceU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1ceU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1ceU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1ceU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v463 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1cfU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1cfU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1cfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1cfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1cfU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v464 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1d0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1d0U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v465 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1d1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1d1U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v466 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1d2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1d2U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v467 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1d3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1d3U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v468 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1d4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1d4U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v469 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1d5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1d5U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v470 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1d6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1d6U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v471 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1d7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1d7U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v472 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1d8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1d8U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v473 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1d9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1d9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1d9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1d9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1d9U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v474 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1daU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1daU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1daU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1daU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1daU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v475 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1dbU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1dbU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1dbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1dbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1dbU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v476 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1dcU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1dcU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1dcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1dcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1dcU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v477 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1ddU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1ddU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1ddU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1ddU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1ddU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v478 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1deU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1deU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1deU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1deU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1deU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v479 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1dfU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1dfU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1dfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1dfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1dfU]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v480 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1e0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1e0U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v481 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1e1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1e1U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v482 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1e2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1e2U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v483 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1e3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1e3U]);
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v484 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x1e4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x1e4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x1e4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x1e4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x1e4U]);
    } else {
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v114 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v115 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v116 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v117 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v118 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v119 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v120 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v121 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v122 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v123 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v124 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v125 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v126 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v127 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v128 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v129 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v130 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v131 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v132 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v133 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v134 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v135 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v136 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v137 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v138 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v139 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v140 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v141 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v142 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v143 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v144 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v145 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v146 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v147 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v148 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v149 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v150 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v151 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v152 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v153 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v154 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v155 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v156 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v157 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v158 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v159 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v160 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v161 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v162 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v163 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v164 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v165 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v166 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v167 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v168 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v169 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v170 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v171 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v172 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v173 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v174 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v175 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v176 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v177 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v178 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v179 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v180 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v181 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v182 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v183 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v184 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v185 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v186 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v187 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v188 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v189 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v190 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v191 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v192 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v193 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v194 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v195 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v196 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v197 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v198 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v199 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v200 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v201 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v202 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v203 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v204 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v205 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v206 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v207 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v208 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v209 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v210 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v211 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v212 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v213 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v214 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v215 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v216 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v217 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v218 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v219 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v220 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v221 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v222 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v223 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v224 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v225 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v226 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v227 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v228 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v229 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v230 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v231 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v232 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v233 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v234 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v235 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v236 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v237 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v238 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v239 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v240 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v241 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v242 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v243 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v244 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v245 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v246 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v247 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v248 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v249 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v250 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v251 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v252 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v253 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v254 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v255 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v256 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v257 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v258 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v259 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v260 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v261 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v262 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v263 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v264 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v265 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v266 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v267 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v268 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v269 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v270 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v271 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v272 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v273 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v274 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v275 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v276 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v277 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v278 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v279 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v280 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v281 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v282 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v283 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v284 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v285 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v286 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v287 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v288 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v289 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v290 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v291 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v292 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v293 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v294 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v295 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v296 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v297 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v298 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v299 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v300 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v301 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v302 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v303 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v304 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v305 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v306 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v307 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v308 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v309 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v310 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v311 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v312 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v313 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v314 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v315 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v316 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v317 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v318 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v319 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v320 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v321 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v322 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v323 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v324 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v325 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v326 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v327 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v328 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v329 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v330 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v331 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v332 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v333 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v334 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v335 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v336 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v337 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v338 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v339 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v340 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v341 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v342 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v343 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v344 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v345 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v346 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v347 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v348 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v349 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v350 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v351 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v352 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v353 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v354 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v355 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v356 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v357 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v358 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v359 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v360 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v361 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v362 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v363 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v364 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v365 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v366 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v367 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v368 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v369 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v370 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v371 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v372 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v373 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v374 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v375 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v376 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v377 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v378 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v379 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v380 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v381 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v382 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v383 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v384 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v385 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v386 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v387 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v388 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v389 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v390 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v391 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v392 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v393 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v394 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v395 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v396 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v397 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v398 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v399 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v400 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v401 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v402 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v403 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v404 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v405 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v406 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v407 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v408 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v409 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v410 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v411 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v412 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v413 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v414 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v415 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v416 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v417 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v418 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v419 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v420 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v421 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v422 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v423 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v424 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v425 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v426 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v427 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v428 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v429 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v430 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v431 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v432 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v433 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v434 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v435 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v436 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v437 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v438 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v439 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v440 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v441 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v442 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v443 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v444 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v445 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v446 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v447 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v448 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v449 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v450 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v451 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v452 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v453 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v454 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v455 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v456 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v457 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v458 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v459 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v460 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v461 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v462 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v463 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v464 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v465 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v466 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v467 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v468 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v469 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v470 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v471 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v472 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v473 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v474 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v475 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v476 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v477 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v478 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v479 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v480 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v481 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v482 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v483 = 2U;
        vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v484 = 2U;
    }
}
