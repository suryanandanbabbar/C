#include <stdio.h>

int main()
{
    int d, m1, y, h, m2;
    scanf("%d %d %d %d %d", &m1, &d, &y, &h, &m2);

    int *D = &d, *M1 = &m1, *Y = &y, *H = &h, *M2 = &m2;

    printf("%04d-%02d-%02d %02d:%02d", *Y, *M1, *D, *H, *M2);
}