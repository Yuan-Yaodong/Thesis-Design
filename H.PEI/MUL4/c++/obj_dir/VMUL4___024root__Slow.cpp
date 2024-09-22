// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMUL4.h for the primary calling header

#include "VMUL4__pch.h"
#include "VMUL4__Syms.h"
#include "VMUL4___024root.h"

void VMUL4___024root___ctor_var_reset(VMUL4___024root* vlSelf);

VMUL4___024root::VMUL4___024root(VMUL4__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMUL4___024root___ctor_var_reset(this);
}

void VMUL4___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMUL4___024root::~VMUL4___024root() {
}
