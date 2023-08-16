#include <stdio.h>

int ConvToInt(int ch);

int main(void)
{
    char a = '7';
    printf("%d\n",ConvToInt(a));
    return 0;
}

int ConvToInt(int ch)
{
    return ch-48;
}