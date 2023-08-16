#include <stdio.h>

int main(void)
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=4-i;j>0;j--)
            printf(" ");
        for(j=2*i+1;j>0;j--)
            printf("*");
        printf("\n");
    }
    for(i=0;i<4;i++)
    {
        for(j=3-i;j<4;j++)
            printf(" ");
        for(j=7-2*i;j>0;j--)
            printf("*");
        printf("\n");
    }
    return 0;
}