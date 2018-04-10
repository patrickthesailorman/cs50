#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main (void)
{
 do
 {
    printf ("Enter Name:\n"); // Get User input
     string name = get_string("Name: ");
 }
    while (name != NULL);

     // Iterate over chars of string
     for (int i = 0; n < strlen(name), i < n; i ++)
     {
      int n = 0;
       while (name[n] = ' ')
       {
        n++;
       }

        printf("%c%c%c\n", toupper(name[0]), toupper(name[' '' + 1]), toupper(name [' ' + 1]));
     }
}