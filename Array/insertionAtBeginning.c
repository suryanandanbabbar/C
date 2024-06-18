#include <stdio.h>

int main()
{
    // Declare the size of array
    int n, item;
    scanf("%d", &n);

    // Declare the array
    int array[n];

    // Input of array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Input of element to be inserted
    scanf("%d", &item);
    // Incrementing n
    n++;

    // Creating vacany at the beginning
    for (int i = n; i > 1; i--)
    {
        array[i - 1] = array[i - 2];
    }

    // Substituting the element to be inserted at the first position
    array[0] = item;

    // Resultant Array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}