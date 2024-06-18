// Wild Pointer
#include <stdio.h>

int main()
{
    int *ptr;            // Not initialised to any value (not even 0 or NULL) = Wild Pointer
    printf("%u\n", ptr); // Garbage Value

    int a = 10;
    ptr = &a;             // Not a Wild Pointer now
    printf("%d\n", *ptr); // 10
}