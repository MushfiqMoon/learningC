/*
The Egyptian football team will be in Russia for the World Cup. Of course, they all would like to buy souvenirs for their families. Luckily, they met the king of souvenirs Matryoshka who is famous for his masterpiece Katryoshka. He makes it using different wooden pieces: eyes, mouths and bodies. He can form a nice Katryoshka using one of the following combinations:

Two eyes and one body.
Two eyes, one mouth, and one body.
One eye, one mouth, and one body.
If the king has n
 eyes, m
 mouths and k
 bodies, what is the largest number of Katryoshkas he can make?
Input
Only one line containing three numbers n
, m
 and k
 (0≤n,m,k≤1018
) – the number of eyes, mouths and bodies respectively.

Output
Print the largest number of Katryoshkas he can make.

input
1 2 3
output
1

input
0 11 2
output
0

input
90 24 89
output
57
*/

#include <stdio.h>

int main()
{

    long long int x, y, z;
    long long Katryoshka = 0;
    scanf("%lld %lld %lld", &x, &y, &z);

    if (x >= 1 && z >= 1)
    {
        if (y > x)
        {
            if (x > z)
            {
                Katryoshka = z;
                printf("%lld\n", Katryoshka);
            }else{
                Katryoshka = x;
                printf("%lld\n", Katryoshka);
            }

        }
        else
        {

            for (int i = 1; i <= y; i++)
            {
                Katryoshka++;
            }

            long long int leftOverEyes = x - Katryoshka;
            long long int leftOverBody = z - Katryoshka;

            if (leftOverEyes / 2 <= leftOverBody)
            {
                long long int additionalKatryoshka = leftOverEyes / 2;
                long long int TotalKatryoshka = Katryoshka + additionalKatryoshka;
                printf("%lld\n", TotalKatryoshka);
            }
            else
            {
                long long int TotalKatryoshka = Katryoshka + leftOverBody;
                printf("%lld\n", TotalKatryoshka);
            }
        }
    }

    else
        printf("%lld\n", Katryoshka);

    return 0;
}