#include <stdio.h>

int main(void)
{
    int rows,i,j,k;
    printf("input the number of rows (only odd numbers):");
    scanf("%d",&rows);
    int m=rows/2;
    for(i=1;i<=rows;i++)
    {
        if(i%2==0)
            continue;
        for(j=0;j<m;j++)
            printf(" ");
        for(k=0;k<i;k++)
            printf("*");
        m--;
        printf("\n");
    }
    return 0;
}