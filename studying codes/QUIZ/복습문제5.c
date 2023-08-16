#include <stdio.h>

int main(void)
{
    int num,i,j,k;
    char arr[100]={'B'};
    for(j=1;j<100;j++)
        arr[j]='A';
    printf("정수 입력 : ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        for(k=0;k<=i+1;k++)
            printf("%c",arr[i-k]);
        printf("\n");
    }
    return 0;
}