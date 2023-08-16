#include <stdio.h>
#include <string.h>

int main(void)
{
    char *mail[]={"EFE@naver.com","ABA@hanmail.net","LEE12@hanmail.net","UCC@gmail.com"};
    int cnt=0,i;
    for(i=0;i<4;i++)
    {
        if(strstr(mail[i],"hanmail.net")!=NULL)
            cnt++;
    }
    printf("%d명이 hanmail.net을 사용합니다.\n",cnt);
    return 0;
}