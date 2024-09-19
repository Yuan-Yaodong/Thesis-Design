// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VZero_ME_7_8.h for the primary calling header

#ifndef VERILATED_VZERO_ME_7_8___024ROOT_H_
#define VERILATED_VZERO_ME_7_8___024ROOT_H_  // guard

#include "verilated.h"


class VZero_ME_7_8__Syms;

class alignas(VL_CACHE_LINE_BYTES) VZero_ME_7_8___024root final : public VerilatedModule {
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
    VlUnpacked<CData/*0:0*/, 11> Zero_ME_7_8__DOT__stage1_pp0;
    VlUnpacked<CData/*0:0*/, 10> Zero_ME_7_8__DOT__stage1_pp1;
    VlUnpacked<CData/*0:0*/, 9> Zero_ME_7_8__DOT__stage1_pp2;
    VlUnpacked<CData/*0:0*/, 7> Zero_ME_7_8__DOT__stage1_pp3;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VZero_ME_7_8__Syms* const vlSymsp;

    // CONSTRUCTORS
    VZero_ME_7_8___024root(VZero_ME_7_8__Syms* symsp, const char* v__name);
    ~VZero_ME_7_8___024root();
    VL_UNCOPYABLE(VZero_ME_7_8___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
