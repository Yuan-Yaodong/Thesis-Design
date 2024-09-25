// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VMingtao_hybrid__pch.h"

//============================================================
// Constructors

VMingtao_hybrid::VMingtao_hybrid(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VMingtao_hybrid__Syms(contextp(), _vcname__, this)}
    , CLK{vlSymsp->TOP.CLK}
    , a{vlSymsp->TOP.a}
    , b{vlSymsp->TOP.b}
    , final_sum{vlSymsp->TOP.final_sum}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VMingtao_hybrid::VMingtao_hybrid(const char* _vcname__)
    : VMingtao_hybrid(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VMingtao_hybrid::~VMingtao_hybrid() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VMingtao_hybrid___024root___eval_debug_assertions(VMingtao_hybrid___024root* vlSelf);
#endif  // VL_DEBUG
void VMingtao_hybrid___024root___eval_static(VMingtao_hybrid___024root* vlSelf);
void VMingtao_hybrid___024root___eval_initial(VMingtao_hybrid___024root* vlSelf);
void VMingtao_hybrid___024root___eval_settle(VMingtao_hybrid___024root* vlSelf);
void VMingtao_hybrid___024root___eval(VMingtao_hybrid___024root* vlSelf);

void VMingtao_hybrid::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VMingtao_hybrid::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VMingtao_hybrid___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VMingtao_hybrid___024root___eval_static(&(vlSymsp->TOP));
        VMingtao_hybrid___024root___eval_initial(&(vlSymsp->TOP));
        VMingtao_hybrid___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VMingtao_hybrid___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VMingtao_hybrid::eventsPending() { return false; }

uint64_t VMingtao_hybrid::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VMingtao_hybrid::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VMingtao_hybrid___024root___eval_final(VMingtao_hybrid___024root* vlSelf);

VL_ATTR_COLD void VMingtao_hybrid::final() {
    VMingtao_hybrid___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VMingtao_hybrid::hierName() const { return vlSymsp->name(); }
const char* VMingtao_hybrid::modelName() const { return "VMingtao_hybrid"; }
unsigned VMingtao_hybrid::threads() const { return 1; }
void VMingtao_hybrid::prepareClone() const { contextp()->prepareClone(); }
void VMingtao_hybrid::atClone() const {
    contextp()->threadPoolpOnClone();
}
