#include <stdio.h>

int main(void)
{
    char a[100];
    int len=0;
    printf("영단어 입력: ");
    scanf("%s",a);
    while(a[len]!=0)
        len++;
    printf("입력한 영단어의 길이는 %d\n",len);
    return 0;
}