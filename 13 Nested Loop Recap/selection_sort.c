/*
1st line : length of array
2nd line : element of array


if sum of two element of the array is equal to the sum value (3rd line) it will print 'YES' else 'NO'

simple input :
5
3 5 4 1 2

simple oputput :
1 2 3 4 5

*/

#include <stdio.h>

int main()
{

    int count;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }

    // asending order
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // // desending order
    // for (int i = 0; i < count - 1; i++)
    // {
    //     for (int j = i + 1; j < count; j++)
    //     {
    //         if (arr[i] < arr[j])
    //         {
    //             int temp = arr[i];
    //             arr[i] = arr[j];
    //             arr[j] = temp;
    //         }
    //     }
    // }

    // printing the sorted array
    for (int i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}