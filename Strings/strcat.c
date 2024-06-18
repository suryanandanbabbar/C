#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "Hello ", s2[20] = "World";
    char *z;

    z = strcat(s1, s2);

    printf("\nOriginal String is %s", s1); // Hello World
    printf("\nOriginal String is %s", z);  // Hello World

    return 0;
}