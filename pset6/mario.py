from cs50 import get_int

while True:
    n =  get_int("Number: ")
    if n >= 1:
        break

# Print out this many rows
for i in range(n):

    # Print out this many columns
    for j in range(n - i - 1):
        print(" ", end="")
        for k in range(j < 2 + i):
             print("#", end="")
    print()


# int main(void)
# {
#     int height;
#     do
#     {
#         printf("How many steps will Mario climb?\n");
#         height = get_int(); // User inputs steps
#     }
#     while (height < 0 || height > 23); // Validate steps

#     for (int i = 0; i < height; i++) // Loop line counter
#     {


#         for (int x = 0; x < height - i - 1; x++) //Loop decreasing spaces
#         {
#             printf(" ");
#         }

#         for (int y = 0; y < 2 + i; y++) // Loop increasing #'s'
#         {
#             printf("#");
#         }

#         printf("\n");
#     }
# }