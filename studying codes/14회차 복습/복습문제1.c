#include <stdio.h>

int data[10]={4,1,2,3,9,7,8,6,10,5};
void quick_sort(int *data, int start, int end);

int main(void)
{
    int i;
    for(i=0;i<10;i++)
        printf("%d ",data[i]);
    puts("");

    quick_sort(data,0,9);
    return 0;
}

void quick_sort(int *data, int start, int end)
{
    if(start>=end)
        return;
    int pivot = start;
    int i = pivot +1;
    int j = end;
    int tmp,k;
    while(i<=j)
    {
        while(i<=end && data[i]>=data[pivot])
            i++;
        while(j>start && data[j]<=data[pivot])
            j--;
        if(i>j)
        {
            tmp = data[pivot];
            data[pivot] = data[j];
            data[j] = tmp;
        }
        else
        {
            tmp = data[i];
            data[i] = data[j];
            data[j] = tmp;
        }
    }
    for(k=0;k<10;k++)
        printf("%d ",data[k]);
    puts("");
    quick_sort(data,start,j-1);
    quick_sort(data,j+1,end);
}