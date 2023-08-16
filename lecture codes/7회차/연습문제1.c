#include <stdio.h>

int main(void)
{
    char str1[]="ORANGE";
    char str2[]="BANANA";
    int i;
    char ch;
    for(i=0;i<6;i++)
    {
        ch=str1[i];
        str1[i]=str2[i];
        str2[i]=ch;
    }
    printf("str1: %s\nstr2: %s\n",str1,str2);
    return 0;
}