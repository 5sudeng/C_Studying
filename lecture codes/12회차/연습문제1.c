#include <stdio.h>
#define SIZE 6

void BubbleSort(int *ary);


int main(void)
{
    int arr[] = {10,21,5,8,1,12};
    int i;

    BubbleSort(arr);
    for(i=0;i<SIZE;i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}

void BubbleSort(int *ary)
{
    int i,j,tmp;
    for(i=0;i<SIZE-1;i++)
    {
        for(j=0;j<SIZE-1-i;j++)
        {
            if(ary[j]>ary[j+1])
            {
                tmp=ary[j];
                ary[j]=ary[j+1];
                ary[j+1]=tmp;
            }
        }
        for(j=0;j<SIZE;j++)
            printf("%d ",ary[j]);
        printf("\n");
    }
}