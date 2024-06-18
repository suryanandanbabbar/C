// Sum of elements of array
#include <stdio.h>

int main()
{
    int array[6] = {1, 7, 2, 5, 4, 0};
    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        sum += array[i];
    }
    printf("Sum: %d", sum);
}