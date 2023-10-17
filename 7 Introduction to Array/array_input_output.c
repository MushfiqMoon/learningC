#include <stdio.h>

int main()
{

    int n;

    scanf("%d\n", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // printf("%d\n", arr[0]);
    // printf("%d\n", arr[1]);
    // printf("%d\n", arr[2]);

    for (int i = n - 1; i >= 0; i--) // reverc array
    {
        printf("%d\n", arr[i]);
    }


    int myArr[5] = {10,20,30,50,80}; // sum = 190
    int sum = 0;
    for (int i = 0; i < 5; i++){
        sum += myArr[i];
    }
    printf("========\n");
    printf("%d\n", sum);

        return 0;
}