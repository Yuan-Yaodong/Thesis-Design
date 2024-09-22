// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUL2__SYMS_H_
#define VERILATED_VMUL2__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMUL2.h"

// INCLUDE MODULE CLASSES
#include "VMUL2___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VMUL2__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMUL2* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMUL2___024root                TOP;

    // CONSTRUCTORS
    VMUL2__Syms(VerilatedContext* contextp, const char* namep, VMUL2* modelp);
    ~VMUL2__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
