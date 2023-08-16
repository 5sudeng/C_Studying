#include <stdio.h>

int main(void)
{
    int a[10]={2,5,8,1,4,7,3,10,6,9};
    int *MaxPtr,*MinPtr;
    MaxPtr = &a[0];
    MinPtr = &a[0];
    int min=11,max=0;
    int i;
    for(i=0;i<10;i++)
    {
        if(min>*MinPtr)
            min=*MinPtr;
        if(max<*MaxPtr)
            max=*MaxPtr;
        MinPtr++;
        MaxPtr++;
    }
    while(min!=*MinPtr)
        MinPtr=&min;
    while(max!=*MaxPtr)
        MaxPtr=&max;

    printf("Value of the item MaxPtr pointing at: %d\n",*MaxPtr);
    printf("Value of the item MinxPtr pointing at: %d\n",*MinPtr);
    return 0;
}