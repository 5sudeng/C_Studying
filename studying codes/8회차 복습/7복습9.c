#include <stdio.h>

int main(void)
{
    int arr[5][5];
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            arr[i][j]=5*i+j+1;
            printf("%2d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}