// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_ATTR_COLD void Vcommon___024root___settle__TOP__1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__1\n"); );
    // Init
    CData/*0:0*/ cpu__DOT__branch_flush;
    CData/*1:0*/ cpu__DOT__fwd_sel_rs1;
    CData/*1:0*/ cpu__DOT__fwd_sel_rs2;
    CData/*0:0*/ cpu__DOT__hazard;
    CData/*0:0*/ cpu__DOT__PC_stall;
    CData/*0:0*/ cpu__DOT__PC_flush;
    CData/*0:0*/ cpu__DOT__inst_fetch_stage__DOT__instr0_btb_hit;
    CData/*0:0*/ cpu__DOT__inst_fetch_stage__DOT__instr0_predict_taken;
    SData/*9:0*/ cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__instr0_pht_addr;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__mem_addr;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__alu_right_operand;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__alu_data;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm;
    CData/*0:0*/ cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_branch_taken_diff;
    CData/*0:0*/ cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_eq_rs2;
    CData/*0:0*/ cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_lt_rs2;
    CData/*0:0*/ cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_sign_rs1_lt_rs2;
    IData/*31:0*/ cpu__DOT__inst_mem_stage__DOT__memory_data;
    CData/*7:0*/ cpu__DOT__inst_mem_stage__DOT__load_byte;
    SData/*15:0*/ cpu__DOT__inst_mem_stage__DOT__load_hword;
    SData/*9:0*/ __Vfunc_gshare_hash__0__Vfuncout;
    SData/*9:0*/ __Vfunc_gshare_hash__0__GHSR;
    IData/*31:0*/ __Vfunc_gshare_hash__0__branch_pc;
    SData/*9:0*/ __Vfunc_gshare_hash__2__Vfuncout;
    SData/*9:0*/ __Vfunc_gshare_hash__2__GHSR;
    IData/*31:0*/ __Vfunc_gshare_hash__2__branch_pc;
    CData/*0:0*/ __Vfunc_if_branch_taken__3__Vfuncout;
    CData/*1:0*/ __Vfunc_if_branch_taken__3__biomd;
    IData/*31:0*/ __Vfunc_immediate_extension__5__Vfuncout;
    IData/*31:0*/ __Vfunc_immediate_extension__5__instruction;
    CData/*2:0*/ __Vfunc_immediate_extension__5__inst_encoding;
    // Body
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__instr0_btb_target_addr 
        = (0xfffffffcU & vlSelf->cpu__DOT__inst_fetch_stage__DOT__instr0_btb_target_addr);
    vlSelf->cpu__DOT__execute_control = (0x3fffffffU 
                                         & ((vlSelf->cpu__DOT__id_ex_reg[2U] 
                                             << 0x14U) 
                                            | (vlSelf->cpu__DOT__id_ex_reg[1U] 
                                               >> 0xcU)));
    vlSelf->cpu__DOT__memory_alu_data = vlSelf->cpu__DOT__ex_mem_reg[1U];
    vlSelf->cpu__DOT__memory_control = (0x3fffffffU 
                                        & vlSelf->cpu__DOT__ex_mem_reg[2U]);
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__instr0_btb_target_addr 
        = ((3U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__instr0_btb_target_addr) 
           | (vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table
              [(0x1fU & (vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg 
                         >> 2U))] << 2U));
    vlSelf->cpu__DOT__inst_decode_stage__DOT__control = 0U;
    vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
        = ((0x3f8003ffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control) 
           | ((0x7c0000U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                            << 3U)) | ((0x3e000U & 
                                        (vlSelf->cpu__DOT__if_id_reg[0U] 
                                         >> 7U)) | 
                                       (0x1c00U & (
                                                   vlSelf->cpu__DOT__if_id_reg[0U] 
                                                   >> 2U)))));
    if (((((((((0x33U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U])) 
               | (3U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) 
              | (0x13U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) 
             | (0x23U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) 
            | (0x63U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) 
           | (0x6fU == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) 
          | (0x67U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) 
         | (0x17U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U])))) {
        if ((0x33U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) {
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x3c7fffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x40U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
        } else if ((3U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) {
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x800000U | (0x3c7fffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x40U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x300U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x20U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
        } else if ((0x13U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) {
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x800000U | (0x3c7fffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x40U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x200U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
        } else if ((0x23U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) {
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x1000000U | (0x3c7fffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x200U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x80U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
        } else if ((0x63U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) {
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x1800000U | (0x3c7fffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x10U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
        } else if ((0x6fU == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) {
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x2800000U | (0x3c7fffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x40U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (8U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
        } else if ((0x67U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) {
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x800000U | (0x3c7fffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x40U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (4U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
        } else {
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x2000000U | (0x3c7fffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x40U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (0x200U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
            vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                = (1U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
        }
    } else if ((0x37U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x2000000U | (0x3c7fffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x40U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x200U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (2U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
    }
    vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
        = (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
    if ((0x33U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                >> 0xfU)) | ((0x380U 
                                              & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
    } else if ((0x8033U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                         >> 0xfU)) 
                            | ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x4000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x3b3U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x38000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x333U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x30000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x233U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x20000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0xb3U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                       >> 0xfU)) | 
                          ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x8000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x2b3U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x28000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x82b3U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                         >> 0xfU)) 
                            | ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x2c000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x133U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x10000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x1b3U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x18000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x93U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                       >> 0xfU)) | 
                          ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x8000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x293U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x28000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x8293U == ((0x1fc00U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                         >> 0xfU)) 
                            | ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x2c000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x13U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                     >> 5U)) | (0x7fU 
                                                & vlSelf->cpu__DOT__if_id_reg[0U])))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
    } else if ((0x393U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->cpu__DOT__if_id_reg[0U])))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x38000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x313U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->cpu__DOT__if_id_reg[0U])))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x30000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x213U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->cpu__DOT__if_id_reg[0U])))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x20000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x113U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->cpu__DOT__if_id_reg[0U])))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x10000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x193U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->cpu__DOT__if_id_reg[0U])))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x18000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x103U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->cpu__DOT__if_id_reg[0U])))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
    } else if (((((3U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                     >> 5U)) | (0x7fU 
                                                & vlSelf->cpu__DOT__if_id_reg[0U]))) 
                  | (0x83U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U])))) 
                 | (0x203U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U])))) 
                | (0x283U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                         >> 5U)) | 
                              (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
    } else if ((0x123U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->cpu__DOT__if_id_reg[0U])))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
    } else if (((0x23U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->cpu__DOT__if_id_reg[0U]))) 
                | (0xa3U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                        >> 5U)) | (0x7fU 
                                                   & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
    } else if ((0x63U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                     >> 5U)) | (0x7fU 
                                                & vlSelf->cpu__DOT__if_id_reg[0U])))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x4000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((((((0xe3U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                         >> 5U)) | 
                              (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) 
                   | (0x263U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U])))) 
                  | (0x2e3U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                           >> 5U)) 
                                | (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U])))) 
                 | (0x363U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U])))) 
                | (0x3e3U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                         >> 5U)) | 
                              (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x4000000U | (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control));
    } else if ((0x6fU == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
    } else if ((0x67U == ((0x380U & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                     >> 5U)) | (0x7fU 
                                                & vlSelf->cpu__DOT__if_id_reg[0U])))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
    } else if ((0x37U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x3c000000U | vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
    } else if ((0x17U == (0x7fU & vlSelf->cpu__DOT__if_id_reg[0U]))) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
            = (0x3ffffffU & vlSelf->cpu__DOT__inst_decode_stage__DOT__control);
    }
    cpu__DOT__inst_fetch_stage__DOT__instr0_btb_hit 
        = (vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
           [(0x1fU & (vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg 
                      >> 2U))] & ((vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg 
                                   >> 7U) == vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table
                                  [(0x1fU & (vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg 
                                             >> 2U))]));
    cpu__DOT__inst_mem_stage__DOT__memory_data = vlSelf->cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram
        [(0xffU & (vlSelf->cpu__DOT__ex_mem_reg[1U] 
                   >> 2U))];
    __Vfunc_gshare_hash__0__branch_pc = vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg;
    __Vfunc_gshare_hash__0__GHSR = vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR;
    __Vfunc_gshare_hash__0__Vfuncout = (0x3ffU & ((IData)(__Vfunc_gshare_hash__0__GHSR) 
                                                  ^ 
                                                  (__Vfunc_gshare_hash__0__branch_pc 
                                                   >> 2U)));
    cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__instr0_pht_addr 
        = __Vfunc_gshare_hash__0__Vfuncout;
    cpu__DOT__hazard = ((((0x1fU & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                    >> 0xfU)) == (0x1fU 
                                                  & (vlSelf->cpu__DOT__id_ex_reg[6U] 
                                                     >> 0xaU))) 
                         | ((0x1fU & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                      >> 0x14U)) == 
                            (0x1fU & (vlSelf->cpu__DOT__id_ex_reg[6U] 
                                      >> 0xaU)))) & 
                        (vlSelf->cpu__DOT__id_ex_reg[1U] 
                         >> 0x14U));
    vlSelf->cpu__DOT__ex2if_branch_valid = (IData)(
                                                   (0U 
                                                    != 
                                                    (0x1c000U 
                                                     & vlSelf->cpu__DOT__id_ex_reg[1U])));
    cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm 
        = (((vlSelf->cpu__DOT__id_ex_reg[6U] << 0x16U) 
            | (vlSelf->cpu__DOT__id_ex_reg[5U] >> 0xaU)) 
           + ((vlSelf->cpu__DOT__id_ex_reg[3U] << 0x16U) 
              | (vlSelf->cpu__DOT__id_ex_reg[2U] >> 0xaU)));
    cpu__DOT__fwd_sel_rs2 = 0U;
    if (((vlSelf->cpu__DOT__mem_wb_reg[0U] >> 6U) & 
         ((0x1fU & ((vlSelf->cpu__DOT__mem_wb_reg[3U] 
                     << 2U) | (vlSelf->cpu__DOT__mem_wb_reg[2U] 
                               >> 0x1eU))) == (0x1fU 
                                               & (vlSelf->cpu__DOT__id_ex_reg[1U] 
                                                  >> 0x19U))))) {
        cpu__DOT__fwd_sel_rs2 = 1U;
    } else if (((vlSelf->cpu__DOT__ex_mem_reg[2U] >> 6U) 
                & ((0x1fU & ((vlSelf->cpu__DOT__ex_mem_reg[3U] 
                              << 2U) | (vlSelf->cpu__DOT__ex_mem_reg[2U] 
                                        >> 0x1eU))) 
                   == (0x1fU & (vlSelf->cpu__DOT__id_ex_reg[1U] 
                                >> 0x19U))))) {
        cpu__DOT__fwd_sel_rs2 = 2U;
    }
    cpu__DOT__fwd_sel_rs1 = 0U;
    if (((vlSelf->cpu__DOT__mem_wb_reg[0U] >> 6U) & 
         ((0x1fU & ((vlSelf->cpu__DOT__mem_wb_reg[3U] 
                     << 2U) | (vlSelf->cpu__DOT__mem_wb_reg[2U] 
                               >> 0x1eU))) == (0x1fU 
                                               & ((vlSelf->cpu__DOT__id_ex_reg[2U] 
                                                   << 2U) 
                                                  | (vlSelf->cpu__DOT__id_ex_reg[1U] 
                                                     >> 0x1eU)))))) {
        cpu__DOT__fwd_sel_rs1 = 1U;
    } else if (((vlSelf->cpu__DOT__ex_mem_reg[2U] >> 6U) 
                & ((0x1fU & ((vlSelf->cpu__DOT__ex_mem_reg[3U] 
                              << 2U) | (vlSelf->cpu__DOT__ex_mem_reg[2U] 
                                        >> 0x1eU))) 
                   == (0x1fU & ((vlSelf->cpu__DOT__id_ex_reg[2U] 
                                 << 2U) | (vlSelf->cpu__DOT__id_ex_reg[1U] 
                                           >> 0x1eU)))))) {
        cpu__DOT__fwd_sel_rs1 = 2U;
    }
    vlSelf->cpu__DOT__wb_result = ((0x100U & vlSelf->cpu__DOT__mem_wb_reg[0U])
                                    ? ((vlSelf->cpu__DOT__mem_wb_reg[2U] 
                                        << 2U) | (vlSelf->cpu__DOT__mem_wb_reg[1U] 
                                                  >> 0x1eU))
                                    : ((vlSelf->cpu__DOT__mem_wb_reg[1U] 
                                        << 2U) | (vlSelf->cpu__DOT__mem_wb_reg[0U] 
                                                  >> 0x1eU)));
    __Vfunc_immediate_extension__5__inst_encoding = 
        (7U & (vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
               >> 0x17U));
    __Vfunc_immediate_extension__5__instruction = vlSelf->cpu__DOT__if_id_reg[0U];
    __Vfunc_immediate_extension__5__Vfuncout = ((4U 
                                                 & (IData)(__Vfunc_immediate_extension__5__inst_encoding))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_immediate_extension__5__inst_encoding))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_immediate_extension__5__inst_encoding))
                                                   ? 
                                                  (((- (IData)(
                                                               (__Vfunc_immediate_extension__5__instruction 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (__Vfunc_immediate_extension__5__instruction 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & __Vfunc_immediate_extension__5__instruction) 
                                                         | ((0x800U 
                                                             & (__Vfunc_immediate_extension__5__instruction 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (__Vfunc_immediate_extension__5__instruction 
                                                                  >> 0x14U))))))
                                                   : 
                                                  (0xfffff000U 
                                                   & __Vfunc_immediate_extension__5__instruction)))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_immediate_extension__5__inst_encoding))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_immediate_extension__5__inst_encoding))
                                                   ? 
                                                  (((- (IData)(
                                                               (__Vfunc_immediate_extension__5__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & (__Vfunc_immediate_extension__5__instruction 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (__Vfunc_immediate_extension__5__instruction 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (__Vfunc_immediate_extension__5__instruction 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (__Vfunc_immediate_extension__5__instruction 
                                                                  >> 7U))))))
                                                   : 
                                                  (((- (IData)(
                                                               (__Vfunc_immediate_extension__5__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (__Vfunc_immediate_extension__5__instruction 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (__Vfunc_immediate_extension__5__instruction 
                                                            >> 7U)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_immediate_extension__5__inst_encoding))
                                                   ? 
                                                  (((- (IData)(
                                                               (__Vfunc_immediate_extension__5__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (__Vfunc_immediate_extension__5__instruction 
                                                      >> 0x14U))
                                                   : 0U)));
    vlSelf->cpu__DOT__decode_immediate_data = __Vfunc_immediate_extension__5__Vfuncout;
    if ((0x1fU >= (0x18U & (vlSelf->cpu__DOT__ex_mem_reg[1U] 
                            << 3U)))) {
        cpu__DOT__inst_mem_stage__DOT__load_byte = 
            (0xffU & (cpu__DOT__inst_mem_stage__DOT__memory_data 
                      >> (0x18U & (vlSelf->cpu__DOT__ex_mem_reg[1U] 
                                   << 3U))));
        cpu__DOT__inst_mem_stage__DOT__load_hword = 
            (0xffffU & (cpu__DOT__inst_mem_stage__DOT__memory_data 
                        >> (0x18U & (vlSelf->cpu__DOT__ex_mem_reg[1U] 
                                     << 3U))));
    } else {
        cpu__DOT__inst_mem_stage__DOT__load_byte = 0U;
        cpu__DOT__inst_mem_stage__DOT__load_hword = 0U;
    }
    __Vfunc_if_branch_taken__3__biomd = vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
        [cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__instr0_pht_addr];
    __Vfunc_if_branch_taken__3__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__3__biomd) 
                                                  >> 1U));
    cpu__DOT__inst_fetch_stage__DOT__instr0_predict_taken 
        = __Vfunc_if_branch_taken__3__Vfuncout;
    vlSelf->cpu__DOT__if_id_stall = 0U;
    if (cpu__DOT__hazard) {
        vlSelf->cpu__DOT__if_id_stall = 1U;
        cpu__DOT__PC_stall = 0U;
        cpu__DOT__PC_stall = 1U;
    } else {
        cpu__DOT__PC_stall = 0U;
    }
    cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd 
        = ((1U == (IData)(cpu__DOT__fwd_sel_rs2)) ? vlSelf->cpu__DOT__wb_result
            : ((2U == (IData)(cpu__DOT__fwd_sel_rs2))
                ? vlSelf->cpu__DOT__ex_mem_reg[1U] : 
               ((vlSelf->cpu__DOT__id_ex_reg[4U] << 0x16U) 
                | (vlSelf->cpu__DOT__id_ex_reg[3U] 
                   >> 0xaU))));
    cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
        = ((1U == (IData)(cpu__DOT__fwd_sel_rs1)) ? vlSelf->cpu__DOT__wb_result
            : ((2U == (IData)(cpu__DOT__fwd_sel_rs1))
                ? vlSelf->cpu__DOT__ex_mem_reg[1U] : 
               ((vlSelf->cpu__DOT__id_ex_reg[5U] << 0x16U) 
                | (vlSelf->cpu__DOT__id_ex_reg[4U] 
                   >> 0xaU))));
    vlSelf->cpu__DOT__inst_mem_stage__DOT__load_data 
        = ((0x1000U & vlSelf->cpu__DOT__ex_mem_reg[2U])
            ? ((0x800U & vlSelf->cpu__DOT__ex_mem_reg[2U])
                ? cpu__DOT__inst_mem_stage__DOT__memory_data
                : ((0x400U & vlSelf->cpu__DOT__ex_mem_reg[2U])
                    ? (IData)(cpu__DOT__inst_mem_stage__DOT__load_hword)
                    : (IData)(cpu__DOT__inst_mem_stage__DOT__load_byte)))
            : ((0x800U & vlSelf->cpu__DOT__ex_mem_reg[2U])
                ? cpu__DOT__inst_mem_stage__DOT__memory_data
                : ((0x400U & vlSelf->cpu__DOT__ex_mem_reg[2U])
                    ? (((- (IData)((1U & ((IData)(cpu__DOT__inst_mem_stage__DOT__load_hword) 
                                          >> 0xfU)))) 
                        << 0x10U) | (IData)(cpu__DOT__inst_mem_stage__DOT__load_hword))
                    : (((- (IData)((1U & ((IData)(cpu__DOT__inst_mem_stage__DOT__load_byte) 
                                          >> 7U)))) 
                        << 8U) | (IData)(cpu__DOT__inst_mem_stage__DOT__load_byte)))));
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR_next 
        = (((IData)(cpu__DOT__inst_fetch_stage__DOT__instr0_predict_taken) 
            & (IData)(cpu__DOT__inst_fetch_stage__DOT__instr0_btb_hit))
            ? ((0x3feU & ((IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR) 
                          << 1U)) | (IData)(cpu__DOT__inst_fetch_stage__DOT__instr0_predict_taken))
            : ((IData)(cpu__DOT__inst_fetch_stage__DOT__instr0_btb_hit)
                ? (0x3feU & ((IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR) 
                             << 1U)) : (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR)));
    cpu__DOT__inst_execute_stage__DOT__alu_right_operand 
        = cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd;
    if ((0x200000U & vlSelf->cpu__DOT__id_ex_reg[1U])) {
        cpu__DOT__inst_execute_stage__DOT__alu_right_operand 
            = ((vlSelf->cpu__DOT__id_ex_reg[3U] << 0x16U) 
               | (vlSelf->cpu__DOT__id_ex_reg[2U] >> 0xaU));
    }
    cpu__DOT__inst_execute_stage__DOT__mem_addr = (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                   + 
                                                   ((vlSelf->cpu__DOT__id_ex_reg[3U] 
                                                     << 0x16U) 
                                                    | (vlSelf->cpu__DOT__id_ex_reg[2U] 
                                                       >> 0xaU)));
    cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_eq_rs2 
        = (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
           == cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd);
    cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_lt_rs2 
        = (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
           < cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd);
    cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_sign_rs1_lt_rs2 
        = VL_LTS_III(32, cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd, cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd);
    cpu__DOT__inst_execute_stage__DOT__alu_data = (
                                                   (0x200U 
                                                    & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                    ? 
                                                   ((0x100U 
                                                     & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                     ? 
                                                    ((0x80U 
                                                      & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                      ? 
                                                     ((0x40U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                       ? cpu__DOT__inst_execute_stage__DOT__alu_right_operand
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       & cpu__DOT__inst_execute_stage__DOT__alu_right_operand))
                                                      : 
                                                     ((0x40U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                       ? 0U
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       | cpu__DOT__inst_execute_stage__DOT__alu_right_operand)))
                                                     : 
                                                    ((0x80U 
                                                      & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                      ? 
                                                     ((0x40U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                       ? 
                                                      VL_SHIFTRS_III(32,32,5, cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd, 
                                                                     (0x1fU 
                                                                      & cpu__DOT__inst_execute_stage__DOT__alu_right_operand))
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       >> 
                                                       (0x1fU 
                                                        & cpu__DOT__inst_execute_stage__DOT__alu_right_operand)))
                                                      : 
                                                     ((0x40U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                       ? 0U
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       ^ cpu__DOT__inst_execute_stage__DOT__alu_right_operand))))
                                                    : 
                                                   ((0x100U 
                                                     & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                     ? 
                                                    ((0x80U 
                                                      & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                      ? 
                                                     ((0x40U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                       ? 0U
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       < cpu__DOT__inst_execute_stage__DOT__alu_right_operand))
                                                      : 
                                                     ((0x40U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                       ? 0U
                                                       : 
                                                      VL_LTS_III(32, cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd, cpu__DOT__inst_execute_stage__DOT__alu_right_operand)))
                                                     : 
                                                    ((0x80U 
                                                      & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                      ? 
                                                     ((0x40U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                       ? 0U
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       << 
                                                       (0x1fU 
                                                        & cpu__DOT__inst_execute_stage__DOT__alu_right_operand)))
                                                      : 
                                                     ((0x40U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[2U])
                                                       ? 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       - cpu__DOT__inst_execute_stage__DOT__alu_right_operand)
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       + cpu__DOT__inst_execute_stage__DOT__alu_right_operand)))));
    vlSelf->cpu__DOT__inst_execute_stage__DOT__store_data 
        = ((0U == (3U & (vlSelf->cpu__DOT__id_ex_reg[1U] 
                         >> 0x16U))) ? ((0x1fU >= (0x18U 
                                                   & (cpu__DOT__inst_execute_stage__DOT__mem_addr 
                                                      << 3U)))
                                         ? ((0xffU 
                                             & cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd) 
                                            << (0x18U 
                                                & (cpu__DOT__inst_execute_stage__DOT__mem_addr 
                                                   << 3U)))
                                         : 0U) : ((1U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->cpu__DOT__id_ex_reg[1U] 
                                                       >> 0x16U)))
                                                   ? 
                                                  ((0x1fU 
                                                    >= 
                                                    (0x18U 
                                                     & (cpu__DOT__inst_execute_stage__DOT__mem_addr 
                                                        << 3U)))
                                                    ? 
                                                   ((0xffffU 
                                                     & cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd) 
                                                    << 
                                                    (0x18U 
                                                     & (cpu__DOT__inst_execute_stage__DOT__mem_addr 
                                                        << 3U)))
                                                    : 0U)
                                                   : cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd));
    if ((0x10000U & vlSelf->cpu__DOT__id_ex_reg[1U])) {
        if ((0x1000000U & vlSelf->cpu__DOT__id_ex_reg[1U])) {
            if ((0x800000U & vlSelf->cpu__DOT__id_ex_reg[1U])) {
                if ((0x400000U & vlSelf->cpu__DOT__id_ex_reg[1U])) {
                    vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken 
                        = (1U & (~ (IData)(cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_lt_rs2)));
                    vlSelf->cpu__DOT__branch_target_pc 
                        = ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                            ? cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm
                            : ((IData)(4U) + ((vlSelf->cpu__DOT__id_ex_reg[6U] 
                                               << 0x16U) 
                                              | (vlSelf->cpu__DOT__id_ex_reg[5U] 
                                                 >> 0xaU))));
                } else {
                    vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken 
                        = cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_lt_rs2;
                    vlSelf->cpu__DOT__branch_target_pc 
                        = ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                            ? cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm
                            : ((IData)(4U) + ((vlSelf->cpu__DOT__id_ex_reg[6U] 
                                               << 0x16U) 
                                              | (vlSelf->cpu__DOT__id_ex_reg[5U] 
                                                 >> 0xaU))));
                }
            } else if ((0x400000U & vlSelf->cpu__DOT__id_ex_reg[1U])) {
                vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken 
                    = (1U & (~ (IData)(cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_sign_rs1_lt_rs2)));
                vlSelf->cpu__DOT__branch_target_pc 
                    = ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                        ? cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm
                        : ((IData)(4U) + ((vlSelf->cpu__DOT__id_ex_reg[6U] 
                                           << 0x16U) 
                                          | (vlSelf->cpu__DOT__id_ex_reg[5U] 
                                             >> 0xaU))));
            } else {
                vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken 
                    = cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_sign_rs1_lt_rs2;
                vlSelf->cpu__DOT__branch_target_pc 
                    = ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                        ? cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm
                        : ((IData)(4U) + ((vlSelf->cpu__DOT__id_ex_reg[6U] 
                                           << 0x16U) 
                                          | (vlSelf->cpu__DOT__id_ex_reg[5U] 
                                             >> 0xaU))));
            }
        } else if ((0x800000U & vlSelf->cpu__DOT__id_ex_reg[1U])) {
            vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken = 0U;
            vlSelf->cpu__DOT__branch_target_pc = ((IData)(4U) 
                                                  + 
                                                  ((vlSelf->cpu__DOT__id_ex_reg[6U] 
                                                    << 0x16U) 
                                                   | (vlSelf->cpu__DOT__id_ex_reg[5U] 
                                                      >> 0xaU)));
        } else if ((0x400000U & vlSelf->cpu__DOT__id_ex_reg[1U])) {
            vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken 
                = (1U & (~ (IData)(cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_eq_rs2)));
            vlSelf->cpu__DOT__branch_target_pc = ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm
                                                   : 
                                                  ((IData)(4U) 
                                                   + 
                                                   ((vlSelf->cpu__DOT__id_ex_reg[6U] 
                                                     << 0x16U) 
                                                    | (vlSelf->cpu__DOT__id_ex_reg[5U] 
                                                       >> 0xaU))));
        } else {
            vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken 
                = cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_eq_rs2;
            vlSelf->cpu__DOT__branch_target_pc = ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                   ? cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm
                                                   : 
                                                  ((IData)(4U) 
                                                   + 
                                                   ((vlSelf->cpu__DOT__id_ex_reg[6U] 
                                                     << 0x16U) 
                                                    | (vlSelf->cpu__DOT__id_ex_reg[5U] 
                                                       >> 0xaU))));
        }
    } else if ((0x8000U & vlSelf->cpu__DOT__id_ex_reg[1U])) {
        vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken = 1U;
        vlSelf->cpu__DOT__branch_target_pc = cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm;
    } else if ((0x4000U & vlSelf->cpu__DOT__id_ex_reg[1U])) {
        vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken = 1U;
        vlSelf->cpu__DOT__branch_target_pc = (0xfffffffeU 
                                              & (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                 + 
                                                 ((vlSelf->cpu__DOT__id_ex_reg[3U] 
                                                   << 0x16U) 
                                                  | (vlSelf->cpu__DOT__id_ex_reg[2U] 
                                                     >> 0xaU))));
    } else {
        vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken = 0U;
        vlSelf->cpu__DOT__branch_target_pc = ((IData)(4U) 
                                              + ((vlSelf->cpu__DOT__id_ex_reg[6U] 
                                                  << 0x16U) 
                                                 | (vlSelf->cpu__DOT__id_ex_reg[5U] 
                                                    >> 0xaU)));
    }
    vlSelf->cpu__DOT__execute_alu_data = ((IData)((0U 
                                                   != 
                                                   (0xc000U 
                                                    & vlSelf->cpu__DOT__id_ex_reg[1U])))
                                           ? ((IData)(4U) 
                                              + ((vlSelf->cpu__DOT__id_ex_reg[6U] 
                                                  << 0x16U) 
                                                 | (vlSelf->cpu__DOT__id_ex_reg[5U] 
                                                    >> 0xaU)))
                                           : ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180000U 
                                                        & vlSelf->cpu__DOT__id_ex_reg[1U])))
                                               ? cpu__DOT__inst_execute_stage__DOT__mem_addr
                                               : cpu__DOT__inst_execute_stage__DOT__alu_data));
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__update_BTB 
        = ((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
           & (IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken));
    vlSelf->cpu__DOT__inst_execute_stage__DOT__GHSR_restore 
        = ((0x400U & (IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__GHSR_checkpoint))
            ? ((0x3feU & ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__GHSR_checkpoint) 
                          << 1U)) | (IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken))
            : ((0x3feU & vlSelf->cpu__DOT__id_ex_reg[1U]) 
               | (IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)));
    cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_branch_taken_diff 
        = (1U & ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken) 
                 ^ (vlSelf->cpu__DOT__id_ex_reg[1U] 
                    >> 0xbU)));
    __Vfunc_gshare_hash__2__branch_pc = ((vlSelf->cpu__DOT__id_ex_reg[6U] 
                                          << 0x16U) 
                                         | (vlSelf->cpu__DOT__id_ex_reg[5U] 
                                            >> 0xaU));
    __Vfunc_gshare_hash__2__GHSR = vlSelf->cpu__DOT__inst_execute_stage__DOT__GHSR_restore;
    __Vfunc_gshare_hash__2__Vfuncout = (0x3ffU & ((IData)(__Vfunc_gshare_hash__2__GHSR) 
                                                  ^ 
                                                  (__Vfunc_gshare_hash__2__branch_pc 
                                                   >> 2U)));
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr 
        = __Vfunc_gshare_hash__2__Vfuncout;
    vlSelf->cpu__DOT__inst_execute_stage__DOT__update_GHSR 
        = ((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
           & ((~ vlSelf->cpu__DOT__id_ex_reg[1U]) | (IData)(cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_branch_taken_diff)));
    cpu__DOT__branch_flush = ((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                              & ((IData)(cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_branch_taken_diff) 
                                 | ((vlSelf->cpu__DOT__id_ex_reg[1U] 
                                     >> 0xbU) & (vlSelf->cpu__DOT__id_ex_reg[0U] 
                                                 == vlSelf->cpu__DOT__branch_target_pc))));
    vlSelf->debug_flush = cpu__DOT__branch_flush;
    vlSelf->cpu__DOT__id_ex_flush = 0U;
    if (cpu__DOT__hazard) {
        vlSelf->cpu__DOT__id_ex_flush = 1U;
    } else if (cpu__DOT__branch_flush) {
        vlSelf->cpu__DOT__id_ex_flush = 1U;
    }
    vlSelf->cpu__DOT__if_id_flush = 0U;
    if ((1U & (~ (IData)(cpu__DOT__hazard)))) {
        if (cpu__DOT__branch_flush) {
            vlSelf->cpu__DOT__if_id_flush = 1U;
            cpu__DOT__PC_flush = 0U;
            cpu__DOT__PC_flush = 1U;
        } else {
            cpu__DOT__PC_flush = 0U;
        }
    } else {
        cpu__DOT__PC_flush = 0U;
    }
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_next 
        = ((IData)(cpu__DOT__PC_stall) ? vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg
            : ((IData)(cpu__DOT__PC_flush) ? vlSelf->cpu__DOT__branch_target_pc
                : (((IData)(cpu__DOT__inst_fetch_stage__DOT__instr0_predict_taken) 
                    & (IData)(cpu__DOT__inst_fetch_stage__DOT__instr0_btb_hit))
                    ? vlSelf->cpu__DOT__inst_fetch_stage__DOT__instr0_btb_target_addr
                    : ((IData)(4U) + vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg))));
}

VL_ATTR_COLD void Vcommon___024root___initial__TOP__2(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___initial__TOP__2\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h7315c05b__0;
    // Body
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
    __Vtemp_h7315c05b__0[0U] = 0x2e6d656dU;
    __Vtemp_h7315c05b__0[1U] = 0x5f6d656dU;
    __Vtemp_h7315c05b__0[2U] = 0x74696f6eU;
    __Vtemp_h7315c05b__0[3U] = 0x74727563U;
    __Vtemp_h7315c05b__0[4U] = 0x696e73U;
    VL_READMEM_N(true, 32, 256, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_h7315c05b__0)
                 ,  &(vlSelf->cpu__DOT__inst_mem__DOT__ram)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void Vcommon___024root___settle__TOP__8(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__8\n"); );
    // Body
    vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_read_data1 
        = ((0U == (0x1fU & (vlSelf->cpu__DOT__if_id_reg[0U] 
                            >> 0xfU))) ? 0U : (((0x1fU 
                                                 & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                                    >> 0xfU)) 
                                                == 
                                                (0x1fU 
                                                 & ((vlSelf->cpu__DOT__mem_wb_reg[3U] 
                                                     << 2U) 
                                                    | (vlSelf->cpu__DOT__mem_wb_reg[2U] 
                                                       >> 0x1eU))))
                                                ? vlSelf->cpu__DOT__wb_result
                                                : vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers
                                               [(0x1fU 
                                                 & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                                    >> 0xfU))]));
    vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_read_data2 
        = ((0U == (0x1fU & (vlSelf->cpu__DOT__if_id_reg[0U] 
                            >> 0x14U))) ? 0U : (((0x1fU 
                                                  & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                                     >> 0x14U)) 
                                                 == 
                                                 (0x1fU 
                                                  & ((vlSelf->cpu__DOT__mem_wb_reg[3U] 
                                                      << 2U) 
                                                     | (vlSelf->cpu__DOT__mem_wb_reg[2U] 
                                                        >> 0x1eU))))
                                                 ? vlSelf->cpu__DOT__wb_result
                                                 : 
                                                vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers
                                                [(0x1fU 
                                                  & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                                     >> 0x14U))]));
}

