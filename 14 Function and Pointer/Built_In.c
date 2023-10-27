/*
Mathematical Functions:
=======================
#include <math.h>
sqrt(): Calculates the square root of a number.
pow(): Calculates a number raised to a power.
fabs(): Returns the absolute value of a floating-point number.
ceil(): Rounds a number up to the nearest integer.
floor(): Rounds a number down to the nearest integer.


String Functions:
=======================
#include <string.h>
strlen(): Returns the length of a string.
strcpy(): Copies one string to another.
strcat(): Concatenates two strings.
strcmp(): Compares two strings.
strtok(): Tokenizes a string into smaller parts.

*/

#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    // Example of using string functions
    char str1[] = "Hello";
    char str2[] = "World";

    // String concatenation using strcat()
    strcat(str1, " "); // Concatenate a space
    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    // Example of using mathematical functions
    double x = 16.0;

    // Square root using sqrt()
    double sqrt_result = sqrt(x);
    printf("Square root of %.1f is %.2f\n", x, sqrt_result);

    // Power using pow()
    double y = 3.0;
    double power_result = pow(x, y);
    printf("%.1f raised to the power %.1f is %.2f\n", x, y, power_result);

    return 0;
}