#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str = calloc(sizeof(char)*20,3);
    int i;
    for(i=0;i<3;i++)
    {
        printf("%d번째 문자열 입력 : ",i+1);
        fgets(&str[i],20,stdin);
    }
    for(i=0;i<3;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}