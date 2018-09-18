from cs50 import get_int
from cs50 import get_string
import cs50
import sys

# caesars cipher

# def main(argv):
key = int(sys.argv[1])
# key = get_int("enter a number(key) between 3 and 26: ") # set key from string to integer
# while key == 0 or key < 2: # requires at least one argument to be the numerical key to cipher
#         print("error")


plainText = get_string("plaintext: ") # prompts user for string to encrypt
ciphertext = []

for c in range(len(plainText)): # iterate through each character
    if plainText[c].isalpha(): # check if character is alphabetic
        if plainText[c].isupper(): # preserve case of character
             cipherText = int(plainText[c].ord('A') + key)+ chr('A') # to ascii to alphabetic index
             print("%s", cipherText)
        elif plainText[c].islower():
            cipherText = int(plainText[c].ord('a') + key) + chr('a')
            print("%s", cipherText)
    elif not plainText[c].isalpha(): # includes special characters
         cipherText = plainText[c];
         print("%s", cipherText);
print("Encrpyted: ", ciphertext)
print("\n");

# if __name__ == "__main__":
#    main(argv[1])






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