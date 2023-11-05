/*
Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

Input
Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

Output
Print "YES" if the string is palindrome, otherwise print "NO".

Examples
input
abba
output
YES
input
icpcassiut
output
NO
input
mam
output
YES
*/

#include <stdio.h>
#include <string.h>

int main()
{

    char str[1001], copyStr[1001];
    scanf("%s", str);

    strcpy(copyStr, str);

    // setting up two pointer;
    int i = 0;
    int j = strlen(copyStr) - 1;

    while (i < j)
    {
        // reversing the array
        char temp = copyStr[i];
        copyStr[i] = copyStr[j];
        copyStr[j] = temp;

        i++;
        j--;
    }

    if (strcmp(str, copyStr) == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}