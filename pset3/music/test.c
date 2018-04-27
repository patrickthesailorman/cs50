
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int main(void)
{
   string fraction = get_string("fraction\n");

    for (int i = 0, j = strlen(fraction); i < j; i++)
    {
    int numerator = fraction[0];
    int denominator = fraction[2];

    switch(denominator)
    {
      case 56 : // '1/8'
         return numerator - '0';
         break;
      case 52 : // '1/4'
         printf("%i\n", (numerator - '0') * 2);
         return (numerator - '0') * 2;
         break;
      case 50 : // '1/2'
        printf("%i\n", (numerator - '0') * 4);
         return (numerator - '0') * 4;
         break;

      default :
         return 0;
    }
    }

}
