#include <stdio.h>

int fibo(int n);

int main(void)
{
    int num,i;
    printf("입력: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        printf("%d ",fibo(i));
    return 0;
}

int fibo(int n)
{
    if (n<2) return 0;
    else if (n==2) return 1;
    else return fibo(n-1)+fibo(n-2);
}