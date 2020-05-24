#include "hash_functions.h"

#define SIZET_BITS (sizeof(size_t) * CHAR_BIT)

#define BIT_ROTATE_LEFT(x, n) ((x << n) | (x >> (64 - n)))

size_t hash_djb2(const char* bytes, size_t size)
{
    size_t base = 5381;
    while (*bytes && size--)
        base = (base << 5) + base + *bytes++;
    return base;
}

size_t hash_xo1(const char* bytes, size_t size)
{
    size_t base = *bytes + 8191;
    size_t i = 0;
    while (*bytes && (i < size))
        base = base ^ ((*bytes++) << (i++ % SIZET_BITS));
    return base;
}

size_t hash_zr7(const char* bytes, size_t size)
{
    size_t base = *bytes * 257;
    while (*bytes && size--)
        base = BIT_ROTATE_LEFT(base, 5) + (*bytes++ * 17);
    return base;
}