#include <stdio.h>
#include <limits.h>

int main()
{

    int arrLength;
    scanf("%d\n", &arrLength);

    long long int arr[arrLength];

    for (int i = 0; i < arrLength; i++)
    {
        scanf("%lld", &arr[i]);
    }
    

    long long int minIntValue = INT_MAX;
    int position;

    for (int i = 0; i < arrLength ; i++)
    {

        if (arr[i] < minIntValue)
        {
            minIntValue = arr[i];
            position = i+1;
        }
    }
    printf("%lld %d\n", minIntValue, position);

    return 0;
}