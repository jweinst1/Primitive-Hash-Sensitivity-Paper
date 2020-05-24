#ifndef HASH_FUNCTIONS_H
#define HASH_FUNCTIONS_H

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

size_t hash_djb2(const char* bytes, size_t size);

size_t hash_xo1(const char* bytes, size_t size);

size_t hash_zr7(const char* bytes, size_t size);

#endif // HASH_FUNCTIONS_H