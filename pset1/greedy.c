#include <cs50.h>
#include <stdio.h>
#include <math.h>

// take input as change owed and return minimum of coins needed.

int main(void)
{
    float change;
    int coins = 0;
    int cents;
    do
    {
        printf("How much change is owed?\n$");
        change = get_float(); // User input
    }
    while (change < 0.00); // Validate input is a float

    cents = round(change * 100); // Convert float to int

    while (cents >= 25) // Will it take a quater, how many
    {
        coins ++;
        cents -= 25;
    }
    while (cents >= 10) // Will it take a dime, how many
    {
        coins ++;
        cents -= 10;
    }
    while (cents >= 5) // Will it take a nickel, how many
    {
        coins ++;
        cents -= 5;
    }
    while (cents >= 1) // Remainder in pennies
    {
        coins ++;
        cents -= 1;
    }
    printf("Total coins:%i\n", coins); // return total number of coins used to make change
}

//////////////////////////////////////////////////////////////////////
// PR Manny
// Code is indented well, everything flows and is easy to follow
// Im sure there exist a faster way to iterate through this code,
// but I have no idea what that way is yet.
// Every WHILE statement is minimal and procise.
// You have good names/sytax for your variables and just makes the
// code concise.