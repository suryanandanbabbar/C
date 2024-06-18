#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "Hello", s2[20] = "World";
    char *z;

    z = strncpy(s1, s2, 4);

    printf("\nCopy String is %s", z); // Worlo

    return 0;
}