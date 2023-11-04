/*

    Unit Matrix (Identity Matrix)
    ## always will be square matrix
    ## diagonal values will be only 1

    Syntax:
    | 1 0 0 |
    | 0 1 0 |
    | 0 0 1 |

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

    int isScalar = 1;

    if (row != col)
    {
        isScalar = 0;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                if (arr[i][j]  != 1)
                {
                    isScalar = 0;
                }
                
                continue;
            }

            if (arr[i][j] != 0)
            {
                isScalar = 0;
            }
        }
    }

    if (isScalar)
    {
        printf("Unit Matrix");
    }
    else
    {
        printf("Not Unit Matrix");
    }

    return 0;
}