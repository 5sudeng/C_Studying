#include <stdio.h>

int main(void)
{
    int arr[6] = {1,2,3,4,5,6};
    int *ptr1=&arr[0];
    int *ptr2=&arr[5];
    int i,j,tmp;
    for(i=0;i<3;i++)
    {
        tmp=*ptr1;
        *ptr1=*ptr2;
        *ptr2=tmp;

        ptr1 ++;
        ptr2 --;
    }
    for(j=0;j<6;j++)
        printf("%d ",arr[j]);
    return 0;
}