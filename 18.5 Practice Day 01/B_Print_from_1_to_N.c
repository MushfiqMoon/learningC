/*
Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above.

Example
input
5
output
1
2
3
4
5
*/

#include <stdio.h>

void fun(int count, int i)
{
    // base case
    if (count == i)
    {
        return;
    }

    fun(count, i + 1);
    printf("%d\n", i);
}

int main()
{

    int c;

    scanf("%d", &c);

    fun(c, 1);

    return 0;
}