#include <stdio.h>

int main(void)
{
    char ch1[20];
    char ch2;
    int num;

    scanf("%s",ch1);
    fflush(stdin); //왜.....
    ch2=getchar();
    scanf("%d",&num);
    printf("문자열 : %s, 문자 : %c, 정수 : %d\n", ch1, ch2, num);

    return 0;
}