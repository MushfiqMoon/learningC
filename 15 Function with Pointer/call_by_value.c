#include <stdio.h>

int fun(int x)
{
    x = 321;

    printf("memory address of X (fun function) - %p\n", &x);

    return x;
}

int main()
{

    int x = 123;

    fun(x);
    printf("memory address of X (main function) - %p\n", &x);

    // //self testing
    // printf("val of X = %d\n", x);
    // int c = fun(x);
    // printf("val of X = %d\n", c);
    // //self testing end





    return 0;
}