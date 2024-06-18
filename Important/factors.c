// This code prints the factors of the number
#include <stdio.h>

void factors(int n)
{
    int factors;

    if (n == 1)
    {
        printf("1");
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            if (n % i == 0)
            {
                printf("%d ", i);
            }
        }
    }
}

int main()
{
    int n = 10;
    printf("Factors: ");
    factors(n);
}