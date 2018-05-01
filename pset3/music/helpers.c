// Helper functions for music

#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#include "helpers.h"

// Converts a fraction formatted as X/Y to eighths
int duration(string fraction)
{
    for (int i = 0, j = strlen(fraction); i < j; i++)
    {
        int numerator = fraction[0]; // Get the numerator
        int denominator = fraction[2]; // Get the denominator
        int eighths; // Return value

        switch (denominator) // Math to return the result in eighths
        {
            case 56 : // '1/8'
                eighths = numerator - '0';
                break;
            case 52 : // '1/4'
                eighths = (numerator - '0') * 2;
                break;
            case 50 : // '1/2'
                eighths = (numerator - '0') * 4;
                break;

            default :
                return 0;
        }
        return eighths;
    }
    return 20; // return some value
}

// Calculates frequency (in Hz) of a note
int frequency(string note)
{
    int octave;

    {
        if (strlen(note) == 3) // if string contains accidental('#' or 'b') adjust character order for octave.
        {
            octave = note[2];
        }
        else
        {
            octave = note[1];
        }

        double frequency; // set frequency to double data type

        switch (note[0]) // Find the note for first character
        {
            case 67: // C
                frequency = 440.0 / pow(2.0, (9.0 / 12.0));
                break;

            case 68: // D
                frequency = 440.0 / pow(2.0, (7.0 / 12.0));
                break;

            case 69: // E
                frequency = 440.0 / pow(2.0, (5.0 / 12.0));
                break;

            case 70: // F
                frequency = 440.0 / pow(2.0, (4.0 / 12.0));
                break;

            case 71: // G
                frequency = 440.0 / pow(2.0, (2.0 / 12.0));
                break;

            case 65: // A
                frequency = 440.0;
                break;
            case 66: // B
                frequency = 440.0 * pow(2.0, (2.0 / 12.0));
                break;
        }

        if (note[1] == '#') // shift frequency for sharp or flat
        {
            frequency *=  pow(2.0, (1.0 / 12.0));
        }
        else if (note[1] == 'b')
        {
            frequency /= pow(2.0, (1.0 / 12.0));
        }


        switch (octave) // Shift frequncy for octave
        {
            case 53: // octave 5
                frequency = frequency * 2;
                break;
            case 54: // octave 6
                frequency = frequency * 4;
                break;
            case 55: // octave 7
                frequency = frequency * 8;
                break;
            case 56: // octave 8
                frequency = frequency * 16;
                break;
            case 51: // octave 3
                frequency = frequency / 2;
                break;
            case 50: // octave 2
                frequency = frequency / 4;
                break;
            case 49: // octave 1
                frequency = frequency / 8;
                break;
            case 48: // octave 0
                frequency = frequency / 16;
                break;
        }
        int freqHz = round(frequency); // round it off

        return freqHz;

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

/////////////////////////////////////////////////////////
// Good use of your naming conventions, it helps make
// your code easy to read and follow along.
// I like your use of the Switch statement and I
// see that you were able to use it twice in one
// function. I was afraid to try it but now I may
// steal your idea. Overall your code seems pretty
// minimal and well ordered.
