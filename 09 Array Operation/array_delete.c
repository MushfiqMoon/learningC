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

    int arrayPos;
    scanf("%d", &arrayPos);

    for (int i = arrayPos; i <= length + 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < length - 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}