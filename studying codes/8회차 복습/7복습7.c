#include <stdio.h>

int main(void)
{
    int arr[5]={1,2,3,4,5};
    int *ptr=&arr[4];
    int total=0,i;
    for(i=4;i>=0;i--)
    {
        total+=*ptr--;
        printf("arr[%d] : %d\n",i,arr[i]);
    }
    printf("%d\n",total);
    return 0;
}