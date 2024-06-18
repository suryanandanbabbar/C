#include <stdio.h>
#include <string.h>

int main()
{
    char s1[20] = "Hello ", s2[20] = "World";
    int z;

    z = strcmp(s1, s2);

    printf("\nComparing Strings %d", z);
    /*
    Returns:
    - Negative Number if s1 < s2.
    - Zero if s1 == s2
    - Positive if s1 > s2
    */

    return 0;
}