#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "Hello ", s2[20] = "World";
    char *z;

    z = strcpy(s1, s2);

    printf("\nCopied String is %s", z);

    return 0;
}