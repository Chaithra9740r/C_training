#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p = (int *)malloc(4*sizeof(int));
    p[0] = 87;
    p[1] = 66;
    p[2] = 123;
    p[3] = 265;
    printf("%d", p[0]);
    free(p);
}