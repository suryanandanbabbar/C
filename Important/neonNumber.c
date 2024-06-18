#include <stdio.h>
#include <math.h>

int neon(int n)
{
    int square = n * n;
    int sum = 0;

    while (square != 0)
    {
        sum += square % 10;
        square /= 10;
    }

    if (sum == n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d\n", &n);

    if (neon(n))
    {
        printf("%d is a neon number", n);
    }
    else
    {
        printf("%d is not a neon number", n);
    }
}