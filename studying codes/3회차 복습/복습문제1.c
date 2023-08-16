#include <stdio.h>
int main(void)
{
    int a,b,s,f,i,j;
    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d",&a,&b);
    if (a<b)
        s=a ,f=b;
    else
        s=b, f=a;
    for(i=s;i<=f;i++)
    {
        printf("%d단\n",i);
        for(j=1;j<10;j++)
            printf("%d x %d = %d\n",i,j,i*j);
        printf("\n");
    }
    return 0;
}