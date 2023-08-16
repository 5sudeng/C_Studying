#include <stdio.h>

int main(void)
{
    printf("1~100까지의 짝수의 합을 구하시오.\n");
    int i;
    int cnt = 0;
    for (i=2;i<=100;i+=2)
        cnt += i;
    printf("%d\n",cnt);
    return 0;
}