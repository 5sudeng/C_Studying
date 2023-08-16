#include <stdio.h>
#define SIZE 5

void insertion_sort(int list[]);

int main(void)
{
    int i;
    int list[SIZE] = {8,5,6,2,4};

    for(i=0;i<SIZE;i++)
        printf("%d ",list[i]);
    puts("");

    insertion_sort(list);
    return 0;
}

void insertion_sort(int list[])
{
    int i,j,k,key;
    for(i=1;i<SIZE;i++)
    {
        key=list[i];
        for(j=i-1;j>=0 && list[j]>key;j--)
            list[j+1]=list[j];
        list[j+1]=key;

        for(k=0;k<SIZE;k++)
            printf("%d ",list[k]);
        puts("");
    }
}