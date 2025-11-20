// write a function which will accepts two input parameters x, y and returns x^2 + y^2
#include <stdio.h>
int sqr (int x, int y)
{
    int prod = (x*x)+(y*y);
    return prod ;
}
void main()
{
    int x = 6, y = 5;
    printf("%d\n", sqr (x,y));
}
