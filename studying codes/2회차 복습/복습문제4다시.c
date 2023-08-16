#include <stdio.h>

int main(void)
{
    int rows,i,j;
   
    printf("input the number of rows (only odd number): ");
    scanf("%d",&rows);
    
    int m=rows/2+1;

    for(i=0;i<m;i++)
    {
        for(j=1;j<m-i;j++)
            printf(" ");
        for(j=0;j<2*i+1;j++)
            printf("*");
        printf("\n");
    }
    for(i=1;i<m;i++)
    {
        for(j=0;j<i;j++)
            printf(" ");
        for(j=0;j<rows-2*i;j++)
            printf("*");
        printf("\n");
    }
    
    return 0;
}