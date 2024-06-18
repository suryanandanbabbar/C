#include <stdio.h>

int main()
{
    int array[6] = {5, 0, 2, 6, 7, 9};

    int max = array[0], min = array[0];

    for (int i = 0; i < 6; i++)
    {
        if (min > array[i])
        {
            min = array[i];
        }
        else
        {
            continue;
        }
    }
    printf("Min: %d\n", min);

    for (int i = 0; i < 6; i++)
    {
        if (max < array[i])
        {
            max = array[i];
        }
        else
        {
            continue;
        }
    }
    printf("Max: %d\n", max);
}