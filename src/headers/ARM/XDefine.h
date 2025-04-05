/*
AUTHOR: TOPHATGAMES(ANDREW CONNER SKATZES)
COPYRIGHT: 2025
LICENSE: GNU GENERAL PUBLIC LICENSE VERSION 3
DESCRIPTION: This file contains the definition of various unicodes and
             typedef for example unsigned integer 64 bit as u64. etc
*/

#ifndef X_DEFINE_H
#define X_DEFINE_H

#include <iostream>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdarg>
#include <cassert>
#include <cmath>
#include <climits>
#include <cfloat>
#include <ctime>
#include <string>
#include <sstream>
#include <iomanip>
#include <vector>
#include <array>
#include <list>


#define u64 uint64_t
#define u32 uint32_t
#define u16 uint16_t
#define u8  uint8_t
#define s64 int64_t
#define s32 int32_t
#define s16 int16_t
#define s8  int8_t

typedef struct 
{
    uint64_t low;
    uint64_t high;
} uint128_t;

namespace xARM
{
    // Define the ARM64 GPR (General Purpose Register) structure
    struct ARM64_REGISTERS
    {
        u64 x0, x1, x2, x3, x4, x5, x6, x7;
        u64 x8, x9, x10, x11, x12, x13, x14;
        u64 x15, x16, x17, x18, x19, x20, x21;
        u64 x22, x23, x24, x25, x26, x27, x28;
        u64 x29, x30;
        u64 sp = 0x00000000; // Stack Pointer
        u64 pc = 0x00000000; // Program Counter
        uint128_t v[32]; // Vector registers
    };

    struct PSTATE_FLAGS
    {
        bool N = false; // Negative flag
        bool Z = false; // Zero flag
        bool C = false; // Carry flag
        bool V = false; // Overflow flag
    };

    class xARM
    {
    private: 
        xARM() = default; // Private constructor to prevent instantiation
        ~xARM() = default; // Private destructor

    public:

        /*
        *@brief read_X function to read the value of a register
        *@param regs ARM64_REGISTERS structure containing the register values
        *@param index index of the register to read
        *@return value of the register at the specified index
        *@note this function is used to read the value of a register
        */
        inline u64 read_X(const ARM64_REGISTERS& regs, int index);

        /*
        *@brief add instruction for 128-bit float 
        *@param a first operand
        *@param b second operand
        *@return result of a + b
        *@note this is a simple add instruction for 128-bit float
        */
        inline uint128_t add128(uint128_t a, uint128_t b);

        /*
        *@brief sub instruction for 128-bit float
        *@param a first operand
        *@param b second operand
        *@return result of a - b
        *@note this is a simple sub instruction for 128-bit float
        */
        inline uint128_t sub128(uint128_t a, uint128_t b);

        /*
        *@brief multiply instruction for 128-bit float
        *@param a first operand
        *@param b second operand
        *@return result of a * b
        *@note this is a simple multiply instruction for 128-bit float
        */
        inline uint128_t mul128(uint128_t a, uint128_t b);
    };
}


#endif // X_DEFINE_H
