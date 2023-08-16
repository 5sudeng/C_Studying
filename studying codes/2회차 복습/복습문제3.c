#include <stdio.h>

int main(void)
{
    int i=1,sum=0;
    int n;
    do
    {
        printf("%d.숫자를 입력하세요:",i);
        scanf("%d",&n);
        sum+=n;
        i++;
    }
    while(n!=-1);
    printf("\n평균=%.2f\n",(float)(sum+1)/(i-2));
    return 0;
}