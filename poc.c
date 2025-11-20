// write a C fucction which will accepts one input parameter r and returns perimeter of the circle, declare pi as constant!
#include <stdio.h>
float peri( float r) 
{
    float const pi = 3.14 ;  
    float perimeter = 2 * pi * r ;
    return perimeter;
} 
void main()
{
    int r = 6;
    printf("%f" , peri(r));
   
}