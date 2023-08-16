#include <stdio.h>

void gugudan(int a, int b);


int main(void)
{
    int num1,num2;
    printf("두 개의 정수를 입력하세요: ");
    scanf("%d %d",&num1,&num2);
    printf("\n");
    gugudan(num1,num2);
    return 0;
}

void gugudan(int a, int b)
{
    int s,f,i,j;
    if (a<b)
    {
        s=a;
        f=b;
    }
    else 
    {    
        s=b;
        f=a;
    }

    for(i=s;i<=f;i++)
    {
        printf("%d단\n",i);
        for(j=1;j<10;j++)
            printf("%d x %d = %d\n",i,j,i*j);
        printf("\n");
    }
}