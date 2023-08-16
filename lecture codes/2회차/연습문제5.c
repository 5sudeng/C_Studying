#include <stdio.h>

int main(void)
{
    int dan;
    int n;
    for (dan=2;dan<10;dan++)
    {
        printf("%d단\n",dan);
        for (n=1;n<10;n++)
        {
            printf("%d x %d = %d",dan,n,dan*n);
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}