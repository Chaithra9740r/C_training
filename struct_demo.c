#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    s1.age = 18;
    s1.marks = 66.6;
    strcpy(s1.name,"chaithra");
    struct student s2;
    s2.age = 80;
    s2.marks = 76.9;
    strcpy(s1.name,"joey");
    struct student s3 = {"popaye",17,55,55};
    printf("%s",s3.name);
    printf("%d",s3.age);
}


