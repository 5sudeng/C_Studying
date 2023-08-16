#include <stdio.h>

void back_output(void);

int main(void)
{
    char a[100];
    printf("문자열을 입력하세요 : "); 
    back_output();
    printf("\n");
    return 0;
}

void back_output(void)
{
    char ch;
    if ((ch=getchar())!='\n')
        back_output();
    putchar(ch);
}