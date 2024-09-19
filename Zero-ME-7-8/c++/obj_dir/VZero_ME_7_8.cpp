// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VZero_ME_7_8__pch.h"

//============================================================
// Constructors

VZero_ME_7_8::VZero_ME_7_8(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VZero_ME_7_8__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , final_sum{vlSymsp->TOP.final_sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VZero_ME_7_8::VZero_ME_7_8(const char* _vcname__)
    : VZero_ME_7_8(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VZero_ME_7_8::~VZero_ME_7_8() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VZero_ME_7_8___024root___eval_debug_assertions(VZero_ME_7_8___024root* vlSelf);
#endif  // VL_DEBUG
void VZero_ME_7_8___024root___eval_static(VZero_ME_7_8___024root* vlSelf);
void VZero_ME_7_8___024root___eval_initial(VZero_ME_7_8___024root* vlSelf);
void VZero_ME_7_8___024root___eval_settle(VZero_ME_7_8___024root* vlSelf);
void VZero_ME_7_8___024root___eval(VZero_ME_7_8___024root* vlSelf);

void VZero_ME_7_8::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VZero_ME_7_8::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VZero_ME_7_8___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VZero_ME_7_8___024root___eval_static(&(vlSymsp->TOP));
        VZero_ME_7_8___024root___eval_initial(&(vlSymsp->TOP));
        VZero_ME_7_8___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VZero_ME_7_8___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VZero_ME_7_8::eventsPending() { return false; }

uint64_t VZero_ME_7_8::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VZero_ME_7_8::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VZero_ME_7_8___024root___eval_final(VZero_ME_7_8___024root* vlSelf);

VL_ATTR_COLD void VZero_ME_7_8::final() {
    VZero_ME_7_8___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VZero_ME_7_8::hierName() const { return vlSymsp->name(); }
const char* VZero_ME_7_8::modelName() const { return "VZero_ME_7_8"; }
unsigned VZero_ME_7_8::threads() const { return 1; }
void VZero_ME_7_8::prepareClone() const { contextp()->prepareClone(); }
void VZero_ME_7_8::atClone() const {
    contextp()->threadPoolpOnClone();
}
