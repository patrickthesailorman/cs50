#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main(void)
{
    // int n;
    string name;
    do
    {
        printf("Enter your name:\n");
        name = get_string(); // Get User input
    }
    while (name == NULL);

    // Iterate over chars of string
    for (int i = 0, n = strlen(name); i < n; i ++)
    {
        if (name[i] == name[0]) // Capitalize first initial
        {
            printf("%c", toupper(name[i]));
        }
        else if (name[i] == ' ') // get next character after space and capitalize
        {
            i ++;
            printf("%c", toupper(name[i]));
        }
    }
    printf("\n");
}
