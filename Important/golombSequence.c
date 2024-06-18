#include <stdio.h>

int golomb(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return 1 + golomb(n - golomb(golomb(n - 1)));
    }
}

int main()
{
    int n = 3;

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", golomb(i));
    }

    return 0;
}