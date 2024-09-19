// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VZERO_ME_7_8__SYMS_H_
#define VERILATED_VZERO_ME_7_8__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VZero_ME_7_8.h"

// INCLUDE MODULE CLASSES
#include "VZero_ME_7_8___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VZero_ME_7_8__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VZero_ME_7_8* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VZero_ME_7_8___024root         TOP;

    // CONSTRUCTORS
    VZero_ME_7_8__Syms(VerilatedContext* contextp, const char* namep, VZero_ME_7_8* modelp);
    ~VZero_ME_7_8__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
