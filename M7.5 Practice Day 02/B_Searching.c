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

    long long int arrVal;
    scanf("%lld\n", &arrVal);

    int foundIndex = -1;

    for (int i = 0; i < arrLength; i++)
    {

        if (arr[i] == arrVal)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex < 0)
    {
        printf("%d\n", foundIndex);
    }
    else
    {
        printf("%d\n", foundIndex);
    }

    return 0;
}