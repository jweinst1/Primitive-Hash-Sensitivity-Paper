#ifndef CORE_OUTPUT_TYPES_H
#define CORE_OUTPUT_TYPES_H

#include <stdlib.h>

typedef struct {
    size_t data[1];
} output_64_t;

typedef struct {
    size_t data[2];
} output_128_t;

typedef struct {
    size_t data[4];
} output_256_t;

typedef struct {
    size_t data[8];
} output_512_t;


#endif // CORE_OUTPUT_TYPES_H