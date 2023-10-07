/*
Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter

Note : difference between 'a' and 'A' in ASCII is 32 .

Input
Only one line containing a character X which will be a capital or small letter.

Output
Print the answer to this problem.

inputCopy
a
outputCopy
A

inputCopy
A
outputCopy
a
*/

#include <stdio.h>

int main()
{

    char inputLetter;
    scanf("%c", &inputLetter);

    int convertToInt = inputLetter - 0;

    if (convertToInt <= 90 && convertToInt >= 65)
    {
        int outPutLetter = convertToInt + 32;
        printf("%c\n", outPutLetter);
    }
    else if (convertToInt <= 122 && convertToInt >= 97)
    {
        int outPutLetter = convertToInt - 32;
        printf("%c\n", outPutLetter);
    }

    return 0;
}
