
#include <cs50.h>
#include <string.h>


int main(void)
{
    string s = get_string("string s");
    {
        int rest_compare = strcmp(s, "");
        if (rest_compare == 0)
        {
        return true;
        }
        else
        {
        return false;
        }
    }
}
