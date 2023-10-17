/*
Problem: Write a C program to determine if a year is a leap year. The program should follow these rules:
• If the year is divisible by 4, go to the next step; otherwise, it's not a leap year.
• If the year is divisible by 100, go to the next step; otherwise, it's a leap year.
• If the year is divisible by 400, it's a leap year; otherwise, it's not a leap year.
*/

#include <stdio.h>

int main()
{
    int year;
    scanf("%d", &year);

    // Check if the year is divisible by 4
    if (year % 4 == 0)
    {
        // Check if the year is divisible by 100
        if (year % 100 == 0)
        {
            // Check if the year is divisible by 400
            if (year % 400 == 0)
            {
                printf("%d is a leap year.\n", year);
            }
            else
            {
                printf("%d is not a leap year.\n", year);
            }
        }
        else
        {
            printf("%d is a leap year.\n", year);
        }
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
