#include <stdio.h>
#define SIZE 6

void SelectionSort(int *list);

int main(void)
{
    int arr[SIZE] = {10,21,5,8,1,12};
    int k;
    for(k = 0;k<SIZE;k++)
        printf("%d ", *(arr+k));
    puts("");
    SelectionSort(arr);
    return 0;
}

void SelectionSort(int *list)
{
    int i,j,k,tmp;
    for(i=0;i<SIZE-1;i++)
    {
        for(j=i+1;i<SIZE;j++)
        {
            if(list[j]<list[i])
            {
                tmp=list[j];
                list[j]=list[i];
                list[i]=tmp;
            }
        }
        for(k=0;k<SIZE;k++)
            printf("%d ",*(list+k));
        puts("");
    }
}