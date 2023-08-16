#include <stdio.h>
#include <math.h>
int main(void)
{
    int x1,x2,y1,y2;
    printf("첫 번째 점의 좌표 입력 : ");
    scanf("%d,%d",&x1,&y1);
    printf("두 번째 점의 좌표 입력 : ");
    scanf("%d,%d",&x2,&y2);
    printf("두 점 사이의 거리 : ");
    double dis=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
    printf("%.2lf\n",dis);
    return 0;
}