#include <stdio.h>

int main()
{
    int n = 2552;
    int reversedNum = 0, originalNum;
    // scanf("%d\n", &n);

    originalNum = n;

    while (n != 0)
    {
        reversedNum = reversedNum * 10 + n % 10;
        n /= 10;
    }

    if (originalNum == reversedNum)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not a Palindrome");
    }

    return 0;
}