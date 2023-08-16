#include <stdio.h>

int binary_search(int *arr, int len, int val);

int main(void)
{
    int array[] = {2,9,11,15,28,33,40,47,51,64,76,77,82,85,94};
    int length = sizeof(array) / sizeof(int);
    int target = 76;
    int i;

    for(i=0;i<length;i++)
        printf("%d ",array[i]);
    
    int index;
    index = binary_search(array, length, target);
    printf("\n%d\n", index);

    return 0;
}

int binary_search(int *arr, int len, int val)
{
    int left = 0;
    int right = len - 1;
    int mid;

    while(left<=right)
    {
        mid = (left + right)/2;
        if(arr[mid]<val)
            left = mid + 1;
        else if(arr[mid]>val)
            right = mid - 1;
        else    
            return mid;
    }
    return -1;
}