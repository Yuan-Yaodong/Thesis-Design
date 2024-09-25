// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMINGTAO_HYBRID__SYMS_H_
#define VERILATED_VMINGTAO_HYBRID__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMingtao_hybrid.h"

// INCLUDE MODULE CLASSES
#include "VMingtao_hybrid___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VMingtao_hybrid__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMingtao_hybrid* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMingtao_hybrid___024root      TOP;

    // CONSTRUCTORS
    VMingtao_hybrid__Syms(VerilatedContext* contextp, const char* namep, VMingtao_hybrid* modelp);
    ~VMingtao_hybrid__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
