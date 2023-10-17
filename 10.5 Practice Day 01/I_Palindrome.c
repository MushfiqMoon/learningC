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
#include<string.h>

int main()
{

    char s[1001];
    scanf("%s", &s);

    // two pointer
    int is_palindrome = 1;
    int i = 0, j = strlen(s) - 1;

    while (i < j)
    {

        if (s[i] != s[j]) {
            is_palindrome = 0;
            break;
        }
        i++;
        j--;
    }

    if (is_palindrome)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}