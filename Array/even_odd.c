// Count the number of even and odd elements
#include <stdio.h>

int main()
{
    int array[5] = {1, 3, 2, 6, 8};
    int even = 0;
    int odd = 0;

    for (int i = 0; i < 5; i++)
    {
        if (array[i] % 2 == 0)
        {
            // Increment Even
            even++;
        }
        else
        {
            // Increment Odd
            odd++;
        }
    }
    printf("Number of Even Elements: %d\n", even);
    printf("Number of Odd Elements: %d\n", odd);
}
