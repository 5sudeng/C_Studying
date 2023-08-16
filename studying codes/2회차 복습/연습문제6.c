#include <stdio.h>

int main(void)
{
    printf("1~100까지 짝수의 합을 구하시오.\n");
    int i;
    int sum=0;
    for(i=2;i<=100;i+=2)
        sum += i;
    printf("%d\n",sum);
    return 0;
}