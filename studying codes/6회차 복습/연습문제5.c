#include <stdio.h>

int main(void)
{
    char word[100];
    printf("영단어 입력 : ");
    scanf("%s",word);
    char maxi=65;
    int len=0,i;
    while(word[len]!='\0')
        len++;
    for(i=0;i<len;i++)  
    {
        if(maxi<word[i])
            maxi=word[i];
    }
    printf("가장 큰 아스키 코드 값의 문자 : %c\n",maxi);
    return 0;
}