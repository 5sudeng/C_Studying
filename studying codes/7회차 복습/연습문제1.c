#include <stdio.h>

int main(void)
{
    char str1[] = "ORANGE";
    char str2[] = "BANANA";
    printf("Before !");
    printf("\nstr1 : %s",str1);
    printf("\nstr2 : %s\n",str2);
    int i;
    char tmpt;
    for(i=0;i<6;i++)
    {
        tmpt = str1[i];
        str1[i]=str2[i];
        str2[i] = tmpt;
    }
    printf("\nAfter !");
    printf("\nstr1 : %s",str1);
    printf("\nstr2 : %s\n",str2);
    return 0;
}