#include <stdio.h>

int main()
{
    int n, position, value;
    // Size of array
    scanf("%d", &n);

    // Declaring the array
    int array[n];

    // Input of the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Position
    scanf("%d", &position);

    // Value
    scanf("%d", &value);

    // Inserting at the desired position
    for (int i = n - 1; i >= position - 1; i--)
    {
        array[i + 1] = array[i];
    }
    array[position - 1] = value;

    // Resultant Array
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}