// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSabetzadeh.h for the primary calling header

#include "VSabetzadeh__pch.h"
#include "VSabetzadeh__Syms.h"
#include "VSabetzadeh___024root.h"

void VSabetzadeh___024root___ctor_var_reset(VSabetzadeh___024root* vlSelf);

VSabetzadeh___024root::VSabetzadeh___024root(VSabetzadeh__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSabetzadeh___024root___ctor_var_reset(this);
}

void VSabetzadeh___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VSabetzadeh___024root::~VSabetzadeh___024root() {
}
