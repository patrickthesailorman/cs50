#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vigenere encryption

int key_check();
int klen;


int main(int argc, string argv[])
{
    if (argc == 0 || argc < 2 || argc > 2) // requires at least one argument to be the alphabetical key to cipher
    {
        printf("error");
        return 1;
    }
    // else if (!strcheck(k) )
    // {
    //   printf("Usage : ./vigenere k\n");
    //   return 1;
    // }
    else
    {
        string k = argv[1]; // Set key
        klen = strlen(argv[1]); // Set key length to integer
        string pt = get_string("plaintext: "); // Prompts user for string to encrypt
        printf("ciphertext: "); // Print ciphertext here

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


int key_check(k) // function to verify key is all ABC chars
{
    for (int i = 0, j = klen; i < j; i++)
    {
        if (isalpha(k[i]))
        {
            i++;
        }
        else // if the char is not abc, return error
        {
            return 1;
            break;
        }
    }
    return 0;
}