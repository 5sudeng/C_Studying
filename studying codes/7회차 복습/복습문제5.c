#include <stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5};
    int *ptr = &a[0];

    int j;

    for(j=0;j<5;j++)
        *(ptr+j) +=2;

    int i;

    for(i=0;i<5;i++)
        printf("%d ",a[i]);
    printf("\n");

    return 0;
}