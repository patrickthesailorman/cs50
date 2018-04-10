#include <cs50.h>
#include <stdio.h>

// Takes an input of number of steps and returns staircase

int main(void)
{
    int height;
    do
    {
        printf("How many steps will Mario climb?\n");
        height = get_int(); // User inputs steps
    }
    while (height < 0 || height > 23); // Validate steps

    for (int i = 0; i < height; i++) // Loop line counter
    {


        for (int x = 0; x < height - i - 1; x++) //Loop decreasing spaces
        {
            printf(" ");
        }

        for (int y = 0; y < 2 + i; y++) // Loop increasing #'s'
        {
            printf("#");
        }

        printf("\n");
    }
}

////////////////////////////////////////////////////////////
// PR Manny
// The code is crisp, clean, and properly indented.
// It is easy to follow, specifically by having the comments side by side
// next to the for loops makes it legible doesn't clutter the code.
// The first for loop is comprehensible but after that,
// once the INT 'I' and INT 'Y' is used; it maybe a little harder to understand
// for someone new. It should work in your benifit to name those variables
// after something you would like to store within them.