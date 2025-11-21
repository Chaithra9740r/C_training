// write a function which will multiplay 3 numbers and call it by reference.
#include<stdio.h>
void product_value  (int a, int b, int c)
{
    int product = (a) * (b) * (c);
    printf("%d", product);
}

void main()
{
    int a=3;
    int b=6;
    int c=9;
    printf("call by value: \n");
    product_value(a,b,&c);
    printf("call by reference: \n");
    product_ref(&a,&b,&c); 
}
