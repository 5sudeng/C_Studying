#include <stdio.h>

int main(void)
{
    char a[];
    printf("영단어 입력: ");
    scanf("%s",a);
    printf("입력한 영단어의 길이는 %d",sizeof(a)-1);
    return 0;
}