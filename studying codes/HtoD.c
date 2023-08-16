#include <stdio.h>

int main(void)
{
    int x = getchar();
    x = x<=10 ? x%16 : (x-55)%16;
    int y = getchar();
    y = y<=10 ? y%16 : (y-55)%16;

    int z = (16 * x + y);
    
    putchar((((z/10)/10)%10)+48);
    putchar(((z/10)%10)+48);
    putchar((z%10)+48);


    return 0;
}