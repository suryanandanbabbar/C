#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, m, *p, i;
    scanf("%d", &n);

    p = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    scanf("%d", &m);

    p = (int *)realloc(p, m * sizeof(int));

    for (i = n; i < m; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("Initial Sequence:");
    for (i = 0; i < n; i++)
    {
        printf("%d", p[i]);
    }

    printf("\nResized Sequence:");
    for (i = 0; i < m; i++)
    {
        printf("%d", p[i]);
    }
}