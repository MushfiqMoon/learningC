#include <stdio.h>

int sumation(void)
{
    int a,b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    return sum;
}

int main()
{
    int s = sumation();
    printf("%d", s);
    return 0;
}