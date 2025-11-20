#include <stdio.h>
#include <stdlib.h>

int subarr ( int arr[], int n)
{
    int sub = arr[0] - arr[n-1];
    return abs(sub);
}

void main()
 {
    int arr[3] = { 22, 34, 19}; 
   int size = 3 ;
   printf("%d",subarr (arr,size));
}
