#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RollDie(void)
{
    srand(time(NULL));
    return rand()%6+1;
}

int main(void)
{
    printf("%d\n", RollDie());
    return 0;
}