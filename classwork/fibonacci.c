#include <cs50.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int sumFibs(int num);

int main(void)
{
    int num = get_int("Enter a positive number: ");
    sumFibs(num);
    return 0;
}
    int sumFibs(num)
    {
      int currNumber = 1;
      int prevNumber = 0;
      int result = 0;

      while (currNumber <= num)
      {
            if (currNumber % 2 == !0)
            {
                result += currNumber;
            }

            currNumber += prevNumber;
            prevNumber = currNumber - prevNumber;
        }

        printf("%i\n", result);
        return 0;
    }