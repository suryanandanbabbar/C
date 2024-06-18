#include <stdio.h>

int main()
{
    int a[3][3];
    int sum = 0;

    // Input for Matrix 'a'
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Finding the sum of diagonal elements
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                sum += a[i][j];
            }
        }
    }

    printf("Sum of Diagonal Elements: %d", sum);
}