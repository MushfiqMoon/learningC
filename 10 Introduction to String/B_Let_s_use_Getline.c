/*
Given a string S. Print the string S from the beginning to the first '\' character without printing the '\'.

Hint: use function getline(cin, s).

Input
Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

It's guaranteed that S will contain '\' symbol.

Output
Print the answer required above.

Examples
input
Egyptian collegiate programming\ contest
output
Egyptian collegiate programming

input
google \or facebook
output
google
*/

#include <stdio.h>
#include <string.h>

int main()
{

    char strOne[1000001];
    // fgets is similer like scanf but it takes string input
    fgets(strOne, 1000001, stdin);

    char newStr[1000001];
    for (int i = 0; strOne[i] != '\\'; i++)
    {
        newStr[i] = strOne[i];
        // printf("%c", strOne[i]);
    }

    printf("%s", newStr);
    
    return 0;
}