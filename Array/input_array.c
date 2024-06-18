#include <stdio.h>

int main()
{
    // Declaring the array
    int array[5], size;

    // Size of Array
    printf("Enter the size/no. of elements: \n");
    scanf("%d", &size);

    // Looping over inputs
    for (int i = 0; i < size; i++)
    {
        // Taking Inputs
        scanf("%d", &array[i]);
    }

    // Printing the Elements
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
