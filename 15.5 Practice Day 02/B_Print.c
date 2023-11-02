/*
Given a number N. Print all numbers from 1 to N.

Note: Solve this problem using function.

Input
Only one line contains a number N (1 ≤ N ≤ 103).

Output
print numbers form 1 to N separated by a single space.

Example
inputCopy
5
outputCopy
1 2 3 4 5

Note
Don't use any leading or trilling spaces.
*/

#include <stdio.h>

void func(int x)
{
    for (int i = 1; i <= x; i++)
    {
        printf("%d", i);
        // Print space only if it's not the last iteration
        if (i < x)
        {
            printf(" ");
        }
    }
}

int main()
{

    int inputNumber;
    scanf("%d", &inputNumber);

    func(inputNumber);

    return 0;
}