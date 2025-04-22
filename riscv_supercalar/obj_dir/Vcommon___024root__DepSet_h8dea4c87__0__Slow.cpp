// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_ATTR_COLD void Vcommon___024root___settle__TOP__2(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__Vfuncout;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__prf_data;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__rs_prd;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__wb0_need_to_wb;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__wb1_need_to_wb;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__wb2_need_to_wb;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__wb3_need_to_wb;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__wb0_prd;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__wb1_prd;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__wb2_prd;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__wb3_prd;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__wb0_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__wb1_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__wb2_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__0__wb3_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__Vfuncout;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__prf_data;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__rs_prd;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__wb0_need_to_wb;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__wb1_need_to_wb;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__wb2_need_to_wb;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__wb3_need_to_wb;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__wb0_prd;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__wb1_prd;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__wb2_prd;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__wb3_prd;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__wb0_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__wb1_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__wb2_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__1__wb3_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__Vfuncout;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__prf_data;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__rs_prd;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__wb0_need_to_wb;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__wb1_need_to_wb;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__wb2_need_to_wb;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__wb3_need_to_wb;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__wb0_prd;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__wb1_prd;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__wb2_prd;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__wb3_prd;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__wb0_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__wb1_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__wb2_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__2__wb3_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__Vfuncout;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__prf_data;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__rs_prd;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__wb0_need_to_wb;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__wb1_need_to_wb;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__wb2_need_to_wb;
    CData/*0:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__wb3_need_to_wb;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__wb0_prd;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__wb1_prd;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__wb2_prd;
    CData/*5:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__wb3_prd;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__wb0_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__wb1_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__wb2_data;
    IData/*31:0*/ __Vfunc_ex_buffer__DOT__bypass_network__3__wb3_data;
    // Body
    vlSelf->ex_buffer__DOT__slot_need_to_stall[0U] = 0U;
    vlSelf->ex_buffer__DOT__slot_need_to_stall[1U] = 0U;
    vlSelf->ex_buffer__DOT__slot_need_to_stall[2U] 
        = vlSelf->mem_issue_stall;
    vlSelf->ex_buffer__DOT__slot_valid_in[0U] = vlSelf->ex_slot0_valid;
    vlSelf->ex_buffer__DOT__slot_valid_in[1U] = vlSelf->ex_slot1_valid;
    vlSelf->ex_buffer__DOT__slot_valid_in[2U] = vlSelf->ex_slot2_valid;
    vlSelf->ex_buffer__DOT__slot_pc_in[0U] = vlSelf->slot0_pc;
    vlSelf->ex_buffer__DOT__slot_pc_in[1U] = vlSelf->slot1_pc;
    vlSelf->ex_buffer__DOT__slot_pc_in[2U] = vlSelf->slot2_pc;
    vlSelf->ex_buffer__DOT__slot_T_in[0U] = vlSelf->slot0_T;
    vlSelf->ex_buffer__DOT__slot_T_in[1U] = vlSelf->slot1_T;
    vlSelf->ex_buffer__DOT__slot_T_in[2U] = vlSelf->slot2_T;
    vlSelf->ex_buffer__DOT__slot_robid_in[0U] = vlSelf->slot0_robid;
    vlSelf->ex_buffer__DOT__slot_robid_in[1U] = vlSelf->slot1_robid;
    vlSelf->ex_buffer__DOT__slot_robid_in[2U] = vlSelf->slot2_robid;
    vlSelf->ex_buffer__DOT__slot_rs1_in[0U] = vlSelf->IQ0_rs1_data;
    vlSelf->ex_buffer__DOT__slot_rs1_in[1U] = vlSelf->IQ1_rs1_data;
    vlSelf->ex_buffer__DOT__slot_rs1_in[2U] = vlSelf->MEM_rs1_data;
    vlSelf->ex_buffer__DOT__slot_rs2_in[0U] = vlSelf->IQ0_rs2_data;
    vlSelf->ex_buffer__DOT__slot_rs2_in[1U] = vlSelf->IQ1_rs2_data;
    vlSelf->ex_buffer__DOT__slot_rs2_in[2U] = vlSelf->MEM_rs2_data;
    vlSelf->ex_buffer__DOT__slot_rs1_addr_in[0U] = vlSelf->IQ0_rs1_addr;
    vlSelf->ex_buffer__DOT__slot_rs1_addr_in[1U] = vlSelf->IQ1_rs1_addr;
    vlSelf->ex_buffer__DOT__slot_rs1_addr_in[2U] = vlSelf->MEM_rs1_addr;
    vlSelf->ex_buffer__DOT__slot_rs2_addr_in[0U] = vlSelf->IQ0_rs2_addr;
    vlSelf->ex_buffer__DOT__slot_rs2_addr_in[1U] = vlSelf->IQ1_rs2_addr;
    vlSelf->ex_buffer__DOT__slot_rs2_addr_in[2U] = vlSelf->MEM_rs2_addr;
    vlSelf->ex_buffer__DOT__slot_control_in[0U][0U] 
        = vlSelf->slot0_control[0U];
    vlSelf->ex_buffer__DOT__slot_control_in[0U][1U] 
        = vlSelf->slot0_control[1U];
    vlSelf->ex_buffer__DOT__slot_control_in[0U][2U] 
        = vlSelf->slot0_control[2U];
    vlSelf->ex_buffer__DOT__slot_control_in[0U][3U] 
        = vlSelf->slot0_control[3U];
    vlSelf->ex_buffer__DOT__slot_control_in[1U][0U] 
        = vlSelf->slot1_control[0U];
    vlSelf->ex_buffer__DOT__slot_control_in[1U][1U] 
        = vlSelf->slot1_control[1U];
    vlSelf->ex_buffer__DOT__slot_control_in[1U][2U] 
        = vlSelf->slot1_control[2U];
    vlSelf->ex_buffer__DOT__slot_control_in[1U][3U] 
        = vlSelf->slot1_control[3U];
    vlSelf->ex_buffer__DOT__slot_control_in[2U][0U] 
        = vlSelf->slot2_control[0U];
    vlSelf->ex_buffer__DOT__slot_control_in[2U][1U] 
        = vlSelf->slot2_control[1U];
    vlSelf->ex_buffer__DOT__slot_control_in[2U][2U] 
        = vlSelf->slot2_control[2U];
    vlSelf->ex_buffer__DOT__slot_control_in[2U][3U] 
        = vlSelf->slot2_control[3U];
    vlSelf->int0_T = vlSelf->ex_buffer__DOT__slot_reg_T
        [0U];
    vlSelf->int1_T = vlSelf->ex_buffer__DOT__slot_reg_T
        [1U];
    vlSelf->int2_T = vlSelf->ex_buffer__DOT__slot_reg_T
        [2U];
    vlSelf->int0_pc = vlSelf->ex_buffer__DOT__slot_reg_pc
        [0U];
    vlSelf->int1_pc = vlSelf->ex_buffer__DOT__slot_reg_pc
        [1U];
    vlSelf->int2_pc = vlSelf->ex_buffer__DOT__slot_reg_pc
        [2U];
    vlSelf->int0_robid = vlSelf->ex_buffer__DOT__slot_reg_robid
        [0U];
    vlSelf->int1_robid = vlSelf->ex_buffer__DOT__slot_reg_robid
        [1U];
    vlSelf->int2_robid = vlSelf->ex_buffer__DOT__slot_reg_robid
        [2U];
    vlSelf->int0_control[0U] = vlSelf->ex_buffer__DOT__slot_reg_control
        [0U][0U];
    vlSelf->int0_control[1U] = vlSelf->ex_buffer__DOT__slot_reg_control
        [0U][1U];
    vlSelf->int0_control[2U] = vlSelf->ex_buffer__DOT__slot_reg_control
        [0U][2U];
    vlSelf->int0_control[3U] = vlSelf->ex_buffer__DOT__slot_reg_control
        [0U][3U];
    vlSelf->int1_control[0U] = vlSelf->ex_buffer__DOT__slot_reg_control
        [1U][0U];
    vlSelf->int1_control[1U] = vlSelf->ex_buffer__DOT__slot_reg_control
        [1U][1U];
    vlSelf->int1_control[2U] = vlSelf->ex_buffer__DOT__slot_reg_control
        [1U][2U];
    vlSelf->int1_control[3U] = vlSelf->ex_buffer__DOT__slot_reg_control
        [1U][3U];
    vlSelf->int2_control[0U] = vlSelf->ex_buffer__DOT__slot_reg_control
        [2U][0U];
    vlSelf->int2_control[1U] = vlSelf->ex_buffer__DOT__slot_reg_control
        [2U][1U];
    vlSelf->int2_control[2U] = vlSelf->ex_buffer__DOT__slot_reg_control
        [2U][2U];
    vlSelf->int2_control[3U] = vlSelf->ex_buffer__DOT__slot_reg_control
        [2U][3U];
    vlSelf->int2_rs1 = vlSelf->ex_buffer__DOT__slot_reg_rs1
        [2U];
    vlSelf->int2_rs2 = vlSelf->ex_buffer__DOT__slot_reg_rs2
        [2U];
    vlSelf->int0_valid = (vlSelf->ex_buffer__DOT__slot_reg_valid
                          [0U] & (~ (IData)(vlSelf->flush_valid)));
    vlSelf->int1_valid = (vlSelf->ex_buffer__DOT__slot_reg_valid
                          [1U] & (~ (IData)(vlSelf->flush_valid)));
    vlSelf->int2_valid = (vlSelf->ex_buffer__DOT__slot_reg_valid
                          [2U] & (~ (IData)(vlSelf->flush_valid)));
    vlSelf->ex_buffer__DOT__slot_need_to_flush[0U] = 0U;
    vlSelf->ex_buffer__DOT__slot_need_to_flush[1U] = 0U;
    vlSelf->ex_buffer__DOT__slot_need_to_flush[2U] = 0U;
    if ((((IData)(vlSelf->flush_valid) & vlSelf->ex_buffer__DOT__slot_reg_valid
          [0U]) & (((vlSelf->ex_buffer__DOT__slot_reg_robid
                     [0U] ^ (IData)(vlSelf->flush_robid)) 
                    >> 6U) ^ ((0x3fU & vlSelf->ex_buffer__DOT__slot_reg_robid
                               [0U]) > (0x3fU & (IData)(vlSelf->flush_robid)))))) {
        vlSelf->ex_buffer__DOT__slot_need_to_flush[0U] = 1U;
    }
    if ((((IData)(vlSelf->flush_valid) & vlSelf->ex_buffer__DOT__slot_reg_valid
          [1U]) & (((vlSelf->ex_buffer__DOT__slot_reg_robid
                     [1U] ^ (IData)(vlSelf->flush_robid)) 
                    >> 6U) ^ ((0x3fU & vlSelf->ex_buffer__DOT__slot_reg_robid
                               [1U]) > (0x3fU & (IData)(vlSelf->flush_robid)))))) {
        vlSelf->ex_buffer__DOT__slot_need_to_flush[1U] = 1U;
    }
    if ((((IData)(vlSelf->flush_valid) & vlSelf->ex_buffer__DOT__slot_reg_valid
          [2U]) & (((vlSelf->ex_buffer__DOT__slot_reg_robid
                     [2U] ^ (IData)(vlSelf->flush_robid)) 
                    >> 6U) ^ ((0x3fU & vlSelf->ex_buffer__DOT__slot_reg_robid
                               [2U]) > (0x3fU & (IData)(vlSelf->flush_robid)))))) {
        vlSelf->ex_buffer__DOT__slot_need_to_flush[2U] = 1U;
    }
    __Vfunc_ex_buffer__DOT__bypass_network__0__wb3_data 
        = vlSelf->writeback3_data;
    __Vfunc_ex_buffer__DOT__bypass_network__0__wb2_data 
        = vlSelf->writeback2_data;
    __Vfunc_ex_buffer__DOT__bypass_network__0__wb1_data 
        = vlSelf->writeback1_data;
    __Vfunc_ex_buffer__DOT__bypass_network__0__wb0_data 
        = vlSelf->writeback0_data;
    __Vfunc_ex_buffer__DOT__bypass_network__0__wb3_prd 
        = vlSelf->writeback3_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__0__wb2_prd 
        = vlSelf->writeback2_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__0__wb1_prd 
        = vlSelf->writeback1_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__0__wb0_prd 
        = vlSelf->writeback0_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__0__wb3_need_to_wb 
        = vlSelf->writeback3_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__0__wb2_need_to_wb 
        = vlSelf->writeback2_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__0__wb1_need_to_wb 
        = vlSelf->writeback1_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__0__wb0_need_to_wb 
        = vlSelf->writeback0_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__0__rs_prd 
        = vlSelf->ex_buffer__DOT__slot_reg_rs1_addr
        [0U];
    __Vfunc_ex_buffer__DOT__bypass_network__0__prf_data 
        = vlSelf->ex_buffer__DOT__slot_reg_rs1[0U];
    __Vfunc_ex_buffer__DOT__bypass_network__0__Vfuncout 
        = ((0U == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__rs_prd))
            ? 0U : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__rs_prd) 
                      == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__wb0_prd)) 
                     & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__wb0_need_to_wb))
                     ? __Vfunc_ex_buffer__DOT__bypass_network__0__wb0_data
                     : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__rs_prd) 
                          == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__wb1_prd)) 
                         & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__wb1_need_to_wb))
                         ? __Vfunc_ex_buffer__DOT__bypass_network__0__wb1_data
                         : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__rs_prd) 
                              == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__wb2_prd)) 
                             & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__wb2_need_to_wb))
                             ? __Vfunc_ex_buffer__DOT__bypass_network__0__wb2_data
                             : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__rs_prd) 
                                  == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__wb3_prd)) 
                                 & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__0__wb3_need_to_wb))
                                 ? __Vfunc_ex_buffer__DOT__bypass_network__0__wb3_data
                                 : __Vfunc_ex_buffer__DOT__bypass_network__0__prf_data)))));
    vlSelf->int0_rs1 = __Vfunc_ex_buffer__DOT__bypass_network__0__Vfuncout;
    __Vfunc_ex_buffer__DOT__bypass_network__1__wb3_data 
        = vlSelf->writeback3_data;
    __Vfunc_ex_buffer__DOT__bypass_network__1__wb2_data 
        = vlSelf->writeback2_data;
    __Vfunc_ex_buffer__DOT__bypass_network__1__wb1_data 
        = vlSelf->writeback1_data;
    __Vfunc_ex_buffer__DOT__bypass_network__1__wb0_data 
        = vlSelf->writeback0_data;
    __Vfunc_ex_buffer__DOT__bypass_network__1__wb3_prd 
        = vlSelf->writeback3_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__1__wb2_prd 
        = vlSelf->writeback2_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__1__wb1_prd 
        = vlSelf->writeback1_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__1__wb0_prd 
        = vlSelf->writeback0_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__1__wb3_need_to_wb 
        = vlSelf->writeback3_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__1__wb2_need_to_wb 
        = vlSelf->writeback2_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__1__wb1_need_to_wb 
        = vlSelf->writeback1_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__1__wb0_need_to_wb 
        = vlSelf->writeback0_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__1__rs_prd 
        = vlSelf->ex_buffer__DOT__slot_reg_rs1_addr
        [1U];
    __Vfunc_ex_buffer__DOT__bypass_network__1__prf_data 
        = vlSelf->ex_buffer__DOT__slot_reg_rs1[1U];
    __Vfunc_ex_buffer__DOT__bypass_network__1__Vfuncout 
        = ((0U == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__rs_prd))
            ? 0U : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__rs_prd) 
                      == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__wb0_prd)) 
                     & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__wb0_need_to_wb))
                     ? __Vfunc_ex_buffer__DOT__bypass_network__1__wb0_data
                     : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__rs_prd) 
                          == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__wb1_prd)) 
                         & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__wb1_need_to_wb))
                         ? __Vfunc_ex_buffer__DOT__bypass_network__1__wb1_data
                         : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__rs_prd) 
                              == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__wb2_prd)) 
                             & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__wb2_need_to_wb))
                             ? __Vfunc_ex_buffer__DOT__bypass_network__1__wb2_data
                             : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__rs_prd) 
                                  == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__wb3_prd)) 
                                 & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__1__wb3_need_to_wb))
                                 ? __Vfunc_ex_buffer__DOT__bypass_network__1__wb3_data
                                 : __Vfunc_ex_buffer__DOT__bypass_network__1__prf_data)))));
    vlSelf->int1_rs1 = __Vfunc_ex_buffer__DOT__bypass_network__1__Vfuncout;
    __Vfunc_ex_buffer__DOT__bypass_network__2__wb3_data 
        = vlSelf->writeback3_data;
    __Vfunc_ex_buffer__DOT__bypass_network__2__wb2_data 
        = vlSelf->writeback2_data;
    __Vfunc_ex_buffer__DOT__bypass_network__2__wb1_data 
        = vlSelf->writeback1_data;
    __Vfunc_ex_buffer__DOT__bypass_network__2__wb0_data 
        = vlSelf->writeback0_data;
    __Vfunc_ex_buffer__DOT__bypass_network__2__wb3_prd 
        = vlSelf->writeback3_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__2__wb2_prd 
        = vlSelf->writeback2_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__2__wb1_prd 
        = vlSelf->writeback1_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__2__wb0_prd 
        = vlSelf->writeback0_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__2__wb3_need_to_wb 
        = vlSelf->writeback3_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__2__wb2_need_to_wb 
        = vlSelf->writeback2_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__2__wb1_need_to_wb 
        = vlSelf->writeback1_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__2__wb0_need_to_wb 
        = vlSelf->writeback0_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__2__rs_prd 
        = vlSelf->ex_buffer__DOT__slot_reg_rs2_addr
        [0U];
    __Vfunc_ex_buffer__DOT__bypass_network__2__prf_data 
        = vlSelf->ex_buffer__DOT__slot_reg_rs2[0U];
    __Vfunc_ex_buffer__DOT__bypass_network__2__Vfuncout 
        = ((0U == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__rs_prd))
            ? 0U : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__rs_prd) 
                      == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__wb0_prd)) 
                     & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__wb0_need_to_wb))
                     ? __Vfunc_ex_buffer__DOT__bypass_network__2__wb0_data
                     : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__rs_prd) 
                          == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__wb1_prd)) 
                         & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__wb1_need_to_wb))
                         ? __Vfunc_ex_buffer__DOT__bypass_network__2__wb1_data
                         : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__rs_prd) 
                              == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__wb2_prd)) 
                             & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__wb2_need_to_wb))
                             ? __Vfunc_ex_buffer__DOT__bypass_network__2__wb2_data
                             : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__rs_prd) 
                                  == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__wb3_prd)) 
                                 & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__2__wb3_need_to_wb))
                                 ? __Vfunc_ex_buffer__DOT__bypass_network__2__wb3_data
                                 : __Vfunc_ex_buffer__DOT__bypass_network__2__prf_data)))));
    vlSelf->int0_rs2 = __Vfunc_ex_buffer__DOT__bypass_network__2__Vfuncout;
    __Vfunc_ex_buffer__DOT__bypass_network__3__wb3_data 
        = vlSelf->writeback3_data;
    __Vfunc_ex_buffer__DOT__bypass_network__3__wb2_data 
        = vlSelf->writeback2_data;
    __Vfunc_ex_buffer__DOT__bypass_network__3__wb1_data 
        = vlSelf->writeback1_data;
    __Vfunc_ex_buffer__DOT__bypass_network__3__wb0_data 
        = vlSelf->writeback0_data;
    __Vfunc_ex_buffer__DOT__bypass_network__3__wb3_prd 
        = vlSelf->writeback3_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__3__wb2_prd 
        = vlSelf->writeback2_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__3__wb1_prd 
        = vlSelf->writeback1_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__3__wb0_prd 
        = vlSelf->writeback0_prd;
    __Vfunc_ex_buffer__DOT__bypass_network__3__wb3_need_to_wb 
        = vlSelf->writeback3_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__3__wb2_need_to_wb 
        = vlSelf->writeback2_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__3__wb1_need_to_wb 
        = vlSelf->writeback1_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__3__wb0_need_to_wb 
        = vlSelf->writeback0_need_to_wb;
    __Vfunc_ex_buffer__DOT__bypass_network__3__rs_prd 
        = vlSelf->ex_buffer__DOT__slot_reg_rs2_addr
        [1U];
    __Vfunc_ex_buffer__DOT__bypass_network__3__prf_data 
        = vlSelf->ex_buffer__DOT__slot_reg_rs2[1U];
    __Vfunc_ex_buffer__DOT__bypass_network__3__Vfuncout 
        = ((0U == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__rs_prd))
            ? 0U : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__rs_prd) 
                      == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__wb0_prd)) 
                     & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__wb0_need_to_wb))
                     ? __Vfunc_ex_buffer__DOT__bypass_network__3__wb0_data
                     : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__rs_prd) 
                          == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__wb1_prd)) 
                         & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__wb1_need_to_wb))
                         ? __Vfunc_ex_buffer__DOT__bypass_network__3__wb1_data
                         : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__rs_prd) 
                              == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__wb2_prd)) 
                             & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__wb2_need_to_wb))
                             ? __Vfunc_ex_buffer__DOT__bypass_network__3__wb2_data
                             : ((((IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__rs_prd) 
                                  == (IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__wb3_prd)) 
                                 & (IData)(__Vfunc_ex_buffer__DOT__bypass_network__3__wb3_need_to_wb))
                                 ? __Vfunc_ex_buffer__DOT__bypass_network__3__wb3_data
                                 : __Vfunc_ex_buffer__DOT__bypass_network__3__prf_data)))));
    vlSelf->int1_rs2 = __Vfunc_ex_buffer__DOT__bypass_network__3__Vfuncout;
}

