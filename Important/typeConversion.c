#include <stdio.h>

int main()
{
    // Implicit Type Conversion
    int x = 10;
    char y = 'a';

    // y implicitly converted to int, ASCII
    // Value of 'a' is 97
    x = x + y;

    // x is converted to float
    float z = x + 1.0;

    printf("x = %d, z = %f", x, z); // 107, 108.000000

    return 0;
}