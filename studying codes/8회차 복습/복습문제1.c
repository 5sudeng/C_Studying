#include <stdio.h>
#include <ctype.h>

void isalnumA(int ch);
void isalnumB(int ch);

int main(void)
{
    char str;
    printf("문자를 입력하세요 : ");
    scanf("%c",&str);
    isalnumA(str);
    isalnumB(str);
    if(isalnum(str)==0)
        printf("isalnum결과 : 전달된 문자가 알파벳이거나 숫자가 아닙니다.\n");
    else
        printf("isalnum결과 : 전달된 문자가 알파벳이거나 숫자입니다.\n");
    return 0;
}

void isalnumA(int ch)
{
    if(isdigit(ch)!=0||isalpha(ch)!=0)
        printf("isalnumA결과 : 전달된 문자가 알파벳이거나 숫자입니다.\n");
    else
        printf("isalnumA결과 : 전달된 문자가 알파벳이거나 숫자가 아닙니다.\n");
}

void isalnumB(int ch)
{
    if(('A'<=ch && 'z'>=ch) || ('0'<=ch && ch<'10'))//한자리숫자...
        printf("isalnumB결과 : 전달된 문자가 알파벳이거나 숫자입니다.\n");
    else
        printf("isalnumB결과 : 전달된 문자가 알파벳이거나 숫자가 아닙니다.\n");
}