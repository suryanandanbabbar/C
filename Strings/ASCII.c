#include <stdio.h>
#include <string.h>

int main()
{
    char a = 'a', b = 'z';

    printf("Character : ASCII Code\n");
    for (int i = a; i <= b; i++)
    {
        printf("\t\t%c : %d\n", i, i);
    }
}