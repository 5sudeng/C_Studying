#include <stdio.h>

double arrSum(double arr[],int leng);

int main(void)
{
    double arr1[]={1.1,2.2,3.3};
    double arr2[]={1.2,2.4,3.6,4.8};
    printf("arr1의 합 : %g\n",arrSum(arr1,sizeof(arr1)/sizeof(double)));
    printf("arr2의 합 : %g\n",arrSum(arr2,sizeof(arr2)/sizeof(double)));
    return 0;
}

double arrSum(double arr[],int leng)
{
    int i;
    double sum=0;
    for(i=0;i<leng;i++)
        sum+=arr[i];
    return sum;
}