#include <stdio.h>
void main()
{
    int r;
    printf("Enter the radius : ");
    scanf("%d", &r);
    const float pi = 3.14 ;
    float area = pi* r * r;
    printf("the area of circle is: %f", area);
}