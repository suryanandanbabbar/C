#include <stdio.h>

int main()
{
    int n = 10;

    // scanf("%d\n", n);

    if (n % 2 == 0)
    {
        goto even;
    }
    else
    {
        goto odd;
    }

even:
    printf("This is even");
    return 0;

odd:
    printf("This is odd");
    return 0;
}