#include <stdio.h>
 
int main(void)
{
    int a,b;
    printf("두 정수를 입력하세요 : ");
    scanf("%d %d",&a,&b);
    int s = a<b ? a : b;
    int f = a>b ? a : b;

    int sum=0;
    while(s<=f)
    {
        sum += s;
        s++;
    }
    printf("%d\n",sum);
    return 0;
}