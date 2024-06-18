#include <stdio.h>

int main()
{
    int arr[10] = {0, 3, 2, 3, 2, 3, 2, 3, 2, 3};
    int product = 1;

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] % 2 != 0)
        {
            if (arr[i] == 0)
            {
                continue;
            }
            else
            {
                product *= arr[i];
            }
        }
        else
        {
            continue;
        }
    }
    printf("Product of Odd-Indexed Elements: %d", product);
}