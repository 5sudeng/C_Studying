#include <stdio.h>

int main(void)
{
    printf("input the number: ");
    int i,cnt;
    scanf("%d",&i);
    for(cnt=0;cnt<i/5;cnt++)
        printf("*****\n");
    for(cnt=0;cnt<i%5;cnt++)
        printf("*");
    printf("\n");
    return 0;
}