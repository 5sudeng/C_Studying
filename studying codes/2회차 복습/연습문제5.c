#include <stdio.h>

int main(void)
{
    int dan, i;
    for(dan=2;dan<10;dan++)
    {
        printf("%d단\n",dan);
        for(i=1;i<10;i++)
            printf("%d x %d = %d\n",dan,i,dan*i);
        printf("\n");
    }
    return 0;
}