// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMUL4.h for the primary calling header

#ifndef VERILATED_VMUL4___024ROOT_H_
#define VERILATED_VMUL4___024ROOT_H_  // guard

#include "verilated.h"


class VMUL4__Syms;

class alignas(VL_CACHE_LINE_BYTES) VMUL4___024root final : public VerilatedModule {
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
    VlUnpacked<CData/*0:0*/, 15> MUL4__DOT__stage1_pp0;
    VlUnpacked<CData/*0:0*/, 13> MUL4__DOT__stage1_pp1;
    VlUnpacked<CData/*0:0*/, 5> MUL4__DOT__stage1_pp2;
    VlUnpacked<CData/*0:0*/, 5> MUL4__DOT__stage1_pp3;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VMUL4__Syms* const vlSymsp;

    // CONSTRUCTORS
    VMUL4___024root(VMUL4__Syms* symsp, const char* v__name);
    ~VMUL4___024root();
    VL_UNCOPYABLE(VMUL4___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
