// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSABETZADEH__SYMS_H_
#define VERILATED_VSABETZADEH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSabetzadeh.h"

// INCLUDE MODULE CLASSES
#include "VSabetzadeh___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VSabetzadeh__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSabetzadeh* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSabetzadeh___024root          TOP;

    // CONSTRUCTORS
    VSabetzadeh__Syms(VerilatedContext* contextp, const char* namep, VSabetzadeh* modelp);
    ~VSabetzadeh__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
