#include <stdio.h>
#include <string.h>

int main()
{

    char a[200], b[100];
    scanf("%s %s", a, b);
    int lengthofA = strlen(a);

    for (int i = 0; i <= strlen(b); i++)
    {
        a[lengthofA] = b[i];
        lengthofA++;
    }
    printf("%s\n", a);

        // Shortcut technique
    char c[100], d[100];
    scanf("%s %s", c, d);

    strcat(c,d);

    printf("\n%s", c);

    return 0;
}