#include <stdio.h>

int main()
{
    int key, encrypted_key;
    scanf("%c\n", key);

    if (key >= 'A' && key <= 'Z')
    {
        encrypted_key = (signed char)(key + 2);
    }
    else if (key >= 'a' && key <= 'z')
    {
        encrypted_key = (signed char)(key - 2);
    }
    else
    {
        encrypted_key = (signed char)(key + 5);
    }
    printf("%c\n", encrypted_key);
}