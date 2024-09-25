// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMingtao_hybrid.h for the primary calling header

#include "VMingtao_hybrid__pch.h"
#include "VMingtao_hybrid__Syms.h"
#include "VMingtao_hybrid___024root.h"

void VMingtao_hybrid___024root___ctor_var_reset(VMingtao_hybrid___024root* vlSelf);

VMingtao_hybrid___024root::VMingtao_hybrid___024root(VMingtao_hybrid__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VMingtao_hybrid___024root___ctor_var_reset(this);
}

void VMingtao_hybrid___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

VMingtao_hybrid___024root::~VMingtao_hybrid___024root() {
}
