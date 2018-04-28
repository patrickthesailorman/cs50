
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
            int octave =note[2];

        switch(note[0])
        {
            case 'C':
            return 440 / pow(2.0, (9.0 / 12.0));
            break;

            case 'D':
            return 440 / pow(2.0, (7.0 / 12.0));
            break;

            case 'E':
            return 440 / pow(2.0, (5.0 / 12.0));
            break;

            case 'F':
            return 440 / pow(2.0, (4.0 / 12.0));
            break;

            case 'G':
            return 440 / pow(2.0, (2.0 / 12.0));
            break;

            case 'A':
            if (note[1] == '#' )
            {
              return 440;
            }
            return 440 * pow(2.0, (1.0 / 12.0));
              break;
            case 'B':
              // return math.round(440 * 2);
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
