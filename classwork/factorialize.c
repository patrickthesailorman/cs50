#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

long long factorialize(int input);

int main(void)
{
    long long input = get_long_long("enter a positive number: ");

    factorialize(input);
}
    long long factorialize(num)
    {
      long long output = 1;
      while (num > 1)
      {
        output *= num;
        num--;
      }
      printf("%lli\n", output);
      return 0;
    }
