// Fibonacci Series Using Recursion
#include <stdio.h>

int fibonacci(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main()
{
    int n = 7;
    int i = 0;

    while (fibonacci(i) <= n)
    {
        printf("%d ", fibonacci(i));
        i++;
    }

    return 0;
}