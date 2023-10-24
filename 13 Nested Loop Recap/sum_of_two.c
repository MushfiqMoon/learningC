/*
1st line : length of array
2nd line : element of array
3rd line : sum value

if sum of two element of the array is equal to the sum value (3rd line) it will print 'YES' else 'NO'

simple input :
5
1 2 3 4 5
99
simple oputput :
YES

*/

#include <stdio.h>

int main()
{

    int count, inputSum;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &inputSum);

    int flag = 0;

    for (int i = 0; i < count - 1; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (arr[i] + arr[j] == inputSum)
            {
                flag++;
            }
        }
    }

    if (flag == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("YES\n");
    }

    return 0;
}