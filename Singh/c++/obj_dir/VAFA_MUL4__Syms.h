// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VAFA_MUL4__SYMS_H_
#define VERILATED_VAFA_MUL4__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VAFA_MUL4.h"

// INCLUDE MODULE CLASSES
#include "VAFA_MUL4___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VAFA_MUL4__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VAFA_MUL4* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VAFA_MUL4___024root            TOP;

    // CONSTRUCTORS
    VAFA_MUL4__Syms(VerilatedContext* contextp, const char* namep, VAFA_MUL4* modelp);
    ~VAFA_MUL4__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
