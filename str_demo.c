#include <stdio.h>
#include <string.h>
void main()
{
    char des [100] = "we are super kids" ;
    char se [10] = "we";
    if ((strstr(des, se))!= NULL)
    printf("Found");
    else
    printf("Not found");
} 
