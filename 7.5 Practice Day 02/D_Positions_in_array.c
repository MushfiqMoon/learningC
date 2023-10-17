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

        if (arr[i] <= 10)
        {
            printf("A[%d] = %lld\n", i, arr[i]);
        }
       
    }

    return 0;
}