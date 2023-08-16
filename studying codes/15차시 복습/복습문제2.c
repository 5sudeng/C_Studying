#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("mystory.txt","rt");
    char ch[100];
    int i;
    for(i=0;i<5;i++)
    {
        fgets(ch,sizeof(ch),fp);
        printf("%s",ch);
    }
    fclose(fp);
    return 0;
}