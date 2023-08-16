#include <stdio.h>

int main(void)
{
    printf("몇 단을 출력하시겠습니까? : ");
    int dan;
    scanf("%d",&dan);
    int i = 1;
    while (i<10)
    {
        printf("%d x %d = %d\n",dan,i,dan*i);
        i ++ ;
    }
    return 0;
}