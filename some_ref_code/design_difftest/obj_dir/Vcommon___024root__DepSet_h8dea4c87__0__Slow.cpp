// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_ATTR_COLD void Vcommon___024root___initial__TOP__1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->io_imem_en = 1U;
    vlSelf->io_dmem_en = 1U;
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

VL_ATTR_COLD void Vcommon___024root___settle__TOP__3(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___settle__TOP__3\n"); );
    // Init
    CData/*0:0*/ cpu__DOT__branch_flush;
    CData/*1:0*/ cpu__DOT__fwd_sel_rs1;
    CData/*1:0*/ cpu__DOT__fwd_sel_rs2;
    CData/*0:0*/ cpu__DOT__hazard;
    CData/*0:0*/ cpu__DOT__PC_stall;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__mem_addr;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__alu_right_operand;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__alu_data;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm;
    CData/*0:0*/ cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_eq_rs2;
    CData/*0:0*/ cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_lt_rs2;
    CData/*0:0*/ cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_sign_rs1_lt_rs2;
    CData/*0:0*/ cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_branch_taken_diff;
    CData/*7:0*/ cpu__DOT__inst_mem_stage__DOT__load_byte;
    SData/*15:0*/ cpu__DOT__inst_mem_stage__DOT__load_hword;
    IData/*31:0*/ __Vfunc_immediate_extension__0__Vfuncout;
    IData/*31:0*/ __Vfunc_immediate_extension__0__instruction;
    CData/*2:0*/ __Vfunc_immediate_extension__0__inst_encoding;
    // Body
    vlSelf->io_imem_addr = (QData)((IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg));
    vlSelf->io_dmem_addr = (QData)((IData)(vlSelf->cpu__DOT__ex_mem_reg[1U]));
    vlSelf->io_dmem_wen = (1U & (vlSelf->cpu__DOT__ex_mem_reg[2U] 
                                 >> 7U));
    vlSelf->io_dmem_wdata = (QData)((IData)(vlSelf->cpu__DOT__ex_mem_reg[0U]));
    vlSelf->cpu__DOT____Vcellinp__inst_mem_stage__alu_data_in 
        = vlSelf->cpu__DOT__ex_mem_reg[1U];
    vlSelf->cpu__DOT__execute_control = (0x3fffffffU 
                                         & vlSelf->cpu__DOT__id_ex_reg[0U]);
    vlSelf->cpu__DOT__memory_control = (0x3fffffffU 
                                        & vlSelf->cpu__DOT__ex_mem_reg[2U]);
    if ((0x1fU >= (0x18U & (vlSelf->cpu__DOT__ex_mem_reg[1U] 
                            << 3U)))) {
        cpu__DOT__inst_mem_stage__DOT__load_byte = 
            (0xffU & ((IData)(vlSelf->io_dmem_rdata) 
                      >> (0x18U & (vlSelf->cpu__DOT__ex_mem_reg[1U] 
                                   << 3U))));
        cpu__DOT__inst_mem_stage__DOT__load_hword = 
            (0xffffU & ((IData)(vlSelf->io_dmem_rdata) 
                        >> (0x18U & (vlSelf->cpu__DOT__ex_mem_reg[1U] 
                                     << 3U))));
    } else {
        cpu__DOT__inst_mem_stage__DOT__load_byte = 0U;
        cpu__DOT__inst_mem_stage__DOT__load_hword = 0U;
    }
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
    cpu__DOT__hazard = ((((0x1fU & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                    >> 0xfU)) == (0x1fU 
                                                  & ((vlSelf->cpu__DOT__id_ex_reg[5U] 
                                                      << 1U) 
                                                     | (vlSelf->cpu__DOT__id_ex_reg[4U] 
                                                        >> 0x1fU)))) 
                         | ((0x1fU & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                      >> 0x14U)) == 
                            (0x1fU & ((vlSelf->cpu__DOT__id_ex_reg[5U] 
                                       << 1U) | (vlSelf->cpu__DOT__id_ex_reg[4U] 
                                                 >> 0x1fU))))) 
                        & (vlSelf->cpu__DOT__id_ex_reg[0U] 
                           >> 8U));
    cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm 
        = (((vlSelf->cpu__DOT__id_ex_reg[4U] << 2U) 
            | (vlSelf->cpu__DOT__id_ex_reg[3U] >> 0x1eU)) 
           + ((vlSelf->cpu__DOT__id_ex_reg[1U] << 2U) 
              | (vlSelf->cpu__DOT__id_ex_reg[0U] >> 0x1eU)));
    cpu__DOT__fwd_sel_rs2 = 0U;
    if (((vlSelf->cpu__DOT__mem_wb_reg[0U] >> 6U) & 
         ((0x1fU & ((vlSelf->cpu__DOT__mem_wb_reg[3U] 
                     << 2U) | (vlSelf->cpu__DOT__mem_wb_reg[2U] 
                               >> 0x1eU))) == (0x1fU 
                                               & (vlSelf->cpu__DOT__id_ex_reg[0U] 
                                                  >> 0xdU))))) {
        cpu__DOT__fwd_sel_rs2 = 1U;
    } else if (((vlSelf->cpu__DOT__ex_mem_reg[2U] >> 6U) 
                & ((0x1fU & ((vlSelf->cpu__DOT__ex_mem_reg[3U] 
                              << 2U) | (vlSelf->cpu__DOT__ex_mem_reg[2U] 
                                        >> 0x1eU))) 
                   == (0x1fU & (vlSelf->cpu__DOT__id_ex_reg[0U] 
                                >> 0xdU))))) {
        cpu__DOT__fwd_sel_rs2 = 2U;
    }
    cpu__DOT__fwd_sel_rs1 = 0U;
    if (((vlSelf->cpu__DOT__mem_wb_reg[0U] >> 6U) & 
         ((0x1fU & ((vlSelf->cpu__DOT__mem_wb_reg[3U] 
                     << 2U) | (vlSelf->cpu__DOT__mem_wb_reg[2U] 
                               >> 0x1eU))) == (0x1fU 
                                               & (vlSelf->cpu__DOT__id_ex_reg[0U] 
                                                  >> 0x12U))))) {
        cpu__DOT__fwd_sel_rs1 = 1U;
    } else if (((vlSelf->cpu__DOT__ex_mem_reg[2U] >> 6U) 
                & ((0x1fU & ((vlSelf->cpu__DOT__ex_mem_reg[3U] 
                              << 2U) | (vlSelf->cpu__DOT__ex_mem_reg[2U] 
                                        >> 0x1eU))) 
                   == (0x1fU & (vlSelf->cpu__DOT__id_ex_reg[0U] 
                                >> 0x12U))))) {
        cpu__DOT__fwd_sel_rs1 = 2U;
    }
    vlSelf->cpu__DOT__wb_result = ((0x100U & vlSelf->cpu__DOT__mem_wb_reg[0U])
                                    ? ((vlSelf->cpu__DOT__mem_wb_reg[2U] 
                                        << 2U) | (vlSelf->cpu__DOT__mem_wb_reg[1U] 
                                                  >> 0x1eU))
                                    : ((vlSelf->cpu__DOT__mem_wb_reg[1U] 
                                        << 2U) | (vlSelf->cpu__DOT__mem_wb_reg[0U] 
                                                  >> 0x1eU)));
    vlSelf->cpu__DOT__inst_mem_stage__DOT__load_data 
        = ((0x1000U & vlSelf->cpu__DOT__ex_mem_reg[2U])
            ? ((0x800U & vlSelf->cpu__DOT__ex_mem_reg[2U])
                ? (IData)(vlSelf->io_dmem_rdata) : 
               ((0x400U & vlSelf->cpu__DOT__ex_mem_reg[2U])
                 ? (IData)(cpu__DOT__inst_mem_stage__DOT__load_hword)
                 : (IData)(cpu__DOT__inst_mem_stage__DOT__load_byte)))
            : ((0x800U & vlSelf->cpu__DOT__ex_mem_reg[2U])
                ? (IData)(vlSelf->io_dmem_rdata) : 
               ((0x400U & vlSelf->cpu__DOT__ex_mem_reg[2U])
                 ? (((- (IData)((1U & ((IData)(cpu__DOT__inst_mem_stage__DOT__load_hword) 
                                       >> 0xfU)))) 
                     << 0x10U) | (IData)(cpu__DOT__inst_mem_stage__DOT__load_hword))
                 : (((- (IData)((1U & ((IData)(cpu__DOT__inst_mem_stage__DOT__load_byte) 
                                       >> 7U)))) << 8U) 
                    | (IData)(cpu__DOT__inst_mem_stage__DOT__load_byte)))));
    __Vfunc_immediate_extension__0__inst_encoding = 
        (7U & (vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
               >> 0x17U));
    __Vfunc_immediate_extension__0__instruction = vlSelf->cpu__DOT__if_id_reg[0U];
    __Vfunc_immediate_extension__0__Vfuncout = ((4U 
                                                 & (IData)(__Vfunc_immediate_extension__0__inst_encoding))
                                                 ? 
                                                ((2U 
                                                  & (IData)(__Vfunc_immediate_extension__0__inst_encoding))
                                                  ? 0U
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_immediate_extension__0__inst_encoding))
                                                   ? 
                                                  (((- (IData)(
                                                               (__Vfunc_immediate_extension__0__instruction 
                                                                >> 0x1fU))) 
                                                    << 0x15U) 
                                                   | ((0x100000U 
                                                       & (__Vfunc_immediate_extension__0__instruction 
                                                          >> 0xbU)) 
                                                      | ((0xff000U 
                                                          & __Vfunc_immediate_extension__0__instruction) 
                                                         | ((0x800U 
                                                             & (__Vfunc_immediate_extension__0__instruction 
                                                                >> 9U)) 
                                                            | (0x7feU 
                                                               & (__Vfunc_immediate_extension__0__instruction 
                                                                  >> 0x14U))))))
                                                   : 
                                                  (0xfffff000U 
                                                   & __Vfunc_immediate_extension__0__instruction)))
                                                 : 
                                                ((2U 
                                                  & (IData)(__Vfunc_immediate_extension__0__inst_encoding))
                                                  ? 
                                                 ((1U 
                                                   & (IData)(__Vfunc_immediate_extension__0__inst_encoding))
                                                   ? 
                                                  (((- (IData)(
                                                               (__Vfunc_immediate_extension__0__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xdU) 
                                                   | ((0x1000U 
                                                       & (__Vfunc_immediate_extension__0__instruction 
                                                          >> 0x13U)) 
                                                      | ((0x800U 
                                                          & (__Vfunc_immediate_extension__0__instruction 
                                                             << 4U)) 
                                                         | ((0x7e0U 
                                                             & (__Vfunc_immediate_extension__0__instruction 
                                                                >> 0x14U)) 
                                                            | (0x1eU 
                                                               & (__Vfunc_immediate_extension__0__instruction 
                                                                  >> 7U))))))
                                                   : 
                                                  (((- (IData)(
                                                               (__Vfunc_immediate_extension__0__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | ((0xfe0U 
                                                       & (__Vfunc_immediate_extension__0__instruction 
                                                          >> 0x14U)) 
                                                      | (0x1fU 
                                                         & (__Vfunc_immediate_extension__0__instruction 
                                                            >> 7U)))))
                                                  : 
                                                 ((1U 
                                                   & (IData)(__Vfunc_immediate_extension__0__inst_encoding))
                                                   ? 
                                                  (((- (IData)(
                                                               (__Vfunc_immediate_extension__0__instruction 
                                                                >> 0x1fU))) 
                                                    << 0xcU) 
                                                   | (__Vfunc_immediate_extension__0__instruction 
                                                      >> 0x14U))
                                                   : 0U)));
    vlSelf->cpu__DOT__decode_immediate_data = __Vfunc_immediate_extension__0__Vfuncout;
    vlSelf->cpu__DOT__if_id_stall = 0U;
    if (cpu__DOT__hazard) {
        vlSelf->cpu__DOT__if_id_stall = 1U;
        cpu__DOT__PC_stall = 0U;
        cpu__DOT__PC_stall = 1U;
    } else {
        cpu__DOT__PC_stall = 0U;
    }
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
    cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd 
        = ((1U == (IData)(cpu__DOT__fwd_sel_rs2)) ? vlSelf->cpu__DOT__wb_result
            : ((2U == (IData)(cpu__DOT__fwd_sel_rs2))
                ? vlSelf->cpu__DOT__ex_mem_reg[1U] : 
               ((vlSelf->cpu__DOT__id_ex_reg[2U] << 2U) 
                | (vlSelf->cpu__DOT__id_ex_reg[1U] 
                   >> 0x1eU))));
    cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
        = ((1U == (IData)(cpu__DOT__fwd_sel_rs1)) ? vlSelf->cpu__DOT__wb_result
            : ((2U == (IData)(cpu__DOT__fwd_sel_rs1))
                ? vlSelf->cpu__DOT__ex_mem_reg[1U] : 
               ((vlSelf->cpu__DOT__id_ex_reg[3U] << 2U) 
                | (vlSelf->cpu__DOT__id_ex_reg[2U] 
                   >> 0x1eU))));
    cpu__DOT__inst_execute_stage__DOT__alu_right_operand 
        = cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd;
    if ((0x200U & vlSelf->cpu__DOT__id_ex_reg[0U])) {
        cpu__DOT__inst_execute_stage__DOT__alu_right_operand 
            = ((vlSelf->cpu__DOT__id_ex_reg[1U] << 2U) 
               | (vlSelf->cpu__DOT__id_ex_reg[0U] >> 0x1eU));
    }
    cpu__DOT__inst_execute_stage__DOT__mem_addr = (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                   + 
                                                   ((vlSelf->cpu__DOT__id_ex_reg[1U] 
                                                     << 2U) 
                                                    | (vlSelf->cpu__DOT__id_ex_reg[0U] 
                                                       >> 0x1eU)));
    cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_eq_rs2 
        = (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
           == cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd);
    cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_lt_rs2 
        = (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
           < cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd);
    cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_sign_rs1_lt_rs2 
        = VL_LTS_III(32, cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd, cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd);
    cpu__DOT__inst_execute_stage__DOT__alu_data = (
                                                   (0x20000000U 
                                                    & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                    ? 
                                                   ((0x10000000U 
                                                     & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                     ? 
                                                    ((0x8000000U 
                                                      & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                      ? 
                                                     ((0x4000000U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                       ? cpu__DOT__inst_execute_stage__DOT__alu_right_operand
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       & cpu__DOT__inst_execute_stage__DOT__alu_right_operand))
                                                      : 
                                                     ((0x4000000U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                       ? 0U
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       | cpu__DOT__inst_execute_stage__DOT__alu_right_operand)))
                                                     : 
                                                    ((0x8000000U 
                                                      & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                      ? 
                                                     ((0x4000000U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[0U])
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
                                                     ((0x4000000U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                       ? 0U
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       ^ cpu__DOT__inst_execute_stage__DOT__alu_right_operand))))
                                                    : 
                                                   ((0x10000000U 
                                                     & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                     ? 
                                                    ((0x8000000U 
                                                      & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                      ? 
                                                     ((0x4000000U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                       ? 0U
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       < cpu__DOT__inst_execute_stage__DOT__alu_right_operand))
                                                      : 
                                                     ((0x4000000U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                       ? 0U
                                                       : 
                                                      VL_LTS_III(32, cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd, cpu__DOT__inst_execute_stage__DOT__alu_right_operand)))
                                                     : 
                                                    ((0x8000000U 
                                                      & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                      ? 
                                                     ((0x4000000U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                       ? 0U
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       << 
                                                       (0x1fU 
                                                        & cpu__DOT__inst_execute_stage__DOT__alu_right_operand)))
                                                      : 
                                                     ((0x4000000U 
                                                       & vlSelf->cpu__DOT__id_ex_reg[0U])
                                                       ? 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       - cpu__DOT__inst_execute_stage__DOT__alu_right_operand)
                                                       : 
                                                      (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                                       + cpu__DOT__inst_execute_stage__DOT__alu_right_operand)))));
    vlSelf->cpu__DOT__inst_execute_stage__DOT__store_data 
        = ((0U == (3U & (vlSelf->cpu__DOT__id_ex_reg[0U] 
                         >> 0xaU))) ? ((0x1fU >= (0x18U 
                                                  & (cpu__DOT__inst_execute_stage__DOT__mem_addr 
                                                     << 3U)))
                                        ? ((0xffU & cpu__DOT__inst_execute_stage__DOT__rs2_after_fwd) 
                                           << (0x18U 
                                               & (cpu__DOT__inst_execute_stage__DOT__mem_addr 
                                                  << 3U)))
                                        : 0U) : ((1U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->cpu__DOT__id_ex_reg[0U] 
                                                      >> 0xaU)))
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
    if ((0x10U & vlSelf->cpu__DOT__id_ex_reg[0U])) {
        if ((0x1000U & vlSelf->cpu__DOT__id_ex_reg[0U])) {
            if ((0x800U & vlSelf->cpu__DOT__id_ex_reg[0U])) {
                if ((0x400U & vlSelf->cpu__DOT__id_ex_reg[0U])) {
                    vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken 
                        = (1U & (~ (IData)(cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_lt_rs2)));
                    vlSelf->cpu__DOT__branch_pc = ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                    ? cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm
                                                    : 
                                                   ((IData)(4U) 
                                                    + 
                                                    ((vlSelf->cpu__DOT__id_ex_reg[4U] 
                                                      << 2U) 
                                                     | (vlSelf->cpu__DOT__id_ex_reg[3U] 
                                                        >> 0x1eU))));
                } else {
                    vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken 
                        = cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_lt_rs2;
                    vlSelf->cpu__DOT__branch_pc = ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                    ? cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm
                                                    : 
                                                   ((IData)(4U) 
                                                    + 
                                                    ((vlSelf->cpu__DOT__id_ex_reg[4U] 
                                                      << 2U) 
                                                     | (vlSelf->cpu__DOT__id_ex_reg[3U] 
                                                        >> 0x1eU))));
                }
            } else if ((0x400U & vlSelf->cpu__DOT__id_ex_reg[0U])) {
                vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken 
                    = (1U & (~ (IData)(cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_sign_rs1_lt_rs2)));
                vlSelf->cpu__DOT__branch_pc = ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm
                                                : ((IData)(4U) 
                                                   + 
                                                   ((vlSelf->cpu__DOT__id_ex_reg[4U] 
                                                     << 2U) 
                                                    | (vlSelf->cpu__DOT__id_ex_reg[3U] 
                                                       >> 0x1eU))));
            } else {
                vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken 
                    = cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_sign_rs1_lt_rs2;
                vlSelf->cpu__DOT__branch_pc = ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm
                                                : ((IData)(4U) 
                                                   + 
                                                   ((vlSelf->cpu__DOT__id_ex_reg[4U] 
                                                     << 2U) 
                                                    | (vlSelf->cpu__DOT__id_ex_reg[3U] 
                                                       >> 0x1eU))));
            }
        } else if ((0x800U & vlSelf->cpu__DOT__id_ex_reg[0U])) {
            vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken = 0U;
            vlSelf->cpu__DOT__branch_pc = ((IData)(4U) 
                                           + ((vlSelf->cpu__DOT__id_ex_reg[4U] 
                                               << 2U) 
                                              | (vlSelf->cpu__DOT__id_ex_reg[3U] 
                                                 >> 0x1eU)));
        } else if ((0x400U & vlSelf->cpu__DOT__id_ex_reg[0U])) {
            vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken 
                = (1U & (~ (IData)(cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_eq_rs2)));
            vlSelf->cpu__DOT__branch_pc = ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                            ? cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm
                                            : ((IData)(4U) 
                                               + ((
                                                   vlSelf->cpu__DOT__id_ex_reg[4U] 
                                                   << 2U) 
                                                  | (vlSelf->cpu__DOT__id_ex_reg[3U] 
                                                     >> 0x1eU))));
        } else {
            vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken 
                = cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_rs1_eq_rs2;
            vlSelf->cpu__DOT__branch_pc = ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                            ? cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm
                                            : ((IData)(4U) 
                                               + ((
                                                   vlSelf->cpu__DOT__id_ex_reg[4U] 
                                                   << 2U) 
                                                  | (vlSelf->cpu__DOT__id_ex_reg[3U] 
                                                     >> 0x1eU))));
        }
    } else if ((8U & vlSelf->cpu__DOT__id_ex_reg[0U])) {
        vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken = 1U;
        vlSelf->cpu__DOT__branch_pc = cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__pc_plus_imm;
    } else if ((4U & vlSelf->cpu__DOT__id_ex_reg[0U])) {
        vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken = 1U;
        vlSelf->cpu__DOT__branch_pc = (0xfffffffeU 
                                       & (cpu__DOT__inst_execute_stage__DOT__rs1_after_fwd 
                                          + ((vlSelf->cpu__DOT__id_ex_reg[1U] 
                                              << 2U) 
                                             | (vlSelf->cpu__DOT__id_ex_reg[0U] 
                                                >> 0x1eU))));
    } else {
        vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken = 0U;
        vlSelf->cpu__DOT__branch_pc = ((IData)(4U) 
                                       + ((vlSelf->cpu__DOT__id_ex_reg[4U] 
                                           << 2U) | 
                                          (vlSelf->cpu__DOT__id_ex_reg[3U] 
                                           >> 0x1eU)));
    }
    vlSelf->cpu__DOT__execute_alu_data = ((IData)((0U 
                                                   != 
                                                   (0xcU 
                                                    & vlSelf->cpu__DOT__id_ex_reg[0U])))
                                           ? ((IData)(4U) 
                                              + ((vlSelf->cpu__DOT__id_ex_reg[4U] 
                                                  << 2U) 
                                                 | (vlSelf->cpu__DOT__id_ex_reg[3U] 
                                                    >> 0x1eU)))
                                           : ((IData)(
                                                      (0U 
                                                       != 
                                                       (0x180U 
                                                        & vlSelf->cpu__DOT__id_ex_reg[0U])))
                                               ? cpu__DOT__inst_execute_stage__DOT__mem_addr
                                               : cpu__DOT__inst_execute_stage__DOT__alu_data));
    cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_branch_taken_diff 
        = (1U & ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken) 
                 ^ (vlSelf->cpu__DOT__id_ex_reg[4U] 
                    >> 0x1eU)));
    cpu__DOT__branch_flush = ((0x10U & vlSelf->cpu__DOT__id_ex_reg[0U])
                               ? ((0x1000U & vlSelf->cpu__DOT__id_ex_reg[0U])
                                   ? (IData)(cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_branch_taken_diff)
                                   : ((~ (vlSelf->cpu__DOT__id_ex_reg[0U] 
                                          >> 0xbU)) 
                                      & (IData)(cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_branch_taken_diff)))
                               : ((8U & vlSelf->cpu__DOT__id_ex_reg[0U])
                                   ? (IData)(cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_branch_taken_diff)
                                   : ((vlSelf->cpu__DOT__id_ex_reg[0U] 
                                       >> 2U) & (IData)(cpu__DOT__inst_execute_stage__DOT__inst_bju__DOT__is_branch_taken_diff))));
    vlSelf->cpu__DOT__if_id_flush = 0U;
    if ((1U & (~ (IData)(cpu__DOT__hazard)))) {
        if (cpu__DOT__branch_flush) {
            vlSelf->cpu__DOT__if_id_flush = 1U;
        }
    }
    vlSelf->cpu__DOT__id_ex_flush = 0U;
    if (cpu__DOT__hazard) {
        vlSelf->cpu__DOT__id_ex_flush = 1U;
    } else if (cpu__DOT__branch_flush) {
        vlSelf->cpu__DOT__id_ex_flush = 1U;
    }
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_next 
        = ((IData)(cpu__DOT__PC_stall) ? vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg
            : ((IData)(cpu__DOT__branch_flush) ? vlSelf->cpu__DOT__branch_pc
                : ((IData)(4U) + vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg)));
}

VL_ATTR_COLD void Vcommon___024root___eval_initial(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_initial\n"); );
    // Body
    Vcommon___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vcommon___024root___eval_settle(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_settle\n"); );
    // Body
    Vcommon___024root___settle__TOP__3(vlSelf);
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
    vlSelf->io_imem_en = VL_RAND_RESET_I(1);
    vlSelf->io_imem_addr = VL_RAND_RESET_Q(64);
    vlSelf->io_imem_rdata = VL_RAND_RESET_I(32);
    vlSelf->io_dmem_en = VL_RAND_RESET_I(1);
    vlSelf->io_dmem_addr = VL_RAND_RESET_Q(64);
    vlSelf->io_dmem_rdata = VL_RAND_RESET_Q(64);
    vlSelf->io_dmem_wdata = VL_RAND_RESET_Q(64);
    vlSelf->io_dmem_wen = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__branch_pc = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__decode_immediate_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__execute_alu_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__execute_control = VL_RAND_RESET_I(30);
    vlSelf->cpu__DOT__memory_control = VL_RAND_RESET_I(30);
    vlSelf->cpu__DOT__wb_result = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->cpu__DOT__if_id_reg);
    VL_RAND_RESET_W(164, vlSelf->cpu__DOT__id_ex_reg);
    VL_RAND_RESET_W(99, vlSelf->cpu__DOT__ex_mem_reg);
    VL_RAND_RESET_W(99, vlSelf->cpu__DOT__mem_wb_reg);
    vlSelf->cpu__DOT__if_id_stall = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__if_id_flush = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__id_ex_flush = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT____Vcellinp__inst_mem_stage__alu_data_in = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_read_data1 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_read_data2 = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__inst_decode_stage__DOT__control = VL_RAND_RESET_I(30);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken = VL_RAND_RESET_I(1);
    vlSelf->cpu__DOT__inst_execute_stage__DOT__store_data = VL_RAND_RESET_I(32);
    vlSelf->cpu__DOT__inst_mem_stage__DOT__load_data = VL_RAND_RESET_I(32);
}
