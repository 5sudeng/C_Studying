#include <stdio.h>

int main(void)
{
    int dan,i;
    for(i=1;i<9;i++)
    {
        for(dan=2;dan<9;dan+=2)
        {
            if(dan<i)
            {
                printf("             ");
                continue;
            }
            else
                printf("%-2dx%2d = %2d   ",dan,i,dan*i);
        }
        printf("\n");
    }
    return 0;
}

