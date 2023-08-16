#include <stdio.h>

int main(void)
{
    int *arr = (int *)malloc(sizeof(int)*5);
    int i=0,num;
    do
    {
        scanf("%d",&num);
        if(;;)
            arr = (int*)realloc(arr,sizeof(int)*3);
    } while (num!=-1);
    
    return 0;
}