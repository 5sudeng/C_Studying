#include <stdio.h>

int main(void)
{
    char word[100];
    printf("영단어 입력 : ");
    scanf("%s",word);
    int len=0;
    while(word[len]!='\0')
    {
        if(word[len]<97)
            word[len]=word[len]+32;
        else 
            word[len]=word[len]-32;
        len++;
    }
    printf("영단어 출력 : %s\n",word);
    return 0;
}