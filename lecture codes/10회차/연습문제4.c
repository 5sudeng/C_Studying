#include <stdlib.h>

void MaxAndMin(int *arr,int size, int **mxPtr,int **mmPtr);

int main(void)
{
    int arr[5];
    int *maxPtr=&arr[0];
    int *minPtr=&arr[0];
    int i;
    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);
    MaxAndMin(arr,sizeof(arr)/sizeof(int),&maxPtr,&minPtr);
    printf("최대 : %d, 최소 : %d",*maxPtr,*minPtr);
    return 0;
}

void MaxAndMin(int *arr,int size, int **mxPtr,int **mmPtr)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(**mxPtr<arr[i])   *mxPtr=&arr[i];
        if(**mmPtr>arr[i])   *mmPtr=&arr[i];
    }
}