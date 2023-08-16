#include <stdio.h>

double madeabs(double a);

int main(void)
{
    double num,abs;
    while(1)
    { 
        printf("숫자를 입력하세요 : ");
        scanf("%lf",&num);
        if (num!=0)
            abs=madeabs(num);
        printf("%lf\n",abs);
    }
    return 0;
}

double madeabs(double a)
{
    if (a>0) 
        return a;
    else if (a<0)
        return -1*a; 
}