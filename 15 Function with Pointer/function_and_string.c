#include <stdio.h>
#include <string.h>

// we dont need to pass the length for string
void fun(char arr[])
{
    printf("inside fun - %d\n", strlen(arr));

    arr[6] = 'q';
}

int main()
{

    char arr[20] = "Mushfik";
    printf("inside main -  %d\n", strlen(arr));

    printf("printing the string before calling the fun function\n");
    for (int i = 0; i < strlen(arr); i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");

    fun(arr);

    // it is change after calling the function
    printf("printing the string after it change on the fun function\n");
    for (int i = 0; i < strlen(arr); i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}


// it is proven that pass by reference is changing the original array