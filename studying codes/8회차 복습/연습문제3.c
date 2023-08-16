#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char *str="He Is My Best Friend!";
    int cnt=0;
    while(*str!='\n')
    {
        if(isupper(*str)!=0)
            cnt++;
        str++;
    }
    printf("대문자 개수 : %d\n",cnt);
    return 0;
}