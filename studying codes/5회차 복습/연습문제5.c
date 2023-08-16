#include <stdio.h>

int sssum(int num);

int main(void)
{
    int num;
    printf("1부터 n까지의 누적합을 구합니다.");
    printf("\nn값을 입력하세요 : ");
    scanf("%d",&num);
    printf("1부터 %d까지의 합은 %d입니다.\n",num,sssum(num));
    return 0;
}

int sssum(int num)
{
    if(num==1) return 1;
    else return num+sssum(num-1);
}