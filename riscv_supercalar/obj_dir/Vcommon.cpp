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
    , instr0_enq_valid{vlSymsp->TOP.instr0_enq_valid}
    , instr1_enq_valid{vlSymsp->TOP.instr1_enq_valid}
    , instr0_robid{vlSymsp->TOP.instr0_robid}
    , instr1_robid{vlSymsp->TOP.instr1_robid}
    , instr0_src1_id{vlSymsp->TOP.instr0_src1_id}
    , instr0_src2_id{vlSymsp->TOP.instr0_src2_id}
    , instr1_src1_id{vlSymsp->TOP.instr1_src1_id}
    , instr1_src2_id{vlSymsp->TOP.instr1_src2_id}
    , instr0_T{vlSymsp->TOP.instr0_T}
    , instr1_T{vlSymsp->TOP.instr1_T}
    , instr0_src1_busy{vlSymsp->TOP.instr0_src1_busy}
    , instr0_src2_busy{vlSymsp->TOP.instr0_src2_busy}
    , instr1_src1_busy{vlSymsp->TOP.instr1_src1_busy}
    , instr1_src2_busy{vlSymsp->TOP.instr1_src2_busy}
    , intisq_left{vlSymsp->TOP.intisq_left}
    , writeback0_valid{vlSymsp->TOP.writeback0_valid}
    , writeback0_need_to_wb{vlSymsp->TOP.writeback0_need_to_wb}
    , writeback0_prd{vlSymsp->TOP.writeback0_prd}
    , writeback1_valid{vlSymsp->TOP.writeback1_valid}
    , writeback1_need_to_wb{vlSymsp->TOP.writeback1_need_to_wb}
    , writeback1_prd{vlSymsp->TOP.writeback1_prd}
    , writeback2_valid{vlSymsp->TOP.writeback2_valid}
    , writeback2_need_to_wb{vlSymsp->TOP.writeback2_need_to_wb}
    , writeback2_prd{vlSymsp->TOP.writeback2_prd}
    , writeback3_valid{vlSymsp->TOP.writeback3_valid}
    , writeback3_need_to_wb{vlSymsp->TOP.writeback3_need_to_wb}
    , writeback3_prd{vlSymsp->TOP.writeback3_prd}
    , flush_valid{vlSymsp->TOP.flush_valid}
    , flush_robid{vlSymsp->TOP.flush_robid}
    , mul_slot_busy{vlSymsp->TOP.mul_slot_busy}
    , ex_slot0_valid{vlSymsp->TOP.ex_slot0_valid}
    , ex_slot1_valid{vlSymsp->TOP.ex_slot1_valid}
    , slot0_T{vlSymsp->TOP.slot0_T}
    , slot1_T{vlSymsp->TOP.slot1_T}
    , slot0_robid{vlSymsp->TOP.slot0_robid}
    , slot1_robid{vlSymsp->TOP.slot1_robid}
    , instr0_pc{vlSymsp->TOP.instr0_pc}
    , instr1_pc{vlSymsp->TOP.instr1_pc}
    , slot0_pc{vlSymsp->TOP.slot0_pc}
    , slot1_pc{vlSymsp->TOP.slot1_pc}
    , instr0_control{vlSymsp->TOP.instr0_control}
    , instr1_control{vlSymsp->TOP.instr1_control}
    , slot0_control{vlSymsp->TOP.slot0_control}
    , slot1_control{vlSymsp->TOP.slot1_control}
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
