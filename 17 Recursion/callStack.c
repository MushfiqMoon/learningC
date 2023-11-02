#include <stdio.h>

void world(void){
    printf("pringitng world form world() function\n");
}

void hello(void)
{
    printf("Its pringinting form hello() function\n");
    world();
}

int main()
{

    printf("calling the hello() function from main()\n");
    hello();
    printf("all previous function are gone now\n");
    return 0;
}