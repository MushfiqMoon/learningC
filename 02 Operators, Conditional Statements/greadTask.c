/*
Write a C program that takes a student's test score as input and determines their grade based on the
following rules:
• Score >= 90: Grade is 'A'
• 80 <= Score <= 89: Grade is 'B'
• 70 <= Score <= 79: Grade is 'C'
• 60 <= Score <= 69: Grade is 'D'
• Score < 60: Grade is 'F'

*/

#include <stdio.h>

int main()
{
    int score;
    scanf("%d", &score);

    if (score > 0 && score <= 100)
    {
        if (score >= 90)
        {
            printf("Grade is 'A'");
        }
        else if (80 <= score && score <= 89)
        {
            printf("Grade is 'B'");
        }
        else if (70 <= score && score <= 79)
        {
            printf("Grade is 'C'");
        }
        else if (60 <= score && score <= 69)
        {
            printf("Grade is 'D'");
        }
        else
        {
            printf("Grade is 'F'");
        }
    }
    else
    {
        printf("Please input valid Score");
    }

    return 0;
}