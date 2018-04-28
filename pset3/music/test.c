
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main(void)
{
    string note = get_string("note\n");
    {
        if (strlen(note) == 3)
        {
            char key = note[0];
            char accidental = note[1];
            int octave = note[2];

            double frequency;

            switch (note[0])
            {
                case 'C':
                    if (note[1] == '#')
                    {
                        frequency = 440 / pow(2.0, (8.0 / 12.0));
                    }
                    else if (note[1] == 'b')
                    {
                        frequency = 440 / pow(2.0, (10.0 / 12.0));
                    }
                    frequency = 440 / pow(2.0, (9.0 / 12.0));
                    break;

                case 'D':
                    if (note[1] == '#')
                    {
                        frequency = 440 / pow(2.0, (6.0 / 12.0));
                    }
                    else if (note[1] == 'b')
                    {
                        frequency = 440 / pow(2.0, (8.0 / 12.0));
                    }
                    frequency = 440 / pow(2.0, (7.0 / 12.0));
                    break;

                case 'E':
                    if (note[1] == '#')
                    {
                        frequency = 440 / pow(2.0, (4.0 / 12.0));
                    }
                    else if (note[1] == 'b')
                    {
                        frequency = 440 / pow(2.0, (6.0 / 12.0));
                    }
                    frequency = 440 / pow(2.0, (5.0 / 12.0));
                    break;

                case 'F':
                    if (note[1] == '#')
                    {
                        frequency = 440 / pow(2.0, (3.0 / 12.0));
                    }
                    else if (note[1] == 'b')
                    {
                        frequency = 440 / pow(2.0, (5.0 / 12.0));
                    }
                    frequency = 440 / pow(2.0, (4.0 / 12.0));
                    break;

                case 'G':
                    if (note[1] == '#')
                    {
                        frequency = 440 / pow(2.0, (3.0 / 12.0));
                    }
                    else if (note[1] == 'b')
                    {
                        frequency = 440 / pow(2.0, (4.0 / 12.0));
                    }
                    frequency = 440 / pow(2.0, (2.0 / 12.0));
                    break;

                case 'A':
                    if (note[1] == '#')
                    {
                        frequency = 440 * pow(2.0, (1.0 / 12.0));
                    }
                    else if (note[1] == 'b')
                    {
                        frequency = 440 / pow(2.0, (1.0 / 12.0));
                    }
                    frequency = 440;
                    break;
                case 'B':
                    if (note[1] == '#')
                    {
                        frequency = 440 * pow(2.0, (3.0 / 12.0));
                    }
                    else if (note[1] == 'b')
                    {
                        frequency = 440 * pow(2.0, (1.0 / 12.0));
                    }
                    frequency = 440 * pow(2.0, (2.0 / 12.0));
                    break;
            }

            octave = atoi(note[2]);

            switch (octave)
            {
                case 5:
                    frequency = frequency * 2;
                    break;
                case 6:
                    frequency = frequency * 4;
                    break;
                case 7:
                    frequency = frequency * 6;
                    break;
                case 8:
                    frequency = frequency * 8;
                    break;
                case 3:
                    frequency = frequency / 2;
                    break;
                case 2:
                    frequency = frequency / 4;
                    break;
                case 1:
                    frequency = frequency / 6;
                    break;
            }
        }
        else
        {

            key = note[0];
            octave = note[1];
        }

    }

}
