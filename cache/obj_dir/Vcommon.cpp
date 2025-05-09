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
    , mpc_channel0_valid{vlSymsp->TOP.mpc_channel0_valid}
    , mpc_channel0_enable{vlSymsp->TOP.mpc_channel0_enable}
    , mpc_channel0_op{vlSymsp->TOP.mpc_channel0_op}
    , mpc_channel1_valid{vlSymsp->TOP.mpc_channel1_valid}
    , mpc_channel1_enable{vlSymsp->TOP.mpc_channel1_enable}
    , mpc_channel1_op{vlSymsp->TOP.mpc_channel1_op}
    , mpc_channel2_valid{vlSymsp->TOP.mpc_channel2_valid}
    , mpc_channel2_enable{vlSymsp->TOP.mpc_channel2_enable}
    , mpc_channel2_op{vlSymsp->TOP.mpc_channel2_op}
    , mpc_channel0_address{vlSymsp->TOP.mpc_channel0_address}
    , mpc_channel0_data{vlSymsp->TOP.mpc_channel0_data}
    , mpc_channel1_address{vlSymsp->TOP.mpc_channel1_address}
    , mpc_channel1_data{vlSymsp->TOP.mpc_channel1_data}
    , mpc_channel2_address{vlSymsp->TOP.mpc_channel2_address}
    , mpc_channel2_data{vlSymsp->TOP.mpc_channel2_data}
    , mpc_xbar_htu_valid{vlSymsp->TOP.mpc_xbar_htu_valid}
    , mpc_xbar_htu_enable{vlSymsp->TOP.mpc_xbar_htu_enable}
    , mpc_xbar_htu_channel_id{vlSymsp->TOP.mpc_xbar_htu_channel_id}
    , mpc_xbar_htu_op_code{vlSymsp->TOP.mpc_xbar_htu_op_code}
    , mpc_xbar_htu_addr{vlSymsp->TOP.mpc_xbar_htu_addr}
    , mpc_xbar_htu_set{vlSymsp->TOP.mpc_xbar_htu_set}
    , mpc_xbar_htu_wbuffer_id{vlSymsp->TOP.mpc_xbar_htu_wbuffer_id}
    , mpc_xbar_wbuf_req_valid{vlSymsp->TOP.mpc_xbar_wbuf_req_valid}
    , mpc_xbar_wbuf_req_enable{vlSymsp->TOP.mpc_xbar_wbuf_req_enable}
    , mpc_xbar_wbuf_req_channel_id{vlSymsp->TOP.mpc_xbar_wbuf_req_channel_id}
    , mpc_xbar_wbuf_req_data{vlSymsp->TOP.mpc_xbar_wbuf_req_data}
    , mpc_xbar_wbuf_req_wbuffer_id{vlSymsp->TOP.mpc_xbar_wbuf_req_wbuffer_id}
    , mpc_xbar_wbuf_rtn_free_id{vlSymsp->TOP.mpc_xbar_wbuf_rtn_free_id}
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
QData Vcommon___024root___change_request(Vcommon___024root* vlSelf);
#ifdef VL_DEBUG
void Vcommon___024root___eval_debug_assertions(Vcommon___024root* vlSelf);
#endif  // VL_DEBUG
void Vcommon___024root___final(Vcommon___024root* vlSelf);

static void _eval_initial_loop(Vcommon__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vcommon___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vcommon___024root___eval_settle(&(vlSymsp->TOP));
        Vcommon___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcommon___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/mnt/hgfs/riscv/cache/xbar_core.sv", 4, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcommon___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
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
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vcommon___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vcommon___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/mnt/hgfs/riscv/cache/xbar_core.sv", 4, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vcommon___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
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
