#include <stdio.h>

int binary_search(int *arr, int left, int right , int val);

int main(void)
{
    int array[] = {2,9,11,15,28,33,40,47,51,64,76,77,82,85,94};
    int length = sizeof(array) / sizeof(int);
    int target = 76;
    int i;

    for(i=0;i<length;i++)
        printf("%d ",array[i]);
    
    int index;
    index = binary_search(array, 0, length-1, target);
    printf("\n%d\n", index);

    return 0;
}

int binary_search(int *arr, int left, int right , int val)
{
    int mid;

    if(left<=right) 
    {
        mid = (left + right)/2;
        if(arr[mid]<val) return binary_search(arr,mid+1,right,val);
        else if(arr[mid]>val) return binary_search(arr,left,mid-1,val);
        else return mid;
    }
    return -1;
}