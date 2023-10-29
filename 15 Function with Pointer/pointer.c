#include <stdio.h>

int main()
{

    int x = 10;

    int *ptr = &x;

    // both are same
    // x = 20;
    // *ptr = 20;  // this is called dereference

    printf("address of x - %p\n", &x);
    printf("value of ptr - %p\n", ptr);


    // Printing value 
    printf("value of ptr - %d\n", x);
    // anothr way to get the value (pointer) 
    printf("value of ptr - %d\n", *ptr);

    // as pointer is also taking memory
    printf("address of ptr - %p\n", &ptr);

    printf("memory size of ptr - %d\n", sizeof(ptr));

    return 0;
}