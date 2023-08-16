#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SicBo(int randNum1, int randNum2, int randNum3);

int main(void)
{
    srand(time(NULL));
    int num1= rand()%6+1;
    int num2= rand()%6+1;
    int num3= rand()%6+1;
    SicBo(num1,num2,num3);
    return 0;
}

int SicBo(int randNum1, int randNum2, int randNum3)
{
    printf("Result: %d %d %d\n",randNum1, randNum2, randNum3);
    if (randNum1 == randNum2 == randNum1) printf("TRIPLE!\n");
    else if (3<=randNum1+randNum2+randNum3 && randNum1+randNum2+randNum3<=10) printf("SMALL!\n");
    else if (11<=randNum1+randNum2+randNum3 && randNum1+randNum2+randNum3<=17) printf("BIG!\n");
    return 0;
}