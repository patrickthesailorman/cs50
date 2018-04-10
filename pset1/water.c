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

////////////////////////////////////////////////////////////////////////
// PR MP
// I like how minimal the code is and also it gets the job done.
// You also went out of your way to add some personal touches to the assignment.
// The comments are straight forward and understandable.
// One advice I would give is to assign your variables more descriptive names/identifiers,
// which in turn would help make your code even easier to follow.