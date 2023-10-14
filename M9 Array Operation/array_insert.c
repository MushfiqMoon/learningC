#include <stdio.h>

int main()
{

    int length;

    scanf("%d", &length);

    int arr[length + 1];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    int arrayPos, arrayVal;
    scanf("%d %d", &arrayPos, &arrayVal);

    for (int i = length; i >= arrayPos + 1; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[arrayPos] = arrayVal;

    for (int i = 0; i <= length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}