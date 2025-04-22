// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vcommon__Syms.h"
#include "Vcommon_if_stage.h"

VL_INLINE_OPT void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__4(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__4\n"); );
    // Body
    vlSelf->__Vdlyvset__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0 = 0U;
    vlSelf->__Vdlyvset__btb_inst__DOT__btb_addr_inst__DOT__history_table__v1 = 0U;
    vlSelf->__Vdlyvset__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0 = 0U;
    vlSelf->__Vdlyvset__btb_inst__DOT__btb_tag_inst__DOT__history_table__v1 = 0U;
    vlSelf->__Vdlyvset__btb_inst__DOT__btb_entry_valids__v0 = 0U;
    vlSelf->__Vdlyvset__btb_inst__DOT__btb_entry_valids__v1 = 0U;
    vlSelf->__Vdlyvset__btb_inst__DOT__btb_entry_valids__v513 = 0U;
    if (vlSymsp->TOP.reset_n) {
        vlSelf->__PVT__gshare_inst__DOT__GHSR = vlSelf->__PVT__gshare_inst__DOT__GHSR_next;
        if (vlSelf->__PVT__btb_inst__DOT__update_BTB) {
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0 
                = (0x3fffffffU & ((vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U] 
                                   << 0x13U) | (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[0U] 
                                                >> 0xdU)));
            vlSelf->__Vdlyvset__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0 = 1U;
            vlSelf->__Vdlyvdim0__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0 
                = (0x1ffU & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U] 
                             >> 0xdU));
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0 
                = (0x1fffffU & ((vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                                 << 0xaU) | (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U] 
                                             >> 0x16U)));
            vlSelf->__Vdlyvset__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0 = 1U;
            vlSelf->__Vdlyvdim0__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0 
                = (0x1ffU & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U] 
                             >> 0xdU));
            vlSelf->__Vdlyvset__btb_inst__DOT__btb_entry_valids__v0 = 1U;
            vlSelf->__Vdlyvdim0__btb_inst__DOT__btb_entry_valids__v0 
                = (0x1ffU & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U] 
                             >> 0xdU));
        } else {
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v1 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0U];
            vlSelf->__Vdlyvset__btb_inst__DOT__btb_entry_valids__v1 = 1U;
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v2 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v3 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v4 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v5 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v6 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v7 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v8 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v9 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v10 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v11 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xaU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v12 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xbU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v13 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xcU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v14 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xdU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v15 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xeU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v16 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xfU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v17 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x10U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v18 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x11U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v19 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x12U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v20 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x13U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v21 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x14U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v22 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x15U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v23 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x16U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v24 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x17U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v25 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x18U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v26 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x19U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v27 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v28 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v29 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v30 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v31 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v32 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v33 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x20U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v34 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x21U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v35 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x22U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v36 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x23U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v37 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x24U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v38 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x25U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v39 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x26U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v40 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x27U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v41 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x28U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v42 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x29U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v43 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x2aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v44 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x2bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v45 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x2cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v46 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x2dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v47 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x2eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v48 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x2fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v49 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x30U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v50 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x31U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v51 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x32U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v52 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x33U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v53 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x34U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v54 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x35U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v55 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x36U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v56 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x37U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v57 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x38U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v58 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x39U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v59 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x3aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v60 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x3bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v61 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x3cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v62 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x3dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v63 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x3eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v64 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x3fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v65 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x40U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v66 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x41U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v67 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x42U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v68 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x43U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v69 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x44U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v70 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x45U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v71 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x46U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v72 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x47U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v73 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x48U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v74 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x49U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v75 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x4aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v76 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x4bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v77 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x4cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v78 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x4dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v79 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x4eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v80 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x4fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v81 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x50U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v82 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x51U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v83 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x52U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v84 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x53U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v85 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x54U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v86 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x55U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v87 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x56U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v88 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x57U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v89 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x58U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v90 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x59U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v91 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x5aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v92 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x5bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v93 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x5cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v94 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x5dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v95 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x5eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v96 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x5fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v97 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x60U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v98 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x61U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v99 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x62U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v100 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x63U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v101 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x64U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v102 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x65U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v103 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x66U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v104 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x67U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v105 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x68U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v106 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x69U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v107 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x6aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v108 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x6bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v109 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x6cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v110 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x6dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v111 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x6eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v112 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x6fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v113 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x70U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v114 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x71U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v115 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x72U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v116 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x73U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v117 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x74U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v118 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x75U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v119 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x76U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v120 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x77U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v121 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x78U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v122 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x79U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v123 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x7aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v124 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x7bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v125 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x7cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v126 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x7dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v127 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x7eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v128 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x7fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v129 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x80U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v130 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x81U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v131 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x82U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v132 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x83U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v133 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x84U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v134 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x85U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v135 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x86U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v136 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x87U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v137 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x88U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v138 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x89U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v139 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x8aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v140 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x8bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v141 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x8cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v142 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x8dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v143 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x8eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v144 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x8fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v145 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x90U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v146 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x91U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v147 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x92U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v148 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x93U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v149 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x94U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v150 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x95U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v151 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x96U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v152 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x97U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v153 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x98U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v154 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x99U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v155 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x9aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v156 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x9bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v157 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x9cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v158 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x9dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v159 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x9eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v160 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x9fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v161 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xa0U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v162 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xa1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v163 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xa2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v164 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xa3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v165 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xa4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v166 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xa5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v167 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xa6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v168 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xa7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v169 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xa8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v170 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xa9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v171 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xaaU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v172 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xabU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v173 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xacU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v174 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xadU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v175 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xaeU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v176 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xafU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v177 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xb0U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v178 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xb1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v179 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xb2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v180 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xb3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v181 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xb4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v182 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xb5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v183 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xb6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v184 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xb7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v185 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xb8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v186 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xb9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v187 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xbaU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v188 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xbbU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v189 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xbcU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v190 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xbdU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v191 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xbeU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v192 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xbfU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v193 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xc0U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v194 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xc1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v195 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xc2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v196 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xc3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v197 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xc4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v198 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xc5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v199 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xc6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v200 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xc7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v201 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xc8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v202 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xc9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v203 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xcaU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v204 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xcbU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v205 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xccU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v206 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xcdU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v207 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xceU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v208 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xcfU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v209 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xd0U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v210 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xd1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v211 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xd2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v212 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xd3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v213 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xd4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v214 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xd5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v215 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xd6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v216 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xd7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v217 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xd8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v218 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xd9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v219 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xdaU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v220 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xdbU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v221 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xdcU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v222 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xddU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v223 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xdeU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v224 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xdfU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v225 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xe0U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v226 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xe1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v227 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xe2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v228 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xe3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v229 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xe4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v230 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xe5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v231 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xe6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v232 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xe7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v233 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xe8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v234 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xe9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v235 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xeaU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v236 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xebU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v237 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xecU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v238 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xedU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v239 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xeeU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v240 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xefU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v241 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xf0U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v242 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xf1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v243 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xf2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v244 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xf3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v245 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xf4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v246 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xf5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v247 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xf6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v248 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xf7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v249 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xf8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v250 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xf9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v251 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xfaU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v252 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xfbU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v253 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xfcU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v254 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xfdU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v255 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xfeU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v256 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0xffU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v257 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x100U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v258 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x101U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v259 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x102U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v260 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x103U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v261 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x104U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v262 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x105U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v263 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x106U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v264 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x107U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v265 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x108U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v266 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x109U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v267 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x10aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v268 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x10bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v269 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x10cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v270 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x10dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v271 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x10eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v272 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x10fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v273 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x110U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v274 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x111U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v275 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x112U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v276 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x113U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v277 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x114U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v278 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x115U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v279 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x116U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v280 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x117U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v281 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x118U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v282 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x119U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v283 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x11aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v284 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x11bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v285 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x11cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v286 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x11dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v287 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x11eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v288 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x11fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v289 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x120U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v290 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x121U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v291 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x122U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v292 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x123U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v293 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x124U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v294 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x125U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v295 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x126U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v296 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x127U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v297 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x128U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v298 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x129U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v299 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x12aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v300 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x12bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v301 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x12cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v302 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x12dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v303 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x12eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v304 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x12fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v305 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x130U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v306 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x131U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v307 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x132U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v308 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x133U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v309 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x134U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v310 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x135U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v311 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x136U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v312 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x137U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v313 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x138U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v314 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x139U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v315 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x13aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v316 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x13bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v317 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x13cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v318 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x13dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v319 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x13eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v320 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x13fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v321 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x140U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v322 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x141U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v323 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x142U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v324 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x143U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v325 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x144U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v326 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x145U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v327 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x146U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v328 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x147U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v329 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x148U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v330 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x149U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v331 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x14aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v332 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x14bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v333 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x14cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v334 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x14dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v335 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x14eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v336 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x14fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v337 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x150U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v338 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x151U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v339 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x152U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v340 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x153U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v341 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x154U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v342 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x155U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v343 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x156U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v344 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x157U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v345 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x158U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v346 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x159U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v347 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x15aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v348 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x15bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v349 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x15cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v350 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x15dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v351 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x15eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v352 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x15fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v353 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x160U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v354 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x161U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v355 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x162U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v356 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x163U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v357 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x164U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v358 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x165U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v359 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x166U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v360 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x167U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v361 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x168U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v362 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x169U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v363 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x16aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v364 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x16bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v365 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x16cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v366 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x16dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v367 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x16eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v368 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x16fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v369 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x170U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v370 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x171U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v371 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x172U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v372 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x173U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v373 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x174U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v374 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x175U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v375 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x176U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v376 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x177U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v377 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x178U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v378 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x179U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v379 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x17aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v380 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x17bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v381 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x17cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v382 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x17dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v383 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x17eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v384 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x17fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v385 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x180U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v386 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x181U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v387 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x182U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v388 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x183U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v389 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x184U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v390 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x185U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v391 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x186U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v392 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x187U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v393 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x188U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v394 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x189U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v395 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x18aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v396 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x18bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v397 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x18cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v398 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x18dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v399 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x18eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v400 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x18fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v401 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x190U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v402 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x191U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v403 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x192U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v404 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x193U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v405 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x194U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v406 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x195U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v407 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x196U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v408 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x197U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v409 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x198U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v410 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x199U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v411 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x19aU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v412 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x19bU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v413 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x19cU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v414 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x19dU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v415 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x19eU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v416 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x19fU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v417 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1a0U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v418 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1a1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v419 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1a2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v420 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1a3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v421 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1a4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v422 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1a5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v423 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1a6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v424 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1a7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v425 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1a8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v426 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1a9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v427 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1aaU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v428 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1abU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v429 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1acU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v430 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1adU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v431 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1aeU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v432 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1afU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v433 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1b0U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v434 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1b1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v435 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1b2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v436 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1b3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v437 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1b4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v438 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1b5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v439 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1b6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v440 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1b7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v441 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1b8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v442 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1b9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v443 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1baU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v444 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1bbU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v445 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1bcU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v446 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1bdU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v447 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1beU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v448 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1bfU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v449 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1c0U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v450 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1c1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v451 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1c2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v452 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1c3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v453 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1c4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v454 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1c5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v455 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1c6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v456 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1c7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v457 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1c8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v458 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1c9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v459 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1caU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v460 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1cbU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v461 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1ccU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v462 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1cdU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v463 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1ceU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v464 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1cfU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v465 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1d0U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v466 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1d1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v467 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1d2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v468 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1d3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v469 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1d4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v470 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1d5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v471 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1d6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v472 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1d7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v473 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1d8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v474 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1d9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v475 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1daU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v476 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1dbU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v477 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1dcU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v478 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1ddU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v479 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1deU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v480 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1dfU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v481 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1e0U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v482 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1e1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v483 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1e2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v484 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1e3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v485 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1e4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v486 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1e5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v487 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1e6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v488 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1e7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v489 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1e8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v490 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1e9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v491 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1eaU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v492 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1ebU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v493 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1ecU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v494 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1edU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v495 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1eeU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v496 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1efU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v497 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1f0U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v498 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1f1U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v499 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1f2U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v500 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1f3U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v501 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1f4U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v502 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1f5U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v503 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1f6U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v504 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1f7U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v505 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1f8U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v506 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1f9U];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v507 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1faU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v508 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1fbU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v509 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1fcU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v510 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1fdU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v511 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1feU];
            vlSelf->__Vdlyvval__btb_inst__DOT__btb_entry_valids__v512 
                = vlSelf->__PVT__btb_inst__DOT__btb_entry_valids
                [0x1ffU];
        }
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v0 
            = ((IData)(((0U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0U]) ? (
                                                   (1U 
                                                    & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                    [0U])
                                                    ? 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1 
            = ((IData)(((0x2000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [1U]) ? (
                                                   (1U 
                                                    & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                    [1U])
                                                    ? 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v2 
            = ((IData)(((0x4000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [2U]) ? (
                                                   (1U 
                                                    & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                    [2U])
                                                    ? 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v3 
            = ((IData)(((0x6000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [3U]) ? (
                                                   (1U 
                                                    & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                    [3U])
                                                    ? 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v4 
            = ((IData)(((0x8000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [4U]) ? (
                                                   (1U 
                                                    & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                    [4U])
                                                    ? 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v5 
            = ((IData)(((0xa000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [5U]) ? (
                                                   (1U 
                                                    & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                    [5U])
                                                    ? 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v6 
            = ((IData)(((0xc000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [6U]) ? (
                                                   (1U 
                                                    & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                    [6U])
                                                    ? 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v7 
            = ((IData)(((0xe000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [7U]) ? (
                                                   (1U 
                                                    & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                    [7U])
                                                    ? 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v8 
            = ((IData)(((0x10000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [8U]) ? (
                                                   (1U 
                                                    & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                    [8U])
                                                    ? 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v9 
            = ((IData)(((0x12000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [9U]) ? (
                                                   (1U 
                                                    & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                                    [9U])
                                                    ? 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 2U)
                                                    : 
                                                   ((0x800U 
                                                     & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                     ? 3U
                                                     : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v10 
            = ((IData)(((0x14000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xaU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xaU]) ? 
                                          ((0x800U 
                                            & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                            ? 3U : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v11 
            = ((IData)(((0x16000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xbU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xbU]) ? 
                                          ((0x800U 
                                            & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                            ? 3U : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v12 
            = ((IData)(((0x18000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xcU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xcU]) ? 
                                          ((0x800U 
                                            & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                            ? 3U : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v13 
            = ((IData)(((0x1a000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xdU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xdU]) ? 
                                          ((0x800U 
                                            & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                            ? 3U : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v14 
            = ((IData)(((0x1c000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xeU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xeU]) ? 
                                          ((0x800U 
                                            & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                            ? 3U : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v15 
            = ((IData)(((0x1e000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xfU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xfU]) ? 
                                          ((0x800U 
                                            & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                            ? 3U : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v16 
            = ((IData)(((0x20000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x10U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x10U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x10U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v17 
            = ((IData)(((0x22000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x11U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x11U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x11U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v18 
            = ((IData)(((0x24000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x12U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x12U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x12U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v19 
            = ((IData)(((0x26000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x13U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x13U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x13U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v20 
            = ((IData)(((0x28000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x14U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x14U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x14U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v21 
            = ((IData)(((0x2a000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x15U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x15U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x15U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x15U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v22 
            = ((IData)(((0x2c000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x16U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x16U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x16U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x16U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v23 
            = ((IData)(((0x2e000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x17U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x17U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x17U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x17U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v24 
            = ((IData)(((0x30000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x18U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x18U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x18U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x18U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v25 
            = ((IData)(((0x32000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x19U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x19U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x19U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x19U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v26 
            = ((IData)(((0x34000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1aU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x1aU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v27 
            = ((IData)(((0x36000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1bU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x1bU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v28 
            = ((IData)(((0x38000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1cU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x1cU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v29 
            = ((IData)(((0x3a000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1dU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x1dU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v30 
            = ((IData)(((0x3c000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1eU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x1eU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v31 
            = ((IData)(((0x3e000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x1fU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x1fU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x1fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x1fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v32 
            = ((IData)(((0x40000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x20U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x20U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x20U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x20U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v33 
            = ((IData)(((0x42000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x21U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x21U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x21U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x21U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v34 
            = ((IData)(((0x44000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x22U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x22U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x22U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x22U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v35 
            = ((IData)(((0x46000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x23U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x23U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x23U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x23U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v36 
            = ((IData)(((0x48000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x24U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x24U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x24U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x24U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v37 
            = ((IData)(((0x4a000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x25U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x25U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x25U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x25U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v38 
            = ((IData)(((0x4c000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x26U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x26U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x26U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x26U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v39 
            = ((IData)(((0x4e000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x27U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x27U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x27U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x27U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v40 
            = ((IData)(((0x50000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x28U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x28U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x28U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x28U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v41 
            = ((IData)(((0x52000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x29U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x29U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x29U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x29U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v42 
            = ((IData)(((0x54000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2aU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x2aU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v43 
            = ((IData)(((0x56000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2bU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x2bU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v44 
            = ((IData)(((0x58000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2cU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x2cU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v45 
            = ((IData)(((0x5a000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2dU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x2dU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v46 
            = ((IData)(((0x5c000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2eU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x2eU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v47 
            = ((IData)(((0x5e000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x2fU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x2fU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x2fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x2fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v48 
            = ((IData)(((0x60000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x30U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x30U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x30U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x30U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v49 
            = ((IData)(((0x62000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x31U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x31U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x31U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x31U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v50 
            = ((IData)(((0x64000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x32U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x32U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x32U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x32U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v51 
            = ((IData)(((0x66000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x33U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x33U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x33U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x33U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v52 
            = ((IData)(((0x68000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x34U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x34U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x34U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x34U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v53 
            = ((IData)(((0x6a000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x35U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x35U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x35U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x35U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v54 
            = ((IData)(((0x6c000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x36U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x36U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x36U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x36U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v55 
            = ((IData)(((0x6e000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x37U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x37U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x37U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x37U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v56 
            = ((IData)(((0x70000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x38U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x38U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x38U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x38U]);
    } else {
        vlSelf->__PVT__gshare_inst__DOT__GHSR = 0U;
        vlSelf->__Vdlyvset__btb_inst__DOT__btb_addr_inst__DOT__history_table__v1 = 1U;
        vlSelf->__Vdlyvset__btb_inst__DOT__btb_tag_inst__DOT__history_table__v1 = 1U;
        vlSelf->__Vdlyvset__btb_inst__DOT__btb_entry_valids__v513 = 1U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v0 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v1 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v2 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v3 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v4 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v5 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v6 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v7 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v8 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v9 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v10 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v11 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v12 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v13 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v14 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v15 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v16 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v17 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v18 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v19 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v20 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v21 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v22 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v23 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v24 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v25 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v26 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v27 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v28 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v29 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v30 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v31 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v32 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v33 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v34 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v35 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v36 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v37 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v38 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v39 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v40 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v41 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v42 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v43 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v44 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v45 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v46 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v47 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v48 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v49 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v50 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v51 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v52 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v53 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v54 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v55 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v56 = 2U;
    }
}

VL_INLINE_OPT void Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__5(Vcommon_if_stage* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vcommon_if_stage___sequent__TOP__pipeline__inst_if_stage__5\n"); );
    // Body
    if (vlSymsp->TOP.reset_n) {
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v57 
            = ((IData)(((0x72000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x39U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x39U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x39U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x39U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v58 
            = ((IData)(((0x74000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3aU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x3aU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v59 
            = ((IData)(((0x76000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3bU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x3bU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v60 
            = ((IData)(((0x78000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3cU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x3cU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v61 
            = ((IData)(((0x7a000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3dU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x3dU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v62 
            = ((IData)(((0x7c000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3eU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x3eU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v63 
            = ((IData)(((0x7e000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x3fU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x3fU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x3fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x3fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v64 
            = ((IData)(((0x80000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x40U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x40U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x40U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x40U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v65 
            = ((IData)(((0x82000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x41U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x41U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x41U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x41U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v66 
            = ((IData)(((0x84000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x42U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x42U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x42U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x42U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v67 
            = ((IData)(((0x86000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x43U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x43U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x43U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x43U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v68 
            = ((IData)(((0x88000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x44U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x44U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x44U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x44U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v69 
            = ((IData)(((0x8a000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x45U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x45U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x45U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x45U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v70 
            = ((IData)(((0x8c000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x46U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x46U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x46U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x46U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v71 
            = ((IData)(((0x8e000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x47U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x47U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x47U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x47U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v72 
            = ((IData)(((0x90000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x48U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x48U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x48U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x48U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v73 
            = ((IData)(((0x92000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x49U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x49U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x49U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x49U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v74 
            = ((IData)(((0x94000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x4aU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x4aU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x4aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x4aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v75 
            = ((IData)(((0x96000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x4bU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x4bU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x4bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x4bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v76 
            = ((IData)(((0x98000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x4cU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x4cU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x4cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x4cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v77 
            = ((IData)(((0x9a000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x4dU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x4dU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x4dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x4dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v78 
            = ((IData)(((0x9c000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x4eU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x4eU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x4eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x4eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v79 
            = ((IData)(((0x9e000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x4fU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x4fU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x4fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x4fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v80 
            = ((IData)(((0xa0000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x50U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x50U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x50U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x50U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v81 
            = ((IData)(((0xa2000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x51U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x51U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x51U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x51U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v82 
            = ((IData)(((0xa4000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x52U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x52U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x52U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x52U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v83 
            = ((IData)(((0xa6000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x53U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x53U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x53U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x53U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v84 
            = ((IData)(((0xa8000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x54U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x54U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x54U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x54U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v85 
            = ((IData)(((0xaa000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x55U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x55U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x55U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x55U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v86 
            = ((IData)(((0xac000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x56U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x56U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x56U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x56U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v87 
            = ((IData)(((0xae000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x57U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x57U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x57U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x57U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v88 
            = ((IData)(((0xb0000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x58U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x58U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x58U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x58U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v89 
            = ((IData)(((0xb2000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x59U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x59U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x59U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x59U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v90 
            = ((IData)(((0xb4000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x5aU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x5aU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x5aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x5aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v91 
            = ((IData)(((0xb6000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x5bU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x5bU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x5bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x5bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v92 
            = ((IData)(((0xb8000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x5cU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x5cU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x5cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x5cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v93 
            = ((IData)(((0xba000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x5dU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x5dU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x5dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x5dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v94 
            = ((IData)(((0xbc000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x5eU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x5eU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x5eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x5eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v95 
            = ((IData)(((0xbe000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x5fU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x5fU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x5fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x5fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v96 
            = ((IData)(((0xc0000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x60U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x60U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x60U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x60U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v97 
            = ((IData)(((0xc2000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x61U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x61U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x61U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x61U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v98 
            = ((IData)(((0xc4000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x62U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x62U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x62U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x62U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v99 
            = ((IData)(((0xc6000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x63U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x63U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x63U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x63U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v100 
            = ((IData)(((0xc8000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x64U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x64U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x64U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x64U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v101 
            = ((IData)(((0xca000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x65U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x65U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x65U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x65U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v102 
            = ((IData)(((0xcc000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x66U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x66U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x66U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x66U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v103 
            = ((IData)(((0xce000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x67U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x67U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x67U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x67U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v104 
            = ((IData)(((0xd0000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x68U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x68U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x68U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x68U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v105 
            = ((IData)(((0xd2000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x69U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x69U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x69U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x69U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v106 
            = ((IData)(((0xd4000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x6aU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x6aU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x6aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x6aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v107 
            = ((IData)(((0xd6000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x6bU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x6bU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x6bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x6bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v108 
            = ((IData)(((0xd8000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x6cU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x6cU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x6cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x6cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v109 
            = ((IData)(((0xda000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x6dU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x6dU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x6dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x6dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v110 
            = ((IData)(((0xdc000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x6eU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x6eU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x6eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x6eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v111 
            = ((IData)(((0xde000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x6fU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x6fU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x6fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x6fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v112 
            = ((IData)(((0xe0000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x70U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x70U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x70U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x70U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v113 
            = ((IData)(((0xe2000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x71U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x71U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x71U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x71U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v114 
            = ((IData)(((0xe4000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x72U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x72U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x72U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x72U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v115 
            = ((IData)(((0xe6000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x73U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x73U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x73U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x73U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v116 
            = ((IData)(((0xe8000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x74U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x74U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x74U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x74U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v117 
            = ((IData)(((0xea000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x75U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x75U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x75U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x75U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v118 
            = ((IData)(((0xec000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x76U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x76U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x76U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x76U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v119 
            = ((IData)(((0xee000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x77U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x77U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x77U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x77U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v120 
            = ((IData)(((0xf0000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x78U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x78U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x78U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x78U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v121 
            = ((IData)(((0xf2000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x79U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x79U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x79U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x79U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v122 
            = ((IData)(((0xf4000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x7aU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x7aU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x7aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x7aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v123 
            = ((IData)(((0xf6000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x7bU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x7bU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x7bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x7bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v124 
            = ((IData)(((0xf8000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x7cU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x7cU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x7cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x7cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v125 
            = ((IData)(((0xfa000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x7dU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x7dU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x7dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x7dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v126 
            = ((IData)(((0xfc000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x7eU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x7eU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x7eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x7eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v127 
            = ((IData)(((0xfe000U == (0x7fe000U & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x7fU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x7fU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x7fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x7fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v128 
            = ((IData)(((0x100000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x80U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x80U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x80U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x80U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v129 
            = ((IData)(((0x102000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x81U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x81U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x81U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x81U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v130 
            = ((IData)(((0x104000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x82U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x82U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x82U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x82U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v131 
            = ((IData)(((0x106000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x83U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x83U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x83U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x83U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v132 
            = ((IData)(((0x108000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x84U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x84U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x84U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x84U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v133 
            = ((IData)(((0x10a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x85U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x85U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x85U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x85U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v134 
            = ((IData)(((0x10c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x86U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x86U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x86U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x86U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v135 
            = ((IData)(((0x10e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x87U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x87U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x87U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x87U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v136 
            = ((IData)(((0x110000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x88U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x88U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x88U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x88U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v137 
            = ((IData)(((0x112000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x89U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x89U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x89U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x89U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v138 
            = ((IData)(((0x114000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x8aU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x8aU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x8aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x8aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v139 
            = ((IData)(((0x116000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x8bU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x8bU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x8bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x8bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v140 
            = ((IData)(((0x118000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x8cU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x8cU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x8cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x8cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v141 
            = ((IData)(((0x11a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x8dU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x8dU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x8dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x8dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v142 
            = ((IData)(((0x11c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x8eU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x8eU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x8eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x8eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v143 
            = ((IData)(((0x11e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x8fU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x8fU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x8fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x8fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v144 
            = ((IData)(((0x120000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x90U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x90U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x90U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x90U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v145 
            = ((IData)(((0x122000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x91U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x91U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x91U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x91U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v146 
            = ((IData)(((0x124000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x92U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x92U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x92U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x92U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v147 
            = ((IData)(((0x126000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x93U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x93U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x93U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x93U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v148 
            = ((IData)(((0x128000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x94U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x94U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x94U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x94U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v149 
            = ((IData)(((0x12a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x95U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x95U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x95U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x95U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v150 
            = ((IData)(((0x12c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x96U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x96U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x96U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x96U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v151 
            = ((IData)(((0x12e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x97U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x97U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x97U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x97U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v152 
            = ((IData)(((0x130000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x98U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x98U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x98U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x98U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v153 
            = ((IData)(((0x132000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x99U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x99U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x99U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x99U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v154 
            = ((IData)(((0x134000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x9aU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x9aU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x9aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x9aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v155 
            = ((IData)(((0x136000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x9bU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x9bU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x9bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x9bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v156 
            = ((IData)(((0x138000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x9cU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x9cU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x9cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x9cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v157 
            = ((IData)(((0x13a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x9dU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x9dU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x9dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x9dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v158 
            = ((IData)(((0x13c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x9eU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x9eU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x9eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x9eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v159 
            = ((IData)(((0x13e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x9fU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0x9fU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x9fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x9fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v160 
            = ((IData)(((0x140000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xa0U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xa0U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xa0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xa0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v161 
            = ((IData)(((0x142000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xa1U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xa1U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xa1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xa1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v162 
            = ((IData)(((0x144000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xa2U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xa2U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xa2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xa2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v163 
            = ((IData)(((0x146000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xa3U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xa3U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xa3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xa3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v164 
            = ((IData)(((0x148000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xa4U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xa4U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xa4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xa4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v165 
            = ((IData)(((0x14a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xa5U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xa5U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xa5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xa5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v166 
            = ((IData)(((0x14c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xa6U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xa6U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xa6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xa6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v167 
            = ((IData)(((0x14e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xa7U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xa7U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xa7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xa7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v168 
            = ((IData)(((0x150000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xa8U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xa8U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xa8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xa8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v169 
            = ((IData)(((0x152000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xa9U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xa9U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xa9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xa9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v170 
            = ((IData)(((0x154000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xaaU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xaaU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xaaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xaaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v171 
            = ((IData)(((0x156000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xabU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xabU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xabU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xabU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v172 
            = ((IData)(((0x158000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xacU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xacU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xacU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xacU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v173 
            = ((IData)(((0x15a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xadU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xadU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xadU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xadU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v174 
            = ((IData)(((0x15c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xaeU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xaeU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xaeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xaeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v175 
            = ((IData)(((0x15e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xafU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xafU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xafU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xafU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v176 
            = ((IData)(((0x160000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xb0U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xb0U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xb0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xb0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v177 
            = ((IData)(((0x162000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xb1U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xb1U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xb1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xb1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v178 
            = ((IData)(((0x164000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xb2U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xb2U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xb2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xb2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v179 
            = ((IData)(((0x166000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xb3U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xb3U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xb3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xb3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v180 
            = ((IData)(((0x168000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xb4U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xb4U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xb4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xb4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v181 
            = ((IData)(((0x16a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xb5U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xb5U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xb5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xb5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v182 
            = ((IData)(((0x16c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xb6U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xb6U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xb6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xb6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v183 
            = ((IData)(((0x16e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xb7U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xb7U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xb7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xb7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v184 
            = ((IData)(((0x170000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xb8U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xb8U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xb8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xb8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v185 
            = ((IData)(((0x172000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xb9U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xb9U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xb9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xb9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v186 
            = ((IData)(((0x174000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xbaU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xbaU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xbaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xbaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v187 
            = ((IData)(((0x176000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xbbU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xbbU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xbbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xbbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v188 
            = ((IData)(((0x178000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xbcU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xbcU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xbcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xbcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v189 
            = ((IData)(((0x17a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xbdU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xbdU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xbdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xbdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v190 
            = ((IData)(((0x17c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xbeU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xbeU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xbeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xbeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v191 
            = ((IData)(((0x17e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xbfU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xbfU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xbfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xbfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v192 
            = ((IData)(((0x180000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xc0U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xc0U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xc0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xc0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v193 
            = ((IData)(((0x182000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xc1U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xc1U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xc1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xc1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v194 
            = ((IData)(((0x184000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xc2U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xc2U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xc2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xc2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v195 
            = ((IData)(((0x186000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xc3U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xc3U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xc3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xc3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v196 
            = ((IData)(((0x188000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xc4U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xc4U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xc4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xc4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v197 
            = ((IData)(((0x18a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xc5U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xc5U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xc5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xc5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v198 
            = ((IData)(((0x18c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xc6U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xc6U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xc6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xc6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v199 
            = ((IData)(((0x18e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xc7U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xc7U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xc7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xc7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v200 
            = ((IData)(((0x190000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xc8U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xc8U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xc8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xc8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v201 
            = ((IData)(((0x192000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xc9U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xc9U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xc9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xc9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v202 
            = ((IData)(((0x194000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xcaU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xcaU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xcaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xcaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v203 
            = ((IData)(((0x196000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xcbU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xcbU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xcbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xcbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v204 
            = ((IData)(((0x198000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xccU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xccU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xccU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xccU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v205 
            = ((IData)(((0x19a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xcdU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xcdU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xcdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xcdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v206 
            = ((IData)(((0x19c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xceU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xceU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xceU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xceU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v207 
            = ((IData)(((0x19e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xcfU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xcfU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xcfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xcfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v208 
            = ((IData)(((0x1a0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xd0U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xd0U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xd0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xd0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v209 
            = ((IData)(((0x1a2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xd1U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xd1U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xd1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xd1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v210 
            = ((IData)(((0x1a4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xd2U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xd2U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xd2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xd2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v211 
            = ((IData)(((0x1a6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xd3U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xd3U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xd3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xd3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v212 
            = ((IData)(((0x1a8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xd4U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xd4U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xd4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xd4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v213 
            = ((IData)(((0x1aa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xd5U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xd5U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xd5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xd5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v214 
            = ((IData)(((0x1ac000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xd6U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xd6U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xd6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xd6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v215 
            = ((IData)(((0x1ae000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xd7U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xd7U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xd7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xd7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v216 
            = ((IData)(((0x1b0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xd8U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xd8U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xd8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xd8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v217 
            = ((IData)(((0x1b2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xd9U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xd9U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xd9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xd9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v218 
            = ((IData)(((0x1b4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xdaU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xdaU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xdaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xdaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v219 
            = ((IData)(((0x1b6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xdbU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xdbU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xdbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xdbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v220 
            = ((IData)(((0x1b8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xdcU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xdcU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xdcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xdcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v221 
            = ((IData)(((0x1ba000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xddU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xddU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xddU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xddU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v222 
            = ((IData)(((0x1bc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xdeU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xdeU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xdeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xdeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v223 
            = ((IData)(((0x1be000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xdfU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xdfU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xdfU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xdfU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v224 
            = ((IData)(((0x1c0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xe0U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xe0U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xe0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xe0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v225 
            = ((IData)(((0x1c2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xe1U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xe1U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xe1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xe1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v226 
            = ((IData)(((0x1c4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xe2U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xe2U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xe2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xe2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v227 
            = ((IData)(((0x1c6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xe3U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xe3U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xe3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xe3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v228 
            = ((IData)(((0x1c8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xe4U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xe4U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xe4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xe4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v229 
            = ((IData)(((0x1ca000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xe5U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xe5U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xe5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xe5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v230 
            = ((IData)(((0x1cc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xe6U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xe6U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xe6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xe6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v231 
            = ((IData)(((0x1ce000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xe7U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xe7U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xe7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xe7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v232 
            = ((IData)(((0x1d0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xe8U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xe8U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xe8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xe8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v233 
            = ((IData)(((0x1d2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xe9U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xe9U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xe9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xe9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v234 
            = ((IData)(((0x1d4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xeaU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xeaU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xeaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xeaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v235 
            = ((IData)(((0x1d6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xebU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xebU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xebU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xebU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v236 
            = ((IData)(((0x1d8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xecU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xecU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xecU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xecU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v237 
            = ((IData)(((0x1da000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xedU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xedU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xedU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xedU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v238 
            = ((IData)(((0x1dc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xeeU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xeeU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xeeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xeeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v239 
            = ((IData)(((0x1de000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xefU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xefU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xefU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xefU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v240 
            = ((IData)(((0x1e0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xf0U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xf0U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xf0U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xf0U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v241 
            = ((IData)(((0x1e2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xf1U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xf1U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xf1U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xf1U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v242 
            = ((IData)(((0x1e4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xf2U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xf2U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xf2U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xf2U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v243 
            = ((IData)(((0x1e6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xf3U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xf3U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xf3U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xf3U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v244 
            = ((IData)(((0x1e8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xf4U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xf4U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xf4U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xf4U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v245 
            = ((IData)(((0x1ea000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xf5U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xf5U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xf5U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xf5U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v246 
            = ((IData)(((0x1ec000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xf6U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xf6U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xf6U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xf6U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v247 
            = ((IData)(((0x1ee000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xf7U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xf7U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xf7U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xf7U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v248 
            = ((IData)(((0x1f0000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xf8U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xf8U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xf8U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xf8U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v249 
            = ((IData)(((0x1f2000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xf9U]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xf9U])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xf9U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xf9U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v250 
            = ((IData)(((0x1f4000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xfaU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xfaU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xfaU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xfaU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v251 
            = ((IData)(((0x1f6000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xfbU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xfbU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xfbU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xfbU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v252 
            = ((IData)(((0x1f8000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xfcU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xfcU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xfcU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xfcU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v253 
            = ((IData)(((0x1fa000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xfdU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xfdU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xfdU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xfdU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v254 
            = ((IData)(((0x1fc000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xfeU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xfeU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xfeU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xfeU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v255 
            = ((IData)(((0x1fe000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0xffU]) ? 
                                         ((1U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                           [0xffU])
                                           ? ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 2U)
                                           : ((0x800U 
                                               & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                               ? 3U
                                               : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0xffU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0xffU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v256 
            = ((IData)(((0x200000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x100U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x100U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x100U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x100U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v257 
            = ((IData)(((0x202000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x101U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x101U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x101U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x101U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v258 
            = ((IData)(((0x204000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x102U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x102U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x102U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x102U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v259 
            = ((IData)(((0x206000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x103U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x103U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x103U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x103U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v260 
            = ((IData)(((0x208000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x104U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x104U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x104U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x104U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v261 
            = ((IData)(((0x20a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x105U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x105U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x105U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x105U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v262 
            = ((IData)(((0x20c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x106U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x106U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x106U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x106U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v263 
            = ((IData)(((0x20e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x107U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x107U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x107U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x107U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v264 
            = ((IData)(((0x210000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x108U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x108U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x108U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x108U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v265 
            = ((IData)(((0x212000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x109U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x109U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x109U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x109U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v266 
            = ((IData)(((0x214000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x10aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x10aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v267 
            = ((IData)(((0x216000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x10bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x10bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v268 
            = ((IData)(((0x218000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x10cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x10cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v269 
            = ((IData)(((0x21a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x10dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x10dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v270 
            = ((IData)(((0x21c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x10eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x10eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v271 
            = ((IData)(((0x21e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x10fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x10fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x10fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v272 
            = ((IData)(((0x220000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x110U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x110U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x110U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x110U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v273 
            = ((IData)(((0x222000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x111U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x111U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x111U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x111U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v274 
            = ((IData)(((0x224000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x112U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x112U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x112U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x112U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v275 
            = ((IData)(((0x226000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x113U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x113U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x113U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x113U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v276 
            = ((IData)(((0x228000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x114U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x114U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x114U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x114U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v277 
            = ((IData)(((0x22a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x115U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x115U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x115U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x115U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v278 
            = ((IData)(((0x22c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x116U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x116U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x116U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x116U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v279 
            = ((IData)(((0x22e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x117U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x117U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x117U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x117U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v280 
            = ((IData)(((0x230000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x118U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x118U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x118U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x118U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v281 
            = ((IData)(((0x232000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x119U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x119U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x119U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x119U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v282 
            = ((IData)(((0x234000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x11aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x11aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v283 
            = ((IData)(((0x236000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x11bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x11bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v284 
            = ((IData)(((0x238000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x11cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x11cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v285 
            = ((IData)(((0x23a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x11dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x11dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v286 
            = ((IData)(((0x23c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x11eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x11eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v287 
            = ((IData)(((0x23e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x11fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x11fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x11fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v288 
            = ((IData)(((0x240000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x120U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x120U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x120U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x120U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v289 
            = ((IData)(((0x242000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x121U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x121U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x121U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x121U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v290 
            = ((IData)(((0x244000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x122U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x122U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x122U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x122U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v291 
            = ((IData)(((0x246000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x123U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x123U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x123U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x123U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v292 
            = ((IData)(((0x248000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x124U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x124U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x124U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x124U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v293 
            = ((IData)(((0x24a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x125U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x125U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x125U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x125U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v294 
            = ((IData)(((0x24c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x126U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x126U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x126U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x126U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v295 
            = ((IData)(((0x24e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x127U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x127U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x127U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x127U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v296 
            = ((IData)(((0x250000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x128U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x128U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x128U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x128U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v297 
            = ((IData)(((0x252000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x129U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x129U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x129U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x129U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v298 
            = ((IData)(((0x254000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x12aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x12aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v299 
            = ((IData)(((0x256000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x12bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x12bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v300 
            = ((IData)(((0x258000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x12cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x12cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v301 
            = ((IData)(((0x25a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x12dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x12dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v302 
            = ((IData)(((0x25c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x12eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x12eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v303 
            = ((IData)(((0x25e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x12fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x12fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x12fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v304 
            = ((IData)(((0x260000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x130U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x130U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x130U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x130U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v305 
            = ((IData)(((0x262000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x131U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x131U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x131U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x131U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v306 
            = ((IData)(((0x264000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x132U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x132U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x132U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x132U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v307 
            = ((IData)(((0x266000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x133U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x133U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x133U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x133U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v308 
            = ((IData)(((0x268000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x134U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x134U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x134U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x134U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v309 
            = ((IData)(((0x26a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x135U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x135U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x135U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x135U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v310 
            = ((IData)(((0x26c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x136U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x136U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x136U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x136U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v311 
            = ((IData)(((0x26e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x137U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x137U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x137U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x137U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v312 
            = ((IData)(((0x270000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x138U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x138U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x138U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x138U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v313 
            = ((IData)(((0x272000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x139U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x139U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x139U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x139U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v314 
            = ((IData)(((0x274000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x13aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x13aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v315 
            = ((IData)(((0x276000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x13bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x13bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v316 
            = ((IData)(((0x278000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x13cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x13cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v317 
            = ((IData)(((0x27a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x13dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x13dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v318 
            = ((IData)(((0x27c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x13eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x13eU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v319 
            = ((IData)(((0x27e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x13fU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x13fU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x13fU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v320 
            = ((IData)(((0x280000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x140U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x140U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x140U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x140U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v321 
            = ((IData)(((0x282000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x141U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x141U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x141U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x141U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v322 
            = ((IData)(((0x284000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x142U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x142U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x142U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x142U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v323 
            = ((IData)(((0x286000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x143U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x143U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x143U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x143U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v324 
            = ((IData)(((0x288000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x144U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x144U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x144U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x144U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v325 
            = ((IData)(((0x28a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x145U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x145U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x145U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x145U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v326 
            = ((IData)(((0x28c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x146U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x146U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x146U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x146U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v327 
            = ((IData)(((0x28e000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x147U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x147U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x147U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x147U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v328 
            = ((IData)(((0x290000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x148U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x148U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x148U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x148U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v329 
            = ((IData)(((0x292000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x149U])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x149U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x149U])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x149U]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v330 
            = ((IData)(((0x294000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x14aU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14aU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x14aU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v331 
            = ((IData)(((0x296000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x14bU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14bU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x14bU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v332 
            = ((IData)(((0x298000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x14cU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14cU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x14cU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v333 
            = ((IData)(((0x29a000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x14dU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14dU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x14dU]);
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v334 
            = ((IData)(((0x29c000U == (0x7fe000U & 
                                       vlSymsp->TOP__pipeline.__PVT__ex_branch_in[1U])) 
                        & (vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U] 
                           >> 0xcU))) ? ((2U & vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                          [0x14eU])
                                          ? ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 2U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 3U
                                                  : 1U))
                                          : ((1U & 
                                              vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
                                              [0x14eU])
                                              ? ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 2U
                                                  : 0U)
                                              : ((0x800U 
                                                  & vlSymsp->TOP__pipeline.__PVT__ex_branch_in[2U])
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->__PVT__gshare_inst__DOT__GSHARE_PHT
               [0x14eU]);
    } else {
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v57 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v58 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v59 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v60 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v61 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v62 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v63 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v64 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v65 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v66 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v67 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v68 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v69 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v70 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v71 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v72 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v73 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v74 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v75 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v76 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v77 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v78 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v79 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v80 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v81 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v82 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v83 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v84 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v85 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v86 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v87 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v88 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v89 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v90 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v91 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v92 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v93 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v94 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v95 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v96 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v97 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v98 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v99 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v100 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v101 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v102 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v103 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v104 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v105 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v106 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v107 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v108 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v109 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v110 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v111 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v112 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v113 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v114 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v115 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v116 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v117 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v118 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v119 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v120 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v121 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v122 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v123 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v124 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v125 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v126 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v127 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v128 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v129 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v130 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v131 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v132 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v133 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v134 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v135 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v136 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v137 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v138 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v139 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v140 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v141 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v142 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v143 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v144 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v145 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v146 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v147 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v148 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v149 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v150 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v151 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v152 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v153 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v154 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v155 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v156 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v157 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v158 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v159 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v160 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v161 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v162 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v163 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v164 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v165 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v166 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v167 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v168 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v169 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v170 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v171 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v172 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v173 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v174 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v175 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v176 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v177 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v178 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v179 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v180 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v181 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v182 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v183 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v184 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v185 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v186 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v187 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v188 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v189 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v190 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v191 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v192 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v193 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v194 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v195 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v196 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v197 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v198 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v199 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v200 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v201 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v202 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v203 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v204 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v205 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v206 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v207 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v208 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v209 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v210 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v211 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v212 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v213 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v214 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v215 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v216 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v217 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v218 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v219 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v220 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v221 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v222 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v223 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v224 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v225 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v226 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v227 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v228 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v229 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v230 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v231 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v232 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v233 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v234 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v235 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v236 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v237 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v238 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v239 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v240 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v241 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v242 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v243 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v244 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v245 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v246 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v247 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v248 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v249 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v250 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v251 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v252 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v253 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v254 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v255 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v256 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v257 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v258 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v259 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v260 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v261 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v262 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v263 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v264 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v265 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v266 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v267 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v268 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v269 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v270 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v271 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v272 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v273 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v274 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v275 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v276 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v277 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v278 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v279 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v280 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v281 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v282 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v283 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v284 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v285 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v286 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v287 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v288 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v289 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v290 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v291 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v292 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v293 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v294 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v295 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v296 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v297 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v298 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v299 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v300 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v301 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v302 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v303 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v304 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v305 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v306 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v307 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v308 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v309 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v310 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v311 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v312 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v313 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v314 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v315 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v316 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v317 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v318 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v319 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v320 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v321 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v322 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v323 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v324 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v325 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v326 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v327 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v328 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v329 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v330 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v331 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v332 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v333 = 2U;
        vlSelf->__Vdlyvval__gshare_inst__DOT__GSHARE_PHT__v334 = 2U;
    }
}
