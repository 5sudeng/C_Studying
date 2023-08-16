#include <stdio.h>

int main(void)
{
    int a;
    int *aPtr;
    aPtr=&a;
    scanf("%d",&a);
    printf("%d %#p\n",a,aPtr);
}