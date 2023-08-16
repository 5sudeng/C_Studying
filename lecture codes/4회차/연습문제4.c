#include <stdio.h>

void compare(int a, int b)
{
    int num = a>b ? a : b;
    printf("%d\n",num);
}

int main(void)
{
    printf("두 양의 정수를 입력하세요: ");
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("더 큰 값: ");
    compare(num1,num2);
    return 0;
}