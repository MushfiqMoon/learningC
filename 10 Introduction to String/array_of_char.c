#include <stdio.h>

int main()
{

    // 1 string input and output

    char a[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &a[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c", a[i]);
    }

    // how to use sizeof
    int b[5];

    printf("\nSize of Input = %d\n", sizeof(b));

    printf("\nSize of char = %d \n", sizeof(char));
    printf("Size of int = %d \n", sizeof(int));
    printf("Size of long int = %d \n", sizeof(long int));
    printf("Size of long long int = %d \n", sizeof(long long int));
    printf("Size of float = %d \n", sizeof(float));
    printf("Size of double = %d \n", sizeof(double));

    return 0;
}