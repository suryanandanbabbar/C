#include <stdio.h>

char processInput(char a)
{
    if (a == 'A')
    {
        return 'Z';
    }
    else if (a == 'a')
    {
        return 'z';
    }
    else
    {
        return a - 1;
    }
}

int main()
{
    char a = 't';
    char result = processInput(a);
    printf("%c", result);
}