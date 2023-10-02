/*
Q. Can you create a program to check whether a number is positive or negative or 0?

If number is positive, print "The number is positive"
If number is negative, print "The number is negative"
(and) If number is 0, print "The number is 0"
*/

#include <stdio.h>

int main()
{
    int num;

    if (scanf("%d %d", &num) == 1)
    {
        if (num > 0) printf("The number is positive");
        
        else if (num < 0) printf("The number is negative");

        else printf("The number is 0");
           
    }
    else
    {
        printf("Input error. Please enter integers.\n");
    }
    return 0;
}