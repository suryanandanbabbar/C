// This code outputs factorial of number
#include <stdio.h>

int factorial(int *p)
{
    if (*p == 1)
    {
        return 1;
    }
    else
    {
        int temp = *p;
        (*p)--;
        return temp * factorial(p);
    }
}

int main()
{
    int n = 5;

    int result = factorial(&n);
    printf("Factorial = %d", result);

    return 0;
}