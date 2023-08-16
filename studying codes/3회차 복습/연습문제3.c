#include <stdio.h>

int main(void)
{
    int n;
    printf("정수입력: ");
    scanf("%d",&n);
    if (n<0)
        printf("절댓값: %d\n",-1*n);
    else
        printf("절댓값: %d\n",n);
    return 0;
}