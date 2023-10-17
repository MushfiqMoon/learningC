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

    for (int i = 0; i < arrLength; i++)
    {

        if (arr[i] < 0)
        {
            arr[i] = 2;
        }
        else if (arr[i] > 0)
        {
            arr[i] = 1;
        }
    }

    for (int i = 0; i < arrLength; i++){
        printf("%lld ", arr[i]);
    }


    return 0;
}