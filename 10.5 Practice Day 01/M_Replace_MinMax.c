/*
Given a number N and an array A of N numbers. Print the array after doing the following operations:

Find minimum number in these numbers.
Find maximum number in these numbers.
Swap minimum number with maximum number.
Input
First line contains a number N (2 ≤ N ≤ 1000) number of elements.

Second line contains N numbers ( - 10^5 ≤ Ai ≤ 10^5)

It's guaranteed that all numbers are distinct.

Output
Print the array after the replacement operation.

Example
input
5
4 1 3 10 8
output
4 10 3 1 8

*/

#include <stdio.h>
#include <limits.h>

int main()
{

    int length;
    scanf("%d", &length);
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    int minVal = INT_MAX;
    int minValIndex, maxValIndex;
    int maxVal = INT_MIN;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] < minVal)
        {
            minVal = arr[i];
            minValIndex = i;
        }

        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            maxValIndex = i;
        }
    }
    arr[minValIndex] = maxVal;
    arr[maxValIndex] = minVal;
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}