// File to recover .jpeg data
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// #include "card.raw"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover image\n");
        return 1;
    }
    typedef uint8_t BYTE;
    FILE *file = fopen(argv[1], "r");
    FILE *img = NULL;
    // char fileName[8]; //JPEG filename

    if(file == NULL) // Check for NULL
    {
        fprintf(stderr, "Error: NULL\n");
        return 1;
    }

    BYTE buffer[512];
    char filename[50]; //JPEG filename
    int x = 1; // JPEG filecounter

    // While not EOF
    while (feof(file) == 0) {
    fread(&buffer, 512, 1, file); // Iterate over a copy
    {
        // Find the first three bytes of JPEGs: 0xff 0xd8 0xff
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0) // last byte: 0xe0, 0xe1, 0xe2.....0xef
        {
            if (x != 0) {
                fclose(img);
            }
             // Open a new jpg file

            sprintf(filename, "%03i.jpg", x);
            // filename: char array to store resultant string
            img = fopen(filename, "w");
            x++; // Increment file count

            if (x != 0) {

                fwrite(buffer, 512, 1, img); // Write to file units of 512 B
            }

        }
        // else if(x = 1 && buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        // {
        //     x++;
        //     sprintf(filename, "%03i.jpg", x);
        //     // filename: char array to store resultant string
        //     FILE *img = fopen(filename, "w");

        //     fwrite(buffer, 512, 1, *img); // Write to file units of 512 B
        // }
        else if(buffer != 512)
        {
            fprintf("End of File!");
            return 3;
        }
    }
    // close current file and open new one IF THIS IS A JPEG && YOUVE FOUND A NEW ONE
fclose(*img);
fclose(*file);


    // Recall the possibility of slack space. odds are it’d been "zeroed" (i.e., filled with 0s)
    // find that the image contains 50 JPEGs.

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