#include <stdio.h>

char *AddString(char *str1, char *str2);

int main(void)
{
    char *str1 = "A broken hand works, ";
    char *str2 = "but not a broken heart. ";
    char *addStr = AddString(str1,str2);

    printf("%s + %s\n", str1, str2);
    printf("= %s\n",addStr);

    return 0;
}

char *AddString(char *str1, char *str2)
{
    char *str3 = (char *)malloc(sizeof(str1)+sizeof(str2));
    str3;
    return str3;
}