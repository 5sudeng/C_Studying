#include <stdio.h>

int main(void)
{
    printf("1부터 10까지의 합은:");
    int i;
    int cnt = 0;
    for (i=1; i<=10; i++)
    {
        cnt += i;
    }
    printf("%d\n",cnt);
    return 0;
}