#include <stdio.h>

int main(void)
{
    double velo[100], dis[100], oil[100], effi[100];
    int i=0,j;
    double max=0;
    int maxp=0;
    while(1)
    {
        printf("속도(km/h), 이동거리(km), 오일 사용량(L) 입력 : ");
        scanf("%lf",&velo[i]);
        if(velo[i]==-1)
        {
            for(j=0;j<i;j++)
            {
                if(max<effi[j])
                    maxp=j;
                    max=effi[j];
            }
            break;
        }
        scanf("%lf %lf",&dis[i],&oil[i]);
        effi[i]=dis[i]/oil[i];
        i++;
    }
    printf("최고의 연비는 %.1lfkm/h에서 나옵니다.\n",velo[maxp]);
    return 0;
}
//80.1 650.6 60.24
//70.5 315.2 13.71
//90.4 186.0 18.01