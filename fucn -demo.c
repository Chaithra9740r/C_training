#include <stdio.h>
int myadd (int a, int b)
{
    int sum = a + b;
    return sum;
}
void main()
{
    int a = 60, b = 50;
    printf("%d\n", myadd (a,b));
    int c= 40, d = 30;
    printf("%d\n", myadd (c,d));
}
