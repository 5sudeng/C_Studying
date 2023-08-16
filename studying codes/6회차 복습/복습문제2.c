#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int arr[8][10],total=0,i,j;
    for(i=0;i<8;i++) //랜덤 정수값 생성
    {
        for(j=0;j<10;j++)
        {
            arr[i][j]=rand()%91+10; 
            total += arr[i][j];
        }
    }
    for(i=0;i<8;i++) //표 형식 출력
    {
        for(j=0;j<10;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int min=100,max=0,l,m;
    for(l=0;l<8;l++)
    {
        for(m=0;m<10;m++)
        {
            if(arr[l][m]<min) //최솟값
                min=arr[l][m];
            if(arr[l][m]>max) //최댓값
                max=arr[l][m];
        }
    }
    double avg=total/80.0;
    printf("가장 작은 값 : %d\n",min);
    printf("가장 큰 값 : %d\n",max);
    printf("평균 : %.2lf\n",avg);
    return 0;
}