#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "structs.h"

#define ERUPTIONS 10

int main (void)
{
    eruption eruptions[ERUPTIONS];
    printf("\n\n============Ten Significant Worldwide Historic Eruptions============\n\n");

    // prompt user for information
    for (int i = 0; i < ERUPTIONS; i++)
    {
        printf("\n\nEnter event title:\n\n"); eruptions[i].event = GetString();
        printf("\n\nEnter how many years since occurance event:\n\n"); eruptions[i].years_ago = GetFloat();
        printf("\n\nEnter event magnitude:\n\n"); eruptions[i].vi_mag = GetFloat();
        printf("\n\nEnter total Total Mass Ejecta emitted (in km^3):\n\n"); eruptions[i].TME_km3 = GetFloat();
        printf("\n\nEnter Geologic Era:\n\n"); eruptions[i].Geo_Era = GetString();
        printf("\n\nEnter Geologic Period:\n\n"); eruptions[i].Geo_Period = GetString();
        printf("\n\nEnter Geologic Epoch:\n\n"); eruptions[i].Geo_Epoch = GetString();
        printf("\n\nEnter event location name:\n\n"); eruptions[i].Location = GetString();
        printf("\n\nEnter modern day Country of event location:\n\n"); eruptions[i].Country = GetString();
        printf("\n\nEnter modern day Continent:\n\n"); eruptions[i].Continent = GetString();
        printf("\n\n------Next Event------\n\n");
    }
    printf("\n\n.\n.\n.\n.\n.\n.\n\n"); // adding space
    
    // Printout of each event
    for (int i = 0; i < ERUPTIONS; i++)
    {
        printf("========== Eruption # %i: %s==========\n\n\n\n", i, eruptions[i].event);
        printf("Years ago: %.3f\n", eruptions[i].years_ago);
        printf("Era: %s\n", eruptions[i].Geo_Era);
        printf("Period: %s\n", eruptions[i].Geo_Period);
        printf("Epoch: %s\n", eruptions[i].Geo_Epoch);
        printf("Location: %s, %s, %s\n", eruptions[i].Location, eruptions[i].Country, eruptions[i].Continent);
        printf("Magnitude: %.2f\n", eruptions[i].vi_mag);
        printf("Total Mass Ejecta emitted: %.2f\n", eruptions[i].TME_km3);
        printf("\n\n\n");
    }
    
    // creating a CSV file (for future usage)
    FILE* file = fopen("eruptions.csv", "w");
    
    if (file != NULL)
    {
    
        for (int i = 0; i < ERUPTIONS; i++)
        {
            fprintf(file, "%s, %f, %f, %f, %s, %s, %s, %s, %s, %s\n", eruptions[i].event, eruptions[i].years_ago, 
            eruptions[i].vi_mag, eruptions[i].TME_km3, eruptions[i].Geo_Era, eruptions[i].Geo_Period,
            eruptions[i].Geo_Epoch, eruptions[i].Location, eruptions[i].Country, eruptions[i].Continent);
        }
        fclose(file);
    }
    
    // freeing up memeory
    for (int i = 0; i < ERUPTIONS; i++)
    {
        free(eruptions[i].event);
        free(eruptions[i].Geo_Era);
        free(eruptions[i].Geo_Period);
        free(eruptions[i].Geo_Epoch);
        free(eruptions[i].Location);
        free(eruptions[i].Country);
        free(eruptions[i].Continent);
    }
}

        
    
        
