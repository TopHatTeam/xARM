/*
AUTHOR: TOPHATGAMES(ANDREW CONNER SKATZES)
DESCRIPTION: ARM REGISTERS
*/

#ifndef X_REGISTERS_HPP
#define X_REGISTERS_HPP

#define u64 uint

#include <iostream>
#include <array>
#include <vector>
#include <cstdint>
#include <cstdlib>
#include <cstdio>

using namespace std;

namespace xARM
{
    /*
    * x0 - x7   = pass the first 8 function parameters
    * x8        = Indirect result location
    * x9        = Temporary scratch register
    * x10 - x11 = Temporary registers
    * 
    */
    static constexpr const char* ARM64_GPR_NAME[31] =
    {
        "x0", "x1", "x2", "x3", "x4", "x5", "x6", "x7",
        "x8", "x9", "x10","x11","x12","x13","x14","x15",
        "x16","x17","x18","x19","x20","x21","x22","x23",
        "x24","x25","x26","x27","x28","x29","x30"
    };
    enum syscall_linux : u64
    {
        SLIN_READ       = 63,
        SLIN_WRITE      = 64,
        SLIN_
    };
}

namespace x86_x64
{
    enum syscalls_linux: u64
    {
        SLIN_READ       = 0,
        SLIN_WRITE      = 1,
        SLIN_OPEN       = 2,
        SLIN_CLOSE      = 3,
        SLIN_GETPID     = 39,
        SLIN_FORK       = 57,
        SLIN_EXECVE     = 59,
        SLIN_EXIT       = 60,
    };
}

#endif 
