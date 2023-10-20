#include <stdio.h>
#include <string.h>

int main()
{

    char a[100] = "apple";
    char b[100] = "banana";

    // using <=  because we have to also copy the '\n'
    for (int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }
    printf("%s %s\n", a, b);

    // Shortcut technique of coping any string

    char c[100] = "hello";
    char d[100] = "world";

    strcpy(c, d);

    printf("%s %s\n", c, d);

    return 0;
}
