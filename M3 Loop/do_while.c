#include <stdio.h>

// basic while loop
int main()
{
    int i, num;
    i = 1;
    scanf("%d", &num);
    printf("In order\n");

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= num);

    printf("\nReverse order\n");

    while (num >= 1)
    {
        printf("%d\n", num);
        num--;
    }

    return 0;
}