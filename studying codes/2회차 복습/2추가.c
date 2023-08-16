#include <stdio.h>

int main(void)
{
    printf("input the number of rows:");
    
    int rows,i,j;
    scanf("%d",&rows);

    for(i=1;i<=rows;i++)
    {
        if (i%2==1)
        {
            for(j=0;j<i;j++)
            {
                if (j%2==0) printf("@");
                else printf("#");
            }
            printf("\n");
        }
        else
        {
            for(j=0;j<i;j++)
            {
                if(j%2==0) printf("a");
                else printf("b");
            }
            printf("\n");
        }
    }
    return 0;
}