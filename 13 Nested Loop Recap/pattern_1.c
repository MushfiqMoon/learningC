/*
printing below pattern
=========
***
**
*
=========
*/

#include <stdio.h>

int main()
{

    // int count;
    // scanf("%d", &count);

    // for (int i = count; i >= 1; i--)
    // {

    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("&");
    //     }
    //     printf("\n");

    // }


    // another approch 

    int count, w;
    scanf("%d", &count);
    w = count;
    for (int i = count; i >= 1; i--)
    {

        for (int j = 1; j <= w; j++)
        {
            printf("*");
        }
        w--;
        printf("\n");
    }

    return 0;
}