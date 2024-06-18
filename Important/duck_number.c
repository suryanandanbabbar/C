#include <stdio.h>
int isDuckNumber(int n)
{
    while (n > 0)
    {
        int digit = n % 10;
        if (digit == 0)
        {
            return 1;
        }
        n = n / 10;
    }
    return 0;
}
int main()
{
    int num = 70;

    if (isDuckNumber(num))
    {
        printf("The number is a duck number.\n");
    }
    else
    {
        printf("The number is NOT a duck number.\n");
    }
    return 0;
}