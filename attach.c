#include<stdio.h>
void name(char first[],char last[], int sw)
{
    int i = 0;
    char full[100];
    while (first[i] != '\0') // adding first
    {
        full[i] = first[i];
        i++;
    }
    full[i] = ' '; // adding space
    i++;
    int j = 0;
    while(last[j] != '\0') //adding last 
    {
        full[i] = last[j];
        i++;
        j++;
    }
    int len = i+1;
    if (len<sw)
    printf("first in the screen");
    else
    printf("does not first in the screen");
    full[i] = ' ';
    printf("%s", full);
}
void main()
{
    char first[100] = "Raj";
    char last[100] = "Kumar";
    int sw;
    name(first,last,sw);
}
