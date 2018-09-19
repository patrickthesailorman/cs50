from cs50 import get_int

while True:
    n = get_int("Number: ")
    if n >= 0 and n < 24:
        break

# Print out this many rows
for i in range(n):
    # Print out this many columns
    for j in range(n - i - 1):
        print(" ", end="")
    for k in range(2 + i):
        print("#", end="")
    print()
