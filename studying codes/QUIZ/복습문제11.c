#include <stdio.h>

void piggyBank(int a);
int total=0;

int main(void)
{
    int money;
    while(1)
    {
        printf("얼마를 저금하시겠습니까? : ");
        scanf("%d",&money);
        piggyBank(money);
        printf("\n");
    }
    return 0;
}

void piggyBank(int a)
{
    total+=a;
    printf("총 %d원 입니다\n",total);
}