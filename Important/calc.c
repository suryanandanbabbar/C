#include <stdio.h>

int main()
{
    int a, b, result;
    char o;
    scanf("%d %d %c", &a, &b, &o);

    switch (o)
    {
    case '+':
        result = (a + b);
        break;
    case '-':
        result = (a - b);
        break;
    case '*':
        result = (a * b);
        break;
    default:
        printf("INVALID");
        return 1;
    }
    printf("%d\n", result);
    return 0;
}