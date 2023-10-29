#include <stdio.h>

int main()
{

    double x = 10.99;
    double *ptr = &x;

    double *ptr2 = ptr;

    *ptr2 = 99.10;

    printf("value of X = %0.2lf\n", x);
    printf("value of X = %0.2lf\n", *ptr);
    printf("value of X = %0.2lf\n", *ptr2);

    return 0;
}