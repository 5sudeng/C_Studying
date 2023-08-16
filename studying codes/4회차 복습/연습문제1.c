#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d",&num);
    printf("input: %d\n",num);
    
    int sum=0;
    for(;num>0;num/=10)
        sum += num%10;
    
    printf("%d\n",sum);

    return 0;
}