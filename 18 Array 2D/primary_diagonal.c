/*
    Syntax:     primary diagonal
    
    | 3 0 0 |
    | 0 6 0 |
    | 0 0 9 |

*/

#include <stdio.h>

int main()
{

    int row, col;
    scanf("%d %d", &row, &col);

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int isDiagonal = 1;

    if (row != col)
    {
        isDiagonal = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                continue;
            }

            if (arr[i][j] != 0)
            {
                isDiagonal = 0;
            }
        }
    }

    if (isDiagonal)
    {
        printf("Primary Diagonal");
    }
    else
    {
        printf("Not Primary Diagonal");
    }

    return 0;
}