#include <stdio.h>

void printOperator(float a,int b)
{
    printf("%f + %d = %.2f\n",a,b,a+b);
    printf("%f - %d = %.2f\n",a,b,a-b);
    printf("%f * %d = %.2f\n",a,b,a*b);
    printf("%.0f %% %d = %d\n",a,b,(int)a%b);
}
int main(void)
{
    float num1;
    int num2;
    printf("두 수를 입력하세요");
    scanf("%f %d",&num1,&num2);
    printOperator(num1,num2);
    return 0;
}