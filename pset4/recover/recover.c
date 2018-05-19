// File to recover .jpeg data
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define SIZE 512

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover image\n");
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    FILE *img = NULL; //JPEG file

    if (file == NULL) // Check for NULL
    {
        fprintf(stderr, "Error: NULL\n");
        return 1;
    }
    unsigned char buffer[SIZE];

    char filename[8]; //JPEG filename
    int x = 0; // JPEG filecounter

    while (fread(&buffer, SIZE, 1, file) == 1)
    {
        // Iterate over a copy
        // Find the first three bytes of JPEGs: 0xff 0xd8 0xff
        if (buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff
            && (buffer[3] & 0xf0) == 0xe0) // last byte: 0xe0, 0xe1, 0xe2.....0xef
        {
            if (x != 0)
            {
                fclose(img);
            }
            // Open a new jpg file
            sprintf(filename, "%03i.jpg", x);
            // filename: char array to store resultant string
            img = fopen(filename, "w");
            x++; // Increment file count
        }

        if (x != 0)
        {
            fwrite(&buffer, SIZE, 1, img); // Write to file units of 512 B
        }

        // open card file
        // repeat until end of card
        //  read 512 bytes into a buffer
        //  start of a new JPEG?
        //      Yes =>
        //      No =>
        // Already found a JPEG?
        //      Yes =>
        //      No =>
        // Close any remaining files

    }
    // close current files
    fclose(img);
    fclose(file);
    return 0;
}