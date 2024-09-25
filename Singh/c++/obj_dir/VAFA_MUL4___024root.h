// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VAFA_MUL4.h for the primary calling header

#ifndef VERILATED_VAFA_MUL4___024ROOT_H_
#define VERILATED_VAFA_MUL4___024ROOT_H_  // guard

#include "verilated.h"


class VAFA_MUL4__Syms;

class alignas(VL_CACHE_LINE_BYTES) VAFA_MUL4___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(CLK,0,0);
    VL_IN8(a,7,0);
    VL_IN8(b,7,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    VL_OUT16(final_sum,15,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VAFA_MUL4__Syms* const vlSymsp;

    // CONSTRUCTORS
    VAFA_MUL4___024root(VAFA_MUL4__Syms* symsp, const char* v__name);
    ~VAFA_MUL4___024root();
    VL_UNCOPYABLE(VAFA_MUL4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
