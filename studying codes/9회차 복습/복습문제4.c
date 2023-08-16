#include <stdio.h>

int main(void)
{
    int numbers[45];
    int *ptr[45];
    int i;
    for(i=0;i<45;i++)
    {
        numbers[i]=i+1;
        *ptr[i]=&numbers[i];
        printf("%d %p",numbers[i],&ptr[i]);
    }
    return 0;
}