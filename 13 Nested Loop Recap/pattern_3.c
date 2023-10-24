/*
printing below pattern
=========
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
=========
*/

#include <stdio.h>

int main()
{

    int count, w;
    scanf("%d", &count);
    w = 1;
    for (int i = 1; i <= count; i++)
    {

        for (int j = 1; j <= w; j++)
        {
            printf("%d ", j);
        }

        w++;
        printf("\n");
    }

    return 0;
}