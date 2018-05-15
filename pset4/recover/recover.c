// File to recover .jpeg data
#include <stdio.h>

#include "card.raw"

int main(int argc, char *argv[])
{
    // ensure proper usage
    if (argc != 2)
    {
        fprintf(stderr, "Usage: ./recover image\n");
        return 1;
    }
    FILE *file = fopen(argv[1], "r");

    if( file == NULL) // Check for NULL
    {
        fprintf(stderr, "Error: NULL\n");
        return 1;
    }

    char buffer[512];
    char filename[50];
    int x = 1;



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