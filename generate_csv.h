#ifndef GENERATE_CSV_H
#define GENERATE_CSV_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char* data;
    size_t changes;
} csv_data_t;


csv_data_t* csv_data_new(void);

void csv_data_del(csv_data_t* csv);

#endif