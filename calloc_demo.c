#include<stdio.h>
#include<stdio.h>
void main()
{
    float *p=(int*)calloc(4,sizeof(int));
    p[0] = 98;
    p[1] = 54;
    p[2] = 96;
    p[3] = 65;
    printf("%f",p[0]);
    free(p);
}