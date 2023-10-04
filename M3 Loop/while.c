#include <stdio.h>

// basic while loop
int main()
{
    int i, num;

    scanf("%d", &num);
    printf("In order\n");
    for (i = 1; i <= num; i++)
    {
        printf("%d\n", i);
    }
    printf("\nReverse order\n");

    while (num >= 1)
    {
        printf("%d\n", num);
        num--;
    }

    return 0;
}