VL_ATTR_COLD void Vcommon___024root___eval_initial(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_initial\n"); );
    // Body
    Vcommon___024root___initial__TOP__2(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcommon___024root___eval_settle(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_settle\n"); );
    // Body
    Vcommon___024root___settle__TOP__1(vlSelf);
    Vcommon___024root___settle__TOP__8(vlSelf);
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
    vlSelf->debug_flush = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__branch_target_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__ex2if_branch_valid = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__decode_immediate_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__execute_alu_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__execute_control = VL_RAND_RESET_I(30);
    vlSelf->cpu__DOT__memory_alu_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__memory_control = VL_RAND_RESET_I(30);
    vlSelf->cpu__DOT__wb_result = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(108, vlSelf->cpu__DOT__if_id_reg);
    VL_RAND_RESET_W(207, vlSelf->cpu__DOT__id_ex_reg);
    VL_RAND_RESET_W(99, vlSelf->cpu__DOT__ex_mem_reg);
    VL_RAND_RESET_W(99, vlSelf->cpu__DOT__mem_wb_reg);
    vlSelf->cpu__DOT__if_id_stall = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__if_id_flush = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__id_ex_flush = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->cpu__DOT__inst_mem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__instr0_btb_target_addr = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__update_BTB = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[__Vi0] = VL_RAND_RESET_I(25);
    }
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[__Vi0] = VL_RAND_RESET_I(30);
    }
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR = VL_RAND_RESET_I(10);
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR_next = VL_RAND_RESET_I(10);
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr = VL_RAND_RESET_I(10);
    vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__inst_decode_stage__DOT__control = VL_RAND_RESET_I(30);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__inst_execute_stage__DOT__GHSR_restore = VL_RAND_RESET_I(10);
    vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__inst_execute_stage__DOT__store_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__inst_execute_stage__DOT__update_GHSR = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__GHSR_checkpoint = VL_RAND_RESET_I(11);
    vlSelf->cpu__DOT__inst_mem_stage__DOT__load_data = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<256; ++__Vi0) {
        vlSelf->cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    VL_RAND_RESET_W(108, vlSelf->__Vdly__cpu__DOT__if_id_reg);
    vlSelf->__Vdlyvdim0__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v0 = 0;
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v0 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v1 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v3 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v4 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v6 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v7 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v8 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v9 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v10 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v11 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v12 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v13 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v14 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v15 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v16 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v17 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v18 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v19 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v20 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v21 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v22 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v23 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v24 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v25 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v26 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v27 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v28 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v29 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v30 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v31 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v32 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v33 = 0;
    vlSelf->__Vdlyvdim0__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0 = VL_RAND_RESET_I(25);
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0 = 0;
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v1 = 0;
    vlSelf->__Vdlyvdim0__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0 = VL_RAND_RESET_I(30);
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0 = 0;
    vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v1 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v0 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v2 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v3 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v4 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v5 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v6 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v7 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v8 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v9 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v10 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v11 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v12 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v13 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v14 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v15 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v16 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v17 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v18 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v19 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v20 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v21 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v22 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v23 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v24 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v25 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v26 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v27 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v28 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v29 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v30 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v31 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v32 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v33 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v34 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v35 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v36 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v37 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v38 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v39 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v40 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v41 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v42 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v43 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v44 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v45 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v46 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v47 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v48 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v49 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v50 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v51 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v52 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v53 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v54 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v55 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v56 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v57 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v58 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v59 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v60 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v61 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v62 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v63 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v64 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v65 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v66 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v67 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v68 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v69 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v70 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v71 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v72 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v73 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v74 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v75 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v76 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v77 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v78 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v79 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v80 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v81 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v82 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v83 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v84 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v85 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v86 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v87 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v88 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v89 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v90 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v91 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v92 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v93 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v94 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v95 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v96 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v97 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v98 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v99 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v100 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v101 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v102 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v103 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v104 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v105 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v106 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v107 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v108 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v109 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v110 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v111 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v112 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v113 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v114 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v115 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v116 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v117 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v118 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v119 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v120 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v121 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v122 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v123 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v124 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v125 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v126 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v127 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v128 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v129 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v130 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v131 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v132 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v133 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v134 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v135 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v136 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v137 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v138 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v139 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v140 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v141 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v142 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v143 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v144 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v145 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v146 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v147 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v148 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v149 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v150 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v151 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v152 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v153 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v154 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v155 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v156 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v157 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v158 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v159 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v160 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v161 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v162 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v163 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v164 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v165 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v166 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v167 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v168 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v169 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v170 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v171 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v172 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v173 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v174 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v175 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v176 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v177 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v178 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v179 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v180 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v181 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v182 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v183 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v184 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v185 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v186 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v187 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v188 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v189 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v190 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v191 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v192 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v193 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v194 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v195 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v196 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v197 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v198 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v199 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v200 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v201 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v202 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v203 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v204 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v205 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v206 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v207 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v208 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v209 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v210 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v211 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v212 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v213 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v214 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v215 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v216 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v217 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v218 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v219 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v220 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v221 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v222 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v223 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v224 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v225 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v226 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v227 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v228 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v229 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v230 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v231 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v232 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v233 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v234 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v235 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v236 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v237 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v238 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v239 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v240 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v241 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v242 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v243 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v244 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v245 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v246 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v247 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v248 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v249 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v250 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v251 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v252 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v253 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v254 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v255 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v256 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v257 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v258 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v259 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v260 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v261 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v262 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v263 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v264 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v265 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v266 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v267 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v268 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v269 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v270 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v271 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v272 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v273 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v274 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v275 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v276 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v277 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v278 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v279 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v280 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v281 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v282 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v283 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v284 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v285 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v286 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v287 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v288 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v289 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v290 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v291 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v292 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v293 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v294 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v295 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v296 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v297 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v298 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v299 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v300 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v301 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v302 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v303 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v304 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v305 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v306 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v307 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v308 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v309 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v310 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v311 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v312 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v313 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v314 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v315 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v316 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v317 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v318 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v319 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v320 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v321 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v322 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v323 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v324 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v325 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v326 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v327 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v328 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v329 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v330 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v331 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v332 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v333 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v334 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v335 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v336 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v337 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v338 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v339 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v340 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v341 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v342 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v343 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v344 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v345 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v346 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v347 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v348 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v349 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v350 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v351 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v352 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v353 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v354 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v355 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v356 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v357 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v358 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v359 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v360 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v361 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v362 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v363 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v364 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v365 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v366 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v367 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v368 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v369 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v370 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v371 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v372 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v373 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v374 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v375 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v376 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v377 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v378 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v379 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v380 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v381 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v382 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v383 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v384 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v385 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v386 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v387 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v388 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v389 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v390 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v391 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v392 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v393 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v394 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v395 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v396 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v397 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v398 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v399 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v400 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v401 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v402 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v403 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v404 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v405 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v406 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v407 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v408 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v409 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v410 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v411 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v412 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v413 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v414 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v415 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v416 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v417 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v418 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v419 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v420 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v421 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v422 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v423 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v424 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v425 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v426 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v427 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v428 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v429 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v430 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v431 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v432 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v433 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v434 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v435 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v436 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v437 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v438 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v439 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v440 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v441 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v442 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v443 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v444 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v445 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v446 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v447 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v448 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v449 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v450 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v451 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v452 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v453 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v454 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v455 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v456 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v457 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v458 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v459 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v460 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v461 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v462 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v463 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v464 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v465 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v466 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v467 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v468 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v469 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v470 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v471 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v472 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v473 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v474 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v475 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v476 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v477 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v478 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v479 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v480 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v481 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v482 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v483 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v484 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v485 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v486 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v487 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v488 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v489 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v490 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v491 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v492 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v493 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v494 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v495 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v496 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v497 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v498 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v499 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v500 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v501 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v502 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v503 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v504 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v505 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v506 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v507 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v508 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v509 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v510 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v511 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v512 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v513 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v514 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v515 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v516 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v517 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v518 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v519 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v520 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v521 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v522 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v523 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v524 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v525 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v526 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v527 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v528 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v529 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v530 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v531 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v532 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v533 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v534 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v535 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v536 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v537 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v538 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v539 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v540 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v541 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v542 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v543 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v544 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v545 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v546 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v547 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v548 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v549 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v550 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v551 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v552 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v553 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v554 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v555 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v556 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v557 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v558 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v559 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v560 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v561 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v562 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v563 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v564 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v565 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v566 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v567 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v568 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v569 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v570 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v571 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v572 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v573 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v574 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v575 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v576 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v577 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v578 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v579 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v580 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v581 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v582 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v583 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v584 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v585 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v586 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v587 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v588 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v589 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v590 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v591 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v592 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v593 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v594 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v595 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v596 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v597 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v598 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v599 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v600 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v601 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v602 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v603 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v604 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v605 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v606 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v607 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v608 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v609 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v610 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v611 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v612 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v613 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v614 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v615 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v616 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v617 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v618 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v619 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v620 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v621 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v622 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v623 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v624 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v625 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v626 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v627 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v628 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v629 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v630 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v631 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v632 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v633 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v634 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v635 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v636 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v637 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v638 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v639 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v640 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v641 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v642 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v643 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v644 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v645 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v646 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v647 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v648 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v649 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v650 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v651 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v652 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v653 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v654 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v655 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v656 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v657 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v658 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v659 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v660 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v661 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v662 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v663 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v664 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v665 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v666 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v667 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v668 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v669 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v670 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v671 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v672 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v673 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v674 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v675 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v676 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v677 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v678 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v679 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v680 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v681 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v682 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v683 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v684 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v685 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v686 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v687 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v688 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v689 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v690 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v691 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v692 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v693 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v694 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v695 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v696 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v697 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v698 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v699 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v700 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v701 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v702 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v703 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v704 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v705 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v706 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v707 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v708 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v709 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v710 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v711 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v712 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v713 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v714 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v715 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v716 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v717 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v718 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v719 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v720 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v721 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v722 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v723 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v724 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v725 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v726 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v727 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v728 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v729 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v730 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v731 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v732 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v733 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v734 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v735 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v736 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v737 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v738 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v739 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v740 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v741 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v742 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v743 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v744 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v745 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v746 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v747 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v748 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v749 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v750 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v751 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v752 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v753 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v754 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v755 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v756 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v757 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v758 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v759 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v760 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v761 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v762 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v763 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v764 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v765 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v766 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v767 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v768 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v769 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v770 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v771 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v772 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v773 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v774 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v775 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v776 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v777 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v778 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v779 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v780 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v781 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v782 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v783 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v784 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v785 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v786 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v787 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v788 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v789 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v790 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v791 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v792 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v793 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v794 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v795 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v796 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v797 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v798 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v799 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v800 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v801 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v802 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v803 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v804 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v805 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v806 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v807 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v808 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v809 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v810 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v811 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v812 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v813 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v814 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v815 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v816 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v817 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v818 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v819 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v820 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v821 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v822 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v823 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v824 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v825 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v826 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v827 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v828 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v829 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v830 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v831 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v832 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v833 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v834 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v835 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v836 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v837 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v838 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v839 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v840 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v841 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v842 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v843 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v844 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v845 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v846 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v847 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v848 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v849 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v850 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v851 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v852 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v853 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v854 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v855 = VL_RAND_RESET_I(2);
    vlSelf->__Vdlyvdim0__cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers__v0 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers__v0 = 0;
    vlSelf->__Vdlyvdim0__cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram__v0 = 0;
    vlSelf->__Vdlyvval__cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram__v0 = 0;
}
