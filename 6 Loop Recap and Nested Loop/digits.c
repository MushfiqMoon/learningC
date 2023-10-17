/*
Given a number N. Print the digits of that number from right to left separated by space.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109)

Output
For each test case print a single line contains the digits of the number separated by space.

Example
input
4
121
39
123456
1200
output
1 2 1
9 3
6 5 4 3 2 1
0 0 2 1
*/

#include <stdio.h>

int main()
{

    int count, input;

    scanf("%d\n", &count);

    for (int i = 1; i <= count; i++)
    {
        scanf("%d ", &input);

        do
        {
            printf("%d ", input % 10);
            input /= 10;
        } while (input != 0);
        printf("\n");
    }

    return 0;
}