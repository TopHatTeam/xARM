/*
AUTHOR: TOPHATGAMES(ANDREW CONNER SKATZES)
COPYRIGHT: 2025
LICENSE: GNU GENERAL PUBLIC LICENSE VERSION 3
DESCRIPTION: This file contains the definition of various unicodes and
             typedef for example unsigned integer 64 bit as u64. etc
*/

#include "headers/ARM/XDefine.h"
using namespace std;

u64 xARM::xARM::read_X(const ARM64_REGISTERS& regs, int index)
{
    if (index < 0 || index > 31) // check for vaild index
    {
        cerr << "ERROR: Invalid index: " << index << endl;
        return EXIT_FAILURE; // EXIT_FAILURE = 1
    }
    const u64* regPtr = reinterpret_cast<const u64*>(&regs);
    return regPtr[index];
}

uint128_t xARM::xARM::add128(uint128_t a, uint128_t b)
{
    uint128_t result;
    result.low = a.low + b.low;
    result.high = a.high + b.high + (result.low < a.low);
    return result;
}

uint128_t xARM::xARM::sub128(uint128_t a, uint128_t b)
{
    uint128_t result; 
    result.low = a.low - b.low;
    result.high = a.high - b.high - (result.low > a.low);
    return result;
}

uint128_t xARM::xARM::mul128(uint128_t a, uint128_t b)
{
    uint128_t result = {0, 0};

    // multiply lower 64 bits
    uint64_t low_low = a.low * b.low;

    // cross-products 
    uint64_t low_high = a.low * b.high;
    uint64_t high_low = a.high * b.low;

    // upper 64-bit product
    uint64_t high_high = a.high * b.high;

    // combine cross-products and carry
    uint64_t carry = 0;
    uint64_t mid = low_high + high_low;

    if (mid < low_high) // check for overflow
    {
        carry = 1;
    }

    result.low = low_low;
    result.high = high_high + carry + (mid >> 32);

    // Add lower half of mid to low and, whatever the fuck propagate carry
    uint64_t mid_low = (uint64_t)mid << 32;
    result.low += mid_low;
    if (result.low < mid_low) result.high++;

    return result;
}
