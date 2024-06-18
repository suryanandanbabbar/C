#include <stdio.h>
int countZeroes(int n)
{
    if (n == 0)
        return 1;
    if (n < 10)
        return 0;
    return (n % 10 == 0) + countZeroes(n / 10);
}
int main()
{
    int n = 1000;

    int zeroes = countZeroes(n);
    printf("%d", zeroes);
    return 0;
}
