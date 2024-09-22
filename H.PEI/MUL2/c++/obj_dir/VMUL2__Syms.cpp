// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VMUL2__pch.h"
#include "VMUL2.h"
#include "VMUL2___024root.h"

// FUNCTIONS
VMUL2__Syms::~VMUL2__Syms()
{
}

VMUL2__Syms::VMUL2__Syms(VerilatedContext* contextp, const char* namep, VMUL2* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(529);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
