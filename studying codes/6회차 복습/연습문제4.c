#include <stdio.h>

int main(void)
{
    char word[100];
    int len=0,i;
    char temp;
    printf("영단어 입력 : ");
    scanf("%s",word);
    while (word[len]!='\0')
        len++;
    for(i=0;i<len/2;i++)
    {
        temp=word[i];
        word[i]=word[len-i-1];
        word[len-i-1]=temp;
    }
    printf("뒤집힌 영단어 : %s\n",word);
    return 0;
}