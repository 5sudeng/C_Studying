#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maxMinSum(int arr[],int len,int *M,int *m,int *s);

int main(void)
{
    srand(time(NULL));
    int i;
    int arr[15];
    for(i=0;i<15;i++)
    {
        arr[i]=rand()%56-5;
        printf("%d ",arr[i]);
    }
    puts("");
    int max=-5;
    int min=50;
    int sum=0;
    maxMinSum(arr,sizeof(arr)/sizeof(int),&max,&min,&sum);
    printf("최댓값: %d\n최솟값: %d\n총 합: %d\n",max,min,sum);
    return 0;
}

int maxMinSum(int arr[],int len,int *M,int *m,int *s)
{
    int i;
    for(i=0;i<len;i++)
    {
        if(*M<arr[i])  *M=arr[i];
        if(*m>arr[i])  *m=arr[i];
        *s+=arr[i];
    }
    return *M,*m,*s;
}