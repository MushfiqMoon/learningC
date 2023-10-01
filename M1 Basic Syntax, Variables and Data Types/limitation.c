#include <stdio.h>
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
