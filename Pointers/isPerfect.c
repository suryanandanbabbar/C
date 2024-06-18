#include <stdio.h>

// Function to check if a number is a perfect number
int isPerfect(int num)
{
    int sum = 0;
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    return (sum == num);
}

int main()
{
    int N;

    // Input
    scanf("%d", &N);

    // Pointer to the isPerfect function
    int (*ptr)(int) = &isPerfect;

    // Check if N is a perfect number using the pointer to the function
    if ((*ptr)(N))
    {
        printf("Perfect Number\n");
    }
    else
    {
        printf("Not a Perfect Number\n");
    }

    return 0;
}
