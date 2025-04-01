// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcommon.h"
#include "Vcommon__Syms.h"

//============================================================
// Constructors

Vcommon::Vcommon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcommon__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset_n{vlSymsp->TOP.reset_n}
    , can_alloc{vlSymsp->TOP.can_alloc}
    , instr0_valid{vlSymsp->TOP.instr0_valid}
    , instr1_valid{vlSymsp->TOP.instr1_valid}
    , instr0_is_wb{vlSymsp->TOP.instr0_is_wb}
    , instr1_is_wb{vlSymsp->TOP.instr1_is_wb}
    , instr0_T{vlSymsp->TOP.instr0_T}
    , instr1_T{vlSymsp->TOP.instr1_T}
    , instr0_T_old{vlSymsp->TOP.instr0_T_old}
    , instr1_T_old{vlSymsp->TOP.instr1_T_old}
    , instr0_arf_id{vlSymsp->TOP.instr0_arf_id}
    , instr1_arf_id{vlSymsp->TOP.instr1_arf_id}
    , instr0_robid{vlSymsp->TOP.instr0_robid}
    , instr1_robid{vlSymsp->TOP.instr1_robid}
    , int0alu_wb_valid{vlSymsp->TOP.int0alu_wb_valid}
    , int0mul_wb_valid{vlSymsp->TOP.int0mul_wb_valid}
    , int1alu_wb_valid{vlSymsp->TOP.int1alu_wb_valid}
    , int1lsu_wb_valid{vlSymsp->TOP.int1lsu_wb_valid}
    , int0alu_wb_robid{vlSymsp->TOP.int0alu_wb_robid}
    , int0mul_wb_robid{vlSymsp->TOP.int0mul_wb_robid}
    , int1alu_wb_robid{vlSymsp->TOP.int1alu_wb_robid}
    , int1lsu_wb_robid{vlSymsp->TOP.int1lsu_wb_robid}
    , retire0_valid{vlSymsp->TOP.retire0_valid}
    , retire1_valid{vlSymsp->TOP.retire1_valid}
    , retire0_is_wb{vlSymsp->TOP.retire0_is_wb}
    , retire1_is_wb{vlSymsp->TOP.retire1_is_wb}
    , retire0_arf_id{vlSymsp->TOP.retire0_arf_id}
    , retire1_arf_id{vlSymsp->TOP.retire1_arf_id}
    , retire0_fl_Told{vlSymsp->TOP.retire0_fl_Told}
    , retire1_fl_Told{vlSymsp->TOP.retire1_fl_Told}
    , retire0_T{vlSymsp->TOP.retire0_T}
    , retire1_T{vlSymsp->TOP.retire1_T}
    , retire0_robid{vlSymsp->TOP.retire0_robid}
    , retire1_robid{vlSymsp->TOP.retire1_robid}
    , flush_robid{vlSymsp->TOP.flush_robid}
    , flush_valid{vlSymsp->TOP.flush_valid}
    , rob_state{vlSymsp->TOP.rob_state}
    , walk0_valid{vlSymsp->TOP.walk0_valid}
    , walk1_valid{vlSymsp->TOP.walk1_valid}
    , walk0_complete{vlSymsp->TOP.walk0_complete}
    , walk1_complete{vlSymsp->TOP.walk1_complete}
    , walk0_arf_id{vlSymsp->TOP.walk0_arf_id}
    , walk1_arf_id{vlSymsp->TOP.walk1_arf_id}
    , walk0_T{vlSymsp->TOP.walk0_T}
    , walk1_T{vlSymsp->TOP.walk1_T}
    , instr0_pc{vlSymsp->TOP.instr0_pc}
    , instr1_pc{vlSymsp->TOP.instr1_pc}
    , instr0_instr{vlSymsp->TOP.instr0_instr}
    , instr1_instr{vlSymsp->TOP.instr1_instr}
    , rootp{&(vlSymsp->TOP)}
{
}

Vcommon::Vcommon(const char* _vcname__)
    : Vcommon(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vcommon::~Vcommon() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vcommon___024root___eval_initial(Vcommon___024root* vlSelf);
void Vcommon___024root___eval_settle(Vcommon___024root* vlSelf);
void Vcommon___024root___eval(Vcommon___024root* vlSelf);
#ifdef VL_DEBUG
void Vcommon___024root___eval_debug_assertions(Vcommon___024root* vlSelf);
#endif  // VL_DEBUG
void Vcommon___024root___final(Vcommon___024root* vlSelf);

static void _eval_initial_loop(Vcommon__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcommon___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcommon___024root___eval_settle(&(vlSymsp->TOP));
        Vcommon___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vcommon::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcommon::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcommon___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcommon___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* Vcommon::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vcommon::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vcommon::final() {
    Vcommon___024root___final(&(vlSymsp->TOP));
}
