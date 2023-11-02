/*
Given two numbers X and Y, Print their summation.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print the summation value.

Example
inputCopy
5 2
outputCopy
7
*/

#include <stdio.h>

void sumation(int a, int b)
{
    int sum = a + b;
    printf("%d", sum);
}

int main()
{
    int x, y;

    scanf("%d %d", &x, &y);

    sumation(x, y);

    return 0;
}