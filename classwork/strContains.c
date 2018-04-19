#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string strContains(string str1, string subStr);

int main(int argc, string argv[])
{
    if (argc > 3)
      {
          printf("error!");

      }
      else if (argc == 3 )
      {
        string str1 = argv[1];
        string subStr = argv[2];
       // string str1 = get_string("Enter a string:\n");
       // string subStr = get_string("Enter string to find:\n");
        strContains(str1, subStr);
      }
}
    string strContains(string str1, string subStr);
    {
        char * strstr(const char * str1, const char * subStr);
        if (true)
        {
            printf("The string exists!\n");
            return 1;
        }
        else
        {
            printf("The string does not exist!\n");
            return 0;
        }

      }




