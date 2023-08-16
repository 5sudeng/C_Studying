#include <stdio.h>

int main(void)
{
    int num;
    printf("음의 정수 입력 : ");
    scanf("%d",&num);
    int pnum = ~num+1;
    printf("입력에 대한 절댓값 : %d\n",pnum);
    return 0;
}