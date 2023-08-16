#include <stdio.h>
#define ADD(a,b,c) ((a)+(b)+(c))
#define MUL(a,b,c) ((a)*(b)*(c))

int main(void)
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d + %d + %d = %d\n",a,b,c,ADD(a,b,c));
    printf("%d x %d x %d = %d\n",a,b,c,MUL(a,b,c));
    return 0;
}