#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int numbers[45];
    int i;

    for(i=0;i<45;i++)
        numbers[i]=i+1;

    int *pick[6]={0};

    int index[6];

    srand(time(NULL));
    for(i=0;i<6;i++)
    {
        index[i]=rand()%45+1;
        pick[i]=&numbers[index[i]];
        printf("%d ",*pick[i]);
    }
    puts("");
  
    return 0;
}