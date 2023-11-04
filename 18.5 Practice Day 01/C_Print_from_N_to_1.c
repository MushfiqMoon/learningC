/*
Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print from N to 1 separated by a single space.

Example
input
4
output
4 3 2 1

Note
Make sure don't print any leading or trailing spaces.
*/

#include <stdio.h>

void fun(int count)
{
    // base case
    if (count == 0)
    {
        return;
    }

    if (count == 1)
    {
        printf("%d", count);
    }
    else
    {
        printf("%d ", count);
    }

    fun(count - 1);
}

int main()
{

    int c;

    scanf("%d", &c);

    fun(c);

    return 0;
}