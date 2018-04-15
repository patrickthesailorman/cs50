#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// vigenere encryption

int main(int argc, string argv[])
{
    char ct;
    if (argc == 0 || argc < 2) // requires at least one argument to be the alphabetical key to cipher
    {
        printf("error");
        return 1;
    }
    else
    {
    string k = argv[1]; // Set key
    string pt = get_string("plaintext: "); // Prompts user for string to encrypt
    printf("ciphertext: "); // Print ciphertext here
    int klen = strlen(argv[1]); // Set key length to integer

        for (int j = 0, m = k; j < m; j++) // Iterate over key
        {
            if (isalpha(j)) // check if character is alphabetic
                {
                    if (isupper(j)) // preserve case of character
                    {
                        j = j - (int)'A'; // to ascii to alphabetic index
                    }
                    else if (islower(j))
                    {
                        j = j - (int)'a';
                    }
                }
                else  // includes special characters
                {
                    j++;
                }


                for (int i = 0, n = strlen(pt); i < n; i++) // iterate through the string
                    if (isalpha(pt[i])) // check if character is alphabetic
                    {
                        if (isupper(pt[i])) // preserve case of character
                        {
                        ct = (pt[i] - 'A' + k[j]) % 26 + 'A'; // to ascii to alphabetic index
                        printf("%c", ct);
                        }
                        else if (islower(pt[i]))
                        {
                        ct = (pt[i] - 'a' + k[j]) % 26 + 'a';
                        printf("%c", ct);
                        }

                    }
                    else if (!isalpha(pt[i])) // includes special characters
                    {
                    ct = pt[i];
                    printf("%c", ct);
                    }

        }
        printf("\n");

}