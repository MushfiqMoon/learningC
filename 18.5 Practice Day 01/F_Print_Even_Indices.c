/*
Given a number N and an array A of N numbers. Print the numbers in even indices in a reversed order.

Note:

Assume array A is 0-based indexing.
Solve this problem using recursion.
Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print numbers in even indices in a reversed order separated by spaces.

Examples
input
4
1 4 2 7
output
2 1

input
7
1 5 8 2 3 9 11
output
11 3 8 1
*/

#include <stdio.h>

void fun(int arr[], int length, int increment)
{
    // base case
    if (increment >= length)
    {
        return;
    }

    fun(arr, length, increment + 2);
    
    printf("%d ", arr[increment]);

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

    fun(arr, count, 0);

    return 0;
}