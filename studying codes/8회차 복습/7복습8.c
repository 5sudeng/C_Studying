#include <stdio.h>

int main(void)
{
    int num1;
    float num2;
    int *ptr1=&num1;
    float *ptr2=&num2;
    int **dptr1=&ptr1;
    float **dptr2=&ptr2;
    int ***mdptr1=&dptr1;
    float ***mdptr2=&dptr2;
    printf("num1의 값 : %d, num2의 값 : %lf\n",num1,num2);
    printf("num1의 값 : %d, num2의 값 : %lf\n",*ptr1,*ptr2);
    printf("num1의 값 : %d, num2의 값 : %lf\n",**dptr1,**dptr2);
    printf("num1의 값 : %d, num2의 값 : %lf\n",***mdptr1,***mdptr2);
    printf("num1의 주소 : %p, num2의 주소 : %p\n",&num1,&num2);
    printf("num1의 주소 : %p, num2의 주소 : %p\n",ptr1,ptr2);
    printf("num1의 주소 : %p, num2의 주소 : %p\n",*dptr1,*dptr2);
    printf("num1의 주소 : %p, num2의 주소 : %p\n",**mdptr1,*mdptr2);
    return 0;
}