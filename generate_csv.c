#include "generate_csv.h"

#ifndef CSV_DATA_ROWS
#define CSV_DATA_ROWS 1000000
#endif

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
    "Josh"
};

csv_data_t* csv_data_new(void)
{
    csv_data_t* csvdat = malloc(/*to do*/1);
    return csvdat;
}

void csv_data_del(csv_data_t* csv)
{
    free(csv->data);
    free(csv);
}