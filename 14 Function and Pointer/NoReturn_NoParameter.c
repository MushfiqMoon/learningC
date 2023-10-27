#include <stdio.h>

void sumation(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("%d", sum);
}

int main()
{

    sumation();

    return 0;
}