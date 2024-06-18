// Checking if the given element exists or not using Linear Search
#include <stdio.h>

int main()
{
    int array[5] = {2, 4, 6, 8, 1};
    int element = 1;
    int verified = 0;

    // Linear Searching Using Loop
    for (int i = 0; i < 5; i++)
    {
        if (array[i] == element)
        {
            verified = 1;
        }
        else
        {
            continue;
        }
    }
    if (verified)
    {
        printf("Element: %d exists", element);
    }
    else
    {
        printf("Element: %d does not exist", element);
    }
}