#include <stdio.h>

int main(void)
{
    int arr1[10],arr2[10],n=0,k,i,j;
    for(k=0;k<10;k++) //이거 저기 밑으로 내려가면 안되나???????
    {
        arr1[k]=n;
        arr2[k]=n;
        n++;
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(arr1[i]+arr2[j]==9)
                printf("(%d, %d)\n",arr1[i],arr2[j]);
        }
    }
    return 0;
}