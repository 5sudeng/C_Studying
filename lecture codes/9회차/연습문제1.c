#include <stdio.h>

int SquareByValue(int a)
{
    return a*a;
}

int SquareByReference(int *ptr)
{
    return *ptr*=*ptr;
}

int main(void)
{
    int num;
    scanf("%d",&num);
    printf("%d\n",SquareByValue(num));
    printf("%d\n",SquareByReference(&num));

    return 0;
}