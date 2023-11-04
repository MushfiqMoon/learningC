/*

    Scalar Matrix
    ## always will be square matrix
    ## diagonal values will be the same


    Syntax:     scalar_matrix
    
    | 3 0 0 |
    | 0 3 0 |
    | 0 0 3 |

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
                if (arr[i][j]  != arr[0][0])
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
        printf("Scalar Matrix");
    }
    else
    {
        printf("Not Scalar Matrix");
    }

    return 0;
}