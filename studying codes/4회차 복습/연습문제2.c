#include <stdio.h>

void allsum(a)
{
    int sum = 0;
    for(;a>0;a/=10)
        sum+=a%10;
    printf("%d\n",sum);
}

int main(void)
{
    int input;
    scanf("%d",&input);
    printf("input: %d\n",input);
    allsum(input);
    return 0;
}