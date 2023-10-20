#include <stdio.h>
#include <string.h>

int main()
{

    char a[100], b[100];
    scanf("%s %s", a, b);
    int i = 0;
    while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("Same or '0'\n");
            break;
        }
        else if (a[i] == '\0')
        {
            printf("A small or 'any negetive number'\n");
            break;
        }
        else if (b[i] == '\0')
        {
            printf("B small or 'any positive number'\n");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] < b[i])
        {
            printf("A small or 'any negetive number'\n");
            break;
        }
        else
        {
            printf("B small or 'any positive number'\n");
            break;
        }
    }

    // Shortcut technique
    char c[100], d[100];
    scanf("%s %s", c, d);

    int val = strcmp(c,d);

    printf("\n shortcut ans %d", val);

    return 0;
}