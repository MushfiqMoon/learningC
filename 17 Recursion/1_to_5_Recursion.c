#include <stdio.h>

void fun(int n)
{

    // base case
    if (n == 0)
        return;

    fun(n - 1);

    printf("%d\n", n);

    // // if we call the function before printing it will do opposite
    // fun(n - 1);
}

int main()
{
    int num;
    scanf("%d" ,&num);

    fun(num);
    return 0;
}