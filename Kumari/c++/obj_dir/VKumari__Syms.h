// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKUMARI__SYMS_H_
#define VERILATED_VKUMARI__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VKumari.h"

// INCLUDE MODULE CLASSES
#include "VKumari___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VKumari__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VKumari* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VKumari___024root              TOP;

    // CONSTRUCTORS
    VKumari__Syms(VerilatedContext* contextp, const char* namep, VKumari* modelp);
    ~VKumari__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
