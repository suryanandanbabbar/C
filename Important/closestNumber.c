#include <stdio.h>
#include <math.h>

int closestNumber(int n, int m)
{
    int q = n / m;
    int num1 = m * q;
    int num2 = (n * m) > 0 ? (m * (q + 1)) : (m * (q - 1));

    if (abs(n - num1) < abs(n - num2) || abs(n - num1) == abs(n - num2))
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int main()
{
    int n, m;
    scanf("%d %d\n", &n, &m);

    int result = closestNumber(n, m);

    printf("%d", result);

    return 0;
}