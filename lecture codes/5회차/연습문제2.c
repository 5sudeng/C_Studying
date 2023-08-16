#include <stdio.h>


int quo(int a,int b)
{
    if (b==1)
        return a;
    else
        return a*quo(a,b-1);
}

int main(void)
{
    printf("%d\n",quo(2,4));
    return 0;
}