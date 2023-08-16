#include <stdio.h>

int main(void)
{
    int num;
    int *pnum;
    pnum = &num;
    scanf("%d",&num);
    printf("%d %#p\n",num,pnum);
    return 0;
}