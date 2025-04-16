// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___combo__TOP__1(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___combo__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vfunc_immediate_extension__0__Vfuncout;
    IData/*31:0*/ __Vfunc_immediate_extension__0__instruction;
    CData/*2:0*/ __Vfunc_immediate_extension__0__inst_encoding;
    // Body
    vlSelf->control[0U] = 0U;
    vlSelf->control[1U] = 0U;
    vlSelf->control[2U] = 0U;
    vlSelf->control[3U] = 0U;
    vlSelf->control[2U] = ((0xfc7fffffU & vlSelf->control[2U]) 
                           | (0x3800000U & (vlSelf->if_instr[0U] 
                                            << 0xbU)));
    vlSelf->control[3U] = ((0x7f83fU & vlSelf->control[3U]) 
                           | (0x7c0U & (vlSelf->if_instr[0U] 
                                        >> 9U)));
    vlSelf->control[2U] = ((0x3ffffffU & vlSelf->control[2U]) 
                           | (0xfc000000U & ((0x80000000U 
                                              & (vlSelf->if_instr[0U] 
                                                 << 0xbU)) 
                                             | (0x7c000000U 
                                                & (vlSelf->if_instr[0U] 
                                                   << 0x13U)))));
    vlSelf->control[3U] = ((0x7fff0U & vlSelf->control[3U]) 
                           | (0xfU & (vlSelf->if_instr[0U] 
                                      >> 0x15U)));
    vlSelf->control[1U] = (IData)((0xfffffffffffULL 
                                   & (((QData)((IData)(
                                                       vlSelf->if_instr[2U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelf->if_instr[1U])))));
    vlSelf->control[2U] = ((0xfffff000U & vlSelf->control[2U]) 
                           | (IData)(((0xfffffffffffULL 
                                       & (((QData)((IData)(
                                                           vlSelf->if_instr[2U])) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->if_instr[1U])))) 
                                      >> 0x20U)));
    vlSelf->control[3U] = ((0x7f7ffU & vlSelf->control[3U]) 
                           | (0x800U & (vlSelf->if_instr[2U] 
                                        >> 1U)));
    vlSelf->control[3U] = (0x30U | vlSelf->control[3U]);
    vlSelf->control[2U] = (0xffffefffU & vlSelf->control[2U]);
    if ((0x40U & vlSelf->if_instr[0U])) {
        if ((0x20U & vlSelf->if_instr[0U])) {
            if ((0x10U & vlSelf->if_instr[0U])) {
                vlSelf->control[0U] = 0U;
                vlSelf->control[1U] = 0U;
                vlSelf->control[2U] = 0U;
                vlSelf->control[3U] = 0U;
            } else if ((8U & vlSelf->if_instr[0U])) {
                if ((4U & vlSelf->if_instr[0U])) {
                    if ((2U & vlSelf->if_instr[0U])) {
                        if ((1U & vlSelf->if_instr[0U])) {
                            vlSelf->control[3U] = (0x5000U 
                                                   | (0x78fffU 
                                                      & vlSelf->control[3U]));
                            vlSelf->control[2U] = (0x80000U 
                                                   | vlSelf->control[2U]);
                            vlSelf->control[2U] = (0x10000U 
                                                   | vlSelf->control[2U]);
                            vlSelf->control[3U] = (0x7ffcfU 
                                                   & vlSelf->control[3U]);
                        } else {
                            vlSelf->control[0U] = 0U;
                            vlSelf->control[1U] = 0U;
                            vlSelf->control[2U] = 0U;
                            vlSelf->control[3U] = 0U;
                        }
                    } else {
                        vlSelf->control[0U] = 0U;
                        vlSelf->control[1U] = 0U;
                        vlSelf->control[2U] = 0U;
                        vlSelf->control[3U] = 0U;
                    }
                } else {
                    vlSelf->control[0U] = 0U;
                    vlSelf->control[1U] = 0U;
                    vlSelf->control[2U] = 0U;
                    vlSelf->control[3U] = 0U;
                }
            } else if ((4U & vlSelf->if_instr[0U])) {
                if ((2U & vlSelf->if_instr[0U])) {
                    if ((1U & vlSelf->if_instr[0U])) {
                        vlSelf->control[3U] = (0x1000U 
                                               | (0x78fffU 
                                                  & vlSelf->control[3U]));
                        vlSelf->control[2U] = (0x80000U 
                                               | vlSelf->control[2U]);
                        vlSelf->control[2U] = (0x8000U 
                                               | vlSelf->control[2U]);
                        vlSelf->control[3U] = (0x7ffefU 
                                               & vlSelf->control[3U]);
                    } else {
                        vlSelf->control[0U] = 0U;
                        vlSelf->control[1U] = 0U;
                        vlSelf->control[2U] = 0U;
                        vlSelf->control[3U] = 0U;
                    }
                } else {
                    vlSelf->control[0U] = 0U;
                    vlSelf->control[1U] = 0U;
                    vlSelf->control[2U] = 0U;
                    vlSelf->control[3U] = 0U;
                }
            } else if ((2U & vlSelf->if_instr[0U])) {
                if ((1U & vlSelf->if_instr[0U])) {
                    vlSelf->control[3U] = (0x3000U 
                                           | (0x78fffU 
                                              & vlSelf->control[3U]));
                    vlSelf->control[2U] = (0x20000U 
                                           | vlSelf->control[2U]);
                } else {
                    vlSelf->control[0U] = 0U;
                    vlSelf->control[1U] = 0U;
                    vlSelf->control[2U] = 0U;
                    vlSelf->control[3U] = 0U;
                }
            } else {
                vlSelf->control[0U] = 0U;
                vlSelf->control[1U] = 0U;
                vlSelf->control[2U] = 0U;
                vlSelf->control[3U] = 0U;
            }
        } else {
            vlSelf->control[0U] = 0U;
            vlSelf->control[1U] = 0U;
            vlSelf->control[2U] = 0U;
            vlSelf->control[3U] = 0U;
        }
    } else if ((0x20U & vlSelf->if_instr[0U])) {
        if ((0x10U & vlSelf->if_instr[0U])) {
            if ((8U & vlSelf->if_instr[0U])) {
                vlSelf->control[0U] = 0U;
                vlSelf->control[1U] = 0U;
                vlSelf->control[2U] = 0U;
                vlSelf->control[3U] = 0U;
            } else if ((4U & vlSelf->if_instr[0U])) {
                if ((2U & vlSelf->if_instr[0U])) {
                    if ((1U & vlSelf->if_instr[0U])) {
                        vlSelf->control[3U] = (0x4000U 
                                               | (0x78fffU 
                                                  & vlSelf->control[3U]));
                        vlSelf->control[2U] = (0x80000U 
                                               | vlSelf->control[2U]);
                        vlSelf->control[2U] = (0x400000U 
                                               | vlSelf->control[2U]);
                        vlSelf->control[2U] = (0x4000U 
                                               | vlSelf->control[2U]);
                        vlSelf->control[3U] = (0x7ffcfU 
                                               & vlSelf->control[3U]);
                    } else {
                        vlSelf->control[0U] = 0U;
                        vlSelf->control[1U] = 0U;
                        vlSelf->control[2U] = 0U;
                        vlSelf->control[3U] = 0U;
                    }
                } else {
                    vlSelf->control[0U] = 0U;
                    vlSelf->control[1U] = 0U;
                    vlSelf->control[2U] = 0U;
                    vlSelf->control[3U] = 0U;
                }
            } else if ((2U & vlSelf->if_instr[0U])) {
                if ((1U & vlSelf->if_instr[0U])) {
                    vlSelf->control[3U] = (0x78fffU 
                                           & vlSelf->control[3U]);
                    vlSelf->control[2U] = (0x80000U 
                                           | vlSelf->control[2U]);
                    if ((1U == (vlSelf->if_instr[0U] 
                                >> 0x19U))) {
                        vlSelf->control[2U] = (0x1000U 
                                               | vlSelf->control[2U]);
                    }
                } else {
                    vlSelf->control[0U] = 0U;
                    vlSelf->control[1U] = 0U;
                    vlSelf->control[2U] = 0U;
                    vlSelf->control[3U] = 0U;
                }
            } else {
                vlSelf->control[0U] = 0U;
                vlSelf->control[1U] = 0U;
                vlSelf->control[2U] = 0U;
                vlSelf->control[3U] = 0U;
            }
        } else if ((8U & vlSelf->if_instr[0U])) {
            vlSelf->control[0U] = 0U;
            vlSelf->control[1U] = 0U;
            vlSelf->control[2U] = 0U;
            vlSelf->control[3U] = 0U;
        } else if ((4U & vlSelf->if_instr[0U])) {
            vlSelf->control[0U] = 0U;
            vlSelf->control[1U] = 0U;
            vlSelf->control[2U] = 0U;
            vlSelf->control[3U] = 0U;
        } else if ((2U & vlSelf->if_instr[0U])) {
            if ((1U & vlSelf->if_instr[0U])) {
                vlSelf->control[3U] = (0x2000U | (0x78fffU 
                                                  & vlSelf->control[3U]));
                vlSelf->control[2U] = (0x400000U | 
                                       vlSelf->control[2U]);
                vlSelf->control[2U] = (0x100000U | 
                                       vlSelf->control[2U]);
            } else {
                vlSelf->control[0U] = 0U;
                vlSelf->control[1U] = 0U;
                vlSelf->control[2U] = 0U;
                vlSelf->control[3U] = 0U;
            }
        } else {
            vlSelf->control[0U] = 0U;
            vlSelf->control[1U] = 0U;
            vlSelf->control[2U] = 0U;
            vlSelf->control[3U] = 0U;
        }
    } else if ((0x10U & vlSelf->if_instr[0U])) {
        if ((8U & vlSelf->if_instr[0U])) {
            vlSelf->control[0U] = 0U;
            vlSelf->control[1U] = 0U;
            vlSelf->control[2U] = 0U;
            vlSelf->control[3U] = 0U;
        } else if ((4U & vlSelf->if_instr[0U])) {
            if ((2U & vlSelf->if_instr[0U])) {
                if ((1U & vlSelf->if_instr[0U])) {
                    vlSelf->control[3U] = (0x4000U 
                                           | (0x78fffU 
                                              & vlSelf->control[3U]));
                    vlSelf->control[2U] = (0x80000U 
                                           | vlSelf->control[2U]);
                    vlSelf->control[2U] = (0x400000U 
                                           | vlSelf->control[2U]);
                    vlSelf->control[2U] = (0x2000U 
                                           | vlSelf->control[2U]);
                    vlSelf->control[3U] = (0x7ffcfU 
                                           & vlSelf->control[3U]);
                } else {
                    vlSelf->control[0U] = 0U;
                    vlSelf->control[1U] = 0U;
                    vlSelf->control[2U] = 0U;
                    vlSelf->control[3U] = 0U;
                }
            } else {
                vlSelf->control[0U] = 0U;
                vlSelf->control[1U] = 0U;
                vlSelf->control[2U] = 0U;
                vlSelf->control[3U] = 0U;
            }
        } else if ((2U & vlSelf->if_instr[0U])) {
            if ((1U & vlSelf->if_instr[0U])) {
                vlSelf->control[3U] = (0x1000U | (0x78fffU 
                                                  & vlSelf->control[3U]));
                vlSelf->control[2U] = (0x80000U | vlSelf->control[2U]);
                vlSelf->control[2U] = (0x400000U | 
                                       vlSelf->control[2U]);
                vlSelf->control[3U] = (0x7ffefU & vlSelf->control[3U]);
            } else {
                vlSelf->control[0U] = 0U;
                vlSelf->control[1U] = 0U;
                vlSelf->control[2U] = 0U;
                vlSelf->control[3U] = 0U;
            }
        } else {
            vlSelf->control[0U] = 0U;
            vlSelf->control[1U] = 0U;
            vlSelf->control[2U] = 0U;
            vlSelf->control[3U] = 0U;
        }
    } else if ((8U & vlSelf->if_instr[0U])) {
        vlSelf->control[0U] = 0U;
        vlSelf->control[1U] = 0U;
        vlSelf->control[2U] = 0U;
        vlSelf->control[3U] = 0U;
    } else if ((4U & vlSelf->if_instr[0U])) {
        vlSelf->control[0U] = 0U;
        vlSelf->control[1U] = 0U;
        vlSelf->control[2U] = 0U;
        vlSelf->control[3U] = 0U;
    } else if ((2U & vlSelf->if_instr[0U])) {
        if ((1U & vlSelf->if_instr[0U])) {
            vlSelf->control[3U] = (0x1000U | (0x78fffU 
                                              & vlSelf->control[3U]));
            vlSelf->control[2U] = (0x80000U | vlSelf->control[2U]);
            vlSelf->control[2U] = (0x600000U | vlSelf->control[2U]);
            vlSelf->control[2U] = (0x40000U | vlSelf->control[2U]);
            vlSelf->control[3U] = (0x7ffefU & vlSelf->control[3U]);
        } else {
            vlSelf->control[0U] = 0U;
            vlSelf->control[1U] = 0U;
            vlSelf->control[2U] = 0U;
            vlSelf->control[3U] = 0U;
        }
    } else {
        vlSelf->control[0U] = 0U;
        vlSelf->control[1U] = 0U;
        vlSelf->control[2U] = 0U;
        vlSelf->control[3U] = 0U;
    }
    vlSelf->control[3U] = (0x7fffU & vlSelf->control[3U]);
    if ((0x33U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                >> 0xfU)) | ((0x380U 
                                              & (vlSelf->if_instr[0U] 
                                                 >> 5U)) 
                                             | (0x7fU 
                                                & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x7fffU & vlSelf->control[3U]);
    } else if ((0x8033U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                         >> 0xfU)) 
                            | ((0x380U & (vlSelf->if_instr[0U] 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x8000U | (0x7fffU & 
                                          vlSelf->control[3U]));
    } else if ((0x3b3U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->if_instr[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x70000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x333U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->if_instr[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x60000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x233U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->if_instr[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x40000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0xb3U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                       >> 0xfU)) | 
                          ((0x380U & (vlSelf->if_instr[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x10000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x2b3U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->if_instr[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x50000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x82b3U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                         >> 0xfU)) 
                            | ((0x380U & (vlSelf->if_instr[0U] 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x58000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x133U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->if_instr[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x20000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x1b3U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->if_instr[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x30000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x93U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                       >> 0xfU)) | 
                          ((0x380U & (vlSelf->if_instr[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x10000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x293U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                        >> 0xfU)) | 
                           ((0x380U & (vlSelf->if_instr[0U] 
                                       >> 5U)) | (0x7fU 
                                                  & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x50000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x8293U == ((0x1fc00U & (vlSelf->if_instr[0U] 
                                         >> 0xfU)) 
                            | ((0x380U & (vlSelf->if_instr[0U] 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x58000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x13U == ((0x380U & (vlSelf->if_instr[0U] 
                                     >> 5U)) | (0x7fU 
                                                & vlSelf->if_instr[0U])))) {
        vlSelf->control[3U] = (0x7fffU & vlSelf->control[3U]);
    } else if ((0x393U == ((0x380U & (vlSelf->if_instr[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->if_instr[0U])))) {
        vlSelf->control[3U] = (0x70000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x313U == ((0x380U & (vlSelf->if_instr[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->if_instr[0U])))) {
        vlSelf->control[3U] = (0x60000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x213U == ((0x380U & (vlSelf->if_instr[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->if_instr[0U])))) {
        vlSelf->control[3U] = (0x40000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x113U == ((0x380U & (vlSelf->if_instr[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->if_instr[0U])))) {
        vlSelf->control[3U] = (0x20000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x193U == ((0x380U & (vlSelf->if_instr[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->if_instr[0U])))) {
        vlSelf->control[3U] = (0x30000U | (0x7fffU 
                                           & vlSelf->control[3U]));
    } else if ((0x103U == ((0x380U & (vlSelf->if_instr[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->if_instr[0U])))) {
        vlSelf->control[3U] = (0x7fffU & vlSelf->control[3U]);
    } else if (((((3U == ((0x380U & (vlSelf->if_instr[0U] 
                                     >> 5U)) | (0x7fU 
                                                & vlSelf->if_instr[0U]))) 
                  | (0x83U == ((0x380U & (vlSelf->if_instr[0U] 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->if_instr[0U])))) 
                 | (0x203U == ((0x380U & (vlSelf->if_instr[0U] 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->if_instr[0U])))) 
                | (0x283U == ((0x380U & (vlSelf->if_instr[0U] 
                                         >> 5U)) | 
                              (0x7fU & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x7fffU & vlSelf->control[3U]);
    } else if ((0x123U == ((0x380U & (vlSelf->if_instr[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->if_instr[0U])))) {
        vlSelf->control[3U] = (0x7fffU & vlSelf->control[3U]);
    } else if (((0x23U == ((0x380U & (vlSelf->if_instr[0U] 
                                      >> 5U)) | (0x7fU 
                                                 & vlSelf->if_instr[0U]))) 
                | (0xa3U == ((0x380U & (vlSelf->if_instr[0U] 
                                        >> 5U)) | (0x7fU 
                                                   & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x7fffU & vlSelf->control[3U]);
    } else if ((0x63U == ((0x380U & (vlSelf->if_instr[0U] 
                                     >> 5U)) | (0x7fU 
                                                & vlSelf->if_instr[0U])))) {
        vlSelf->control[3U] = (0x8000U | (0x7fffU & 
                                          vlSelf->control[3U]));
    } else if ((((((0xe3U == ((0x380U & (vlSelf->if_instr[0U] 
                                         >> 5U)) | 
                              (0x7fU & vlSelf->if_instr[0U]))) 
                   | (0x263U == ((0x380U & (vlSelf->if_instr[0U] 
                                            >> 5U)) 
                                 | (0x7fU & vlSelf->if_instr[0U])))) 
                  | (0x2e3U == ((0x380U & (vlSelf->if_instr[0U] 
                                           >> 5U)) 
                                | (0x7fU & vlSelf->if_instr[0U])))) 
                 | (0x363U == ((0x380U & (vlSelf->if_instr[0U] 
                                          >> 5U)) | 
                               (0x7fU & vlSelf->if_instr[0U])))) 
                | (0x3e3U == ((0x380U & (vlSelf->if_instr[0U] 
                                         >> 5U)) | 
                              (0x7fU & vlSelf->if_instr[0U]))))) {
        vlSelf->control[3U] = (0x8000U | (0x7fffU & 
                                          vlSelf->control[3U]));
    } else if ((0x6fU == (0x7fU & vlSelf->if_instr[0U]))) {
        vlSelf->control[3U] = (0x7fffU & vlSelf->control[3U]);
    } else if ((0x67U == ((0x380U & (vlSelf->if_instr[0U] 
                                     >> 5U)) | (0x7fU 
                                                & vlSelf->if_instr[0U])))) {
        vlSelf->control[3U] = (0x7fffU & vlSelf->control[3U]);
    } else if ((0x37U == (0x7fU & vlSelf->if_instr[0U]))) {
        vlSelf->control[3U] = (0x78000U | vlSelf->control[3U]);
    } else if ((0x17U == (0x7fU & vlSelf->if_instr[0U]))) {
        vlSelf->control[3U] = (0x7fffU & vlSelf->control[3U]);
    }
    __Vfunc_immediate_extension__0__inst_encoding = 
        (7U & (vlSelf->control[3U] >> 0xcU));
    __Vfunc_immediate_extension__0__instruction = vlSelf->if_instr[0U];
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
    vlSelf->control[0U] = __Vfunc_immediate_extension__0__Vfuncout;
    if ((0U == (0x1fU & (vlSelf->control[2U] >> 0x1aU)))) {
        vlSelf->control[2U] = (0xfff7ffffU & vlSelf->control[2U]);
    }
}

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    Vcommon___024root___combo__TOP__1(vlSelf);
}

#ifdef VL_DEBUG
void Vcommon___024root___eval_debug_assertions(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset_n & 0xfeU))) {
        Verilated::overWidthError("reset_n");}
}
#endif  // VL_DEBUG
