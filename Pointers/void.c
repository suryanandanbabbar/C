// Void Pointer
#include <stdio.h>

int main()
{
    int x = 10;
    char ch = 'A';

    void *gp;

    gp = &x;
    printf("Generic Pointer points to the integer value = %f\n", *(int *)gp);

    gp = &ch;
    printf("Generic Pointer now points to the character value = %c\n", *(char *)gp);

    return 0;
}