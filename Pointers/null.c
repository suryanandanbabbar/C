// Null Pointer Basics
#include <stdio.h>

int main()
{
    int a = 10;

    // Better to initialise with NULL address
    int *ptr1 = NULL;

    // Other Way
    int *ptr2 = 0;

    // Note: It is invalid to dereference a null pointer

    printf("%u\n", ptr1); // 0
    printf("%d", *ptr1);  // Invalid (Dereferencing)

    ptr1 = &a;
    printf("%d\n", *ptr1); // 10
}