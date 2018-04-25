
#include <cs50.h>
#include <string.h>


int main(void)
{
    bool is_rest(string s)
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
