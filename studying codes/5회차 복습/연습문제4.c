#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RollDie(void);

int main(void)
{
    srand(time(NULL));
    printf("Roll a die : %d\n",RollDie());
    printf("Roll a die : %d\n",RollDie());
    printf("Roll a die : %d\n",RollDie());
    printf("Roll a die : %d\n",RollDie());
    printf("Roll a die : %d\n",RollDie());
    printf("Roll a die : %d\n",RollDie());
    return 0;
}

int RollDie(void)
{
    return rand()%6+1;
}
//srand가 꼭 메인함수에 있어야 하나..?