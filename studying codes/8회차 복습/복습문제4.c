#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[20] = "Your name is ";
    char str2[20];

    do
    {
        fflush(stdin);
        printf("이름을 입력하세요 : ");
        gets(str2);
    } 
    while (20-strlen(str1)<strlen(str2));
    
    strcat(str1,str2);
    puts(str1);
    return 0;
}