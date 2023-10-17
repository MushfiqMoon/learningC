/*
Given N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N (1 ≤ N ≤ 103) number of values.

Second line contains N numbers (-105 ≤ Xi ≤ 105).

Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

Example
input
5
-5 0 -3 -4 12
output
Even: 3
Odd: 2
Positive: 1
Negative: 3

*/
#include <stdio.h>

int main()
{

    int count, input;

    int even = 0, odd = 0, positive = 0, negative = 0;

    scanf("%d\n", &count);

    for (int i = 1; i <= count; i++)
    {
        scanf("%d ", &input);

        if (input % 2 ==0)
        {
            even += 1;
        }else{
            odd += 1;
        }

        if (input > 0)
        {
            positive += 1;
        }

        if (input < 0)
        {
            negative += 1;
        }

    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);

    return 0;
}