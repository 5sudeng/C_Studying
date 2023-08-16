#include <stdio.h>

int main(void)
{
    int n=1;
    int num;
    int sum=0;
    for(;;)
    {
        printf("%d.숫자를 입력하세요[종료-1]:",n);   
        scanf("%d",&num);
        if(num==-1)
            break;
        sum+=num;
        n++;
    }
    printf("\n평균=%.2f\n",(float)sum/(n-1));
    return 0;
}