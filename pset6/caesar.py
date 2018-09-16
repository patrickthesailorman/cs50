from cs50 import get_int
from cs50 import get_string


# #include <cs50.h>
# #include <ctype.h>
# #include <stdio.h>
# #include <stdlib.h>
# #include <string.h>

# // caesars cipher

# int main(int argc, string argv[])
# {
#     char ct;
#     if (argc == 0 || argc < 2) // requires at least one argument to be the numerical key to cipher
#     {
#         printf("error");
#         return 1;
#     }
#     else
#     {
#         int k = atoi(argv[1]); // set key from string to integer
#         printf("plaintext: ");
#         string pt = get_string(); // prompts user for string to encrypt
#         printf("ciphertext: ");
#         for (int i = 0, n = strlen(pt); i < n; i++) // iterate through the string
#             if (isalpha(pt[i])) // check if character is alphabetic
#             {
#                 if (isupper(pt[i])) // preserve case of character
#                 {
#                     ct = (pt[i] - 'A' + k) % 26 + 'A'; // to ascii to alphabetic index
#                     printf("%c", ct);
#                 }
#                 else if (islower(pt[i]))
#                 {
#                     ct = (pt[i] - 'a' + k) % 26 + 'a';
#                     printf("%c", ct);
#                 }

#             }
#             else if (!isalpha(pt[i])) // includes special characters
#             {
#                 ct = pt[i];
#                 printf("%c", ct);
#             }

#     }
#     printf("\n");
# }