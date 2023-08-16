#include <stdio.h>
#define rate 0.1

double CalBonus(int m, float r, int d);

int main(void)
{
    int money, day, inter;
    printf("얼마를 입금하시겠습니까? (원 단위) : ");
    scanf("%d",&money);
    printf("얼마 동안 입금하시겠습니까? (일 단위) : ");
    scanf("%d",&day);
    printf("이자 : %.2lf원\n",CalBonus(money,rate,day));
    return 0;
}

double CalBonus(int m, float r, int d)
{
    return m*r*d;
}