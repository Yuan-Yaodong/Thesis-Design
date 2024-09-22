// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMUL4__pch.h"

//============================================================
// Constructors

VMUL4::VMUL4(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMUL4__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , final_sum{vlSymsp->TOP.final_sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMUL4::VMUL4(const char* _vcname__)
    : VMUL4(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMUL4::~VMUL4() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMUL4___024root___eval_debug_assertions(VMUL4___024root* vlSelf);
#endif  // VL_DEBUG
void VMUL4___024root___eval_static(VMUL4___024root* vlSelf);
void VMUL4___024root___eval_initial(VMUL4___024root* vlSelf);
void VMUL4___024root___eval_settle(VMUL4___024root* vlSelf);
void VMUL4___024root___eval(VMUL4___024root* vlSelf);

void VMUL4::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMUL4::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMUL4___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMUL4___024root___eval_static(&(vlSymsp->TOP));
        VMUL4___024root___eval_initial(&(vlSymsp->TOP));
        VMUL4___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMUL4___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMUL4::eventsPending() { return false; }

uint64_t VMUL4::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMUL4::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMUL4___024root___eval_final(VMUL4___024root* vlSelf);

VL_ATTR_COLD void VMUL4::final() {
    VMUL4___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMUL4::hierName() const { return vlSymsp->name(); }
const char* VMUL4::modelName() const { return "VMUL4"; }
unsigned VMUL4::threads() const { return 1; }
void VMUL4::prepareClone() const { contextp()->prepareClone(); }
void VMUL4::atClone() const {
    contextp()->threadPoolpOnClone();
}
