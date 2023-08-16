#include <stdio.h>

int main(void)
{
    int n,i;
    int max=1;
    int k=0;

    printf("상수 n 입력 : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        max *= 2;
        if(n<max)
        {
            printf("공식을 만족하는 k의 최댓값은 %d\n",k);
            break;
        }
        k++;
    } 
    return 0;
}