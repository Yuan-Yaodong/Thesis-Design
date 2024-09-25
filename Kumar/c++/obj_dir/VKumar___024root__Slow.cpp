// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VKumar.h for the primary calling header

#include "VKumar__pch.h"
#include "VKumar__Syms.h"
#include "VKumar___024root.h"

void VKumar___024root___ctor_var_reset(VKumar___024root* vlSelf);

VKumar___024root::VKumar___024root(VKumar__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VKumar___024root___ctor_var_reset(this);
}

void VKumar___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VKumar___024root::~VKumar___024root() {
}
