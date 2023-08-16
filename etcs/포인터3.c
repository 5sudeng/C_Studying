#include <stdio.h>

int sumRangeWithPosition(int* pStart, int* pEnd);


int main(void){
    int array[] = {0,1,2,3,4,5,6,7,8,9};
    int sum = sumRangeWithPosition(&array[2], &array[7]);
    printf("%d\n",sum);
    return 0;
}


int sumRangeWithPosition(int* pStart, int* pEnd){
    int sum = 0;
    int index = 1;
    for(int i=*pStart;i<=*pEnd;index++){
        sum += i;
        i = *(pStart+index);
    }
    return sum;
}