#include <stdio.h>

int ToBinary(int num);

int main(void)
{
    int decimal;
    printf("입력할 10진수 정수 입력 : ");
    scanf("%d",&decimal);
    ToBinary(decimal);
    puts("");
    return 0;
}

int ToBinary(int num)
{
    if(num>0)
    {
        int bin;
        bin=num%2;
        num/=2;
        ToBinary(num);
        printf("%d",bin);
    }
    return 0;
}