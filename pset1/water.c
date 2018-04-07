#include <cs50.h>
#include <stdio.h>
// Takes input in minutes and converts to bottles of water used
int main(void)
{
    int n;
    do
    {
        printf("How many minutes is your shower?\n");
        n = get_int(); // User inputs minutes
    }
    while (n < 0); // Validate minutes

    int x = n * 12; // Bottles of Water

    printf("Your %i minute shower, uses %i bottles of water\n", n, x);
}