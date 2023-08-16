#include <stdio.h>

int main(void)
{
    printf("1.덧셈 2.뺄셈 3.곱셈 4.나눗셈\n선택? ");
    int n;
    float a,b,result;
    scanf("%d",&n);
    printf("두 개의 실수 입력: ");
    scanf("%f %f",&a,&b);
    if(n==1)
        result=a+b;
    else if(n==2)
        result=a-b;
    else if(n==3)
        result=a*b;
    else if(n==4)
        result=a/b;
    printf("결과: %.2f\n",result);
    return 0;
}