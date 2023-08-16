#include <stdio.h>

int main(void)
{
    int num1=2;
    float num2=3.0;
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    int **dptr1=&ptr1;
    int **dptr2=&ptr2;
    int ***mdptr1=&dptr1;
    int ***mdptr2=&dptr2;   
    printf("방법 1: num1 : %d num2 : %f\n",num1,num2);
    printf("방법 2: num1 : %d num2 : %f\n",*ptr1,*ptr2);
    printf("방법 3: num1 : %d num2 : %f\n",**dptr1,**dptr2);
    printf("방법 4: num1 : %d num2 : %f\n",***mdptr1,***mdptr2);
    return 0;
}