VL_ATTR_COLD void Vcommon___024root___eval_initial(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcommon___024root___eval_settle(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_settle\n"); );
    // Body
    Vcommon___024root___settle__TOP__2(vlSelf);
}

VL_ATTR_COLD void Vcommon___024root___final(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___final\n"); );
}

VL_ATTR_COLD void Vcommon___024root___ctor_var_reset(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset_n = VL_RAND_RESET_I(1);
    vlSelf->flush_valid = VL_RAND_RESET_I(1);
    vlSelf->flush_robid = VL_RAND_RESET_I(7);
    vlSelf->ex_slot0_valid = VL_RAND_RESET_I(1);
    vlSelf->ex_slot1_valid = VL_RAND_RESET_I(1);
    vlSelf->ex_slot2_valid = VL_RAND_RESET_I(1);
    vlSelf->slot0_T = VL_RAND_RESET_I(6);
    vlSelf->slot1_T = VL_RAND_RESET_I(6);
    vlSelf->slot2_T = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(115, vlSelf->slot0_control);
    VL_RAND_RESET_W(115, vlSelf->slot1_control);
    VL_RAND_RESET_W(115, vlSelf->slot2_control);
    vlSelf->slot0_pc = VL_RAND_RESET_I(32);
    vlSelf->slot1_pc = VL_RAND_RESET_I(32);
    vlSelf->slot2_pc = VL_RAND_RESET_I(32);
    vlSelf->slot0_robid = VL_RAND_RESET_I(7);
    vlSelf->slot1_robid = VL_RAND_RESET_I(7);
    vlSelf->slot2_robid = VL_RAND_RESET_I(7);
    vlSelf->IQ0_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->IQ0_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->IQ1_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->IQ1_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->MEM_rs1_data = VL_RAND_RESET_I(32);
    vlSelf->MEM_rs2_data = VL_RAND_RESET_I(32);
    vlSelf->IQ0_rs1_addr = VL_RAND_RESET_I(6);
    vlSelf->IQ0_rs2_addr = VL_RAND_RESET_I(6);
    vlSelf->IQ1_rs1_addr = VL_RAND_RESET_I(6);
    vlSelf->IQ1_rs2_addr = VL_RAND_RESET_I(6);
    vlSelf->MEM_rs1_addr = VL_RAND_RESET_I(6);
    vlSelf->MEM_rs2_addr = VL_RAND_RESET_I(6);
    vlSelf->int0_valid = VL_RAND_RESET_I(1);
    vlSelf->int0_pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(115, vlSelf->int0_control);
    vlSelf->int0_rs1 = VL_RAND_RESET_I(32);
    vlSelf->int0_rs2 = VL_RAND_RESET_I(32);
    vlSelf->int0_T = VL_RAND_RESET_I(6);
    vlSelf->int0_robid = VL_RAND_RESET_I(7);
    vlSelf->int1_valid = VL_RAND_RESET_I(1);
    vlSelf->int1_pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(115, vlSelf->int1_control);
    vlSelf->int1_rs1 = VL_RAND_RESET_I(32);
    vlSelf->int1_rs2 = VL_RAND_RESET_I(32);
    vlSelf->int1_T = VL_RAND_RESET_I(6);
    vlSelf->int1_robid = VL_RAND_RESET_I(7);
    vlSelf->int2_valid = VL_RAND_RESET_I(1);
    vlSelf->int2_pc = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(115, vlSelf->int2_control);
    vlSelf->int2_rs1 = VL_RAND_RESET_I(32);
    vlSelf->int2_rs2 = VL_RAND_RESET_I(32);
    vlSelf->int2_T = VL_RAND_RESET_I(6);
    vlSelf->int2_robid = VL_RAND_RESET_I(7);
    vlSelf->mem_issue_stall = VL_RAND_RESET_I(1);
    vlSelf->writeback0_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->writeback1_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->writeback2_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->writeback3_need_to_wb = VL_RAND_RESET_I(1);
    vlSelf->writeback0_prd = VL_RAND_RESET_I(6);
    vlSelf->writeback1_prd = VL_RAND_RESET_I(6);
    vlSelf->writeback2_prd = VL_RAND_RESET_I(6);
    vlSelf->writeback3_prd = VL_RAND_RESET_I(6);
    vlSelf->writeback0_data = VL_RAND_RESET_I(32);
    vlSelf->writeback1_data = VL_RAND_RESET_I(32);
    vlSelf->writeback2_data = VL_RAND_RESET_I(32);
    vlSelf->writeback3_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_reg_valid[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_reg_pc[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_reg_rs1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_reg_rs2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_reg_rs1_addr[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_reg_rs2_addr[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_reg_robid[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_reg_T[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(115, vlSelf->ex_buffer__DOT__slot_reg_control[__Vi0]);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_need_to_flush[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_need_to_stall[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_valid_in[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_pc_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_robid_in[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_T_in[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_rs1_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_rs2_in[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_rs1_addr_in[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->ex_buffer__DOT__slot_rs2_addr_in[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        VL_RAND_RESET_W(115, vlSelf->ex_buffer__DOT__slot_control_in[__Vi0]);
    }
    vlSelf->ex_buffer__DOT____Vlvbound_hcf70db14__1 = VL_RAND_RESET_I(1);
    vlSelf->ex_buffer__DOT____Vlvbound_h5df65fe2__0 = VL_RAND_RESET_I(6);
    vlSelf->ex_buffer__DOT____Vlvbound_h1655a754__0 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(115, vlSelf->ex_buffer__DOT____Vlvbound_hc9f25bea__0);
    vlSelf->ex_buffer__DOT____Vlvbound_h5911c180__0 = VL_RAND_RESET_I(32);
    vlSelf->ex_buffer__DOT____Vlvbound_ha2614b0e__0 = VL_RAND_RESET_I(32);
    vlSelf->ex_buffer__DOT____Vlvbound_h6850f279__0 = VL_RAND_RESET_I(6);
    vlSelf->ex_buffer__DOT____Vlvbound_h3d1dfe81__0 = VL_RAND_RESET_I(6);
    vlSelf->ex_buffer__DOT____Vlvbound_hfbfc84f6__0 = VL_RAND_RESET_I(7);
}
