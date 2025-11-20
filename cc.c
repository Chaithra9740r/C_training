// write a c function which will accepts 3 parameters l, b, h and returns volume of cuboid!
#include <stdio.h>
int volume ( int l, int b, int h)
{
    int vol = l * b* h ;
    return vol ;
}
void main ()
{
    int l = 4; int b = 3; int h = 6;
    printf("%d", volume( l, b, h));
}