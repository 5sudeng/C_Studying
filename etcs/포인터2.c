#include <stdio.h>

int sumRangeWithIndex(int* array, int start, int end);

int main(void){
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int sum = sumRangeWithIndex(array, 2, 7);
    printf("%d\n",sum);
    return 0;
}

int sumRangeWithIndex(int* array, int start, int end){
    int sum = 0;
    for(int i=start; i<=end;i++){
        sum += array[i];
    }
    return sum;
}