#include <stdio.h>

int WordCopy(char src[],char dest[]);

int main(void)
{
    char word1[20] = "Orange";
    char word2[20] = "Programming";
    char buf1[20];
    char buf2[20];

    WordCopy(word1,buf1);
    WordCopy(word2,buf2);

    printf("복사본 1 : %s\n",buf1);
    printf("복사본 2 : %s\n",buf2);
    return 0;
}

int WordCopy(char src[],char dest[])
{
    int i=0;
    while(src[i]!=0)
        dest[i]=src[i];
}