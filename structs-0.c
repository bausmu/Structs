/**
 *
 *
 * structs-0.c
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
#include "structs.h"

int main (void)
{
    eruption eruptions[ERUPTIONS];
    printf("\n\n============Ten Significant Worldwide Historic Eruptions============\n\n");

    // prompt user for information
    for (int i = 0; i < ERUPTIONS; i++)
    {
        printf("\n\nEnter event title:\n\n"); eruptions[i].event = GetString();
        printf("\n\nEnter event location name:\n\n"); eruptions[i].Location = GetString();
        printf("\n\nEnter modern day Country of event location:\n\n"); eruptions[i].Country = GetString();
        printf("\n\nEnter modern day Continent:\n\n"); eruptions[i].Continent = GetString();
        printf("\n\nEnter how many years since occurance event:\n\n"); eruptions[i].years_ago = GetFloat();
        printf("\n\nEnter event magnitude:\n\n"); eruptions[i].vi_mag = GetFloat();
        printf("\n\nEnter total Total Mass Ejecta emitted (in km^3):\n\n"); eruptions[i].TME_km3 = GetFloat();
        printf("\n\nEnter Geologic Period:\n\n"); eruptions[i].Geo_Period = GetString();
        printf("\n\nEnter Geologic Epoch:\n\n"); eruptions[i].Geo_Epoch = GetString();
        printf("\n\n------Next Event------\n\n");
    }
    printf("\n\n.\n.\n.\n.\n.\n.\n\n"); // adding space
    
    // Printout of each event
    for (int i = 0; i < ERUPTIONS; i++)
    {
        printf("\n========== Eruption # %i: %s==========\n\n\n\n", i + 1, eruptions[i].event);
        printf("Years ago: %.0f\n", eruptions[i].years_ago);
        printf("Location: %s, %s, %s\n", eruptions[i].Location, eruptions[i].Country, eruptions[i].Continent);
        printf("Period: %s\n", eruptions[i].Geo_Period);
        printf("Epoch: %s\n", eruptions[i].Geo_Epoch); 
        printf("Magnitude: %.1f\n", eruptions[i].vi_mag);
        printf("Total Mass Ejecta emitted: %.1f\n", eruptions[i].TME_km3);
        printf("\n\n\n");
    }
    
    // creating a CSV file (for future usage)
    FILE* file = fopen("eruptions.csv", "w");
    
    if (file != NULL)
    {
    
        for (int i = 0; i < ERUPTIONS; i++)
        {
            fprintf(file, "%s, %f, %f, %f, %s, %s, %s, %s, %s\n", eruptions[i].event,  
            eruptions[i].years_ago, eruptions[i].vi_mag, eruptions[i].TME_km3, 
            eruptions[i].Geo_Period, eruptions[i].Geo_Epoch, eruptions[i].Location,
            eruptions[i].Country, eruptions[i].Continent);
        }
        fclose(file);
    }
    
    // freeing up memeory
    for (int i = 0; i < ERUPTIONS; i++)
    {
        free(eruptions[i].event);
        free(eruptions[i].Geo_Period);
        free(eruptions[i].Geo_Epoch);
        free(eruptions[i].Location);
        free(eruptions[i].Country);
        free(eruptions[i].Continent);
    }
}

        
    
        
