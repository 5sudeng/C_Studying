#include <stdio.h>

int WordLen(char str[]);

int main(void)
{
    char wordBuf[100];
    printf("단어 입력 : ");
    scanf("%s", wordBuf);
    printf("입력된 단어의 길이 : %d \n",WordLen(wordBuf));
    return 0;
}

int WordLen(char str[])
{
    int len=0;
    while(str[len]!=0)
        len++;
    return len;
}