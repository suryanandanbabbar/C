// Reverse of a number using pointers
#include <stdio.h>

int main()
{
    int n = 1234;
    int reversed = 0;

    int *reversedNum = &reversed;

    while (n != 0)
    {
        *reversedNum = *reversedNum * 10 + n % 10;
        n /= 10;
    }
    printf("%d", reversed);
}