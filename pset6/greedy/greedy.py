from cs50 import get_float

while True:
    change = get_float("How much change is owed?\n$")
    if change > 0.00:
        break

cents = round(change * 100)  # Convert float to int
coins = 0

# Will it take a quater, how many
while cents >= 25:
    coins += 1
    cents -= 25

# Will it take a dime, how many
while cents >= 10:
    coins += 1
    cents -= 10

# Will it take a nickel, how many
while cents >= 5:
    coins += 1
    cents -= 5

# Remainder in pennies
while cents >= 1:
    coins += 1
    cents -= 1

# return total number of coins used to make change
print(f"Total coins: {coins}")
