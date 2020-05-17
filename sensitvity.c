#include <stdio.h>
#include <limits.h>
#include <stdlib.h>



/**
 * Counts the set bits in some output aligned at 64 bits
 */
size_t digest_set_bits(const size_t* bits, size_t blocks)
{
    size_t total = 0;
    while (blocks--) {
        size_t cur = *bits;
        while (cur) {
            cur &= cur - 1;
            ++total;
        }
        ++bits;
    }
    return total;
}