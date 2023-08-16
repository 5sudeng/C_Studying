#include <stdio.h>

int *sum(int a, int b);

int main(void)
{
    int a, b;
    int *tot;
    a=10;
    b=20;
    tot=sum(a,b);
    printf("%d\n",*tot);
    return 0;
}


int *sum(int a, int b)
{
    static int res;
    res = a+b;
    return &res;
}