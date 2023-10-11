/*
Given a number N and an array A of N numbers. Print the absolute summation of these numbers.

absolute value : means to remove any negative sign in front of a number .

EX : |-5| = 5 , |7| = 7

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (-109  ≤  Ai  ≤  109).

Output
Print the absolute summation of these numbers.

Examples
input
4
7 2 1 3
output
13

input
3
-1 2 -3
output
2

*/

#include <stdio.h>

int main()
{

    int length;
    long long int nums;

    scanf("%d\n", &length);

    long long int sum = 0;

    for (int i = 1; i <= length; i++)
    {
        scanf("%lld", &nums);

        sum += (nums);
    }

    // Calculate the absolute value of sum
    if (sum < 0)
    {
        long long newSum = sum * -1;
        printf("%lld", newSum);
    }
    else
    {

        printf("%lld", sum);
    }


    return 0;
}



