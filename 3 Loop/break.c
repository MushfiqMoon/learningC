#include <stdio.h>

// basic for loop
int main()
{
    int i, num;

    scanf("%d", &num);
    printf("In order\n");
    for (i = 1; i <= num; i++)
    {
        if (i == 6)
        {
            break;
        }
        
        printf("%d\n", i);
    }

    
    
    return 0;
}