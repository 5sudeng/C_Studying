#include <stdio.h>

int main(void)
{
    int a[2][3]={1,2,3,4,5,6};
    printf("%d, %d, %d\n",a[1][0],a[1][1],a[1][2]);
    printf("%d, %d, %d\n",*a[1],*(a[1]+1),*(a[1]+2));
    printf("%d, %d, %d\n",*(*(a+1)),*(*(a+1)+1),*(*(a+1)+2)); //왜..?
    return 0;
}