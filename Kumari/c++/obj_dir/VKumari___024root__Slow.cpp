// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VKumari.h for the primary calling header

#include "VKumari__pch.h"
#include "VKumari__Syms.h"
#include "VKumari___024root.h"

void VKumari___024root___ctor_var_reset(VKumari___024root* vlSelf);

VKumari___024root::VKumari___024root(VKumari__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VKumari___024root___ctor_var_reset(this);
}

void VKumari___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VKumari___024root::~VKumari___024root() {
}
