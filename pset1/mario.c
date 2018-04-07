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