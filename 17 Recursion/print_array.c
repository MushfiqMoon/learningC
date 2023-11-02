#include <stdio.h>

void fun(int arr[], int l, int i)
{
    if (l == i) return;
    
    
    printf("%d\n", arr[i]);
    fun(arr, l,  i+1);


}
int main()
{

    int length;
    scanf("%d", &length);

    int arr[length];
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &arr[i]);
    }

    fun(arr, length, 0);

    return 0;
}