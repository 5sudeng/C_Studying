#include <stdio.h>

void starOutput(int num);
int rows;

int main(void)
{
    printf("input the number of rows(only odd number): ");
    scanf("%d",&rows);
    int m=rows/2+1;
    starOutput(m);
    return 0;
}

void starOutput(int num)
{
    int j,i;
    for(i=0;i<num;i++)
    {
        for(j=1;j<num-i;j++) printf(" ");
        for(j=0;j<2*i+1;j++) printf("*");
        printf("\n");
    }
    for(i=1;i<num;i++)
    {
        for(j=0;j<i;j++) printf(" ");
        for(j=0;j<rows-2*i;j++) printf("*");
        printf("\n");
    }
}