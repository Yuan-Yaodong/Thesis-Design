// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VKumari__pch.h"

//============================================================
// Constructors

VKumari::VKumari(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VKumari__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , final_sum{vlSymsp->TOP.final_sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VKumari::VKumari(const char* _vcname__)
    : VKumari(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VKumari::~VKumari() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VKumari___024root___eval_debug_assertions(VKumari___024root* vlSelf);
#endif  // VL_DEBUG
void VKumari___024root___eval_static(VKumari___024root* vlSelf);
void VKumari___024root___eval_initial(VKumari___024root* vlSelf);
void VKumari___024root___eval_settle(VKumari___024root* vlSelf);
void VKumari___024root___eval(VKumari___024root* vlSelf);

void VKumari::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VKumari::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VKumari___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VKumari___024root___eval_static(&(vlSymsp->TOP));
        VKumari___024root___eval_initial(&(vlSymsp->TOP));
        VKumari___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VKumari___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VKumari::eventsPending() { return false; }

uint64_t VKumari::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VKumari::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VKumari___024root___eval_final(VKumari___024root* vlSelf);

VL_ATTR_COLD void VKumari::final() {
    VKumari___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VKumari::hierName() const { return vlSymsp->name(); }
const char* VKumari::modelName() const { return "VKumari"; }
unsigned VKumari::threads() const { return 1; }
void VKumari::prepareClone() const { contextp()->prepareClone(); }
void VKumari::atClone() const {
    contextp()->threadPoolpOnClone();
}
