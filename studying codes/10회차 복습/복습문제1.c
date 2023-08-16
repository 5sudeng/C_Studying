#include <stdio.h>
#include <stdlib.h>
#define RND_MAX 100
#define RND_MIN 10

int main(void)
{
    int i;
    unsigned seed;
    int rand10100;
    int diff = RND_MAX- RND_MIN;

    printf("씨드 입력 : ");
    scanf("%u",&seed);
    srand(seed);
    printf("씨드 %u의 열매 : ",seed);

    for(i=0;i<7;i++)
    {
        rand10100 = (rand()/(double)RAND_MAX)*diff+RND_MIN;
        printf("%d ",rand10100);
    }
    puts("");
    return 0;
}