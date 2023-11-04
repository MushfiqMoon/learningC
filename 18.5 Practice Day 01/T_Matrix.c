/*
Given a number N and a 2D array A of size N * N. Print the absolute difference between the summation of its two diagonals (primary diagonal and secondary diagonal).

Input
First line contains a number N (1 ≤ N ≤ 100) described above.

Each of the next N lines will contain N numbers ( - 100 ≤ Ai ≤ 100).

Output
Print the absolute difference between the summation of the matrix main diagonals.

Example
inputCopy
4
1 5 12 1
2 -4 6 7
3 8 5 9
3 5 23 -6
outputCopy
22
*/

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main()
{

    int rowAndcol;
    scanf("%d", &rowAndcol);
    int arr[rowAndcol][rowAndcol];

    for (int i = 0; i < rowAndcol; i++)
    {
        for (int j = 0; j < rowAndcol; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int primarySum = INT_MIN;
    int secondarySum = INT_MIN;

    // primary diagonal
    for (int i = 0; i < rowAndcol; i++)
    {
        for (int j = 0; j < rowAndcol; j++)
        {
            if (i == j)
            {
                primarySum += arr[i][j];
            }
        }
    }

    // secondary diagonal
    for (int i = 0; i < rowAndcol; i++)
    {
        for (int j = 0; j < rowAndcol; j++)
        {

            if (i + j == rowAndcol - 1)
            {
                secondarySum += arr[i][j];
            }
        }
    }

    int result = abs(primarySum - secondarySum);

    printf("%d", result);

    return 0;
}