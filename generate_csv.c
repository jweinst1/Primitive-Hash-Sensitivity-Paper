#include "generate_csv.h"
#include <limits.h>

#ifndef CSV_DATA_ROWS
#define CSV_DATA_ROWS 1000000
#endif

#define __SIZET_BITS (sizeof(size_t) * CHAR_BIT)

static size_t _SEQ_SEED = 8191;

static size_t _get_next_seq(void)
{
    return _SEQ_SEED = ((_SEQ_SEED << 5) | (_SEQ_SEED >> (__SIZET_BITS - 5))) + 5381
}

static const char* LOCATION_LIST[] = {
    "Tokyo",
    "France",
    "Paris",
    "Hong Kong",
    "Madrid",
    "New York",
    "Venice",
    "Rome",
    "Phnom Penh",
    "Beijing",
    "Russia",
    "California",
    "Mexico",
    "Nigeria",
    "Kenya",
    "Macau",
    "Michigan",
    "Dubai",
    "Singapore",
    "Florida",
    "Bangkok",
    "Vietnam"
};

static const char* NAME_LIST[] = {
    "John",
    "Joe",
    "Beth",
    "James",
    "Joanne",
    "Henry",
    "Thomas",
    "Stacey",
    "Rebecca",
    "Simone",
    "Josh",
    "Paul",
    "Jessica",
    "James",
    "Tom",
    "Aaron"
};

static int _make_rand_age(int max) {
    return (int)_get_next_seq() % max;
}

static void _populate_csv_data(csv_data_t* csv)
{
    size_t total = 0;
    while (total < csv->size) {
        
    }
} 

csv_data_t* csv_data_new(size_t size)
{
    csv_data_t* csvdat = malloc(/*to do*/1);
    csvdat->size = size;
    csvdat->changes = 0;
    return csvdat;
}

void csv_data_del(csv_data_t* csv)
{
    free(csv->data);
    free(csv);
}