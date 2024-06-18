#include <stdio.h>

char generateTerm(int n)
{
    n = (n - 1) % 26 + 1;
    char c = 'A' + n - 1;
    return c;
}

int main()
{
    int n = 1;

    char character = generateTerm(n);
    printf("%c", character);
}