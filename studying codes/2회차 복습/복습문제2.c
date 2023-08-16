#include <stdio.h>

int main(void)
{
    int i=1,sum=0;
    int n;
    while(1)
    {
        printf("%d.숫자를 입력하세요[종료-1]:",i);
        scanf("%d",&n);
        if(n==-1)
            break;
        i++;
        sum+=n;
    }
    printf("\n평균=%.2f\n",(float)sum/(i-1));
    return 0;
}