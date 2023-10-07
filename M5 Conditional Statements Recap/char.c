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
