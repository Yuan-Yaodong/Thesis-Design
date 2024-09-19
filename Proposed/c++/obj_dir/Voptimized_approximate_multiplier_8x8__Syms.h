// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VOPTIMIZED_APPROXIMATE_MULTIPLIER_8X8__SYMS_H_
#define VERILATED_VOPTIMIZED_APPROXIMATE_MULTIPLIER_8X8__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Voptimized_approximate_multiplier_8x8.h"

// INCLUDE MODULE CLASSES
#include "Voptimized_approximate_multiplier_8x8___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Voptimized_approximate_multiplier_8x8__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Voptimized_approximate_multiplier_8x8* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Voptimized_approximate_multiplier_8x8___024root TOP;

    // CONSTRUCTORS
    Voptimized_approximate_multiplier_8x8__Syms(VerilatedContext* contextp, const char* namep, Voptimized_approximate_multiplier_8x8* modelp);
    ~Voptimized_approximate_multiplier_8x8__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
