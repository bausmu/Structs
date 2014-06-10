#include <cs50.h>

typedef struct eruption
{
    char* event; // Title of eruption event
    char* Location; // Location
    char* Country; // Country
    char* Continent; // Continent
    float years_ago; // Years before present day (present day being 2014)
    float vi_mag; // Volcanic Index (VI) Magnitude
    float TME_km3; // Total Mass Ejected
    char* Geo_Period; // Geologic Time Period
    char* Geo_Epoch; // Geologic Epoch
    struct eruption* next;
}eruption;

