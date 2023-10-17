#include <stdio.h>

// basic for loop
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

    for (i = num; i >= 1; i--)
    {
        printf("%d\n", i);
    }
    
    
    return 0;
}