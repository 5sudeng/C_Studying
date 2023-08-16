#include <stdio.h>

int main(void)
{
    int num;
    printf("음의 정수 입력 : ");
    scanf("%d",&num);
    printf("%d\n",~num+1);
    return 0;
}