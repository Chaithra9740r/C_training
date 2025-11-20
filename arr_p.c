#include <stdio.h>
void main()
{
    int arr[4] = {87, 97,  34, 56} ;
    int *p = arr;
    printf("%d\n", *p);
    printf("%d\n", *(p+1));
    
}