#include <stdio.h>

int main()
{

    int num, i;

    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            /* code */
        printf("%d -> even\n", i );
        }else 
        {
            printf("%d -> odd\n", i );
        }
        
    }

    return 0;
}