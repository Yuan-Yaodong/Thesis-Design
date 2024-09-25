// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VKumar__pch.h"
#include "VKumar.h"
#include "VKumar___024root.h"

// FUNCTIONS
VKumar__Syms::~VKumar__Syms()
{
}

VKumar__Syms::VKumar__Syms(VerilatedContext* contextp, const char* namep, VKumar* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(325);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
