/*
Given a number N. Print the maltiplication table of the number from 1 to 12

Examples
input
1
output
1 * 1 = 1
1 * 2 = 2
1 * 3 = 3
1 * 4 = 4
1 * 5 = 5
1 * 6 = 6
1 * 7 = 7
1 * 8 = 8
1 * 9 = 9
1 * 10 = 10
1 * 11 = 11
1 * 12 = 12
*/

#include <stdio.h>

int main()
{

    int input;

    scanf("%d\n", &input);

    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", input, i, input * i);
    }

    return 0;
}