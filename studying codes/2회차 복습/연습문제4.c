#include <stdio.h>

int main(void)
{
    printf("1부터 10까지의 합은: ");
    int i;
    int sum=0;
    for(i=1;i<11;i++)
        sum+=i;
    printf("%d\n",sum);
    return 0;
}