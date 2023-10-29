#include <stdio.h>
void m(int p, int q)

{
    // p = 5, q = 6
    int temp = p;
    p = q;
    q = temp;

}

int main()

{
    int a = 6, b = 5;
    m(a, b);
    printf("%d %d\n", a, b);
}