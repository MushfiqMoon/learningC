/*
Given a string S. Print number of vowels in the string.

Note:

Vowel letters: ['a', 'e', 'i', 'o', 'u'].
Vowel letters could be capital or small.
Solve this problem using recursion.
Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S.

Example
input
Data Structure Lab
output
6
*/

#include <stdio.h>

int fun(char arr[], int index)
{
    // base case
    if (arr[index] == '\n')
    {
        return 0;
    }

    int ans = fun(arr, index + 1);
    if (arr[index] >= 'A' && arr[index] <= 'Z')
    {
        arr[index] = arr[index] + 32;
    }

    if (arr[index] == 'a' || arr[index] == 'e' || arr[index] == 'i' || arr[index] == 'o' || arr[index] == 'u')
    {
        return ans + 1;
    }
    else
    {
        return ans;
    }
}

int main()
{

    char input[201];
    fgets(input, 201, stdin);

    int retsult = fun(input, 0);

    printf("%d", retsult);

    return 0;
}