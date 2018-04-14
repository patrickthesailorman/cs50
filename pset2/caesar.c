#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    char ct;
    if (argc == 0 || argc < 2)
    {
        printf("error");
        return 1;
    }
    else
    {
       int k = atoi(argv[1]);
       printf("plaintext: ");
       string pt = get_string();
       printf("ciphertext: ");
       for ( int i = 0, n = strlen(pt); i < n; i++ )
       if (isalpha(pt[i]))
       {
           if ( isupper(pt[i]))
           {
            ct = (pt[i] -'A' + k) % 26 + 'A';
           }
           else if ( islower(pt[i]))
           {
            ct = (pt[i] - 'a' + k) % 26 + 'a';
           }
        printf("%c", ct);
       }
       else
       {
           ct = pt[i];
       }
       printf(" ");
    }
        printf("\n");

}