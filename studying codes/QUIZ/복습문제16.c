#include <stdio.h>

int main(void)
{
    long long num1=12345;
    long double num2=1.2345;
    int num3=123;
    printf("문제 1 : |% -20lld|\n",num1);
    printf("문제 2 : |%020.5Lf|\n",num2);
    printf("문제 3 : |%-#20x|\n",num3);

    return 0;
}