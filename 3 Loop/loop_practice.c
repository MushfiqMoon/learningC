#include<stdio.h>

int main (){

    int num, i;
    int long long sum = 0;

    scanf("%d", &num);

    for(i = 1; i <= num; i++)
    {
        sum += i;
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    printf("||\n");
    printf("||");
    


    return 0;
}