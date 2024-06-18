#include <stdio.h>

void countDown(int n)
{
    if (n == 1)
    {
        printf("1\n");
    }
    else
    {
        printf("%d", n);
        if (n != 1)
        {
            printf("-");
        }
        countDown(n - 1);
    }
}
int main()
{
    int n = 5;

    countDown(n);

    return 0;
}