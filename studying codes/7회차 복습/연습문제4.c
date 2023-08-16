#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int *a = (int *)malloc(sizeof(int));
    int *b = (int *)malloc(sizeof(int));
    int *c = (int *)malloc(sizeof(int));
    scanf("%d %d",a,b);
    *c=abs(*a-*b);
    printf("%d\n",*c);
    return 0;
}