#include <stdio.h>

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    printf("0th index address - %p\n", &arr[0]);
    printf("0th index address - %p\n", arr);

    printf("0th index value - %d\n", arr[0]);
    printf("0th index value - %d\n", *arr);

    printf("1th index value - %d\n", arr[1]);
    printf("1th index value - %d\n", *(arr + 1));
    // OR :: both are same
    printf("1th index value - %d\n", *(1 + arr));

    // ar[1]-> *(arr + 1)
    // *(arr + 1) -> ar[1]
    // *(1 + arr ) -> ar[1]/1[ar]
    

    return 0;
}