#include <stdio.h>
void main()
{
    int arr[4][2] = { {23,32} , {14,41} , {56,65} , {76,67} };
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
}