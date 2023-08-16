#include <stdio.h>
#include <string.h>

int main(void)
{
    FILE *fp = fopen("mystory.txt","rt");
    char ch1[50];
    char ch2[100];
    int i;
    scanf("%s",ch1);
    for(i=0;i<5;i++)
    {
        fgets(ch2,sizeof(ch2),fp);
        if(strstr(ch2,ch1)!=NULL)
            printf("%s",ch2);
    }
    fclose(fp);
    return 0;
}