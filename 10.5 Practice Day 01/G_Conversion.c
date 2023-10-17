/*
Given a string S. Print the origin string after replacing the following:

Replace every comma character ',' with a space character.
Replace every capital character in S with its respective small character and Vice Versa.
Input
Only one line contains a string S (1 ≤ |S| ≤ 105) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.

Output
Print the string after the conversion.

Example
input
happy,NewYear,enjoy
output
HAPPY nEWyEAR ENJOY
*/

#include <stdio.h>
#include<string.h>

int main(){

    char s[100001];
    scanf("%s", &s);

    char newS[100001];

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i]>= ',' )
        {
            newS[i] = s[i] - 12;
        }

        if (s[i]>= 'a' && s[i]<= 'z')
        {
            newS[i] = s[i] - 32;
        }

        if (s[i]>= 'A' && s[i]<= 'Z')
        {
            newS[i] = s[i] + 32;
        }
        
    }
    printf("%s", newS);

    return 0;
}