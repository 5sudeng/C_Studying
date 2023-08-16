#include <stdio.h>

int *sum(int a, int b);

int main(void)
{
    int a=10,b=20;
    int *total;
    total = sum(a,b);
    printf("%d\n",*total);
    return 0;
}

int *sum(int a, int b)
{
    static int tot;
    tot=a+b;
    return &tot;
}