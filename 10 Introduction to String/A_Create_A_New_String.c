/*
Given two strings S and T. Print 2 lines that contain the following in the same order:

Print the length of S and T separated by space.
Print a new string that contains S and T separated by a space.
For more clarification see the example below.

Input
The first line contains a string S (1 ≤ |S| ≤ 103) where |S| is the length of S.

The second line contains a string T (1 ≤ |T| ≤ 103) where |T| is the length of T.

Output
Print the answer required above.

Examples
input
LEVEL
ONE
output
5 3
LEVEL ONE

input
Programming
contest
output
11 7
Programming contest

*/

#include <stdio.h>
#include<string.h>

int main()
{

    char strOne[1001], strTwo[1001];
    scanf("%s\n%s", &strOne, &strTwo);

    // behind the seen how "strlen" woks 

    // int countOne = 0;
    // for (int i = 0; strOne[i] != '\0'; i++)
    // {
    //    countOne++;
    // }

    // printf("%d ", countOne);

    int countOne = strlen(strOne);
    int countTwo = strlen(strTwo);
    printf("%d %d\n", countOne, countTwo);

    printf("%s %s", strOne, strTwo);
    return 0;
}