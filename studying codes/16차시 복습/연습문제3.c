#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int len;
    printf("문자열의 최대길이 입력 : ");
    scanf("%d",&len);
    char *str = (char *)malloc(sizeof(char)*(len+1));

    printf("문자열 입력 : ");
    fgets(str,len+1,stdin);
    str[strlen(str)-1] = 0;
    int rlen = strlen(str);
    int i;
    for(i=rlen;i>0;i--)
    {
        if(str[i] == ' ')
        {
            printf("%s ",&str[i+1]);
            str[i] = 0;
        }
    }
    printf("%s ",&str[0]);
    free(str);
    return 0;
}