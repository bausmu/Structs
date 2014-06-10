/**
 *
 *
 * structs.h
 * 
 * Header file for structs-0.c
 * 
 * This program is a modified and augmented version of the Professor Malan's 
 * example from CS50, except with a much larger data structure.  This program
 * will generate a basic CSV file, which will be used in a future program to
 * experiment with filling a data structure from information from a CSV file.
 *
 * The information intended to be entered when this program is ran was obtained
 * from Wikipedia searches, and pertain to 10 historic major volcanic eruptions:
 * 
 * 1. Toba Catastrophe
 * 2. Huckleberry Ridge Tuff - Yellowstone
 * 3. Fish Canyon Tuff - La Garita Caldera
 * 4. Pacana Eruption
 * 5. Oruanui Eruption - Lake Taupo
 * 6. Lava Creek Tuff - Yellowstone
 * 7. Cerro Galan Eruption
 * 8. Hatepe Eruptuion of 180 C.E. - Lake Taupo
 * 9. Mount Tambora Eruption of 1815 C.E.
 * 10. Krakatoa Eruption of 1883 C.E.
 * 
 *
**/
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define ERUPTIONS 10


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

