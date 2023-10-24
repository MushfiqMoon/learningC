/*
printing below pattern
=========
   *
  ***
 *****
*******
=========
*/

#include <stdio.h>

int main()
{

    int count, space, w;
    scanf("%d", &count);

    space = 0;
    w = count * 2 - 1;

    for (int i = count; i >= 1; i--)
    {

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= w; j++)
        {
            printf("*");
        }
        w = w - 2;
        space++;
        printf("\n");
    }

    return 0;
}