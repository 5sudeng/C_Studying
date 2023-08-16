#include <stdio.h>

int SquareByValue(int a);
int SquareByReference(int *a);

int main(void)
{
    int num1;
    scanf("%d",&num1);
    printf("num1 : %d\n",num1);
    printf("%d\n",SquareByValue(num1));
    printf("함수1 실행 후 num1 : %d\n",num1);
    printf("%d\n",SquareByReference(&num1));
    printf("함수2 실행 후 num1 : %d\n",num1);
    return 0;
}

int SquareByValue(int a)
{
    return a*a;
}

int SquareByReference(int *a)
{
    return *a*=*a;
}