#include <stdio.h>

int main(void)
{
    printf("1부터 n까지의 누적합을 구합니다.");
    printf("n값을 입력하세요 : ");
    int n;
    scanf("%d",&n);
    return 0;
}

int ssum(int a)
{
    return a==1 ? 1 : a+ ssum(a-1);
}