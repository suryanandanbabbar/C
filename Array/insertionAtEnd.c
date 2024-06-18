#include <stdio.h>

int main()
{
    int n, i, item;
    // Input of size
    scanf("%d", &n);

    // Declaring the array
    int array[n];

    // Input of array
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Incrementing n
    n++;

    // Element to be inserted at the end
    scanf("%d", &item);

    // Substituting element
    array[i] = item;

    // Resultant Array
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}