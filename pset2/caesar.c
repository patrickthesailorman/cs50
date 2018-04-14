#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc == 0 || argc < 2)
    {
        printf("error");
        return 1;
    }
    else
    {
       int k = atoi(argv[1]);
       printf("enter passphrase: \n");
       string pp = get_string();
       for ( char i = 0; i < strlen(argv[1]); i++ )
        string ec = i - k;
        printf("%s",pp);
    }


}