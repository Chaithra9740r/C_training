#include<stdio.h>
int search(int arr[], int key,int n)
{
    for (int i=0; i<n; i++)
    {
        if(arr[i]==key)
        return 1;
    }
    return 0;
}
void main()
{
    int arr[7] = {54,65,543.342,543,23,43};
    int n = 7;
    int key;
    printf("what are you searching?");
    scanf("%d",&key);
    printf("%d",search(arr,key,n)); 
}
