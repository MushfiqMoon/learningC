#include <stdio.h>

int main()
{

    int length;

    scanf("%d", &length);

    int arr[length];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }
    //two pointer
    int i = 0, j = length - 1;

    while (i < j)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
