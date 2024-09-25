// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VAFA_MUL4__pch.h"
#include "VAFA_MUL4.h"
#include "VAFA_MUL4___024root.h"

// FUNCTIONS
VAFA_MUL4__Syms::~VAFA_MUL4__Syms()
{
}

VAFA_MUL4__Syms::VAFA_MUL4__Syms(VerilatedContext* contextp, const char* namep, VAFA_MUL4* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(441);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
