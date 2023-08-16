#include <stdio.h>

int main(void)
{
    int i,j;
    for(i=2;i<10;i++)
    {
        printf("%d단\t\t",i);
    }
    printf("\n\n");
    for(j=1;j<10;j++)
    {
        for(i=2;i<10;i++)
            printf("%d x %d = %d \t",i,j,i*j);
        printf("\n");
    }
    return 0;
}