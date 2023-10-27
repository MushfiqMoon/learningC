#include <stdio.h>

int sumation(int x, int y)
{
    int sum = x + y;
    return sum;
}

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int s = sumation(a,b);
    printf("%d", s);
    return 0;
}