#include <cs50.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main(void)
{
    int octave;
    string note = get_string("note\n");
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
