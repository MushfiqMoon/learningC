#include <stdio.h>

int main()
{

    char inputLetter;
    scanf("%c", &inputLetter);

    if (inputLetter >= 48 && inputLetter <= 57)
    {
        printf("IS DIGIT\n");
    }
    else if (inputLetter >= 'A' && inputLetter <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if (inputLetter >= 'a' && inputLetter <= 'z')
    {
        printf("ALPHA\nIS SMALL\n");
    }
    
    return 0;
}