#include <stdio.h>
#include <string.h>

int is_palindrome(char word[])
{
    int length = strlen(word);
    int i, j;

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (word[i] != word[j])
        {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

int main()
{
    char word[100] = "2552";

    // Input
    // printf("Enter a word: ");
    // scanf("%s", word);

    // Check if palindrome
    if (is_palindrome(word))
    {
        printf("%s is a palindrome.\n", word);
    }
    else
    {
        printf("%s is not a palindrome.\n", word);
    }

    return 0;
}
