#include <stdio.h>

/*

int             ( 4 byte )  | %d for pringint
float           ( 4 byte )  | %f for pringint
char            ( 1 byte )  | %c for pringint

long long int   ( 8 byte )  | %lld for pringint
double          ( 8 byte )  | %lf for pringint

*/

int main(){

    // // long integer // input : 123456789123456
    // long long int bigInt;
    // scanf("%lld", &bigInt);
    // printf("%lld", bigInt);

    // // long float or double // input : 1.123456789123456
    double bigFloat;
    scanf("%lf", &bigFloat);
    printf("%0.15lf", bigFloat);

    return 0;
}
