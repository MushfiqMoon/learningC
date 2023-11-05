/*
Given a number N and an array A of N numbers. Print the maximum value in this array.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the maximum value in this array.

Example
input
5
1 -3 5 4 -6
output
5
*/

#include <stdio.h>
#include <limits.h>

int fun(int arr[], int length, int index)
{
    // base case
    if (length == index)
    {
        return INT_MIN;
    }

    int ans = fun(arr, length, index + 1);

    if (ans > arr[index])
    {
        return ans;
    }
    else
    {
        return arr[index];
    }
}

int main()
{

    int count;
    scanf("%d", &count);

    int arr[count];

    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = fun(arr, count, 0);

    printf("%d ", result);

    return 0;
}