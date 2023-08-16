#include <stdio.h>

int main(void)
{
    printf("input the number: ");
    int i,j;
    scanf("%d",&i);
    for(j=0;j<i;j++)
    {
        printf("*");
        if((j+1)%5==0)
            printf("\n");
    }
    return 0;
}