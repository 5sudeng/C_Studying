#include <stdio.h>

int main(void)
{
    char str[30]="Orange Media";
    char *ptr=str;
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
    puts("");
    int i=0;
    while(*(str+i)!='\0')
    {
        printf("%c",*(str+i)); 
        i++;       
    }
    puts("");
    return 0;
}