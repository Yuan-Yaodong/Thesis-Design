// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VMUL4__SYMS_H_
#define VERILATED_VMUL4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VMUL4.h"

// INCLUDE MODULE CLASSES
#include "VMUL4___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VMUL4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VMUL4* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VMUL4___024root                TOP;

    // CONSTRUCTORS
    VMUL4__Syms(VerilatedContext* contextp, const char* namep, VMUL4* modelp);
    ~VMUL4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
