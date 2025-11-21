#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    struct student*p=&s1;
    strcpy(p->name,"chaithra");
    p-> age = 18;
    p->marks = 98.8;
    printf("%d",p->age);
    printf("%s",p->name);
    printf("%f",p->marks);
}
