// You are using GCC
#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20], s2[20];

    // Take input
    fgets(s1, 20, stdin);
    fgets(s2, 20, stdin);

    printf("String - 1: %s", s1);
    printf("String - 2: %s", s2);

    return 0;
}