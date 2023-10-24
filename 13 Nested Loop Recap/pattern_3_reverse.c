/*
printing below pattern
=========
5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 
=========
*/

#include <stdio.h>

int main()
{

    int count, w;
    scanf("%d", &count);
    w = count;

    for (int i = count; i >= 1; i--)
    {
        for (int j = count; j >= w; j--)
        {
            printf("%d ", j);
        }
        w--;
        printf("\n");
    }

    return 0;
}