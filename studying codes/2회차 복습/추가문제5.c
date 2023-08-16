#include <stdio.h>

int main(void)
{
    int start=0, end=10;
    int i,j;
    for(i=0;i<9;i++)
    {
        if (i<10/2)
        {
            start = i;
            end --;
        }
        else
        {
            start --;
            end ++;
        }

        for(j=start;j>0;j--)
            printf(" ");
        for(j=start;j<end;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}