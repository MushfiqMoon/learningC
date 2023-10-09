/*
Given a lowercase alphabet character. You have to print the next character in the alphabet.

Input
Only one line containing a lowercase English letter C
.

Output
Print the next letter to C
 in the alphabet.

Example
input
a
output
b

*/

#include <stdio.h>

int main(){

    char input;
    scanf("%c\n", &input);

    if (input == 'z')
    {
        printf("a");
    }else{
        int nextChar = input + 1;
        printf("%c\n", nextChar);
    }

    return 0;
}