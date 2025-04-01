// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcommon.h for the primary calling header

#ifndef VERILATED_VCOMMON_PIPELINE_H_
#define VERILATED_VCOMMON_PIPELINE_H_  // guard

#include "verilated.h"

class Vcommon__Syms;
class Vcommon_if_stage;

VL_MODULE(Vcommon_pipeline) {
  public:
    // CELLS
    Vcommon_if_stage* inst_if_stage;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset_n,0,0);
    VL_IN8(retire_arf_id_0,4,0);
    VL_IN8(retire_arf_id_1,4,0);
    VL_IN8(retire_prf_id_0,5,0);
    VL_IN8(retire_prf_id_1,5,0);
    VL_IN8(retire_valid_0,0,0);
    VL_IN8(retire_valid_1,0,0);
    VL_IN8(retire_wb_0,0,0);
    VL_IN8(retire_wb_1,0,0);
    VL_IN8(rob_state,1,0);
    VL_IN8(fl_walk_0,0,0);
    VL_IN8(fl_walk_1,0,0);
    VL_IN8(rat_walk_0_valid,0,0);
    VL_IN8(rat_walk_1_valid,0,0);
    VL_IN8(rat_walk_0_rd_id,4,0);
    VL_IN8(rat_walk_1_rd_id,4,0);
    VL_IN8(rat_walk_0_rd_prf,5,0);
    VL_IN8(rat_walk_1_rd_prf,5,0);
    CData/*0:0*/ __PVT__ex_branch_in;
    VlWide<3>/*64:0*/ __PVT__imem_resp;
    VlUnpacked<IData/*31:0*/, 256> __PVT__inst_imem__DOT__ram;

    // INTERNAL VARIABLES
    Vcommon__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    Vcommon_pipeline(const char* name);
    ~Vcommon_pipeline();
    VL_UNCOPYABLE(Vcommon_pipeline);

    // INTERNAL METHODS
    void __Vconfigure(Vcommon__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
