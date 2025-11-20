#include <stdio.h>
void main()
{
    float height;
    int age;
    printf("enter your height : ");
    scanf("%f", &height);
    printf("enter your age: ");
    scanf("%d", &age);
    if ((age >= 12) && (height >= 4.5))
    {
    printf("you are eligible");
    }
    else 
    {
        printf("growup and come back");
    }
}    