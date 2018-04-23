#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vigenere encryption

// int kw_check(string input)
//     {
//         int i = 0;
//         while (input[i])
//         {
//         if (!isalpha(input[i]))
//         {
//             // return false if non-alpha character

//             return 0;
//         }
//         toupper([i]);
//         i++;
//         }
//         // return true if only letters
//         return 1;
//     }

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("usage:");
        printf("./vigenere k");
        return 1;
    }
    else
    {
        for (int i = 0, n = strlen(argv[1]); i < n; i++)
        {
            if (!isalpha(argv[1][i]))
            {
                printf("usage:");
                printf("./vigenere k");
                return 1;
            }
        }

    }

        string k = argv[1]; // Set key
        int klen = strlen(k); // Set key length to integer
        string pt = get_string("plaintext: "); // Prompts user for string to encrypt
        printf("ciphertext: "); // Print ciphertext here

        for (int i = 0, j = strlen(pt), kw = 0; i < j; i++) // Iterate though (i = count. j = strlength kw = keyword)
        {
            int lower_key = tolower(k[kw % klen]) - 'a'; // set key to lowercase

                if (isupper(pt[i])) // preserve case of character
                {
                    printf("%c", 'A' + (pt[i] - 'A' + lower_key) % 26); // ABC index, shift by key but wraparound, return to ASCII
                    kw++;
                }
                else if (islower(pt[i]))
                {
                    printf("%c", 'a' + (pt[i] - 'a' + lower_key) % 26); // ABC index, shift by key but wraparound, return to ASCII
                    kw++;
                }

            else  // includes special characters
            {
                printf("%c", pt[i]);
            }
        }
        printf("\n");

}
