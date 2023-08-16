#include <stdio.h>

int main(void)
{
    int dan;
    printf("몇 단을 출력하시겠습니까?: ");
    scanf("%d",&dan);
    int i;
    for(i=1;i<10;i++)
    {
        printf("%d x %d = %d\n",dan,i,dan*i);
    }
    return 0;
}