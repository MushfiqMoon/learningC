/*
Given a number N. Print "I love Recursion" N times.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1≤N≤100).

Output
Print "I love Recursion" N times.

Example
input
3
output
I love Recursion
I love Recursion
I love Recursion
*/

#include <stdio.h>

void fun(int n, int i)
{
    // base case
    if (n == i)
        return;

    printf("I love Recursion\n");
    fun(n, i + 1);
}

int main()
{
    int count;

    scanf("%d", &count);

    fun(count, 0);

    return 0;
}