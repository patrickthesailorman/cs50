// Helper functions for music

#include <cs50.h>
#include <string.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    int notelen = atoi(fraction)
    {
           switch(notelen) {
      case '1/8' :
         printf("%i", 1);
         break;
      case '1/4' :
         printf("%i", 2);
         break;
      case '3/8' :
         printf("%i", 3);
         break;
      case '1/2' :
         printf("%i", 4);
         break;
      default :
         printf("Invalid duration\n" );
   }

   printf("note length is  %i\n", notelen );

   return 0;
    }
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    // TODO
}

// Determines whether a string represents a rest
bool is_rest(string s)
{
    int rest_compare = strcmp(s, "")
    if (rest_compare == 0)
    {
    return true;
    }
    else
    {
    return false;
    }
}
