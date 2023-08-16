#include <stdio.h>

int main(void)
{
    int arr[5][5];
    int k=25,i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i%2==0)
                arr[j][i]=k;
            else
                arr[4-j][i]=k;
            k--;
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
            printf("%2d ",arr[i][j]);
        printf("\n");
    }
    return 0;
}