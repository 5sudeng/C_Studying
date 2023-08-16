#include <stdio.h>

double Adder(double arr[],int len);

int main(void)
{
    double arr1[]={1.1,2.2,3.3};
    double arr2[]={1.2,2.4,3.6,4.8};
    printf("arr1의 합 : %lf\n",Adder(arr1,sizeof(arr1)/sizeof(double)));
    printf("arr2의 합 : %lf\n",Adder(arr2,sizeof(arr2)/sizeof(double)));

    return 0;
}

double Adder(double arr[],int len)
{
    double sum=0;
    int i;
    for(i=0;i<len;i++)
        sum+=arr[i];
    return sum;
}