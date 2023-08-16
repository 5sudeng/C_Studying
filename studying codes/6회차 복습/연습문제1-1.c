#include <stdio.h>

int main(void)
{
    char a[10];
    int i;
    for(i=0;i<10;i++)
        scanf(" %c",&a[i]);
    printf("%c %c %c\n",a[0],a[3],a[6]);
    return 0;
}