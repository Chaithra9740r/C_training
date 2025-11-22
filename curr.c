#include<stdio.h>
void fake_swap(float ca, float cb)
{
    float temp = 0;
    temp = ca;
    ca = cb;
    cb = temp;
    printf("fake swap in fn: ca = %f\n", ca,cb); 
}
void real_swap(float *ca, float *cb)
{
    float temp = 0;
    temp = *ca;
    *ca = *cb;
    *cb = temp;
    printf("real swap in fn: *ca = %f\n", *ca,*cb);
}
void main()
{
    float ca,cb;
    printf("enter currency A:");
    scanf("%f",&ca);
    printf("enter currency B:");
    scanf("%f",&cb);
    fake_swap(ca,cb);
    printf("fake_swap:ca = %f\n",ca,cb);
    real_swap(&ca,&cb);
    printf("real swap:ca = %f\n",ca,cb);
}