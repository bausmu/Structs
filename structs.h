#include <cs50.h>

typedef struct eruption
{
    char* event;
    float years_ago;
    float vi_mag;
    float TME_km3;
    char* Geo_Era;
    char* Geo_Period;
    char* Geo_Epoch;
    char* Location;
    char* Country;
    char* Continent;
    struct eruption* next;
}eruption;

