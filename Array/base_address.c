// This code demonstrates base_addresses and addresses of array elements
#include <stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Printing the address of the array: \n");
    // &a[0], a, &a are all same and correspond to a[0]
    // We can use any method
    printf("%u %u %u\n", &a[0], a, &a);

    printf("Printing address of all array elements: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%u ", &a[i]);
    }
}