#include <stdio.h>

void sumation(int a, int b)
{
    int sum = a + b;
    printf("%d", sum);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    sumation(a, b);

    return 0;
}