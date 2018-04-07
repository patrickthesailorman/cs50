#include <cs50.h>
#include <stdio.h>
#include <math.h>

// Validate cc number

int main(void)
{
    int cc;
    int nums;
    int nums2;
    do
    {
        printf("Enter credit card number:\n");
        cc = get_long_long(); // User enters cc number
    }
    while ( cc <= 0 ); // validate numbers entered
     for (int i = 0; i < cc - 2; i - 2) // iterate through numbers from 2nd to last
    {
        nums = i * 2; // Multiply by 2
        for ( int j = 0; j < nums; j++ )
        {
            for ( int k =0; k < nums2; k++ )
            {
                nums = k + j;
            }
        }
    }
    printf(cc, nums, nums2);
}