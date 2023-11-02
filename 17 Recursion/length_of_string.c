#include <stdio.h>

int fun(char arr[], int length)
{
    if (arr[length] == '\0')
        return 0;

    int l = fun(arr, length + 1);
    return l + 1;
}

int main()
{

    char w[6] = "HELLO";

    int length = fun(w, 0);

    printf("%d", length);
    return 0;
}