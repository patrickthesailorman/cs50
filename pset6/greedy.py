from cs50 import get_float

# while True:
change = get_float("How much change is owed?\n$")
    # if change <= 0.00:
    #     break

cents = round(change * 100) # Convert float to int
coins = 0

# Will it take a quater, how many
if cents >= 25:
    coins +=1
    cents -= 25

# Will it take a dime, how many
elif cents >= 10:
    coins += 1
    cents -= 10

# Will it take a nickel, how many
elif cents >= 5:
    coins += 1
    cents -= 5

# Remainder in pennies
elif cents >= 1:
    coins += 1
    cents -= 1

# return total number of coins used to make change
    print(f"Total coins: {coins}")

# #include <cs50.h>
# #include <stdio.h>
# #include <math.h>

# // take input as change owed and return minimum of coins needed.

# int main(void)
# {
#     float change;
#     int coins = 0;
#     int cents;
#     do
#     {
#         printf("How much change is owed?\n$");
#         change = get_float(); // User input
#     }
#     while (change < 0.00); // Validate input is a float

#     cents = round(change * 100); // Convert float to int

#     while (cents >= 25) // Will it take a quater, how many
#     {
#         coins ++;
#         cents -= 25;
#     }
#     while (cents >= 10) // Will it take a dime, how many
#     {
#         coins ++;
#         cents -= 10;
#     }
#     while (cents >= 5) // Will it take a nickel, how many
#     {
#         coins ++;
#         cents -= 5;
#     }
#     while (cents >= 1) // Remainder in pennies
#     {
#         coins ++;
#         cents -= 1;
#     }
#     printf("Total coins:%i\n", coins); // return total number of coins used to make change