#include <stdio.h>

int ReadString(char str[]);
int PrintString(char str[]);

int main(void)
{
    char str[30];
    int len;

    printf("문자열 입력 : ");
    len = ReadString(str);
    printf("입력된 문자열 길이 %d\n",len);
    
    printf("입력된 문자열 : ");
    len = PrintString(str);
    printf("\n");
    printf("출력된 문자열 길이 %d\n",len);
    return 0;
}

int ReadString(char str[])
{
    int i,cnt;
    while(str[i])
    {
        if(str[i]==" ")
            cnt++;
    }
    return cnt+1;
}
int PrintString(char str[])
{
    return 0;
}