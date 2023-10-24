/*
printing below pattern
=========
  *
 ***
*****
 ***
  *
=========
*/

#include <stdio.h>

int main()
{

    int count, space, w;
    scanf("%d", &count);

    space = count - 1;
    w = 1;

    for (int i = 1; i <= count * 2 - 1; i++)
    {

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= w; j++)
        {
            printf("*");
        }

        if (i < count)
        {
            w = w + 2;
            space--;
        }
        else
        {
            w = w - 2;
            space++;
        }

        printf("\n");
    }

    return 0;
}