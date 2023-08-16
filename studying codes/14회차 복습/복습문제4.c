#include <stdio.h>

struct __inf
{
    int snum[10];
    float height[10];
    float weight[10];
};

typedef struct __inf inf;

int main(void)
{
    int N;
    inf sinf;
    printf("학생 수 입력(최대 10) : ");
    scanf("%d",&N);
    float theight=0,tweight=0;
    int i;
    for(i=0;i<N;i++)
    {
        printf("학번, 키, 몸무게 입력 : ");
        scanf("%d %f %f",&sinf.snum[i],&sinf.height[i],&sinf.weight[i]);
        theight += sinf.height[i];
        tweight += sinf.weight[i];
    }
    float aheight = theight / N;
    float aweight = tweight / N;
    printf("\n%.1f %.1f\n",aheight,aweight);
    for(i=0;i<N;i++)
    {
        if(sinf.height[i]>=aheight&&sinf.weight[i]>=aweight)
            printf("%d %s\n",sinf.snum[i],"super");
        else if(sinf.height[i]<aheight&&sinf.weight[i]<aweight)
            printf("%d %s\n",sinf.snum[i],"below");
        else
            printf("%d %s\n",sinf.snum[i],"average");
    }
    return 0;
}