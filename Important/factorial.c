// This code returns the factorial of the given number
#include <stdio.h>

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

int main()
{
    int n = 5;

    printf("Factorial: %d", factorial(n));
}