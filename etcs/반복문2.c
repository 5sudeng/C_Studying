#include <stdio.h>

double FuelEfficiency(double, double);

int main(void){
    char op;
    double oil, dis, fe;
    do{
        printf("주입연료량을 입력하세요 : ");
        scanf("%lf",&oil);
        printf("주행거리를 입력하세요 : ");
        scanf("%lf",&dis);
        fe = FuelEfficiency(oil, dis);
        printf("자동차의 연비는 %g입니다.\n",fe);
        printf("다시 계산하시겠습니까?(Y/N) : ");
        scanf(" %c",&op);
    }while(op!='N'&& op!='n');
    return 0;
}


double FuelEfficiency(double oil, double dis){
    return dis/oil;
}