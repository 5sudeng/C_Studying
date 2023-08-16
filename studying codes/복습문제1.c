#include <stdio.h>
#define MAX(A, B) (A) < (B) ? B : A


int main(void)
{
    int a, b;
    printf("두 개의 정수 입력 : ");
    scanf("%d %d",&a, &b);
    printf("%d가(이) 더 큰 수 입니다.\n", MAX(a,b));
    
    return 0;
}