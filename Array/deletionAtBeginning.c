#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int array[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    n--;

    for (int i = 0; i < n; i++)
    {
        array[i] = array[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}