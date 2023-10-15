#include <stdio.h>

int main()
{

    int lengthOne;

    scanf("%d", &lengthOne);

    int arrOne[lengthOne];

    for (int i = 0; i < lengthOne; i++)
    {
        scanf("%d", &arrOne[i]);
    }

    int lengthTwo;

    scanf("%d", &lengthTwo);

    int arrTwo[lengthTwo];

    for (int i = 0; i < lengthTwo; i++)
    {
        scanf("%d", &arrTwo[i]);
    }

    // new array wher the values will be copied
    int copyArr[lengthOne + lengthTwo];

    // first array copy done
    for (int i = 0; i < lengthOne; i++)
    {
        copyArr[i] = arrOne[i];
    }

    // getting the index of the copy array so we are abel to put it
    // after the first array is been coppied
    
    int i = lengthOne;

    // second array copy done
    for (int j = 0; j < lengthTwo; j++)
    {
        copyArr[i] = arrTwo[j];
        i++;
    }

    for (int i = 0; i < lengthOne + lengthTwo; i++)
    {
        printf("%d ", copyArr[i]);
    }

    return 0;
}
