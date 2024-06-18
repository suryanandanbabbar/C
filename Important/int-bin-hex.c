#include <stdio.h>

// Function to convert integer to binary
void convertToBinary(int n)
{
    int binary[32]; // Array to store binary digits
    int index = 0;

    // Convert to binary
    while (n > 0)
    {
        binary[index] = n % 2;
        n /= 2;
        index++;
    }

    // Print binary representation without leading zeros
    printf("Binary: ");
    if (index == 0)
    {
        printf("0"); // Special case for 0
    }
    else
    {
        for (int i = index - 1; i >= 0; i--)
        {
            printf("%d", binary[i]);
        }
    }
    printf("\n");
}

int main()
{
    int n;

    // Input the integer
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Convert to binary and print
    convertToBinary(n);

    // Print hexadecimal representation
    printf("Hexadecimal: %X\n", n);

    return 0;
}
