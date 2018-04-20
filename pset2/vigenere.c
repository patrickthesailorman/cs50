#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vigenere encryption

int kw_check(string input)
    {
        int i = 0;
        while (input[i])
        {
        if (!isalpha(input[i]))
        {
            // return false if non-alpha character
            // found
            return 0;
        }

        ++i;
        }
        // return true if only letters
        return 1;
    }

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("usage:");
        printf("./vigenere k");
        return 1;
    }
    else if (!kw_check(argv[1]))
    {
        return 1;
    }

    else // if (isalpha(argv[1]))
    {
        string k = argv[1]; // Set key
        int klen = strlen(argv[1]); // Set key length to integer
        string pt = get_string("plaintext: "); // Prompts user for string to encrypt
        printf("ciphertext: "); // Print ciphertext here

    k = toupper(k);

        for (int i = 0, j = strlen(pt), kw = 0; i < j; i++) // Iterate though (i = count. j = strlength kw = keyword)
        {
            if (isalpha(pt[i])) // check if character is alphabetic
            {
                if (isupper(pt[i])) // preserve case of character
                {
                    printf("%c", ((pt[i] - 'A' + k[kw % klen] - 'A') % 26) + 'A'); // ABC index, shift by key but wraparound, return to ASCII
                    kw++;
                }
                else if (islower(pt[i]))
                {
                    printf("%c", ((pt[i] - 'a' + k[kw % klen] - 'a') % 26) + 'a'); // ABC index, shift by key but wraparound, return to ASCII
                    kw++;
                }
            }
            else  // includes special characters
            {
                printf("%c", pt[i]);
            }
        }
        printf("\n");
    }
}
