// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcommon.h for the primary calling header

#ifndef VERILATED_VCOMMON___024ROOT_H_
#define VERILATED_VCOMMON___024ROOT_H_  // guard

#include "verilated.h"

class Vcommon__Syms;
VL_MODULE(Vcommon___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    VL_OUT8(io_imem_en,0,0);
    VL_OUT8(io_dmem_en,0,0);
    VL_OUT8(io_dmem_wen,0,0);
    CData/*0:0*/ cpu__DOT__if_id_stall;
    CData/*0:0*/ cpu__DOT__if_id_flush;
    CData/*0:0*/ cpu__DOT__id_ex_flush;
    CData/*0:0*/ cpu__DOT__inst_execute_stage__DOT__branch_taken;
    CData/*0:0*/ __Vclklast__TOP__clk;
    VL_IN(io_imem_rdata,31,0);
    IData/*31:0*/ cpu__DOT__branch_pc;
    IData/*31:0*/ cpu__DOT__decode_immediate_data;
    IData/*31:0*/ cpu__DOT__execute_alu_data;
    IData/*29:0*/ cpu__DOT__execute_control;
    IData/*29:0*/ cpu__DOT__memory_control;
    IData/*31:0*/ cpu__DOT__wb_result;
    IData/*31:0*/ cpu__DOT____Vcellinp__inst_mem_stage__alu_data_in;
    IData/*31:0*/ cpu__DOT__inst_fetch_stage__DOT__pc_next;
    IData/*31:0*/ cpu__DOT__inst_fetch_stage__DOT__pc_reg;
    IData/*31:0*/ cpu__DOT__inst_decode_stage__DOT__rf_read_data1;
    IData/*31:0*/ cpu__DOT__inst_decode_stage__DOT__rf_read_data2;
    IData/*29:0*/ cpu__DOT__inst_decode_stage__DOT__control;
    IData/*31:0*/ cpu__DOT__inst_execute_stage__DOT__store_data;
    IData/*31:0*/ cpu__DOT__inst_mem_stage__DOT__load_data;
    VL_OUT64(io_imem_addr,63,0);
    VL_OUT64(io_dmem_addr,63,0);
    VL_IN64(io_dmem_rdata,63,0);
    VL_OUT64(io_dmem_wdata,63,0);
    VlWide<3>/*64:0*/ cpu__DOT__if_id_reg;
    VlWide<6>/*163:0*/ cpu__DOT__id_ex_reg;
    VlWide<4>/*98:0*/ cpu__DOT__ex_mem_reg;
    VlWide<4>/*98:0*/ cpu__DOT__mem_wb_reg;
    VlUnpacked<IData/*31:0*/, 32> cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers;

    // INTERNAL VARIABLES
    Vcommon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vcommon___024root(const char* name);
    ~Vcommon___024root();
    VL_UNCOPYABLE(Vcommon___024root);

    // INTERNAL METHODS
    void __Vconfigure(Vcommon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
