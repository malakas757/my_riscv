// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcommon.h for the primary calling header

#include "verilated.h"

#include "Vcommon___024root.h"

VL_INLINE_OPT void Vcommon___024root___sequent__TOP__7(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___sequent__TOP__7\n"); );
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
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v856;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v857;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v858;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v859;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v860;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v861;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v862;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v863;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v864;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v865;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v866;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v867;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v868;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v869;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v870;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v871;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v872;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v873;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v874;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v875;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v876;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v877;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v878;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v879;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v880;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v881;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v882;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v883;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v884;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v885;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v886;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v887;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v888;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v889;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v890;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v891;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v892;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v893;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v894;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v895;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v896;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v897;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v898;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v899;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v900;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v901;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v902;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v903;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v904;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v905;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v906;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v907;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v908;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v909;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v910;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v911;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v912;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v913;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v914;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v915;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v916;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v917;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v918;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v919;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v920;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v921;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v922;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v923;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v924;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v925;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v926;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v927;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v928;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v929;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v930;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v931;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v932;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v933;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v934;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v935;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v936;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v937;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v938;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v939;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v940;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v941;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v942;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v943;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v944;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v945;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v946;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v947;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v948;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v949;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v950;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v951;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v952;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v953;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v954;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v955;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v956;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v957;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v958;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v959;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v960;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v961;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v962;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v963;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v964;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v965;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v966;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v967;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v968;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v969;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v970;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v971;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v972;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v973;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v974;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v975;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v976;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v977;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v978;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v979;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v980;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v981;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v982;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v983;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v984;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v985;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v986;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v987;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v988;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v989;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v990;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v991;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v992;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v993;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v994;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v995;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v996;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v997;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v998;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v999;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1000;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1001;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1002;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1003;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1004;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1005;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1006;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1007;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1008;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1009;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1010;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1011;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1012;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1013;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1014;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1015;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1016;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1017;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1018;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1019;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1020;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1021;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1022;
    CData/*1:0*/ __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1023;
    // Body
    if (vlSelf->reset_n) {
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v856 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x358U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x358U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x358U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x358U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x358U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v857 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x359U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x359U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x359U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x359U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x359U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v858 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x35aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35aU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v859 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x35bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35bU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v860 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x35cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35cU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v861 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x35dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35dU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v862 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x35eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35eU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v863 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x35fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x35fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x35fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x35fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x35fU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v864 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x360U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x360U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x360U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x360U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x360U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v865 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x361U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x361U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x361U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x361U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x361U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v866 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x362U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x362U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x362U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x362U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x362U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v867 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x363U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x363U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x363U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x363U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x363U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v868 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x364U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x364U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x364U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x364U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x364U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v869 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x365U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x365U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x365U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x365U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x365U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v870 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x366U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x366U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x366U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x366U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x366U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v871 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x367U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x367U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x367U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x367U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x367U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v872 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x368U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x368U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x368U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x368U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x368U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v873 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x369U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x369U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x369U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x369U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x369U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v874 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x36aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36aU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v875 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x36bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36bU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v876 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x36cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36cU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v877 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x36dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36dU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v878 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x36eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36eU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v879 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x36fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x36fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x36fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x36fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x36fU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v880 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x370U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x370U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x370U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x370U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x370U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v881 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x371U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x371U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x371U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x371U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x371U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v882 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x372U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x372U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x372U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x372U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x372U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v883 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x373U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x373U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x373U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x373U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x373U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v884 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x374U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x374U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x374U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x374U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x374U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v885 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x375U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x375U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x375U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x375U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x375U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v886 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x376U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x376U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x376U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x376U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x376U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v887 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x377U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x377U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x377U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x377U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x377U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v888 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x378U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x378U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x378U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x378U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x378U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v889 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x379U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x379U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x379U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x379U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x379U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v890 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x37aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37aU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v891 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x37bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37bU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v892 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x37cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37cU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v893 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x37dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37dU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v894 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x37eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37eU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v895 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x37fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x37fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x37fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x37fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x37fU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v896 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x380U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x380U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x380U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x380U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x380U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v897 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x381U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x381U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x381U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x381U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x381U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v898 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x382U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x382U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x382U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x382U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x382U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v899 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x383U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x383U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x383U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x383U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x383U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v900 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x384U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x384U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x384U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x384U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x384U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v901 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x385U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x385U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x385U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x385U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x385U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v902 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x386U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x386U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x386U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x386U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x386U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v903 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x387U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x387U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x387U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x387U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x387U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v904 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x388U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x388U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x388U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x388U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x388U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v905 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x389U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x389U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x389U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x389U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x389U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v906 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x38aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38aU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v907 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x38bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38bU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v908 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x38cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38cU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v909 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x38dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38dU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v910 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x38eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38eU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v911 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x38fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x38fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x38fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x38fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x38fU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v912 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x390U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x390U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x390U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x390U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x390U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v913 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x391U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x391U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x391U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x391U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x391U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v914 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x392U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x392U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x392U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x392U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x392U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v915 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x393U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x393U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x393U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x393U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x393U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v916 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x394U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x394U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x394U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x394U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x394U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v917 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x395U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x395U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x395U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x395U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x395U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v918 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x396U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x396U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x396U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x396U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x396U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v919 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x397U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x397U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x397U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x397U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x397U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v920 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x398U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x398U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x398U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x398U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x398U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v921 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x399U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x399U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x399U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x399U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x399U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v922 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x39aU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39aU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39aU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39aU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v923 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x39bU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39bU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39bU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39bU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v924 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x39cU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39cU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39cU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39cU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v925 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x39dU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39dU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39dU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39dU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v926 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x39eU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39eU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39eU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39eU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v927 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x39fU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x39fU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x39fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x39fU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x39fU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v928 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3a0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a0U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v929 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3a1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a1U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v930 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3a2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a2U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v931 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3a3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a3U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v932 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3a4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a4U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v933 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3a5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a5U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v934 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3a6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a6U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v935 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3a7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a7U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v936 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3a8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a8U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v937 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3a9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3a9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3a9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3a9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3a9U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v938 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3aaU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3aaU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3aaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3aaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3aaU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v939 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3abU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3abU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3abU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3abU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3abU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v940 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3acU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3acU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3acU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3acU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3acU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v941 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3adU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3adU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3adU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3adU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3adU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v942 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3aeU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3aeU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3aeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3aeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3aeU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v943 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3afU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3afU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3afU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3afU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3afU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v944 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3b0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b0U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v945 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3b1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b1U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v946 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3b2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b2U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v947 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3b3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b3U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v948 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3b4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b4U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v949 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3b5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b5U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v950 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3b6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b6U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v951 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3b7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b7U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v952 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3b8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b8U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v953 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3b9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3b9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3b9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3b9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3b9U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v954 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3baU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3baU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3baU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3baU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3baU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v955 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3bbU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3bbU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3bbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3bbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3bbU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v956 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3bcU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3bcU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3bcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3bcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3bcU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v957 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3bdU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3bdU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3bdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3bdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3bdU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v958 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3beU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3beU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3beU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3beU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3beU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v959 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3bfU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3bfU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3bfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3bfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3bfU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v960 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3c0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c0U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v961 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3c1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c1U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v962 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3c2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c2U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v963 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3c3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c3U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v964 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3c4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c4U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v965 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3c5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c5U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v966 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3c6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c6U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v967 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3c7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c7U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v968 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3c8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c8U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v969 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3c9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3c9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3c9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3c9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3c9U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v970 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3caU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3caU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3caU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3caU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3caU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v971 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3cbU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3cbU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3cbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3cbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3cbU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v972 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3ccU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3ccU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3ccU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3ccU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3ccU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v973 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3cdU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3cdU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3cdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3cdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3cdU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v974 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3ceU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3ceU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3ceU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3ceU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3ceU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v975 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3cfU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3cfU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3cfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3cfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3cfU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v976 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3d0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d0U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v977 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3d1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d1U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v978 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3d2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d2U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v979 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3d3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d3U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v980 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3d4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d4U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v981 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3d5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d5U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v982 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3d6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d6U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v983 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3d7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d7U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v984 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3d8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d8U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v985 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3d9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3d9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3d9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3d9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3d9U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v986 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3daU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3daU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3daU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3daU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3daU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v987 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3dbU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3dbU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3dbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3dbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3dbU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v988 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3dcU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3dcU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3dcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3dcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3dcU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v989 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3ddU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3ddU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3ddU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3ddU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3ddU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v990 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3deU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3deU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3deU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3deU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3deU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v991 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3dfU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3dfU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3dfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3dfU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3dfU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v992 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3e0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3e0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3e0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3e0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3e0U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v993 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3e1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3e1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3e1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3e1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3e1U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v994 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3e2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3e2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3e2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3e2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3e2U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v995 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3e3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3e3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3e3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3e3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3e3U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v996 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3e4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3e4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3e4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3e4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3e4U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v997 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3e5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3e5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3e5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3e5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3e5U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v998 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3e6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3e6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3e6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3e6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3e6U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v999 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3e7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3e7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3e7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3e7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3e7U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1000 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3e8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3e8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3e8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3e8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3e8U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1001 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3e9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3e9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3e9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3e9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3e9U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1002 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3eaU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3eaU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3eaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3eaU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3eaU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1003 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3ebU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3ebU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3ebU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3ebU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3ebU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1004 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3ecU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3ecU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3ecU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3ecU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3ecU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1005 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3edU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3edU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3edU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3edU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3edU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1006 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3eeU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3eeU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3eeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3eeU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3eeU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1007 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3efU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3efU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3efU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3efU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3efU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1008 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3f0U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3f0U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3f0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3f0U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3f0U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1009 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3f1U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3f1U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3f1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3f1U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3f1U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1010 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3f2U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3f2U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3f2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3f2U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3f2U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1011 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3f3U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3f3U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3f3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3f3U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3f3U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1012 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3f4U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3f4U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3f4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3f4U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3f4U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1013 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3f5U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3f5U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3f5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3f5U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3f5U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1014 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3f6U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3f6U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3f6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3f6U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3f6U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1015 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3f7U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3f7U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3f7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3f7U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3f7U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1016 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3f8U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3f8U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3f8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3f8U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3f8U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1017 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3f9U == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3f9U]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3f9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3f9U]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3f9U]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1018 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3faU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3faU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3faU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3faU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3faU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1019 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3fbU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3fbU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3fbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3fbU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3fbU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1020 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3fcU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3fcU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3fcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3fcU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3fcU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1021 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3fdU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3fdU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3fdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3fdU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3fdU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1022 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3feU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3feU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3feU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3feU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3feU]);
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1023 
            = (((IData)(vlSelf->cpu__DOT__ex2if_branch_valid) 
                & (0x3ffU == (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__update_pht_addr)))
                ? ((2U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                    [0x3ffU]) ? ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                                  [0x3ffU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                ? 3U
                                                : 2U)
                                  : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                      ? 3U : 1U)) : 
                   ((1U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
                     [0x3ffU]) ? ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                   ? 2U : 0U) : ((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__branch_taken)
                                                  ? 1U
                                                  : 0U)))
                : vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
               [0x3ffU]);
    } else {
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v856 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v857 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v858 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v859 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v860 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v861 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v862 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v863 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v864 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v865 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v866 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v867 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v868 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v869 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v870 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v871 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v872 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v873 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v874 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v875 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v876 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v877 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v878 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v879 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v880 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v881 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v882 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v883 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v884 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v885 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v886 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v887 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v888 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v889 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v890 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v891 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v892 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v893 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v894 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v895 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v896 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v897 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v898 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v899 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v900 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v901 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v902 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v903 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v904 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v905 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v906 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v907 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v908 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v909 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v910 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v911 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v912 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v913 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v914 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v915 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v916 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v917 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v918 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v919 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v920 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v921 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v922 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v923 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v924 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v925 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v926 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v927 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v928 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v929 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v930 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v931 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v932 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v933 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v934 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v935 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v936 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v937 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v938 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v939 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v940 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v941 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v942 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v943 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v944 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v945 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v946 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v947 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v948 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v949 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v950 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v951 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v952 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v953 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v954 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v955 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v956 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v957 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v958 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v959 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v960 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v961 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v962 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v963 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v964 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v965 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v966 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v967 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v968 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v969 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v970 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v971 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v972 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v973 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v974 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v975 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v976 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v977 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v978 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v979 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v980 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v981 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v982 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v983 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v984 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v985 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v986 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v987 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v988 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v989 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v990 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v991 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v992 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v993 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v994 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v995 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v996 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v997 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v998 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v999 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1000 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1001 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1002 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1003 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1004 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1005 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1006 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1007 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1008 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1009 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1010 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1011 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1012 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1013 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1014 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1015 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1016 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1017 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1018 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1019 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1020 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1021 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1022 = 2U;
        __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1023 = 2U;
    }
    if (vlSelf->__Vdlyvset__cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram__v0) {
        vlSelf->cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram[vlSelf->__Vdlyvdim0__cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram__v0] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram__v0;
    }
    if (vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0) {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[vlSelf->__Vdlyvdim0__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v0;
    }
    if (vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table__v1) {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[1U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[2U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[3U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[4U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[5U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[6U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[7U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[8U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[9U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0xaU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0xbU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0xcU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0xdU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0xeU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0xfU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x10U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x11U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x12U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x13U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x14U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x15U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x16U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x17U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x18U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x19U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x1aU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x1bU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x1cU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x1dU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x1eU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0) {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[vlSelf->__Vdlyvdim0__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v0;
    }
    if (vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table__v1) {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[1U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[2U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[3U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[4U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[5U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[6U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[7U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[8U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[9U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0xaU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0xbU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0xcU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0xdU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0xeU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0xfU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x10U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x11U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x12U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x13U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x14U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x15U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x16U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x17U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x18U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x19U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x1aU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x1bU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x1cU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x1dU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x1eU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v0) {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[vlSelf->__Vdlyvdim0__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v1) {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v1;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[1U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v2;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[2U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v3;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[3U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v4;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[4U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v5;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[5U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v6;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[6U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v7;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[7U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v8;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[8U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v9;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[9U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v10;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0xaU] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v11;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0xbU] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v12;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0xcU] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v13;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0xdU] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v14;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0xeU] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v15;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0xfU] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v16;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x10U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v17;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x11U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v18;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x12U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v19;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x13U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v20;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x14U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v21;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x15U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v22;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x16U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v23;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x17U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v24;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x18U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v25;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x19U] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v26;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x1aU] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v27;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x1bU] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v28;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x1cU] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v29;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x1dU] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v30;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x1eU] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v31;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x1fU] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v32;
    }
    if (vlSelf->__Vdlyvset__cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids__v33) {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[1U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[2U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[3U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[4U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[5U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[6U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[7U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[8U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[9U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0xaU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0xbU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0xcU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0xdU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0xeU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0xfU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x10U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x11U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x12U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x13U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x14U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x15U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x16U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x17U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x18U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x19U] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x1aU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x1bU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x1cU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x1dU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x1eU] = 0U;
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids[0x1fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers__v0) {
        vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers[vlSelf->__Vdlyvdim0__cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers__v0] 
            = vlSelf->__Vdlyvval__cpu__DOT__inst_decode_stage__DOT__rf_inst__DOT__registers__v0;
    }
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v0;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v2;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v3;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v4;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v5;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v6;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v7;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v8;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v9;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xaU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v10;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v11;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xcU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v12;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xdU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v13;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xeU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v14;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xfU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v15;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x10U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v16;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x11U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v17;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x12U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v18;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x13U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v19;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x14U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v20;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x15U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v21;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x16U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v22;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x17U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v23;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x18U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v24;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x19U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v25;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v26;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v27;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v28;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v29;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v30;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v31;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x20U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v32;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x21U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v33;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x22U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v34;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x23U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v35;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x24U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v36;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x25U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v37;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x26U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v38;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x27U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v39;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x28U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v40;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x29U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v41;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v42;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v43;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v44;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v45;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v46;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v47;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x30U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v48;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x31U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v49;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x32U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v50;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x33U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v51;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x34U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v52;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x35U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v53;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x36U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v54;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x37U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v55;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x38U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v56;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x39U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v57;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v58;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v59;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v60;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v61;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v62;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v63;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x40U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v64;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x41U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v65;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x42U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v66;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x43U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v67;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x44U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v68;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x45U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v69;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x46U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v70;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x47U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v71;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x48U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v72;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x49U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v73;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x4aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v74;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x4bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v75;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x4cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v76;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x4dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v77;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x4eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v78;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x4fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v79;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x50U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v80;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x51U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v81;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x52U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v82;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x53U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v83;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x54U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v84;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x55U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v85;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x56U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v86;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x57U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v87;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x58U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v88;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x59U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v89;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x5aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v90;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x5bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v91;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x5cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v92;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x5dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v93;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x5eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v94;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x5fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v95;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x60U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v96;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x61U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v97;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x62U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v98;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x63U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v99;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x64U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v100;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x65U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v101;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x66U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v102;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x67U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v103;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x68U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v104;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x69U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v105;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x6aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v106;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x6bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v107;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x6cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v108;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x6dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v109;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x6eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v110;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x6fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v111;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x70U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v112;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x71U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v113;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x72U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v114;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x73U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v115;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x74U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v116;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x75U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v117;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x76U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v118;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x77U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v119;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x78U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v120;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x79U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v121;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x7aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v122;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x7bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v123;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x7cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v124;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x7dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v125;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x7eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v126;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x7fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v127;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x80U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v128;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x81U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v129;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x82U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v130;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x83U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v131;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x84U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v132;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x85U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v133;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x86U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v134;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x87U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v135;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x88U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v136;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x89U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v137;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x8aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v138;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x8bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v139;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x8cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v140;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x8dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v141;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x8eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v142;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x8fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v143;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x90U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v144;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x91U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v145;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x92U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v146;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x93U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v147;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x94U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v148;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x95U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v149;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x96U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v150;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x97U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v151;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x98U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v152;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x99U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v153;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x9aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v154;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x9bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v155;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x9cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v156;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x9dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v157;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x9eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v158;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x9fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v159;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xa0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v160;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xa1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v161;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xa2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v162;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xa3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v163;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xa4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v164;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xa5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v165;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xa6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v166;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xa7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v167;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xa8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v168;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xa9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v169;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xaaU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v170;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xabU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v171;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xacU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v172;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xadU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v173;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xaeU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v174;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xafU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v175;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xb0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v176;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xb1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v177;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xb2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v178;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xb3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v179;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xb4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v180;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xb5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v181;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xb6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v182;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xb7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v183;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xb8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v184;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xb9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v185;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xbaU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v186;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xbbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v187;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xbcU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v188;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xbdU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v189;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xbeU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v190;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xbfU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v191;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xc0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v192;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xc1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v193;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xc2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v194;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xc3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v195;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xc4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v196;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xc5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v197;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xc6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v198;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xc7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v199;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xc8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v200;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xc9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v201;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xcaU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v202;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xcbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v203;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xccU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v204;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xcdU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v205;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xceU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v206;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xcfU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v207;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xd0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v208;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xd1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v209;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xd2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v210;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xd3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v211;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xd4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v212;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xd5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v213;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xd6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v214;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xd7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v215;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xd8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v216;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xd9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v217;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xdaU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v218;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xdbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v219;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xdcU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v220;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xddU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v221;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xdeU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v222;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xdfU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v223;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xe0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v224;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xe1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v225;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xe2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v226;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xe3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v227;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xe4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v228;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xe5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v229;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xe6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v230;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xe7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v231;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xe8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v232;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xe9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v233;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xeaU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v234;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xebU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v235;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xecU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v236;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xedU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v237;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xeeU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v238;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xefU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v239;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xf0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v240;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xf1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v241;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xf2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v242;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xf3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v243;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xf4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v244;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xf5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v245;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xf6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v246;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xf7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v247;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xf8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v248;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xf9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v249;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xfaU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v250;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xfbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v251;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xfcU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v252;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xfdU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v253;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xfeU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v254;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0xffU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v255;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x100U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v256;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x101U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v257;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x102U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v258;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x103U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v259;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x104U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v260;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x105U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v261;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x106U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v262;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x107U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v263;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x108U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v264;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x109U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v265;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x10aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v266;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x10bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v267;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x10cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v268;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x10dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v269;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x10eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v270;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x10fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v271;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x110U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v272;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x111U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v273;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x112U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v274;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x113U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v275;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x114U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v276;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x115U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v277;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x116U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v278;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x117U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v279;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x118U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v280;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x119U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v281;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x11aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v282;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x11bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v283;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x11cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v284;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x11dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v285;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x11eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v286;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x11fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v287;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x120U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v288;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x121U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v289;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x122U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v290;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x123U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v291;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x124U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v292;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x125U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v293;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x126U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v294;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x127U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v295;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x128U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v296;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x129U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v297;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x12aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v298;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x12bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v299;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x12cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v300;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x12dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v301;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x12eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v302;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x12fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v303;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x130U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v304;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x131U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v305;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x132U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v306;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x133U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v307;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x134U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v308;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x135U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v309;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x136U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v310;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x137U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v311;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x138U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v312;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x139U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v313;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x13aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v314;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x13bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v315;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x13cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v316;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x13dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v317;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x13eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v318;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x13fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v319;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x140U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v320;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x141U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v321;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x142U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v322;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x143U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v323;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x144U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v324;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x145U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v325;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x146U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v326;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x147U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v327;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x148U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v328;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x149U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v329;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x14aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v330;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x14bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v331;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x14cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v332;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x14dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v333;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x14eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v334;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x14fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v335;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x150U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v336;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x151U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v337;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x152U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v338;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x153U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v339;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x154U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v340;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x155U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v341;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x156U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v342;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x157U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v343;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x158U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v344;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x159U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v345;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x15aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v346;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x15bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v347;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x15cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v348;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x15dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v349;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x15eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v350;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x15fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v351;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x160U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v352;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x161U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v353;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x162U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v354;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x163U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v355;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x164U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v356;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x165U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v357;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x166U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v358;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x167U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v359;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x168U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v360;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x169U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v361;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x16aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v362;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x16bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v363;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x16cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v364;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x16dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v365;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x16eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v366;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x16fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v367;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x170U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v368;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x171U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v369;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x172U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v370;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x173U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v371;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x174U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v372;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x175U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v373;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x176U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v374;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x177U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v375;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x178U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v376;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x179U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v377;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x17aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v378;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x17bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v379;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x17cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v380;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x17dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v381;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x17eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v382;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x17fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v383;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x180U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v384;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x181U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v385;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x182U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v386;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x183U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v387;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x184U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v388;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x185U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v389;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x186U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v390;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x187U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v391;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x188U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v392;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x189U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v393;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x18aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v394;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x18bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v395;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x18cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v396;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x18dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v397;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x18eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v398;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x18fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v399;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x190U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v400;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x191U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v401;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x192U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v402;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x193U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v403;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x194U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v404;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x195U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v405;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x196U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v406;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x197U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v407;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x198U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v408;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x199U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v409;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x19aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v410;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x19bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v411;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x19cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v412;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x19dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v413;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x19eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v414;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x19fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v415;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1a0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v416;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1a1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v417;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1a2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v418;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1a3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v419;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1a4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v420;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1a5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v421;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1a6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v422;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1a7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v423;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1a8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v424;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1a9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v425;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1aaU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v426;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1abU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v427;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1acU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v428;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1adU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v429;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1aeU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v430;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1afU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v431;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1b0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v432;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1b1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v433;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1b2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v434;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1b3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v435;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1b4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v436;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1b5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v437;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1b6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v438;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1b7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v439;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1b8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v440;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1b9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v441;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1baU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v442;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1bbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v443;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1bcU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v444;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1bdU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v445;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1beU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v446;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1bfU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v447;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1c0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v448;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1c1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v449;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1c2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v450;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1c3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v451;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1c4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v452;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1c5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v453;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1c6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v454;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1c7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v455;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1c8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v456;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1c9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v457;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1caU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v458;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1cbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v459;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1ccU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v460;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1cdU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v461;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1ceU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v462;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1cfU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v463;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1d0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v464;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1d1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v465;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1d2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v466;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1d3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v467;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1d4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v468;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1d5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v469;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1d6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v470;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1d7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v471;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1d8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v472;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1d9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v473;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1daU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v474;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1dbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v475;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1dcU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v476;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1ddU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v477;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1deU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v478;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1dfU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v479;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1e0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v480;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1e1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v481;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1e2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v482;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1e3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v483;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1e4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v484;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1e5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v485;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1e6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v486;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1e7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v487;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1e8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v488;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1e9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v489;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1eaU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v490;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1ebU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v491;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1ecU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v492;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1edU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v493;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1eeU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v494;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1efU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v495;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1f0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v496;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1f1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v497;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1f2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v498;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1f3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v499;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1f4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v500;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1f5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v501;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1f6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v502;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1f7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v503;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1f8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v504;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1f9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v505;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1faU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v506;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1fbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v507;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1fcU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v508;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1fdU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v509;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1feU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v510;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x1ffU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v511;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x200U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v512;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x201U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v513;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x202U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v514;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x203U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v515;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x204U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v516;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x205U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v517;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x206U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v518;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x207U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v519;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x208U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v520;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x209U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v521;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x20aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v522;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x20bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v523;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x20cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v524;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x20dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v525;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x20eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v526;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x20fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v527;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x210U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v528;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x211U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v529;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x212U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v530;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x213U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v531;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x214U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v532;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x215U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v533;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x216U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v534;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x217U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v535;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x218U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v536;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x219U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v537;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x21aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v538;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x21bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v539;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x21cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v540;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x21dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v541;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x21eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v542;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x21fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v543;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x220U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v544;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x221U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v545;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x222U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v546;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x223U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v547;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x224U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v548;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x225U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v549;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x226U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v550;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x227U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v551;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x228U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v552;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x229U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v553;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x22aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v554;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x22bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v555;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x22cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v556;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x22dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v557;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x22eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v558;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x22fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v559;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x230U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v560;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x231U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v561;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x232U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v562;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x233U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v563;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x234U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v564;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x235U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v565;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x236U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v566;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x237U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v567;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x238U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v568;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x239U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v569;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x23aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v570;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x23bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v571;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x23cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v572;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x23dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v573;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x23eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v574;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x23fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v575;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x240U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v576;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x241U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v577;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x242U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v578;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x243U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v579;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x244U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v580;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x245U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v581;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x246U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v582;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x247U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v583;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x248U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v584;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x249U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v585;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x24aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v586;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x24bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v587;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x24cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v588;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x24dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v589;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x24eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v590;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x24fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v591;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x250U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v592;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x251U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v593;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x252U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v594;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x253U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v595;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x254U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v596;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x255U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v597;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x256U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v598;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x257U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v599;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x258U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v600;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x259U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v601;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x25aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v602;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x25bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v603;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x25cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v604;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x25dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v605;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x25eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v606;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x25fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v607;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x260U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v608;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x261U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v609;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x262U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v610;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x263U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v611;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x264U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v612;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x265U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v613;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x266U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v614;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x267U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v615;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x268U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v616;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x269U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v617;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x26aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v618;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x26bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v619;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x26cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v620;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x26dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v621;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x26eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v622;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x26fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v623;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x270U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v624;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x271U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v625;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x272U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v626;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x273U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v627;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x274U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v628;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x275U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v629;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x276U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v630;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x277U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v631;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x278U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v632;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x279U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v633;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x27aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v634;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x27bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v635;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x27cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v636;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x27dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v637;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x27eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v638;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x27fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v639;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x280U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v640;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x281U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v641;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x282U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v642;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x283U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v643;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x284U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v644;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x285U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v645;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x286U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v646;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x287U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v647;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x288U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v648;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x289U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v649;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x28aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v650;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x28bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v651;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x28cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v652;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x28dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v653;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x28eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v654;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x28fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v655;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x290U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v656;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x291U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v657;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x292U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v658;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x293U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v659;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x294U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v660;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x295U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v661;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x296U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v662;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x297U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v663;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x298U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v664;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x299U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v665;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x29aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v666;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x29bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v667;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x29cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v668;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x29dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v669;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x29eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v670;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x29fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v671;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2a0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v672;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2a1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v673;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2a2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v674;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2a3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v675;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2a4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v676;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2a5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v677;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2a6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v678;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2a7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v679;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2a8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v680;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2a9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v681;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2aaU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v682;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2abU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v683;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2acU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v684;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2adU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v685;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2aeU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v686;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2afU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v687;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2b0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v688;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2b1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v689;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2b2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v690;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2b3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v691;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2b4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v692;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2b5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v693;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2b6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v694;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2b7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v695;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2b8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v696;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2b9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v697;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2baU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v698;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2bbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v699;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2bcU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v700;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2bdU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v701;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2beU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v702;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2bfU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v703;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2c0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v704;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2c1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v705;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2c2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v706;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2c3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v707;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2c4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v708;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2c5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v709;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2c6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v710;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2c7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v711;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2c8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v712;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2c9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v713;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2caU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v714;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2cbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v715;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2ccU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v716;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2cdU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v717;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2ceU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v718;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2cfU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v719;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2d0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v720;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2d1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v721;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2d2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v722;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2d3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v723;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2d4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v724;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2d5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v725;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2d6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v726;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2d7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v727;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2d8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v728;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2d9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v729;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2daU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v730;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2dbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v731;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2dcU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v732;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2ddU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v733;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2deU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v734;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2dfU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v735;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2e0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v736;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2e1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v737;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2e2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v738;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2e3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v739;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2e4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v740;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2e5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v741;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2e6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v742;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2e7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v743;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2e8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v744;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2e9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v745;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2eaU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v746;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2ebU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v747;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2ecU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v748;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2edU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v749;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2eeU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v750;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2efU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v751;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2f0U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v752;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2f1U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v753;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2f2U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v754;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2f3U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v755;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2f4U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v756;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2f5U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v757;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2f6U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v758;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2f7U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v759;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2f8U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v760;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2f9U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v761;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2faU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v762;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2fbU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v763;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2fcU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v764;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2fdU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v765;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2feU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v766;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x2ffU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v767;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x300U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v768;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x301U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v769;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x302U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v770;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x303U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v771;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x304U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v772;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x305U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v773;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x306U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v774;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x307U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v775;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x308U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v776;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x309U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v777;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x30aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v778;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x30bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v779;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x30cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v780;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x30dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v781;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x30eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v782;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x30fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v783;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x310U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v784;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x311U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v785;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x312U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v786;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x313U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v787;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x314U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v788;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x315U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v789;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x316U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v790;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x317U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v791;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x318U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v792;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x319U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v793;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x31aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v794;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x31bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v795;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x31cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v796;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x31dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v797;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x31eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v798;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x31fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v799;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x320U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v800;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x321U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v801;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x322U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v802;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x323U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v803;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x324U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v804;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x325U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v805;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x326U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v806;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x327U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v807;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x328U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v808;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x329U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v809;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x32aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v810;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x32bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v811;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x32cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v812;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x32dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v813;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x32eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v814;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x32fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v815;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x330U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v816;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x331U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v817;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x332U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v818;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x333U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v819;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x334U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v820;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x335U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v821;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x336U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v822;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x337U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v823;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x338U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v824;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x339U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v825;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x33aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v826;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x33bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v827;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x33cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v828;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x33dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v829;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x33eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v830;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x33fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v831;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x340U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v832;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x341U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v833;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x342U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v834;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x343U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v835;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x344U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v836;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x345U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v837;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x346U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v838;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x347U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v839;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x348U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v840;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x349U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v841;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x34aU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v842;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x34bU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v843;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x34cU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v844;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x34dU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v845;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x34eU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v846;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x34fU] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v847;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x350U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v848;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x351U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v849;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x352U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v850;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x353U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v851;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x354U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v852;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x355U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v853;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x356U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v854;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x357U] 
        = vlSelf->__Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v855;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x358U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v856;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x359U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v857;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x35aU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v858;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x35bU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v859;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x35cU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v860;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x35dU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v861;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x35eU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v862;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x35fU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v863;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x360U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v864;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x361U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v865;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x362U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v866;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x363U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v867;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x364U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v868;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x365U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v869;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x366U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v870;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x367U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v871;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x368U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v872;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x369U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v873;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x36aU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v874;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x36bU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v875;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x36cU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v876;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x36dU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v877;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x36eU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v878;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x36fU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v879;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x370U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v880;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x371U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v881;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x372U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v882;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x373U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v883;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x374U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v884;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x375U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v885;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x376U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v886;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x377U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v887;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x378U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v888;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x379U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v889;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x37aU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v890;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x37bU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v891;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x37cU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v892;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x37dU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v893;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x37eU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v894;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x37fU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v895;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x380U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v896;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x381U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v897;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x382U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v898;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x383U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v899;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x384U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v900;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x385U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v901;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x386U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v902;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x387U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v903;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x388U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v904;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x389U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v905;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x38aU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v906;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x38bU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v907;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x38cU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v908;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x38dU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v909;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x38eU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v910;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x38fU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v911;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x390U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v912;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x391U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v913;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x392U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v914;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x393U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v915;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x394U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v916;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x395U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v917;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x396U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v918;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x397U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v919;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x398U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v920;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x399U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v921;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x39aU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v922;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x39bU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v923;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x39cU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v924;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x39dU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v925;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x39eU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v926;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x39fU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v927;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3a0U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v928;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3a1U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v929;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3a2U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v930;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3a3U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v931;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3a4U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v932;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3a5U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v933;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3a6U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v934;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3a7U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v935;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3a8U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v936;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3a9U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v937;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3aaU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v938;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3abU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v939;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3acU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v940;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3adU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v941;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3aeU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v942;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3afU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v943;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3b0U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v944;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3b1U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v945;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3b2U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v946;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3b3U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v947;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3b4U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v948;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3b5U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v949;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3b6U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v950;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3b7U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v951;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3b8U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v952;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3b9U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v953;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3baU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v954;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3bbU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v955;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3bcU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v956;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3bdU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v957;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3beU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v958;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3bfU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v959;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3c0U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v960;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3c1U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v961;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3c2U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v962;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3c3U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v963;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3c4U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v964;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3c5U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v965;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3c6U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v966;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3c7U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v967;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3c8U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v968;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3c9U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v969;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3caU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v970;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3cbU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v971;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3ccU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v972;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3cdU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v973;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3ceU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v974;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3cfU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v975;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3d0U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v976;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3d1U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v977;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3d2U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v978;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3d3U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v979;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3d4U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v980;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3d5U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v981;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3d6U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v982;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3d7U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v983;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3d8U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v984;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3d9U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v985;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3daU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v986;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3dbU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v987;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3dcU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v988;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3ddU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v989;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3deU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v990;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3dfU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v991;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3e0U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v992;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3e1U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v993;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3e2U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v994;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3e3U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v995;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3e4U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v996;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3e5U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v997;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3e6U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v998;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3e7U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v999;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3e8U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1000;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3e9U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1001;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3eaU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1002;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3ebU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1003;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3ecU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1004;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3edU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1005;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3eeU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1006;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3efU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1007;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3f0U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1008;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3f1U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1009;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3f2U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1010;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3f3U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1011;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3f4U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1012;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3f5U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1013;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3f6U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1014;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3f7U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1015;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3f8U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1016;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3f9U] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1017;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3faU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1018;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3fbU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1019;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3fcU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1020;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3fdU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1021;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3feU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1022;
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT[0x3ffU] 
        = __Vdlyvval__cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT__v1023;
    if (vlSelf->reset_n) {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg 
            = vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_next;
        vlSelf->cpu__DOT__mem_wb_reg[0U] = (((IData)(
                                                     (((QData)((IData)(vlSelf->cpu__DOT__inst_mem_stage__DOT__load_data)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->cpu__DOT__memory_alu_data)))) 
                                             << 0x1eU) 
                                            | vlSelf->cpu__DOT__memory_control);
        vlSelf->cpu__DOT__mem_wb_reg[1U] = (((IData)(
                                                     (((QData)((IData)(vlSelf->cpu__DOT__inst_mem_stage__DOT__load_data)) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->cpu__DOT__memory_alu_data)))) 
                                             >> 2U) 
                                            | ((IData)(
                                                       ((((QData)((IData)(vlSelf->cpu__DOT__inst_mem_stage__DOT__load_data)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->cpu__DOT__memory_alu_data))) 
                                                        >> 0x20U)) 
                                               << 0x1eU));
        vlSelf->cpu__DOT__mem_wb_reg[2U] = ((0xc0000000U 
                                             & vlSelf->cpu__DOT__ex_mem_reg[2U]) 
                                            | ((IData)(
                                                       ((((QData)((IData)(vlSelf->cpu__DOT__inst_mem_stage__DOT__load_data)) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(vlSelf->cpu__DOT__memory_alu_data))) 
                                                        >> 0x20U)) 
                                               >> 2U));
        vlSelf->cpu__DOT__mem_wb_reg[3U] = (7U & vlSelf->cpu__DOT__ex_mem_reg[3U]);
        vlSelf->cpu__DOT__ex_mem_reg[0U] = (IData)(
                                                   (((QData)((IData)(vlSelf->cpu__DOT__execute_alu_data)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__store_data))));
        vlSelf->cpu__DOT__ex_mem_reg[1U] = (IData)(
                                                   ((((QData)((IData)(vlSelf->cpu__DOT__execute_alu_data)) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->cpu__DOT__inst_execute_stage__DOT__store_data))) 
                                                    >> 0x20U));
        vlSelf->cpu__DOT__ex_mem_reg[2U] = ((0xc0000000U 
                                             & (vlSelf->cpu__DOT__id_ex_reg[6U] 
                                                << 0x14U)) 
                                            | vlSelf->cpu__DOT__execute_control);
        vlSelf->cpu__DOT__ex_mem_reg[3U] = (7U & (vlSelf->cpu__DOT__id_ex_reg[6U] 
                                                  >> 0xcU));
    } else {
        vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg = 0U;
        vlSelf->cpu__DOT__mem_wb_reg[0U] = 0U;
        vlSelf->cpu__DOT__mem_wb_reg[1U] = 0U;
        vlSelf->cpu__DOT__mem_wb_reg[2U] = 0U;
        vlSelf->cpu__DOT__mem_wb_reg[3U] = 0U;
        vlSelf->cpu__DOT__ex_mem_reg[0U] = 0U;
        vlSelf->cpu__DOT__ex_mem_reg[1U] = 0U;
        vlSelf->cpu__DOT__ex_mem_reg[2U] = 0U;
        vlSelf->cpu__DOT__ex_mem_reg[3U] = 0U;
    }
    if ((1U & ((IData)(vlSelf->cpu__DOT__id_ex_flush) 
               | (~ (IData)(vlSelf->reset_n))))) {
        vlSelf->cpu__DOT__id_ex_reg[0U] = 0U;
        vlSelf->cpu__DOT__id_ex_reg[1U] = 0U;
        vlSelf->cpu__DOT__id_ex_reg[2U] = 0U;
        vlSelf->cpu__DOT__id_ex_reg[3U] = 0U;
        vlSelf->cpu__DOT__id_ex_reg[4U] = 0U;
        vlSelf->cpu__DOT__id_ex_reg[5U] = 0U;
        vlSelf->cpu__DOT__id_ex_reg[6U] = 0U;
    } else {
        vlSelf->cpu__DOT__id_ex_reg[6U] = ((0x3ffU 
                                            & vlSelf->cpu__DOT__id_ex_reg[6U]) 
                                           | (0x7c00U 
                                              & (vlSelf->cpu__DOT__if_id_reg[0U] 
                                                 << 3U)));
        vlSelf->cpu__DOT__id_ex_reg[2U] = ((0x3ffU 
                                            & vlSelf->cpu__DOT__id_ex_reg[2U]) 
                                           | (vlSelf->cpu__DOT__decode_immediate_data 
                                              << 0xaU));
        vlSelf->cpu__DOT__id_ex_reg[3U] = ((vlSelf->cpu__DOT__decode_immediate_data 
                                            >> 0x16U) 
                                           | (vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_read_data2 
                                              << 0xaU));
        vlSelf->cpu__DOT__id_ex_reg[4U] = ((vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_read_data2 
                                            >> 0x16U) 
                                           | ((IData)(
                                                      (((QData)((IData)(
                                                                        ((vlSelf->cpu__DOT__if_id_reg[3U] 
                                                                          << 0x14U) 
                                                                         | (vlSelf->cpu__DOT__if_id_reg[2U] 
                                                                            >> 0xcU)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_read_data1)))) 
                                              << 0xaU));
        vlSelf->cpu__DOT__id_ex_reg[5U] = (((IData)(
                                                    (((QData)((IData)(
                                                                      ((vlSelf->cpu__DOT__if_id_reg[3U] 
                                                                        << 0x14U) 
                                                                       | (vlSelf->cpu__DOT__if_id_reg[2U] 
                                                                          >> 0xcU)))) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_read_data1)))) 
                                            >> 0x16U) 
                                           | ((IData)(
                                                      ((((QData)((IData)(
                                                                         ((vlSelf->cpu__DOT__if_id_reg[3U] 
                                                                           << 0x14U) 
                                                                          | (vlSelf->cpu__DOT__if_id_reg[2U] 
                                                                             >> 0xcU)))) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_read_data1))) 
                                                       >> 0x20U)) 
                                              << 0xaU));
        vlSelf->cpu__DOT__id_ex_reg[6U] = ((0x7c00U 
                                            & vlSelf->cpu__DOT__id_ex_reg[6U]) 
                                           | (0x7fffU 
                                              & ((IData)(
                                                         ((((QData)((IData)(
                                                                            ((vlSelf->cpu__DOT__if_id_reg[3U] 
                                                                              << 0x14U) 
                                                                             | (vlSelf->cpu__DOT__if_id_reg[2U] 
                                                                                >> 0xcU)))) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->cpu__DOT__inst_decode_stage__DOT__rf_read_data1))) 
                                                          >> 0x20U)) 
                                                 >> 0x16U)));
        vlSelf->cpu__DOT__id_ex_reg[0U] = (IData)((0xfffffffffffULL 
                                                   & (((QData)((IData)(
                                                                       vlSelf->cpu__DOT__if_id_reg[2U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->cpu__DOT__if_id_reg[1U])))));
        vlSelf->cpu__DOT__id_ex_reg[1U] = ((vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                                            << 0xcU) 
                                           | (IData)(
                                                     ((0xfffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->cpu__DOT__if_id_reg[2U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->cpu__DOT__if_id_reg[1U])))) 
                                                      >> 0x20U)));
        vlSelf->cpu__DOT__id_ex_reg[2U] = ((0xfffffc00U 
                                            & vlSelf->cpu__DOT__id_ex_reg[2U]) 
                                           | (vlSelf->cpu__DOT__inst_decode_stage__DOT__control 
                                              >> 0x14U));
    }
    vlSelf->cpu__DOT__if_id_reg[0U] = vlSelf->__Vdly__cpu__DOT__if_id_reg[0U];
    vlSelf->cpu__DOT__if_id_reg[1U] = vlSelf->__Vdly__cpu__DOT__if_id_reg[1U];
    vlSelf->cpu__DOT__if_id_reg[2U] = vlSelf->__Vdly__cpu__DOT__if_id_reg[2U];
    vlSelf->cpu__DOT__if_id_reg[3U] = vlSelf->__Vdly__cpu__DOT__if_id_reg[3U];
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__instr0_btb_target_addr 
        = ((3U & vlSelf->cpu__DOT__inst_fetch_stage__DOT__instr0_btb_target_addr) 
           | (vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_addr_inst__DOT__history_table
              [(0x1fU & (vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg 
                         >> 2U))] << 2U));
    cpu__DOT__inst_fetch_stage__DOT__instr0_btb_hit 
        = (vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_entry_valids
           [(0x1fU & (vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg 
                      >> 2U))] & ((vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg 
                                   >> 7U) == vlSelf->cpu__DOT__inst_fetch_stage__DOT__btb_inst__DOT__btb_tag_inst__DOT__history_table
                                  [(0x1fU & (vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg 
                                             >> 2U))]));
    __Vfunc_gshare_hash__0__branch_pc = vlSelf->cpu__DOT__inst_fetch_stage__DOT__pc_reg;
    __Vfunc_gshare_hash__0__GHSR = vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR;
    __Vfunc_gshare_hash__0__Vfuncout = (0x3ffU & ((IData)(__Vfunc_gshare_hash__0__GHSR) 
                                                  ^ 
                                                  (__Vfunc_gshare_hash__0__branch_pc 
                                                   >> 2U)));
    cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__instr0_pht_addr 
        = __Vfunc_gshare_hash__0__Vfuncout;
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
    vlSelf->cpu__DOT__memory_alu_data = vlSelf->cpu__DOT__ex_mem_reg[1U];
    vlSelf->cpu__DOT__memory_control = (0x3fffffffU 
                                        & vlSelf->cpu__DOT__ex_mem_reg[2U]);
    cpu__DOT__inst_mem_stage__DOT__memory_data = vlSelf->cpu__DOT__inst_mem_stage__DOT__inst_mem__DOT__ram
        [(0xffU & (vlSelf->cpu__DOT__ex_mem_reg[1U] 
                   >> 2U))];
    vlSelf->cpu__DOT__execute_control = (0x3fffffffU 
                                         & ((vlSelf->cpu__DOT__id_ex_reg[2U] 
                                             << 0x14U) 
                                            | (vlSelf->cpu__DOT__id_ex_reg[1U] 
                                               >> 0xcU)));
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
    __Vfunc_if_branch_taken__3__biomd = vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GSHARE_PHT
        [cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__instr0_pht_addr];
    __Vfunc_if_branch_taken__3__Vfuncout = (1U & ((IData)(__Vfunc_if_branch_taken__3__biomd) 
                                                  >> 1U));
    cpu__DOT__inst_fetch_stage__DOT__instr0_predict_taken 
        = __Vfunc_if_branch_taken__3__Vfuncout;
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
    vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR_next 
        = (((IData)(cpu__DOT__inst_fetch_stage__DOT__instr0_predict_taken) 
            & (IData)(cpu__DOT__inst_fetch_stage__DOT__instr0_btb_hit))
            ? ((0x3feU & ((IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR) 
                          << 1U)) | (IData)(cpu__DOT__inst_fetch_stage__DOT__instr0_predict_taken))
            : ((IData)(cpu__DOT__inst_fetch_stage__DOT__instr0_btb_hit)
                ? (0x3feU & ((IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR) 
                             << 1U)) : (IData)(vlSelf->cpu__DOT__inst_fetch_stage__DOT__gshare_inst__DOT__GHSR)));
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

void Vcommon___024root___sequent__TOP__4(Vcommon___024root* vlSelf);
void Vcommon___024root___sequent__TOP__5(Vcommon___024root* vlSelf);
void Vcommon___024root___sequent__TOP__6(Vcommon___024root* vlSelf);

void Vcommon___024root___eval(Vcommon___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vcommon__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcommon___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vcommon___024root___sequent__TOP__4(vlSelf);
        Vcommon___024root___sequent__TOP__5(vlSelf);
        Vcommon___024root___sequent__TOP__6(vlSelf);
        Vcommon___024root___sequent__TOP__7(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
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
