#include <stdio.h>

int main(void)
{
    int a,b;
    while(1)
    {
        printf("두 개의 정수를 입력하세요 : ");
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)
            break;
        else if (b==0)
            continue;   
        else
            printf("몫 : %d 나머지 : %d\n",a/b,a%b);
    }
    return 0;
}