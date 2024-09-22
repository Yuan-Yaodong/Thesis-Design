// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMUL2.h for the primary calling header

#include "VMUL2__pch.h"
#include "VMUL2__Syms.h"
#include "VMUL2___024root.h"

void VMUL2___024root___ctor_var_reset(VMUL2___024root* vlSelf);

VMUL2___024root::VMUL2___024root(VMUL2__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMUL2___024root___ctor_var_reset(this);
}

void VMUL2___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMUL2___024root::~VMUL2___024root() {
}
