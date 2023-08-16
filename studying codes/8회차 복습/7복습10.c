#include <stdio.h>

int main(void)
{
    int arr[5][5];
    int i,j,k,l;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            arr[i][j]=5*i+j+1;
    }
    for(l=0;l<5;l++)
    {
        for(k=0;k<5;k++)
            printf("%2d ",arr[k][l]);
        printf("\n");
    }
    return 0;
}