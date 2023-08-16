#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch[] = "It is possible to master C in a month or two";
    char *chTmpt1,*chTmpt2;
    chTmpt1=strchr(ch,'i');
    chTmpt2=strrchr(ch,'i');

    int len = strlen(chTmpt1)-strlen(chTmpt2);

    int i;
    for(i=1;i<len;i++)
        printf("%c",chTmpt1[i]);
    printf("\n");
    return 0;
}