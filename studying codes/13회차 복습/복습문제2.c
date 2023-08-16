#include <stdio.h>
#include <math.h>

int main(void)
{
    double i,j,isin;
    for(i=0;i<3;i+=0.1)
    {
        isin=sin(i);
        {
            for(j=0;j<isin*50;j++)
                printf("*");
            puts("");
        }
    }
    return 0;
}