// This code ouputs area of circle using pointers
#include <stdio.h>

int main()
{
    double radius = 2, area;
    double *pradius = &radius, *parea = &area;

    *parea = 3.14 * (*pradius) * (*pradius);
    printf("The area of circle with radius %.2lf = %.2lf", *pradius, *parea);

    return 0;
}