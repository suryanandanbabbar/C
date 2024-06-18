#include <stdio.h>

int main()
{
    char c;

    // getch() (Doesn't displays the character)
    printf("Enter a character: \n");
    getch();

    // getche() (Displays the character)
    printf("Enter a character: \n");
    c = getche();

    // getchar()
    printf("Enter a character: \n");
    getchar();

    // putch()
    char cp;
    printf("Enter a character: \n");
    cp = getch();
    printf("Character is (using putch): ");
    putch(cp);

    // gets(str)
    char s[30];
    printf("Enter the string: \n");
    fgets(s, 30, stdin);
    printf("Entered string: %s", s);

    return 0;
}