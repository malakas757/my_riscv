// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcommon.h"
#include "Vcommon__Syms.h"

//============================================================
// Constructors

Vcommon::Vcommon(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vcommon__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rstn{vlSymsp->TOP.rstn}
    , Icachestop{vlSymsp->TOP.Icachestop}
    , Icacheflush{vlSymsp->TOP.Icacheflush}
    , pc_valid{vlSymsp->TOP.pc_valid}
    , tos2_valid{vlSymsp->TOP.tos2_valid}
    , hit_valid{vlSymsp->TOP.hit_valid}
    , hit_set{vlSymsp->TOP.hit_set}
    , hit_way{vlSymsp->TOP.hit_way}
    , refill_valid{vlSymsp->TOP.refill_valid}
    , refill_set{vlSymsp->TOP.refill_set}
    , pc{vlSymsp->TOP.pc}
    , tos2_pc{vlSymsp->TOP.tos2_pc}
    , refill_tag{vlSymsp->TOP.refill_tag}
    , refill_data{vlSymsp->TOP.refill_data}
    , tos2_data{vlSymsp->TOP.tos2_data}
    , tos2_tag{vlSymsp->TOP.tos2_tag}
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
