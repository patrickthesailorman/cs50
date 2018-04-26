// Helper functions for music

#include <cs50.h>
#include <stdlib.h>
#include <string.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    for (int i = 0, j = strlen(fraction); i < j; i++)
    {
    int numerator = atoi(fraction[0]);
    int denominator = atoi(fraction[2]);

    switch(denominator)
    {
      case 8 : // '1/8'
         return numerator;
         break;
      case 4 : // '1/4'
         return numerator * 2;
         break;
      case 2 : // '1/2'
         return numerator * 4;
         break;

      default :
         return 0;
    }
    }
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    if (strlen(note) == 3)
    {
        int key = note[0];
        char accidental = note[1];
        int octave =note[2];
    }
    else
    {

        key = note[0];
        octave = note[1];
    }
    switch(note)
    {
        case 'A4':
          return 440;
          break;
        case 'A5':
          return math.round(440 * 2);
          break;
    }
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    int rest_compare = strcmp(s, "");

    if (rest_compare == 0)
    {
    return true;
    }
    else
    {
    return false;
    }
}
