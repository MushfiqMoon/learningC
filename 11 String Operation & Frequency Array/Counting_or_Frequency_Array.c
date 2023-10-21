#include <stdio.h>

int main()
{

    int length;
    scanf("%d", &length);
    int a[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    int count[10] = {0};

    for (int i = 0; i < length; i++)
    {
        count[a[i]]++;
    }

    for (int i = 0; i < length; i++)
    {
        if (count[i] != 0)
        {
            printf("%d - %d\n", i, count[i]);
        }
    }

    return 0;
}
