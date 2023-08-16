#include <stdio.h>

int main(void)
{
    int dan,i;
    for(dan=2;dan<=8;dan+=2)
    {
        printf("<%d단>\n",dan);
        for(i=1;i<=dan;i++)
            printf("%d x %d = %d\n",dan,i,dan*i);
        printf("\n");
    }
    return 0;
}