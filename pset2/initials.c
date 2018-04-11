#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>


int main (void)
{
    // int n;
    string name;
    do
    {
     name = get_string("Name: "); // Get User input
    }
    while (name == NULL);

     // Iterate over chars of string
     for (int i = 0, n = strlen(name); i < n; i ++)
     {
        if (name[i] == name[0] && name[i] >= 'a' && name[i] <= 'z')
        {
            printf("%c", name[i] - ('a' -'A'));
        }
        else if (name[i] == ' ')
        {
            printf("%c", name[i]  + 1.toupper);
        }
     }
     printf("\n");
}

//       while (name[i] == (0))
//       {
//           printf(name[0].toupper)
//       }

//       while (name[i] == (' '))
//       {
//           printf(name[i] == (' ').toupper)
//       }
//     //   {
//     //     n++;
//     //   }

//         // printf("%c%c%c\n", toupper(name[0]), toupper((name[i] == ' ') + 1), toupper((name [i] == ' ') + 1));
//      }
// }