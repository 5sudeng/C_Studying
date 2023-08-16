#include <stdio.h>

int main(void)
{
    int gugudan[3][9],i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<9;j++)
            gugudan[i][j]=(i+2)*(j+1);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<9;j++)
            printf("%2d ",gugudan[i][j]);
        printf("\n");
    }
    return 0;
}