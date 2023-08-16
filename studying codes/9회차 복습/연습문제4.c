#include <stdio.h>

void oddEven(int arr[],int len);
void outArr(int arr[],int len);

int main(void)
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={1,3,5,2,4,6};
    oddEven(arr1,sizeof(arr1)/sizeof(int));
    oddEven(arr2,sizeof(arr2)/sizeof(int));
    outArr(arr1,sizeof(arr1)/sizeof(int));
    outArr(arr2,sizeof(arr2)/sizeof(int));
    return 0;
}

void oddEven(int arr[],int len)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(arr[i]%2==0) arr[i]=0;
        else arr[i]=1;
    }
}

void outArr(int arr[],int len)
{
    int i;
    for(i=0;i<len;i++)
        printf("%d ",arr[i]);
    printf("\n");
}