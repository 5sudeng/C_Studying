#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define arrSize 10

int beOrnot(int a[],int num,int *r);

int main(void)
{
    int arr[arrSize];
    int i;
    srand(time(NULL));

    for(i=0;i<arrSize;i++)
    {    
        arr[i]=rand()%99+1;
        printf("%d ",arr[i]);
    }
    puts("");

    int num,result;
    printf("Enter the number you want to search : ");
    scanf("%d",&num);
    beOrnot(arr,num,&result);
    if(result==1) puts("The number you entered is in the array.");
    else puts("The number you entered is not in the array.");
    
    return 0;
}

int beOrnot(int a[],int num,int *r)
{
    int i;
    for(i=0;i<arrSize;i++)
    {
        if(a[i]==num)   
        {   
            *r=1;
            break;
        }
        else    *r=0;
    }
    return *r;
}