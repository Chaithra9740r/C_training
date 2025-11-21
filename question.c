// write a c program with a function with variadic argument.
#include<stdio.h>
#include<stdarg.h>
int sum(int count, ...)
{
    va_list args;
    va_start (args,count);
    int total = 0;
    for(int i=0; i<count; i++)
    {
        total += va_arg(args,int);
    }    
    va_end(args);
    return total;
}
int main()
{
    printf("sum of 3 numbers: %d\n",sum(3,10,20,30));
    printf("sum of 5 numbers:%d\n",sum(5,1,2,3,4,5));
    return 0;
}