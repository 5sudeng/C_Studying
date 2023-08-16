#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20] = "Your name is ";
    char str2[20];
    printf("이름을 입력하세요 : ");
    gets(str2);
    int len,i;
    char str3[20];
    if(20<strlen(str1)+strlen(str2))
    {
        len=20-strlen(str1);
        for(i=0;i<len;i++)
            str3[i]=str2[i];
        strcat(str1,str3);
    }
    else
        strcat(str1,str2);
    puts(str1);
    return 0;
}