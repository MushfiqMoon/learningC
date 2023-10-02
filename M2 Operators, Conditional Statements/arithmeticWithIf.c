#include<stdio.h>

// arithmetic operators: + - * / % 

int main() {

    int firstNum, secondNum;

    if (scanf("%d %d", &firstNum, &secondNum) == 2) {
        // // Addition operator: (+)
        int sum = firstNum + secondNum;
        printf("Sum: %d\n", sum);

        // // Subtraction operator: (-)
        int sub = firstNum - secondNum;
        printf("Subtracts: %d\n", sub);

        // // Multiplication  operator: (*)
        int mul = firstNum * secondNum;
        printf("Multiplication : %d\n", mul);

        // // Division  operator: (/)
        int dev = firstNum / secondNum;
        printf("Division : %d\n", dev);

        // Modulo operator: (%)
        int mod = firstNum % secondNum;
        printf("Modulo : %d\n", mod);

        // // Division with float
        float devFloat = firstNum*1.0 / secondNum;
        printf("Division with float Num : %f\n", devFloat);

    } else {

        printf("Input error. Please enter two integers.\n");
    }


    return 0;
}