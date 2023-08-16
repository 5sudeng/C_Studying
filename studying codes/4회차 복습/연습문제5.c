#include <stdio.h>

int square(int num)
{
    return num*num;
}

int main(void)
{
    int i;
    for(i=1;i<=10;i++)
        printf("%d ",square(i));
    return 0;
}