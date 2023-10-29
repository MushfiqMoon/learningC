#include <stdio.h>

// void fun(int *arr, int length)
void fun(int arr[], int length)
{
    printf("passing the array withng the function :\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int bz = sizeof(arr);
    int sz = sizeof(arr) / sizeof(int);

    printf("total taken bytes  %d\n", bz);
    printf("Size of arr  %d\n", sz);

    fun(arr, 5);
    return 0;
}