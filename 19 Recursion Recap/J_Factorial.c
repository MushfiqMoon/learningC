/*
Given a number N. Print factorial of N.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 20).
120
Output
Print the factorial of the number N.

Example
input
5
output
120
*/

#include <stdio.h>

long long int fun(int input)
{
    // base case
    if (input == 1)
        return 1;

    long long int ans = fun(input - 1);

    return input * ans;
}

int main()
{

    int x;
    scanf("%d", &x);

    long long int result = fun(x);

    printf("%lld ", result);

    return 0;
}