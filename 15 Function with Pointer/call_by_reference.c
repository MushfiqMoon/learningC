#include <stdio.h>

void fun(int *ptr)
{
    // *ptr = 321;
    printf("value of X (Inside fun function)- %d\n",*ptr);
    *ptr = 321;
}



int main()
{

    int x = 123;

    printf("Initial value of X - %d\n" , x);
    fun(&x);

    printf("New value of X - %d" , x);

    return 0;
}