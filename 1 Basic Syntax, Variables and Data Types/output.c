#include <stdio.h>
int main(){

    // //single input  //input : 10
    // int numOne;
    // scanf("%d",&numOne);
    // printf("%d",numOne);

    // //multiple input //input : 10 50 3.5 ,
    // int numOne, numTwo;
    // float fThree;
    // char charFour;
    // scanf("%d %d %f %c", &numOne, &numTwo, &fThree, &charFour );
    // printf("%d %d %c %f", numTwo, numOne, charFour, fThree);

    // taking input as "%""  //input : 10%
    int persentInput;
    char c;
    scanf("%d %c", &persentInput, &c);
    printf("%d%c", persentInput, c);

    return 0;
}