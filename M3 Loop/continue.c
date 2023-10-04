#include <stdio.h>

/* =================================================
 we always have to put our code after the `continue`
================================================= */

int main()
{
    int i, num;

    scanf("%d", &num);
    printf("In order\n");
    for (i = 1; i <= num; i++)
    {
        if (i == 5)
        {
            continue;
        }
        
        printf("%d\n", i);
    }

    
    
    return 0;
}