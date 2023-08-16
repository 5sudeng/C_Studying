#include <stdio.h>

int qualMax(int arr[][3],int vlen);

int main(void)
{
    int arr1[2][3]={{2,1,4},{8,4,7}};
    int arr2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("배열 1 최댓값 : %d\n",qualMax(arr1,sizeof(arr1)/(sizeof(int)*3)));
    printf("배열 2 최댓값 : %d\n",qualMax(arr2,sizeof(arr2)/(sizeof(int)*3)));
    return 0;
}

int qualMax(int arr[][3],int vlen)
{
    int max=arr[0][0];
    int i,j;
    for(i=0;i<vlen;i++)
    {
        for(j=0;j<3;j++)
            if(max<arr[i][j]) max=arr[i][j];
    }
    return max;
}