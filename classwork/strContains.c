#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

string strContains();

int main(int argc, string argv[])
{
    string str1 = get_string("Enter a string:\n");
    string subStr = get_string("Enter string to find:\n");
    strContains(str1,subStr);
        {
      if (argc > 3)
      {
          printf("error!");

      }
      else if (argc == 3 )
      {
        str1 = argv[1];
        subStr = argv[2];
        char * strstr(const char * str1, const char * substr);
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
    }
}


