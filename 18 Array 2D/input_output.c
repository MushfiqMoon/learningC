/*
input :
3 3
1 2 3
4 5 6
7 8 9


output:
1 2 3
4 5 6
7 8 9
*/

#include <stdio.h>

int main()
{

    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    // taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // Printing Output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }


    // Printing Row
    printf("\n======Printing Row=====\n");

    int whichRow;
    scanf("%d", &whichRow);
    printf("You have selected Row = %d\n", whichRow);

    for (int j = 0; j < col; j++)
    {
        printf("%d ", arr[whichRow][j]);
    }

    // Printing Row
    printf("\n======Printing Col=====\n");

    int whichCol;
    scanf("%d", &whichCol);
    printf("You have selected Column = %d\n", whichCol);

    for (int i = 0; i < row; i++)
    {
        printf("%d\n", arr[i][whichCol]);
    }

    return 0;
}