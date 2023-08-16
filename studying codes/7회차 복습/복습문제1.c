#include <stdio.h>

int main(void)
{
    int num1,num2;
    int *pn1,*pn2;

    pn1=&num1, pn2=&num2;

    printf("숫자1 : ");
    scanf("%d",&num1);
    printf("숫자2 : ");
    scanf("%d",&num2);

    printf("바꾸기 전\n");
    printf("숫자1 : %d, 숫자2 : %d",num1,num2);

    int tmp=*pn1;
    *pn1=*pn2;
    *pn2=tmp;

    printf("\n바꾼 후\n");
    printf("숫자1 : %d, 숫자2 : %d\n",num1,num2);

    return 0;
}