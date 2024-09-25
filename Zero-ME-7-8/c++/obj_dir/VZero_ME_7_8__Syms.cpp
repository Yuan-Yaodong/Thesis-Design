// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VZero_ME_7_8__pch.h"
#include "VZero_ME_7_8.h"
#include "VZero_ME_7_8___024root.h"

// FUNCTIONS
VZero_ME_7_8__Syms::~VZero_ME_7_8__Syms()
{
}

VZero_ME_7_8__Syms::VZero_ME_7_8__Syms(VerilatedContext* contextp, const char* namep, VZero_ME_7_8* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(377);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
