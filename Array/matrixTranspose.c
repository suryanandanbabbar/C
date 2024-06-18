#include <stdio.h>

int main()
{
    int a[3][3];
    int transpose[3][3];

    // Input for Matrix 'a'
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // Transposing the matrix 'a'
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            transpose[i][j] = a[j][i];
        }
    }

    // Displaying the Transposed Matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", &transpose[i][j]);
        }
    }
}