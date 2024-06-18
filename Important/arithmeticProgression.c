// This program demonstrates ARITHMETIC PROGRESSION
#include <stdio.h>

int main()
{
    // Declare Variables
    int a = -3, b = -11, c = -3;

    // Declare condition
    int verified = 0;

    if ((a >= 0 && b >= 0) || c >= 0)
    {
        if (c != 0)
        {
            // Looping through AP
            for (int i = a; i <= b; i += c)
            {
                if (i == b)
                {
                    // Exists
                    verified = 1;
                    // Exiting the loop
                    break;
                }
            }
        }
        printf("%d", verified);
    }
    else if (a < 0 && b < 0)
    {
        if (c != 0)
        {
            for (int i = a; i >= b; i += c)
            {
                if (i == b)
                {
                    // Exists
                    verified = 1;
                    // Exiting the loop
                    break;
                }
            }
        }
        printf("%d", verified);
    }
}
