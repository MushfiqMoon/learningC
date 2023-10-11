#include <stdio.h>

int main()
{

    int arrLength;
    scanf("%d\n", &arrLength);

    long long int arr[arrLength];

    for (int i = 0; i < arrLength; i++)
    {
        scanf("%lld", &arr[i]);
    }

    for (int i = arrLength - 1; i >= 0; i--)
    {
        printf("%lld ", arr[i]);
    }

    return 0;
}