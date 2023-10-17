/*
Given a number N. Print all the divisors of N in ascending order.

Input
Only one line containing a number N (1 ≤ N ≤ 104).

Output
Print all positive divisors of N, one number per line.

Examples
input
6
output
1
2
3
6

input
7
output
1
7

input
4
output
1
2
4
*/

#include <stdio.h>

int main()
{

    int input;
    scanf("%d", &input);

    for (int i = 1; i <= input; i++)
        if (input % i == 0)
            printf("%d\n", i);

    return 0;
}