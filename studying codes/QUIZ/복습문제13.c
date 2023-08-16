#include <stdio.h>

int main(void)
{
    double arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d. 잔고를 입력하세요 : ",i+1);
        scanf("%lf",&arr[i]);
    }
    puts("");
    printf("이자율을 입력하세요 : ");
    double inter;
    scanf("%lf",&inter);
    
    for(i=0;i<5;i++)
    {
        arr[i]+=arr[i]*inter/100;
        printf("%.2lf ",arr[i]);
    }
    puts("");
    return 0;
}