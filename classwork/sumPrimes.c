#include <cs50.h>
#include <stdio.h>
#include <math.h>

bool isPrime(int num);
int sumPrimes(int num);

int main(void)
{
   int num = get_int("Enter a positive number: ");
   isPrime(num);
   sumPrimes(num);
}

    // Check numbers 2 through input - 1
    // Check if input is divisible by number
    // Not prime (return false)
    // If not divisible
    // Repeat with next number
    // Is Prime (return true)

    bool isPrime(int num) {
      for(int n = 2; n < num; n++) {
     if (num % n == 0) {
       return false;
      }
     }
      return true;
    }
    // Running total = 0
    // Start with number 2 up to and including 10
    // 	Check if Prime => function: isPrime()
    // 	 	Store 2
    // Repeat with next number
    // 	else not prime
    // 		Repeat with next number
    // Return running total.

    int sumPrimes(num)
    {
      int sum = 2;
      for(int n = 3; n <= num; n++)
      {
        if (isPrime(n))
        {
          sum += n;
        }
       }
      printf("%i\n", sum);
      return 0;
    }