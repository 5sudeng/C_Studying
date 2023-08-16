#include <stdio.h>

int main(void)
{
    int i,j,k;
    for(i=0;i<5;i++)
    {      
        for(j=0;j<i;j++)
            printf(" ");
        for(k=9-2*i;k>0;k--)
            printf("*");
        printf("\n");
    }
    return 0;
}