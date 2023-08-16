#include <stdio.h>

int main(void)
{
    int cnt=0, j;
    
    printf("2와 3의 배수가 아닌 100 이하의 자연수 :\n");

    for(j=1;j<=100;j++)
    {
        if(j%2==0 || j%3==0)
            continue;
        else
        {
            printf("%4d ",j);
            cnt++;
            if(cnt%5==0)
                printf("\n");
        }

    }
    printf("\n");

    printf("개수 : %d\n",cnt);

    int num,cnt2,i,l;
    printf("2 또는 3을 입력하세요 : ");
    scanf("%d",&num);

    printf("숫자를 입력하세요 : ");
    scanf("%d",&cnt2);

    if(num==2)
        for(i=0;i<cnt2;i++)
            printf("%d ",2*(i+1));
    else
        for(l=0;l<cnt2;l++)
            printf("%d ",3*(l+1));
    printf("\n");

    return 0;
}