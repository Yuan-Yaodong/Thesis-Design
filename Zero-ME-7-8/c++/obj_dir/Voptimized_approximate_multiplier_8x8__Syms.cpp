// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Voptimized_approximate_multiplier_8x8__pch.h"
#include "Voptimized_approximate_multiplier_8x8.h"
#include "Voptimized_approximate_multiplier_8x8___024root.h"

// FUNCTIONS
Voptimized_approximate_multiplier_8x8__Syms::~Voptimized_approximate_multiplier_8x8__Syms()
{
}

Voptimized_approximate_multiplier_8x8__Syms::Voptimized_approximate_multiplier_8x8__Syms(VerilatedContext* contextp, const char* namep, Voptimized_approximate_multiplier_8x8* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(305);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
