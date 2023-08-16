#include <stdio.h>

int max(int a, int b, int c);
int min(int a, int b, int c);

int main(void)
{
    int num1, num2, num3;
    printf("세 개의 정수를 입력하세요. : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("가장 큰 수 : %d\n가장 작은 수 : %d\n",max(num1,num2,num3),min(num1,num2,num3));
    return 0;
}

int max(int a, int b, int c)
{
    int tmp = a>b ? a:b;
    int maxi = tmp>c ? tmp:c;
    return maxi;
}

int min(int a, int b, int c)
{
    int tmp = a<b ? a:b;
    int mini = tmp<c ? tmp:c;
    return mini;
}